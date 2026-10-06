#pragma once



// Package: BTN_NGP_Minus

#include "Basic.hpp"

#include "BTN_NGP_Minus_classes.hpp"
#include "BTN_NGP_Minus_parameters.hpp"


SDK_NAMESPACE_START

// Function BTN_NGP_Minus.BTN_NGP_Minus_C.ExecuteUbergraph_BTN_NGP_Minus
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTN_NGP_Minus_C::ExecuteUbergraph_BTN_NGP_Minus(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTN_NGP_Minus_C", "ExecuteUbergraph_BTN_NGP_Minus");

	Params::BTN_NGP_Minus_C_ExecuteUbergraph_BTN_NGP_Minus Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BTN_NGP_Minus.BTN_NGP_Minus_C.BndEvt__BTN_NGP_Minus_BTN_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBTN_NGP_Minus_C::BndEvt__BTN_NGP_Minus_BTN_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTN_NGP_Minus_C", "BndEvt__BTN_NGP_Minus_BTN_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
