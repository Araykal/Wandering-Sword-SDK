#include <Windows.h>
#include <mutex>
#include <deque>
#include <string>
#include <cwctype>
#include <unordered_map>
#include <atomic>
#include <vector>
#include <algorithm>
#include "MinHook.h"
#include "Basic.hpp"
#include "JH_classes.hpp"
#include "JH_functions.cpp"
#include "CoreUObject_functions.cpp"
#include "Engine_functions.cpp"
#include "Basic.cpp"
using namespace SDK;

struct Req {
    std::wstring name;
    int count;
    int next_id;
};

static std::mutex mu;
static std::deque<Req> queue;
static std::atomic<bool> damage999{false};
static DWORD tick_tid = 0;
static thread_local bool in_pump = false;
static std::unordered_map<std::wstring, int> known_ids;
static std::vector<std::pair<int, std::wstring> > catalog;
static int scan_id = 1;
static bool catalog_done = false;
using PE = void(__fastcall*)(UObject *, UFunction *, void *);
static PE original = nullptr;

static void logx(const std::string &s) {
    HANDLE h = CreateFileA("F:\\rs\\Wandering-Sword-Test\\logs\\runtime_logic.log", FILE_APPEND_DATA,
                           FILE_SHARE_READ | FILE_SHARE_WRITE, nullptr, OPEN_ALWAYS, FILE_ATTRIBUTE_NORMAL, nullptr);
    if (h != INVALID_HANDLE_VALUE) {
        DWORD n;
        WriteFile(h, s.data(), (DWORD) s.size(), &n, nullptr);
        CloseHandle(h);
    }
}

static std::wstring norm(std::wstring s) {
    size_t a = 0, b = s.size();
    while (a < b && iswspace(s[a]))a++;
    while (b > a && iswspace(s[b - 1]))b--;
    s = s.substr(a, b - a);
    for (auto &c: s)c = towlower(c);
    return s;
}

static void scan_catalog() {
    if (catalog_done)return;
    for (int n = 0; n < 2000 && scan_id < 200000; n++, scan_id++) {
        auto t = UItemFuncLib::GetItemName(scan_id);
        if (!t.TextData)continue;
        auto name = t.GetStringRef().ToWString();
        if (name.empty() || name.size() > 100)continue;
        auto key = norm(name);
        if (key.empty())continue;
        std::lock_guard<std::mutex> l(mu);
        catalog.push_back({scan_id, name});
        known_ids.emplace(key, scan_id);
    }
    if (scan_id >= 200000) {
        catalog_done = true;
        logx("catalog scan complete count=" + std::to_string(catalog.size()) + "\n");
    }
}

static void pump() {
    if (in_pump)return;
    in_pump = true;
    scan_catalog();
    Req r;
    bool have = false;
    {
        std::lock_guard<std::mutex> l(mu);
        if (!queue.empty()) {
            r = std::move(queue.front());
            queue.pop_front();
            have = true;
        }
    }
    if (have) {
        int matched = 0;
        auto key = norm(r.name);
        {
            std::lock_guard<std::mutex> l(mu);
            auto it = known_ids.find(key);
            if (it != known_ids.end())matched = it->second;
        }
        if (!matched && key == std::wstring({wchar_t(0x771F), wchar_t(0x6B66), wchar_t(0x5251)}))matched = 1067;
        if (!matched) {
            for (int n = 0; n < 350 && r.next_id < 200000; n++, r.next_id++) {
                auto t = UItemFuncLib::GetItemName(r.next_id);
                if (t.TextData && norm(t.GetStringRef().ToWString()) == key) {
                    matched = r.next_id;
                    std::lock_guard<std::mutex> l(mu);
                    known_ids[key] = matched;
                    break;
                }
            }
        }
        if (matched) {
            int before = UItemFuncLib::GetItemNum(matched);
            auto mgr = UManagerFuncLib::GetItemManager();
            auto spec = mgr ? mgr->AddItem(matched, r.count, EItemRandPoolType::Normal, false) : nullptr;
            int after = UItemFuncLib::GetItemNum(matched);
            logx("item name matched id=" + std::to_string(matched) + " before=" + std::to_string(before) + " after=" +
                 std::to_string(after) + " manager=" + std::to_string((uintptr_t) mgr) + " spec=" +
                 std::to_string((uintptr_t) spec) + "\n");
        } else if (r.next_id < 200000) {
            std::lock_guard<std::mutex> l(mu);
            queue.push_front(std::move(r));
        } else logx("item name not found\n");
    }
    in_pump = false;
}

