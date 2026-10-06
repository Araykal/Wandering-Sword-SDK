#pragma once



// Package: BPVE_GHC_TipLocked

#include "Basic.hpp"

#include "BPVE_GHC_TipLocked_classes.hpp"
#include "BPVE_GHC_TipLocked_parameters.hpp"


SDK_NAMESPACE_START

// Function BPVE_GHC_TipLocked.BPVE_GHC_TipLocked_C.ExecuteUbergraph_BPVE_GHC_TipLocked
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_GHC_TipLocked_C::ExecuteUbergraph_BPVE_GHC_TipLocked(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_GHC_TipLocked_C", "ExecuteUbergraph_BPVE_GHC_TipLocked");

	Params::BPVE_GHC_TipLocked_C_ExecuteUbergraph_BPVE_GHC_TipLocked Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_GHC_TipLocked.BPVE_GHC_TipLocked_C.BndEvt__BPVE_GHC_Tip0_BTN_EXIT_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBPVE_GHC_TipLocked_C::BndEvt__BPVE_GHC_Tip0_BTN_EXIT_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_GHC_TipLocked_C", "BndEvt__BPVE_GHC_Tip0_BTN_EXIT_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
