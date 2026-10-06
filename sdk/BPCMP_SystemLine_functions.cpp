#pragma once



// Package: BPCMP_SystemLine

#include "Basic.hpp"

#include "BPCMP_SystemLine_classes.hpp"
#include "BPCMP_SystemLine_parameters.hpp"


SDK_NAMESPACE_START

// Function BPCMP_SystemLine.BPCMP_SystemLine_C.ExecuteUbergraph_BPCMP_SystemLine
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPCMP_SystemLine_C::ExecuteUbergraph_BPCMP_SystemLine(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPCMP_SystemLine_C", "ExecuteUbergraph_BPCMP_SystemLine");

	Params::BPCMP_SystemLine_C_ExecuteUbergraph_BPCMP_SystemLine Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPCMP_SystemLine.BPCMP_SystemLine_C.BndEvt__BPCMP_SystemLine_BTN_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBPCMP_SystemLine_C::BndEvt__BPCMP_SystemLine_BTN_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPCMP_SystemLine_C", "BndEvt__BPCMP_SystemLine_BTN_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
