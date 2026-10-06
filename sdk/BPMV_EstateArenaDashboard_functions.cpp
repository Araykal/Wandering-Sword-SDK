#pragma once



// Package: BPMV_EstateArenaDashboard

#include "Basic.hpp"

#include "BPMV_EstateArenaDashboard_classes.hpp"
#include "BPMV_EstateArenaDashboard_parameters.hpp"


SDK_NAMESPACE_START

// Function BPMV_EstateArenaDashboard.BPMV_EstateArenaDashboard_C.ExecuteUbergraph_BPMV_EstateArenaDashboard
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPMV_EstateArenaDashboard_C::ExecuteUbergraph_BPMV_EstateArenaDashboard(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_EstateArenaDashboard_C", "ExecuteUbergraph_BPMV_EstateArenaDashboard");

	Params::BPMV_EstateArenaDashboard_C_ExecuteUbergraph_BPMV_EstateArenaDashboard Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_EstateArenaDashboard.BPMV_EstateArenaDashboard_C.EVT_FocusConfirmButton
// (Event, Public, BlueprintEvent)

void UBPMV_EstateArenaDashboard_C::EVT_FocusConfirmButton()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_EstateArenaDashboard_C", "EVT_FocusConfirmButton");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_EstateArenaDashboard.BPMV_EstateArenaDashboard_C.BndEvt__BPMV_EstateArenaDashboard_BPCMP_EAD_Confirm_K2Node_ComponentBoundEvent_2_BtnClick__DelegateSignature
// (BlueprintEvent)

void UBPMV_EstateArenaDashboard_C::BndEvt__BPMV_EstateArenaDashboard_BPCMP_EAD_Confirm_K2Node_ComponentBoundEvent_2_BtnClick__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_EstateArenaDashboard_C", "BndEvt__BPMV_EstateArenaDashboard_BPCMP_EAD_Confirm_K2Node_ComponentBoundEvent_2_BtnClick__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_EstateArenaDashboard.BPMV_EstateArenaDashboard_C.BndEvt__BPMV_EstateArenaDashboard_BTN_EXIT_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBPMV_EstateArenaDashboard_C::BndEvt__BPMV_EstateArenaDashboard_BTN_EXIT_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_EstateArenaDashboard_C", "BndEvt__BPMV_EstateArenaDashboard_BTN_EXIT_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_EstateArenaDashboard.BPMV_EstateArenaDashboard_C.EVT_SetupSubModuleSlots
// (Event, Public, BlueprintEvent)

void UBPMV_EstateArenaDashboard_C::EVT_SetupSubModuleSlots()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_EstateArenaDashboard_C", "EVT_SetupSubModuleSlots");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_EstateArenaDashboard.BPMV_EstateArenaDashboard_C.FocusWidgetForScenario_Direct
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// ENeoUIFocusWidgetScenario               scenario                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FNeoUIFocusWidgetParam&    Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UBPMV_EstateArenaDashboard_C::FocusWidgetForScenario_Direct(ENeoUIFocusWidgetScenario scenario, const struct FNeoUIFocusWidgetParam& Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_EstateArenaDashboard_C", "FocusWidgetForScenario_Direct");

	Params::BPMV_EstateArenaDashboard_C_FocusWidgetForScenario_Direct Parms{};

	Parms.scenario = scenario;
	Parms.Param = std::move(Param);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


SDK_NAMESPACE_END
