#pragma once



// Package: BPMV_AgeAlert

#include "Basic.hpp"

#include "BPMV_AgeAlert_classes.hpp"
#include "BPMV_AgeAlert_parameters.hpp"


SDK_NAMESPACE_START

// Function BPMV_AgeAlert.BPMV_AgeAlert_C.ExecuteUbergraph_BPMV_AgeAlert
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPMV_AgeAlert_C::ExecuteUbergraph_BPMV_AgeAlert(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_AgeAlert_C", "ExecuteUbergraph_BPMV_AgeAlert");

	Params::BPMV_AgeAlert_C_ExecuteUbergraph_BPMV_AgeAlert Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_AgeAlert.BPMV_AgeAlert_C.BndEvt__BPMV_AgeAlert_BTN_EXIT_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBPMV_AgeAlert_C::BndEvt__BPMV_AgeAlert_BTN_EXIT_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_AgeAlert_C", "BndEvt__BPMV_AgeAlert_BTN_EXIT_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
