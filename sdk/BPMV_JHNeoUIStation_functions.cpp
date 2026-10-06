#pragma once



// Package: BPMV_JHNeoUIStation

#include "Basic.hpp"

#include "BPMV_JHNeoUIStation_classes.hpp"
#include "BPMV_JHNeoUIStation_parameters.hpp"


SDK_NAMESPACE_START

// Function BPMV_JHNeoUIStation.BPMV_JHNeoUIStation_C.ExecuteUbergraph_BPMV_JHNeoUIStation
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPMV_JHNeoUIStation_C::ExecuteUbergraph_BPMV_JHNeoUIStation(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_JHNeoUIStation_C", "ExecuteUbergraph_BPMV_JHNeoUIStation");

	Params::BPMV_JHNeoUIStation_C_ExecuteUbergraph_BPMV_JHNeoUIStation Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_JHNeoUIStation.BPMV_JHNeoUIStation_C.BndEvt__BPMV_JHNeoUIStation_BTN_EXIT_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBPMV_JHNeoUIStation_C::BndEvt__BPMV_JHNeoUIStation_BTN_EXIT_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_JHNeoUIStation_C", "BndEvt__BPMV_JHNeoUIStation_BTN_EXIT_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
