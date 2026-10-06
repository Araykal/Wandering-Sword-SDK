#pragma once



// Package: BPMV_SkillCore

#include "Basic.hpp"

#include "NeoUI_structs.hpp"
#include "Engine_structs.hpp"
#include "JH_classes.hpp"
#include "SlateCore_structs.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPMV_SkillCore.BPMV_SkillCore_C
// 0x0070 (0x0410 - 0x03A0)
class UBPMV_SkillCore_C final : public UJHNeoUISkillCoreView
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UJHCommon_Btn_Free_C*                   BTN_MaxUpgrading;                                  // 0x03A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UJHCommon_Btn_Free_C*                   BTN_WriteSkillBook;                                // 0x03B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_GAADisplay_C*                       GAA_Bottom;                                        // 0x03B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_GAADisplay_C*                       GAA_Top;                                           // 0x03C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIImageBase*                        IMG_GamepadKeyTip_X;                               // 0x03C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIImageBase*                        IMG_Title1;                                        // 0x03D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIImageBase*                        IMG_Title2;                                        // 0x03D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIImageBase*                        NeoUIImageBase_45;                                 // 0x03E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUITextBlockBase*                    TXT_SkillPoint;                                    // 0x03E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBPVE_SkillCoreCell_Equiped_C*          VE_EquipedItem;                                    // 0x03F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBPVE_SkillCoreCell_Equiped_C*          VE_EquipedItem_1;                                  // 0x03F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBPVE_SkillCoreCell_Equiped_C*          VE_EquipedItem_2;                                  // 0x0400(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBPVE_SkillCoreCell_Equiped_C*          VE_EquipedItem_3;                                  // 0x0408(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BPMV_SkillCore(int32 EntryPoint);
	void BndEvt__BPMV_SkillCore_Btn_SlotPrevious_K2Node_ComponentBoundEvent_3_BtnClick__DelegateSignature();
	void BndEvt__BPMV_SkillCore_Btn_SlotNext_K2Node_ComponentBoundEvent_2_BtnClick__DelegateSignature();
	void EVT_VisualShow();
	void EVT_SyncWithGlobalInputMode();
	void BndEvt__BPMV_SkillCore_BTN_MaxUpgrading_K2Node_ComponentBoundEvent_1_BtnClick__DelegateSignature();
	void EVT_FocusSPNoteBtn();
	void BndEvt__BPMV_SkillCore_BTN_WriteSkillBook_K2Node_ComponentBoundEvent_0_BtnClick__DelegateSignature();
	void EVT_FocusWidgetForScenario(ENeoUIFocusWidgetScenario scenario, const struct FNeoUIFocusWidgetParam& Param);
	void EVT_AppendActiveAreaArr();
	void EVT_RenderView();
	void EVT_SetupHierarchy();
	class UWidget* FocusWidgetForScenario_Direct(ENeoUIFocusWidgetScenario scenario, const struct FNeoUIFocusWidgetParam& Param);
	void FindFirstVisibleEquiped(class UBPVE_SkillCoreCell_Equiped_C** Ele);
	class UWidget* Navi_GridFirst(EUINavigation Navigation_0);
	class UWidget* Navi_GridSecond(EUINavigation Navigation_0);
	class UWidget* Navi_GridThird(EUINavigation Navigation_0);
	class UWidget* Navi_Gridfourth(EUINavigation Navigation_0);
	class UWidget* EdgeAscending(EUINavigation Navigation_0);
	class UWidget* EdgeDescending(EUINavigation Navigation_0);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPMV_SkillCore_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPMV_SkillCore_C")
	}
	static class UBPMV_SkillCore_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPMV_SkillCore_C>();
	}
};
DUMPER7_ASSERTS_UBPMV_SkillCore_C;

SDK_NAMESPACE_END