static void __fastcall hooked(UObject *o, UFunction *f, void *p) {
    if (f) {
        auto fn = f->GetName();
        if (damage999.load() && o && o->Class && o->Class->GetName().find("ExecutionPhase_Damage") !=
            std::string::npos) {
            *reinterpret_cast<float *>(reinterpret_cast<uintptr_t>(o) + 0x28) = 999999.0f;
            logx("damage phase override\n");
        }
        if (damage999.load() && p && fn.find("Damage") != std::string::npos) {
            *reinterpret_cast<float *>(p) = 999999.0f;
            logx("damage param override " + fn + "\n");
        }
        if (fn == "ReceiveTick") {
            DWORD tid = GetCurrentThreadId();
            if (!tick_tid)tick_tid = tid;
            if (tid == tick_tid)pump();
        }
    }
    original(o, f, p);
}

static DWORD WINAPI init(LPVOID) {
    Sleep(1000);
    auto target = (void *) ((uintptr_t) GetModuleHandleA(nullptr) + 0x179A420);
    if (MH_Initialize() != MH_OK) {
        return 1;
    }
    if (MH_CreateHook(target, (void *) hooked, (void **) &original) != MH_OK) {
        return 2;
    }
    if (MH_EnableHook(target) != MH_OK) {
        return 3;
    }
    logx("installed\n");
    return 0;
}

extern "C" __declspec(dllexport) int wh_native_add_item(const wchar_t *n, int c) {
    if (!n || c <= 0)return -1;
    {
        std::lock_guard<std::mutex> l(mu);
        queue.push_back({n, c, 1});
    }
    logx("item queued\n");
    return 1;
}

extern "C" __declspec(dllexport) int wh_native_search_items(const wchar_t *query, wchar_t *out, int cap) {
    if (!out || cap < 2)return -1;
    out[0] = 0;
    auto key = norm(query ? query : L"");
    if (key.empty())return 0;
    int used = 0, hits = 0;
    std::lock_guard<std::mutex> l(mu);
    for (const auto &item: catalog) {
        if (norm(item.second).find(key) == std::wstring::npos)continue;
        auto line = std::to_wstring(item.first) + L"\t" + item.second + L"\n";
        if (used + (int) line.size() >= cap)break;
        memcpy(out + used, line.data(), line.size() * sizeof(wchar_t));
        used += (int) line.size();
        hits++;
        if (hits >= 40)break;
    }
    out[used] = 0;
    return hits;
}

extern "C" __declspec(dllexport) int wh_native_catalog_progress() {
    std::lock_guard<std::mutex> l(mu);
    return scan_id;
}

extern "C" __declspec(dllexport) int wh_native_pump_game_thread() { return -3; }
extern "C" __declspec(dllexport) int wh_native_set_resources(int) { return -3; }

extern "C" __declspec(dllexport) int wh_native_set_damage999(int e) {
    damage999.store(e != 0);
    logx(e ? "damage999 eb\n" : "damage999 ds\n");
    return 0;
}

BOOL APIENTRY DllMain(HMODULE h, DWORD r, LPVOID) {
    if (r == DLL_PROCESS_ATTACH) {
        DisableThreadLibraryCalls(h);
        CreateThread(nullptr, 0, init, nullptr, 0, nullptr);
    }
    return TRUE;
}
