#pragma once



// Package: BPMV_SaveFiles2

#include "Basic.hpp"

#include "NeoUI_structs.hpp"
#include "Engine_structs.hpp"
#include "JH_classes.hpp"
#include "SlateCore_structs.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPMV_SaveFiles2.BPMV_SaveFiles2_C
// 0x0088 (0x0498 - 0x0410)
class UBPMV_SaveFiles2_C final : public UJHNeoUISaveFilesViewBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0410(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBPVE_SaveFilesBtn_C*                   BTN_Auto;                                          // 0x0418(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIButtonBase*                       BTN_Exit;                                          // 0x0420(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBPVE_SaveFilesBtn_C*                   BTN_Manual;                                        // 0x0428(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUICanvasPanelBase*                  CT_R;                                              // 0x0430(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIImageBase*                        IMG_GamepadTip_Load_Auto;                          // 0x0438(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIImageBase*                        IMG_GamepadTip_Load_Manual;                        // 0x0440(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIImageBase*                        IMG_GamepadTip_Save;                               // 0x0448(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIImageBase*                        IMG_Load;                                          // 0x0450(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIImageBase*                        IMG_Save;                                          // 0x0458(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIHorizontalBox*                    NeoUIHorizontalBox_46;                             // 0x0460(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIImageBase*                        NeoUIImageBase;                                    // 0x0468(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIImageBase*                        NeoUIImageBase_55;                                 // 0x0470(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIImageBase*                        NeoUIImageBase_142;                                // 0x0478(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUISwitcher*                         SWITCHER_Latest;                                   // 0x0480(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBPVE_SaveFilesCell_LatestInManual_C*   VE_Latest_Auto_InManual;                           // 0x0488(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UJHNeoUISaveFilesVM*                    SaveFilesVM;                                       // 0x0490(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BPMV_SaveFiles2(int32 EntryPoint);
	void EVT_SyncTabChanged(int32 TabIndex);
	void BP_OnEntryInitialized_Event_0(class UObject* Item, class UUserWidget* Widget);
	void EVT_DelayFocusForWriteSaveSlot();
	void EVT_VisualShow();
	void EVT_SyncWithGlobalInputMode();
	void EVT_FocusWidgetForScenario(ENeoUIFocusWidgetScenario scenario, const struct FNeoUIFocusWidgetParam& Param);
	void EVT_VisualConstructOnce();
	void EVT_SetupHierarchy();
	void BndEvt__BPMV_SaveFiles_LIST_Auto_K2Node_ComponentBoundEvent_7_OnListEntryInitializedDynamic__DelegateSignature(class UObject* Item, class UUserWidget* Widget);
	void BndEvt__BPMV_SaveFiles_BTN_EXIT_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();
	void BP_OnEntryInitialized_Event_1(class UObject* Item, class UUserWidget* Widget);
	void Construct();
	void EVT_VisualInit();
	void BndEvt__BPMV_SaveFiles_LIST_Manual_K2Node_ComponentBoundEvent_2_OnListEntryInitializedDynamic__DelegateSignature(class UObject* Item, class UUserWidget* Widget);
	void BndEvt__BPMV_SaveFiles_BTN_Auto_K2Node_ComponentBoundEvent_1_BtnClick__DelegateSignature();
	void BndEvt__BPMV_SaveFiles_BTN_Manual_K2Node_ComponentBoundEvent_0_BtnClick__DelegateSignature();
	void EVT_RenderView();
	class UWidget* DoCustomNavigation_0(EUINavigation Navigation_0);
	class UWidget* DoCustomNavigation_1(EUINavigation Navigation_0);
	class UWidget* FocusWidgetForScenario_Direct(ENeoUIFocusWidgetScenario scenario, const struct FNeoUIFocusWidgetParam& Param);
	class UWidget* Navi_GotoTop(EUINavigation Navigation_0);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPMV_SaveFiles2_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPMV_SaveFiles2_C")
	}
	static class UBPMV_SaveFiles2_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPMV_SaveFiles2_C>();
	}
};
DUMPER7_ASSERTS_UBPMV_SaveFiles2_C;

SDK_NAMESPACE_END
