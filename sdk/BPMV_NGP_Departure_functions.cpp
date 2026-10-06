#pragma once



// Package: BPMV_NGP_Departure

#include "Basic.hpp"

#include "BPMV_NGP_Departure_classes.hpp"
#include "BPMV_NGP_Departure_parameters.hpp"


SDK_NAMESPACE_START

// Function BPMV_NGP_Departure.BPMV_NGP_Departure_C.ExecuteUbergraph_BPMV_NGP_Departure
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPMV_NGP_Departure_C::ExecuteUbergraph_BPMV_NGP_Departure(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_NGP_Departure_C", "ExecuteUbergraph_BPMV_NGP_Departure");

	Params::BPMV_NGP_Departure_C_ExecuteUbergraph_BPMV_NGP_Departure Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_NGP_Departure.BPMV_NGP_Departure_C.BndEvt__BPMV_NGP_Departure_BTN_NGP_DepartureMain_K2Node_ComponentBoundEvent_3_BtnClick__DelegateSignature
// (BlueprintEvent)

void UBPMV_NGP_Departure_C::BndEvt__BPMV_NGP_Departure_BTN_NGP_DepartureMain_K2Node_ComponentBoundEvent_3_BtnClick__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_NGP_Departure_C", "BndEvt__BPMV_NGP_Departure_BTN_NGP_DepartureMain_K2Node_ComponentBoundEvent_3_BtnClick__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_NGP_Departure.BPMV_NGP_Departure_C.BndEvt__BPMV_NGP_Departure_BTN_EXIT_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBPMV_NGP_Departure_C::BndEvt__BPMV_NGP_Departure_BTN_EXIT_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_NGP_Departure_C", "BndEvt__BPMV_NGP_Departure_BTN_EXIT_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_NGP_Departure.BPMV_NGP_Departure_C.EVT_FocusWidgetForScenario
// (Event, Public, BlueprintEvent)
// Parameters:
// ENeoUIFocusWidgetScenario               scenario                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FNeoUIFocusWidgetParam&    Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm)

void UBPMV_NGP_Departure_C::EVT_FocusWidgetForScenario(ENeoUIFocusWidgetScenario scenario, const struct FNeoUIFocusWidgetParam& Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_NGP_Departure_C", "EVT_FocusWidgetForScenario");

	Params::BPMV_NGP_Departure_C_EVT_FocusWidgetForScenario Parms{};

	Parms.scenario = scenario;
	Parms.Param = std::move(Param);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_NGP_Departure.BPMV_NGP_Departure_C.EVT_SyncWithGlobalInputMode
// (Event, Public, BlueprintEvent)

void UBPMV_NGP_Departure_C::EVT_SyncWithGlobalInputMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_NGP_Departure_C", "EVT_SyncWithGlobalInputMode");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_NGP_Departure.BPMV_NGP_Departure_C.EVT_VisualShow
// (Event, Public, BlueprintEvent)

void UBPMV_NGP_Departure_C::EVT_VisualShow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_NGP_Departure_C", "EVT_VisualShow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_NGP_Departure.BPMV_NGP_Departure_C.BndEvt__BPMV_NGP_Departure_BTN_Departure_K2Node_ComponentBoundEvent_1_BtnClick__DelegateSignature
// (BlueprintEvent)

void UBPMV_NGP_Departure_C::BndEvt__BPMV_NGP_Departure_BTN_Departure_K2Node_ComponentBoundEvent_1_BtnClick__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_NGP_Departure_C", "BndEvt__BPMV_NGP_Departure_BTN_Departure_K2Node_ComponentBoundEvent_1_BtnClick__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_NGP_Departure.BPMV_NGP_Departure_C.BndEvt__BPMV_NGP_Departure_BTN_Revert_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBPMV_NGP_Departure_C::BndEvt__BPMV_NGP_Departure_BTN_Revert_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_NGP_Departure_C", "BndEvt__BPMV_NGP_Departure_BTN_Revert_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_NGP_Departure.BPMV_NGP_Departure_C.DoCustomNavigation_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EUINavigation                           Navigation_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UBPMV_NGP_Departure_C::DoCustomNavigation_0(EUINavigation Navigation_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_NGP_Departure_C", "DoCustomNavigation_0");

	Params::BPMV_NGP_Departure_C_DoCustomNavigation_0 Parms{};

	Parms.Navigation_0 = Navigation_0;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BPMV_NGP_Departure.BPMV_NGP_Departure_C.FocusWidgetForScenario_Direct
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// ENeoUIFocusWidgetScenario               scenario                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FNeoUIFocusWidgetParam&    Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UBPMV_NGP_Departure_C::FocusWidgetForScenario_Direct(ENeoUIFocusWidgetScenario scenario, const struct FNeoUIFocusWidgetParam& Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_NGP_Departure_C", "FocusWidgetForScenario_Direct");

	Params::BPMV_NGP_Departure_C_FocusWidgetForScenario_Direct Parms{};

	Parms.scenario = scenario;
	Parms.Param = std::move(Param);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


SDK_NAMESPACE_END
