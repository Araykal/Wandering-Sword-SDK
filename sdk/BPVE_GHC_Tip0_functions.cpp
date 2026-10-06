#pragma once



// Package: BPVE_GHC_Tip0

#include "Basic.hpp"

#include "BPVE_GHC_Tip0_classes.hpp"
#include "BPVE_GHC_Tip0_parameters.hpp"


SDK_NAMESPACE_START

// Function BPVE_GHC_Tip0.BPVE_GHC_Tip0_C.ExecuteUbergraph_BPVE_GHC_Tip0
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_GHC_Tip0_C::ExecuteUbergraph_BPVE_GHC_Tip0(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_GHC_Tip0_C", "ExecuteUbergraph_BPVE_GHC_Tip0");

	Params::BPVE_GHC_Tip0_C_ExecuteUbergraph_BPVE_GHC_Tip0 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_GHC_Tip0.BPVE_GHC_Tip0_C.BndEvt__BPVE_GHC_Tip0_BTN_EXIT_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBPVE_GHC_Tip0_C::BndEvt__BPVE_GHC_Tip0_BTN_EXIT_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_GHC_Tip0_C", "BndEvt__BPVE_GHC_Tip0_BTN_EXIT_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
