#pragma once



// Package: BPVE_PropertyBasicIconSmall

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPVE_PropertyBasicIconSmall.BPVE_PropertyBasicIconSmall_C
// 0x0048 (0x04A8 - 0x0460)
class UBPVE_PropertyBasicIconSmall_C final : public UTeam_BasicBattlePropertyLine
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0460(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UJHGPCBtn_C*                            BTN_PropertyBasicIconSmall;                        // 0x0468(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UJHGPCBtn_ActiveBG_C*                   JHGPCBtn_ActiveBG;                                 // 0x0470(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUICanvasPanelBase*                  NeoUICanvasPanelBase_0;                            // 0x0478(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIImageBase*                        NeoUIImageBase_106;                                // 0x0480(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   DebugText;                                         // 0x0488(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         DebugINT;                                          // 0x04A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BPVE_PropertyBasicIconSmall(int32 EntryPoint);
	void EVT_GamepadShowTips(int32 intflag, const class FString& strFlag);
	void Construct();
	class UWidget* GetToolTipWidget_0();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPVE_PropertyBasicIconSmall_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPVE_PropertyBasicIconSmall_C")
	}
	static class UBPVE_PropertyBasicIconSmall_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPVE_PropertyBasicIconSmall_C>();
	}
};
DUMPER7_ASSERTS_UBPVE_PropertyBasicIconSmall_C;

SDK_NAMESPACE_END
