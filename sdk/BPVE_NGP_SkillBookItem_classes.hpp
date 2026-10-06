#pragma once



// Package: BPVE_NGP_SkillBookItem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_classes.hpp"
#include "SlateCore_structs.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPVE_NGP_SkillBookItem.BPVE_NGP_SkillBookItem_C
// 0x0020 (0x0338 - 0x0318)
class UBPVE_NGP_SkillBookItem_C final : public UJHNeoUINGP_SkillItem
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0318(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UJHGPCBtn_C*                            BTN_NGP_Skill;                                     // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIImageBase*                        IMG_IconBG;                                        // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UJHGPCBtn_ActiveBG_C*                   JHGPCBtn_ActiveBG;                                 // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BPVE_NGP_SkillBookItem(int32 EntryPoint);
	void EVT_GamepadShowTips(int32 intflag, const class FString& strFlag);
	void BndEvt__BPVE_NGP_SkillItem_JHGPCBtn_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature(class UJHNeoUIGamepadConfirmButton* Btn);
	void Construct();
	class UWidget* GetToolTipWidget_0();
	class UWidget* Navi_SkillItemDown(EUINavigation Navigation_0);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPVE_NGP_SkillBookItem_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPVE_NGP_SkillBookItem_C")
	}
	static class UBPVE_NGP_SkillBookItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPVE_NGP_SkillBookItem_C>();
	}
};
DUMPER7_ASSERTS_UBPVE_NGP_SkillBookItem_C;

SDK_NAMESPACE_END
