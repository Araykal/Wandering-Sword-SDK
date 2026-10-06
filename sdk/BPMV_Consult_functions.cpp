#pragma once



// Package: BPMV_Consult

#include "Basic.hpp"

#include "BPMV_Consult_classes.hpp"
#include "BPMV_Consult_parameters.hpp"


SDK_NAMESPACE_START

// Function BPMV_Consult.BPMV_Consult_C.ExecuteUbergraph_BPMV_Consult
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPMV_Consult_C::ExecuteUbergraph_BPMV_Consult(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_Consult_C", "ExecuteUbergraph_BPMV_Consult");

	Params::BPMV_Consult_C_ExecuteUbergraph_BPMV_Consult Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_Consult.BPMV_Consult_C.EVT_SyncWithGlobalInputMode
// (Event, Public, BlueprintEvent)

void UBPMV_Consult_C::EVT_SyncWithGlobalInputMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_Consult_C", "EVT_SyncWithGlobalInputMode");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_Consult.BPMV_Consult_C.EVT_VisualShow
// (Event, Public, BlueprintEvent)

void UBPMV_Consult_C::EVT_VisualShow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_Consult_C", "EVT_VisualShow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_Consult.BPMV_Consult_C.EVT_AutoFocusConfirmForItemClick
// (Event, Public, BlueprintEvent)

void UBPMV_Consult_C::EVT_AutoFocusConfirmForItemClick()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_Consult_C", "EVT_AutoFocusConfirmForItemClick");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_Consult.BPMV_Consult_C.EVT_FocusWidgetForScenario
// (Event, Public, BlueprintEvent)
// Parameters:
// ENeoUIFocusWidgetScenario               scenario                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FNeoUIFocusWidgetParam&    Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm)

void UBPMV_Consult_C::EVT_FocusWidgetForScenario(ENeoUIFocusWidgetScenario scenario, const struct FNeoUIFocusWidgetParam& Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_Consult_C", "EVT_FocusWidgetForScenario");

	Params::BPMV_Consult_C_EVT_FocusWidgetForScenario Parms{};

	Parms.scenario = scenario;
	Parms.Param = std::move(Param);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_Consult.BPMV_Consult_C.BndEvt__BPMV_Consult_LIST_Workmanship_K2Node_ComponentBoundEvent_3_SimpleListItemEventDynamic__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UObject*                          Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPMV_Consult_C::BndEvt__BPMV_Consult_LIST_Workmanship_K2Node_ComponentBoundEvent_3_SimpleListItemEventDynamic__DelegateSignature(class UObject* Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_Consult_C", "BndEvt__BPMV_Consult_LIST_Workmanship_K2Node_ComponentBoundEvent_3_SimpleListItemEventDynamic__DelegateSignature");

	Params::BPMV_Consult_C_BndEvt__BPMV_Consult_LIST_Workmanship_K2Node_ComponentBoundEvent_3_SimpleListItemEventDynamic__DelegateSignature Parms{};

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_Consult.BPMV_Consult_C.BndEvt__BPMV_Consult_LIST_Workmanship_K2Node_ComponentBoundEvent_2_OnListEntryInitializedDynamic__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UObject*                          Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                      Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPMV_Consult_C::BndEvt__BPMV_Consult_LIST_Workmanship_K2Node_ComponentBoundEvent_2_OnListEntryInitializedDynamic__DelegateSignature(class UObject* Item, class UUserWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_Consult_C", "BndEvt__BPMV_Consult_LIST_Workmanship_K2Node_ComponentBoundEvent_2_OnListEntryInitializedDynamic__DelegateSignature");

	Params::BPMV_Consult_C_BndEvt__BPMV_Consult_LIST_Workmanship_K2Node_ComponentBoundEvent_2_OnListEntryInitializedDynamic__DelegateSignature Parms{};

	Parms.Item = Item;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_Consult.BPMV_Consult_C.BndEvt__BPMV_Consult_LIST_MartialArt_K2Node_ComponentBoundEvent_1_SimpleListItemEventDynamic__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UObject*                          Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPMV_Consult_C::BndEvt__BPMV_Consult_LIST_MartialArt_K2Node_ComponentBoundEvent_1_SimpleListItemEventDynamic__DelegateSignature(class UObject* Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_Consult_C", "BndEvt__BPMV_Consult_LIST_MartialArt_K2Node_ComponentBoundEvent_1_SimpleListItemEventDynamic__DelegateSignature");

	Params::BPMV_Consult_C_BndEvt__BPMV_Consult_LIST_MartialArt_K2Node_ComponentBoundEvent_1_SimpleListItemEventDynamic__DelegateSignature Parms{};

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_Consult.BPMV_Consult_C.BndEvt__BPMV_Consult_LIST_MartialArt_K2Node_ComponentBoundEvent_0_OnListEntryInitializedDynamic__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UObject*                          Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                      Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPMV_Consult_C::BndEvt__BPMV_Consult_LIST_MartialArt_K2Node_ComponentBoundEvent_0_OnListEntryInitializedDynamic__DelegateSignature(class UObject* Item, class UUserWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_Consult_C", "BndEvt__BPMV_Consult_LIST_MartialArt_K2Node_ComponentBoundEvent_0_OnListEntryInitializedDynamic__DelegateSignature");

	Params::BPMV_Consult_C_BndEvt__BPMV_Consult_LIST_MartialArt_K2Node_ComponentBoundEvent_0_OnListEntryInitializedDynamic__DelegateSignature Parms{};

	Parms.Item = Item;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_Consult.BPMV_Consult_C.BndEvt__BPMV_Consult_BTN_Cancel_K2Node_ComponentBoundEvent_6_BtnClick__DelegateSignature
// (BlueprintEvent)

void UBPMV_Consult_C::BndEvt__BPMV_Consult_BTN_Cancel_K2Node_ComponentBoundEvent_6_BtnClick__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_Consult_C", "BndEvt__BPMV_Consult_BTN_Cancel_K2Node_ComponentBoundEvent_6_BtnClick__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_Consult.BPMV_Consult_C.BndEvt__BPMV_Consult_BTN_Confirm_K2Node_ComponentBoundEvent_5_BtnClick__DelegateSignature
// (BlueprintEvent)

void UBPMV_Consult_C::BndEvt__BPMV_Consult_BTN_Confirm_K2Node_ComponentBoundEvent_5_BtnClick__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_Consult_C", "BndEvt__BPMV_Consult_BTN_Confirm_K2Node_ComponentBoundEvent_5_BtnClick__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_Consult.BPMV_Consult_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPMV_Consult_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_Consult_C", "PreConstruct");

	Params::BPMV_Consult_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_Consult.BPMV_Consult_C.FocusWidgetForScenario_Direct
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// ENeoUIFocusWidgetScenario               scenario                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FNeoUIFocusWidgetParam&    Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UBPMV_Consult_C::FocusWidgetForScenario_Direct(ENeoUIFocusWidgetScenario scenario, const struct FNeoUIFocusWidgetParam& Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_Consult_C", "FocusWidgetForScenario_Direct");

	Params::BPMV_Consult_C_FocusWidgetForScenario_Direct Parms{};

	Parms.scenario = scenario;
	Parms.Param = std::move(Param);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BPMV_Consult.BPMV_Consult_C.Navi_GotoRight
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EUINavigation                           Navigation_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UBPMV_Consult_C::Navi_GotoRight(EUINavigation Navigation_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_Consult_C", "Navi_GotoRight");

	Params::BPMV_Consult_C_Navi_GotoRight Parms{};

	Parms.Navigation_0 = Navigation_0;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BPMV_Consult.BPMV_Consult_C.Navi_GotoLeft
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EUINavigation                           Navigation_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UBPMV_Consult_C::Navi_GotoLeft(EUINavigation Navigation_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_Consult_C", "Navi_GotoLeft");

	Params::BPMV_Consult_C_Navi_GotoLeft Parms{};

	Parms.Navigation_0 = Navigation_0;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


SDK_NAMESPACE_END
