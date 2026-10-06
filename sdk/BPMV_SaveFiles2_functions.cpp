#pragma once



// Package: BPMV_SaveFiles2

#include "Basic.hpp"

#include "BPMV_SaveFiles2_classes.hpp"
#include "BPMV_SaveFiles2_parameters.hpp"


SDK_NAMESPACE_START

// Function BPMV_SaveFiles2.BPMV_SaveFiles2_C.ExecuteUbergraph_BPMV_SaveFiles2
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPMV_SaveFiles2_C::ExecuteUbergraph_BPMV_SaveFiles2(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_SaveFiles2_C", "ExecuteUbergraph_BPMV_SaveFiles2");

	Params::BPMV_SaveFiles2_C_ExecuteUbergraph_BPMV_SaveFiles2 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_SaveFiles2.BPMV_SaveFiles2_C.EVT_SyncTabChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                                   TabIndex                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPMV_SaveFiles2_C::EVT_SyncTabChanged(int32 TabIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_SaveFiles2_C", "EVT_SyncTabChanged");

	Params::BPMV_SaveFiles2_C_EVT_SyncTabChanged Parms{};

	Parms.TabIndex = TabIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_SaveFiles2.BPMV_SaveFiles2_C.BP_OnEntryInitialized_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                      Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPMV_SaveFiles2_C::BP_OnEntryInitialized_Event_0(class UObject* Item, class UUserWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_SaveFiles2_C", "BP_OnEntryInitialized_Event_0");

	Params::BPMV_SaveFiles2_C_BP_OnEntryInitialized_Event_0 Parms{};

	Parms.Item = Item;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_SaveFiles2.BPMV_SaveFiles2_C.EVT_DelayFocusForWriteSaveSlot
// (Event, Public, BlueprintEvent)

void UBPMV_SaveFiles2_C::EVT_DelayFocusForWriteSaveSlot()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_SaveFiles2_C", "EVT_DelayFocusForWriteSaveSlot");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_SaveFiles2.BPMV_SaveFiles2_C.EVT_VisualShow
// (Event, Public, BlueprintEvent)

void UBPMV_SaveFiles2_C::EVT_VisualShow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_SaveFiles2_C", "EVT_VisualShow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_SaveFiles2.BPMV_SaveFiles2_C.EVT_SyncWithGlobalInputMode
// (Event, Public, BlueprintEvent)

void UBPMV_SaveFiles2_C::EVT_SyncWithGlobalInputMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_SaveFiles2_C", "EVT_SyncWithGlobalInputMode");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_SaveFiles2.BPMV_SaveFiles2_C.EVT_FocusWidgetForScenario
// (Event, Public, BlueprintEvent)
// Parameters:
// ENeoUIFocusWidgetScenario               scenario                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FNeoUIFocusWidgetParam&    Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm)

void UBPMV_SaveFiles2_C::EVT_FocusWidgetForScenario(ENeoUIFocusWidgetScenario scenario, const struct FNeoUIFocusWidgetParam& Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_SaveFiles2_C", "EVT_FocusWidgetForScenario");

	Params::BPMV_SaveFiles2_C_EVT_FocusWidgetForScenario Parms{};

	Parms.scenario = scenario;
	Parms.Param = std::move(Param);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_SaveFiles2.BPMV_SaveFiles2_C.EVT_VisualConstructOnce
// (Event, Public, BlueprintEvent)

void UBPMV_SaveFiles2_C::EVT_VisualConstructOnce()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_SaveFiles2_C", "EVT_VisualConstructOnce");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_SaveFiles2.BPMV_SaveFiles2_C.EVT_SetupHierarchy
// (Event, Public, BlueprintEvent)

void UBPMV_SaveFiles2_C::EVT_SetupHierarchy()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_SaveFiles2_C", "EVT_SetupHierarchy");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_SaveFiles2.BPMV_SaveFiles2_C.BndEvt__BPMV_SaveFiles_LIST_Auto_K2Node_ComponentBoundEvent_7_OnListEntryInitializedDynamic__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UObject*                          Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                      Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPMV_SaveFiles2_C::BndEvt__BPMV_SaveFiles_LIST_Auto_K2Node_ComponentBoundEvent_7_OnListEntryInitializedDynamic__DelegateSignature(class UObject* Item, class UUserWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_SaveFiles2_C", "BndEvt__BPMV_SaveFiles_LIST_Auto_K2Node_ComponentBoundEvent_7_OnListEntryInitializedDynamic__DelegateSignature");

	Params::BPMV_SaveFiles2_C_BndEvt__BPMV_SaveFiles_LIST_Auto_K2Node_ComponentBoundEvent_7_OnListEntryInitializedDynamic__DelegateSignature Parms{};

	Parms.Item = Item;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_SaveFiles2.BPMV_SaveFiles2_C.BndEvt__BPMV_SaveFiles_BTN_EXIT_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBPMV_SaveFiles2_C::BndEvt__BPMV_SaveFiles_BTN_EXIT_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_SaveFiles2_C", "BndEvt__BPMV_SaveFiles_BTN_EXIT_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_SaveFiles2.BPMV_SaveFiles2_C.BP_OnEntryInitialized_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                      Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPMV_SaveFiles2_C::BP_OnEntryInitialized_Event_1(class UObject* Item, class UUserWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_SaveFiles2_C", "BP_OnEntryInitialized_Event_1");

	Params::BPMV_SaveFiles2_C_BP_OnEntryInitialized_Event_1 Parms{};

	Parms.Item = Item;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_SaveFiles2.BPMV_SaveFiles2_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPMV_SaveFiles2_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_SaveFiles2_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_SaveFiles2.BPMV_SaveFiles2_C.EVT_VisualInit
// (Event, Public, BlueprintEvent)

void UBPMV_SaveFiles2_C::EVT_VisualInit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_SaveFiles2_C", "EVT_VisualInit");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_SaveFiles2.BPMV_SaveFiles2_C.BndEvt__BPMV_SaveFiles_LIST_Manual_K2Node_ComponentBoundEvent_2_OnListEntryInitializedDynamic__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UObject*                          Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                      Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPMV_SaveFiles2_C::BndEvt__BPMV_SaveFiles_LIST_Manual_K2Node_ComponentBoundEvent_2_OnListEntryInitializedDynamic__DelegateSignature(class UObject* Item, class UUserWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_SaveFiles2_C", "BndEvt__BPMV_SaveFiles_LIST_Manual_K2Node_ComponentBoundEvent_2_OnListEntryInitializedDynamic__DelegateSignature");

	Params::BPMV_SaveFiles2_C_BndEvt__BPMV_SaveFiles_LIST_Manual_K2Node_ComponentBoundEvent_2_OnListEntryInitializedDynamic__DelegateSignature Parms{};

	Parms.Item = Item;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_SaveFiles2.BPMV_SaveFiles2_C.BndEvt__BPMV_SaveFiles_BTN_Auto_K2Node_ComponentBoundEvent_1_BtnClick__DelegateSignature
// (BlueprintEvent)

void UBPMV_SaveFiles2_C::BndEvt__BPMV_SaveFiles_BTN_Auto_K2Node_ComponentBoundEvent_1_BtnClick__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_SaveFiles2_C", "BndEvt__BPMV_SaveFiles_BTN_Auto_K2Node_ComponentBoundEvent_1_BtnClick__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_SaveFiles2.BPMV_SaveFiles2_C.BndEvt__BPMV_SaveFiles_BTN_Manual_K2Node_ComponentBoundEvent_0_BtnClick__DelegateSignature
// (BlueprintEvent)

void UBPMV_SaveFiles2_C::BndEvt__BPMV_SaveFiles_BTN_Manual_K2Node_ComponentBoundEvent_0_BtnClick__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_SaveFiles2_C", "BndEvt__BPMV_SaveFiles_BTN_Manual_K2Node_ComponentBoundEvent_0_BtnClick__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_SaveFiles2.BPMV_SaveFiles2_C.EVT_RenderView
// (Event, Public, BlueprintEvent)

void UBPMV_SaveFiles2_C::EVT_RenderView()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_SaveFiles2_C", "EVT_RenderView");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_SaveFiles2.BPMV_SaveFiles2_C.DoCustomNavigation_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EUINavigation                           Navigation_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UBPMV_SaveFiles2_C::DoCustomNavigation_0(EUINavigation Navigation_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_SaveFiles2_C", "DoCustomNavigation_0");

	Params::BPMV_SaveFiles2_C_DoCustomNavigation_0 Parms{};

	Parms.Navigation_0 = Navigation_0;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BPMV_SaveFiles2.BPMV_SaveFiles2_C.DoCustomNavigation_1
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EUINavigation                           Navigation_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UBPMV_SaveFiles2_C::DoCustomNavigation_1(EUINavigation Navigation_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_SaveFiles2_C", "DoCustomNavigation_1");

	Params::BPMV_SaveFiles2_C_DoCustomNavigation_1 Parms{};

	Parms.Navigation_0 = Navigation_0;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BPMV_SaveFiles2.BPMV_SaveFiles2_C.FocusWidgetForScenario_Direct
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// ENeoUIFocusWidgetScenario               scenario                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FNeoUIFocusWidgetParam&    Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UBPMV_SaveFiles2_C::FocusWidgetForScenario_Direct(ENeoUIFocusWidgetScenario scenario, const struct FNeoUIFocusWidgetParam& Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_SaveFiles2_C", "FocusWidgetForScenario_Direct");

	Params::BPMV_SaveFiles2_C_FocusWidgetForScenario_Direct Parms{};

	Parms.scenario = scenario;
	Parms.Param = std::move(Param);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BPMV_SaveFiles2.BPMV_SaveFiles2_C.Navi_GotoTop
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EUINavigation                           Navigation_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UBPMV_SaveFiles2_C::Navi_GotoTop(EUINavigation Navigation_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_SaveFiles2_C", "Navi_GotoTop");

	Params::BPMV_SaveFiles2_C_Navi_GotoTop Parms{};

	Parms.Navigation_0 = Navigation_0;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


SDK_NAMESPACE_END
