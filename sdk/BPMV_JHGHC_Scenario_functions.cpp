#pragma once



// Package: BPMV_JHGHC_Scenario

#include "Basic.hpp"

#include "BPMV_JHGHC_Scenario_classes.hpp"
#include "BPMV_JHGHC_Scenario_parameters.hpp"


SDK_NAMESPACE_START

// Function BPMV_JHGHC_Scenario.BPMV_JHGHC_Scenario_C.ExecuteUbergraph_BPMV_JHGHC_Scenario
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPMV_JHGHC_Scenario_C::ExecuteUbergraph_BPMV_JHGHC_Scenario(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_JHGHC_Scenario_C", "ExecuteUbergraph_BPMV_JHGHC_Scenario");

	Params::BPMV_JHGHC_Scenario_C_ExecuteUbergraph_BPMV_JHGHC_Scenario Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_JHGHC_Scenario.BPMV_JHGHC_Scenario_C.BndEvt__BPMV_JHGHC_Scenario_BTN_Stack_Pre_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBPMV_JHGHC_Scenario_C::BndEvt__BPMV_JHGHC_Scenario_BTN_Stack_Pre_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_JHGHC_Scenario_C", "BndEvt__BPMV_JHGHC_Scenario_BTN_Stack_Pre_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_JHGHC_Scenario.BPMV_JHGHC_Scenario_C.BndEvt__BPMV_JHGHC_Scenario_BTN_Stack_Next_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBPMV_JHGHC_Scenario_C::BndEvt__BPMV_JHGHC_Scenario_BTN_Stack_Next_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_JHGHC_Scenario_C", "BndEvt__BPMV_JHGHC_Scenario_BTN_Stack_Next_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_JHGHC_Scenario.BPMV_JHGHC_Scenario_C.EVT_UpdateStackBtn_Pre
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsVisible_0                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPMV_JHGHC_Scenario_C::EVT_UpdateStackBtn_Pre(bool IsVisible_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_JHGHC_Scenario_C", "EVT_UpdateStackBtn_Pre");

	Params::BPMV_JHGHC_Scenario_C_EVT_UpdateStackBtn_Pre Parms{};

	Parms.IsVisible_0 = IsVisible_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_JHGHC_Scenario.BPMV_JHGHC_Scenario_C.EVT_UpdateStackBtn_Next
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsVisible_0                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPMV_JHGHC_Scenario_C::EVT_UpdateStackBtn_Next(bool IsVisible_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_JHGHC_Scenario_C", "EVT_UpdateStackBtn_Next");

	Params::BPMV_JHGHC_Scenario_C_EVT_UpdateStackBtn_Next Parms{};

	Parms.IsVisible_0 = IsVisible_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_JHGHC_Scenario.BPMV_JHGHC_Scenario_C.EVT_SetupHierarchy
// (Event, Public, BlueprintEvent)

void UBPMV_JHGHC_Scenario_C::EVT_SetupHierarchy()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_JHGHC_Scenario_C", "EVT_SetupHierarchy");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_JHGHC_Scenario.BPMV_JHGHC_Scenario_C.BndEvt__BPMV_JHGHC_Scenario_BTN_EXIT_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBPMV_JHGHC_Scenario_C::BndEvt__BPMV_JHGHC_Scenario_BTN_EXIT_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_JHGHC_Scenario_C", "BndEvt__BPMV_JHGHC_Scenario_BTN_EXIT_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_JHGHC_Scenario.BPMV_JHGHC_Scenario_C.FocusWidgetForScenario_Direct
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// ENeoUIFocusWidgetScenario               scenario                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FNeoUIFocusWidgetParam&    Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UBPMV_JHGHC_Scenario_C::FocusWidgetForScenario_Direct(ENeoUIFocusWidgetScenario scenario, const struct FNeoUIFocusWidgetParam& Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_JHGHC_Scenario_C", "FocusWidgetForScenario_Direct");

	Params::BPMV_JHGHC_Scenario_C_FocusWidgetForScenario_Direct Parms{};

	Parms.scenario = scenario;
	Parms.Param = std::move(Param);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


SDK_NAMESPACE_END
