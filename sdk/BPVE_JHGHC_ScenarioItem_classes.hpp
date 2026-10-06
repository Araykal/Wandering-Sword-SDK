#pragma once



// Package: BPVE_JHGHC_ScenarioItem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPVE_JHGHC_ScenarioItem.BPVE_JHGHC_ScenarioItem_C
// 0x0028 (0x04A8 - 0x0480)
class UBPVE_JHGHC_ScenarioItem_C final : public UJHNeoUIGHC_Scenario_Item
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0480(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UJHGPCBtn_C*                            BTN_GHC_Scenario;                                  // 0x0488(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UJHGPCBtn_ActiveBG_C*                   JHGPCBtn_ActiveBG;                                 // 0x0490(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIImageBase*                        NeoUIImageBase_46;                                 // 0x0498(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIImageBase*                        NeoUIImageBase_95;                                 // 0x04A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BPVE_JHGHC_ScenarioItem(int32 EntryPoint);
	void BndEvt__BPVE_JHGHC_ScenarioItem_BTN_GHC_Scenario_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature(class UJHNeoUIGamepadConfirmButton* Btn);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPVE_JHGHC_ScenarioItem_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPVE_JHGHC_ScenarioItem_C")
	}
	static class UBPVE_JHGHC_ScenarioItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPVE_JHGHC_ScenarioItem_C>();
	}
};
DUMPER7_ASSERTS_UBPVE_JHGHC_ScenarioItem_C;

SDK_NAMESPACE_END
