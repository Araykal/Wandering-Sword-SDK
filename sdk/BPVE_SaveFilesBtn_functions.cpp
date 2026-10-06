#pragma once



// Package: BPVE_SaveFilesBtn

#include "Basic.hpp"

#include "BPVE_SaveFilesBtn_classes.hpp"
#include "BPVE_SaveFilesBtn_parameters.hpp"


SDK_NAMESPACE_START

// Function BPVE_SaveFilesBtn.BPVE_SaveFilesBtn_C.ExecuteUbergraph_BPVE_SaveFilesBtn
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_SaveFilesBtn_C::ExecuteUbergraph_BPVE_SaveFilesBtn(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_SaveFilesBtn_C", "ExecuteUbergraph_BPVE_SaveFilesBtn");

	Params::BPVE_SaveFilesBtn_C_ExecuteUbergraph_BPVE_SaveFilesBtn Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_SaveFilesBtn.BPVE_SaveFilesBtn_C.BndEvt__BPVE_SaveFilesBtn_BTN_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBPVE_SaveFilesBtn_C::BndEvt__BPVE_SaveFilesBtn_BTN_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_SaveFilesBtn_C", "BndEvt__BPVE_SaveFilesBtn_BTN_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
