use std::{
    ffi::CString,
    fs::{OpenOptions, create_dir_all},
    io::Write,
    path::PathBuf,
    thread,
    time::Duration,
};
use windows_sys::Win32::{
    Foundation::*,
    System::{
        Diagnostics::{Debug::*, ToolHelp::*},
        LibraryLoader::*,
        Memory::*,
        Threading::*,
    },
};
/*fn log(msg: &str) {
    let dir = PathBuf::from("F:\\rs\\Wandering-Sword-Test\\logs");
    let _ = create_dir_all(&dir);
    if let Ok(mut f) = OpenOptions::new()
        .create(true)
        .append(true)
        .open(dir.join("injector.log"))
    {
        let _ = writeln!(f, "{} {}", chrono_stub(), msg);
    }
}
fn chrono_stub() -> String {
    format!("{:?}", std::time::SystemTime::now())
}*/
fn find_pid(name: &str) -> Option<u32> {
    unsafe {
        let s = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
        if s == INVALID_HANDLE_VALUE {
            return None;
        }
        let mut e = PROCESSENTRY32W {
            dwSize: std::mem::size_of::<PROCESSENTRY32W>() as u32,
            ..std::mem::zeroed()
        };
        let mut out = None;
        if Process32FirstW(s, &mut e) != 0 {
            loop {
                let n = String::from_utf16_lossy(&e.szExeFile);
                if n.trim_end_matches('\0').eq_ignore_ascii_case(name) {
                    out = Some(e.th32ProcessID);
                    break;
                }
                if Process32NextW(s, &mut e) == 0 {
                    break;
                }
            }
        }
        CloseHandle(s);
        out
    }
}
fn inject(pid: u32, dll: &str) -> Result<(), String> {
    unsafe {
        let h = OpenProcess(
            PROCESS_CREATE_THREAD
                | PROCESS_QUERY_INFORMATION
                | PROCESS_VM_OPERATION
                | PROCESS_VM_WRITE
                | PROCESS_VM_READ,
            0,
            pid,
        );
        if h.is_null() {
            return Err("OpenProcess failed".into());
        }
        let c = CString::new(dll).map_err(|e| e.to_string())?;
        let mem = VirtualAllocEx(
            h,
            std::ptr::null(),
            c.as_bytes_with_nul().len(),
            MEM_COMMIT | MEM_RESERVE,
            PAGE_READWRITE,
        );
        if mem.is_null() {
            CloseHandle(h);
            return Err("VirtualAllocEx failed".into());
        }
        let mut written = 0;
        if WriteProcessMemory(
            h,
            mem,
            c.as_ptr() as _,
            c.as_bytes_with_nul().len(),
            &mut written,
        ) == 0
        {
            return Err("WriteProcessMemory failed".into());
        }
        let k = GetModuleHandleA(b"kernel32.dll\0".as_ptr());
        let load = GetProcAddress(k, b"LoadLibraryA\0".as_ptr());
        let th = CreateRemoteThread(
            h,
            std::ptr::null(),
            0,
            std::mem::transmute(load),
            mem,
            0,
            std::ptr::null_mut(),
        );
        WaitForSingleObject(th, 10000);
        VirtualFreeEx(h, mem, 0, MEM_RELEASE);
        CloseHandle(th);
        CloseHandle(h);
        Ok(())
    }
}
fn main() {
    let args: Vec<String> = std::env::args().collect();
    let target = args
        .get(1)
        .cloned()
        .unwrap_or_else(|| "JH-Win64-Shipping.exe".into());
    let dll = args.get(2).cloned().unwrap_or_else(|| {
        std::env::current_exe().unwrap().with_file_name("wandering_hack.dll").to_string_lossy().into_owned()
    });
    let pid = find_pid(&target);
    let pid = match pid {
        Some(p) => p,
        None => loop {
            if let Some(p) = find_pid(&target) {
                break p;
            }
            thread::sleep(Duration::from_secs(1));
        },
    };
/*    match inject(pid, &dll) {
        Ok(_) => log("injection completed"),
        Err(e) => {
            log(&format!("injection failed: {}", e));
            return;
        }
    }*/
}