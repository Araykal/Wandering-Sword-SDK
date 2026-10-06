#pragma once



// Package: BPVE_JHGHC_SkillItem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPVE_JHGHC_SkillItem.BPVE_JHGHC_SkillItem_C
// 0x0030 (0x03A0 - 0x0370)
class UBPVE_JHGHC_SkillItem_C final : public UJHNeoUIGHC_Skill_Item
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0370(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UJHGPCBtn_C*                            BTN_GHC_Skill;                                     // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIImageBase*                        IMG_IconBG;                                        // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIImageBase*                        IMG_InheritanceFlag;                               // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIImageBase*                        IMG_NPCOnly;                                       // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UJHGPCBtn_ActiveBG_C*                   JHGPCBtn_ActiveBG;                                 // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BPVE_JHGHC_SkillItem(int32 EntryPoint);
	void EVT_GamepadHideTips(int32 intflag, const class FString& strFlag);
	void EVT_GamepadShowTips(int32 intflag, const class FString& strFlag);
	void BndEvt__BPVE_JHGHC_SkillItem_BTN_GHC_Skill_K2Node_ComponentBoundEvent_2_JHNeoUIGamepadConfirmButtonMouseEvt__DelegateSignature(class UJHNeoUIGamepadConfirmButton* Btn);
	void BndEvt__BPVE_JHGHC_SkillItem_BTN_GHC_Skill_K2Node_ComponentBoundEvent_1_JHNeoUIGamepadConfirmButtonMouseEvt__DelegateSignature(class UJHNeoUIGamepadConfirmButton* Btn);
	void BndEvt__BPVE_JHGHC_ScenarioItem_BTN_GHC_Scenario_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature(class UJHNeoUIGamepadConfirmButton* Btn);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPVE_JHGHC_SkillItem_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPVE_JHGHC_SkillItem_C")
	}
	static class UBPVE_JHGHC_SkillItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPVE_JHGHC_SkillItem_C>();
	}
};
DUMPER7_ASSERTS_UBPVE_JHGHC_SkillItem_C;

SDK_NAMESPACE_END
