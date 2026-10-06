#pragma once



// Package: BPVE_FightingCapacity

#include "Basic.hpp"

#include "NeoUI_classes.hpp"
#include "Engine_structs.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPVE_FightingCapacity.BPVE_FightingCapacity_C
// 0x0038 (0x0310 - 0x02D8)
class UBPVE_FightingCapacity_C final : public UNeoUIVisualElementBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02D8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UJHGPCBtn_C*                            BTN_FightCapacity;                                 // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIImageBase*                        IMG_Main;                                          // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UJHGPCBtn_ActiveBG_C*                   JHGPCBtn_ActiveBG;                                 // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUICanvasPanelBase*                  NeoUICanvasPanelBase_0;                            // 0x02F8(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUITextBlockBase*                    TXT_Strength_Content;                              // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         fcIndex;                                           // 0x0308(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BPVE_FightingCapacity(int32 EntryPoint);
	void EVT_GamepadShowTips(int32 intflag, const class FString& strFlag);
	void Construct();
	void SetFCIndex(int32 III);
	class UWidget* GetToolTipWidget_0();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPVE_FightingCapacity_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPVE_FightingCapacity_C")
	}
	static class UBPVE_FightingCapacity_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPVE_FightingCapacity_C>();
	}
};
DUMPER7_ASSERTS_UBPVE_FightingCapacity_C;

SDK_NAMESPACE_END
