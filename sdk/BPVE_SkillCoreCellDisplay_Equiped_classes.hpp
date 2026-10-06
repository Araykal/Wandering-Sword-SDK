#pragma once



// Package: BPVE_SkillCoreCellDisplay_Equiped

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPVE_SkillCoreCellDisplay_Equiped.BPVE_SkillCoreCellDisplay_Equiped_C
// 0x0040 (0x0338 - 0x02F8)
class UBPVE_SkillCoreCellDisplay_Equiped_C final : public UJHNeoUISkillCoreDisplay
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02F8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNeoUIBorderBase*                       BTN_Main;                                          // 0x0300(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UJHGPCBtn_C*                            BTN_SkillCoreCell_Equiped;                         // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_0;                                           // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIImageBase*                        IMG_BG;                                            // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIImageBase*                        IMG_BG_1;                                          // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIImageBase*                        IMG_IconBG_1;                                      // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UJHGPCBtn_ActiveBG_C*                   JHGPCBtn_ActiveBG;                                 // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BPVE_SkillCoreCellDisplay_Equiped(int32 EntryPoint);
	void BndEvt__BPVE_SkillCoreCellDisplay_Equiped_BTN_SkillCoreCell_Equiped_K2Node_ComponentBoundEvent_1_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature(class UJHNeoUIGamepadConfirmButton* Btn);
	void BndEvt__BPVE_SkillCoreCellDisplay_Equiped_BTN_Upgrade_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void OnMouseLeave(const struct FPointerEvent& MouseEvent);
	void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	struct FEventReply On_BTN_MAIN_MouseButtonDown_0(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	struct FEventReply On_BTN_MAIN_MouseDoubleClick_0(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPVE_SkillCoreCellDisplay_Equiped_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPVE_SkillCoreCellDisplay_Equiped_C")
	}
	static class UBPVE_SkillCoreCellDisplay_Equiped_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPVE_SkillCoreCellDisplay_Equiped_C>();
	}
};
DUMPER7_ASSERTS_UBPVE_SkillCoreCellDisplay_Equiped_C;

SDK_NAMESPACE_END
