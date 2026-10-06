#pragma once



// Package: BTN_NGP_Plus

#include "Basic.hpp"

#include "BTN_NGP_Plus_classes.hpp"
#include "BTN_NGP_Plus_parameters.hpp"


SDK_NAMESPACE_START

// Function BTN_NGP_Plus.BTN_NGP_Plus_C.ExecuteUbergraph_BTN_NGP_Plus
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTN_NGP_Plus_C::ExecuteUbergraph_BTN_NGP_Plus(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTN_NGP_Plus_C", "ExecuteUbergraph_BTN_NGP_Plus");

	Params::BTN_NGP_Plus_C_ExecuteUbergraph_BTN_NGP_Plus Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BTN_NGP_Plus.BTN_NGP_Plus_C.BndEvt__BTN_NGP_Plus_BTN_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBTN_NGP_Plus_C::BndEvt__BTN_NGP_Plus_BTN_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTN_NGP_Plus_C", "BndEvt__BTN_NGP_Plus_BTN_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
