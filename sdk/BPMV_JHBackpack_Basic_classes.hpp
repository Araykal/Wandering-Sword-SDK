#pragma once



// Package: BPMV_JHBackpack_Basic

#include "Basic.hpp"

#include "NeoUI_structs.hpp"
#include "Engine_structs.hpp"
#include "JH_classes.hpp"
#include "SlateCore_structs.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPMV_JHBackpack_Basic.BPMV_JHBackpack_Basic_C
// 0x0040 (0x03C0 - 0x0380)
class UBPMV_JHBackpack_Basic_C final : public UJHBackpackViewBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0380(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UJHCommon_Btn_C*                        BTN_BackpackSort;                                  // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIOverlayBase*                      CT_SortBtn;                                        // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_134;                                         // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIButtonBase*                       NeoUIButtonBase_26;                                // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBPVE_Backpack_SortType_Btn_C*          VE_SortType_Btn;                                   // 0x03A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBPVE_Backpack_SortType_Popup_C*        VE_SortType_Popup;                                 // 0x03B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          isSortTypePopupVisual;                             // 0x03B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BPMV_JHBackpack_Basic(int32 EntryPoint);
	void EVT_VisualHide();
	void EVT_CloseSortTypePanel();
	void EVT_RenderView();
	void BndEvt__BPMV_JHBackpack_Basic_BTN_BackpackSort_K2Node_ComponentBoundEvent_2_BtnClick__DelegateSignature();
	void BndEvt__BPMV_JHBackpack_Basic_VE_SortType_Btn_K2Node_ComponentBoundEvent_1_BTN_Click__DelegateSignature();
	void EVT_Gamepad_FocusSortBtn();
	void EVT_SetupHierarchy();
	void EVT_FocusWidgetForScenario(ENeoUIFocusWidgetScenario scenario, const struct FNeoUIFocusWidgetParam& Param);
	void EVT_HideSortBtn();
	void BndEvt__BPMV_JHBackpack_Basic_NeoUIButtonBase_26_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	class UWidget* Navi_GotoTop(EUINavigation Navigation_0);
	class UWidget* Navi_GotoLeft(EUINavigation Navigation_0);
	class UWidget* FocusWidgetForScenario_Direct(ENeoUIFocusWidgetScenario scenario, const struct FNeoUIFocusWidgetParam& Param);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPMV_JHBackpack_Basic_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPMV_JHBackpack_Basic_C")
	}
	static class UBPMV_JHBackpack_Basic_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPMV_JHBackpack_Basic_C>();
	}
};
DUMPER7_ASSERTS_UBPMV_JHBackpack_Basic_C;

SDK_NAMESPACE_END
