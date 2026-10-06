#pragma once



// Package: BPVE_EAC_Candidate

#include "Basic.hpp"

#include "BPVE_EAC_Candidate_classes.hpp"
#include "BPVE_EAC_Candidate_parameters.hpp"


SDK_NAMESPACE_START

// Function BPVE_EAC_Candidate.BPVE_EAC_Candidate_C.ExecuteUbergraph_BPVE_EAC_Candidate
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_EAC_Candidate_C::ExecuteUbergraph_BPVE_EAC_Candidate(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_EAC_Candidate_C", "ExecuteUbergraph_BPVE_EAC_Candidate");

	Params::BPVE_EAC_Candidate_C_ExecuteUbergraph_BPVE_EAC_Candidate Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_EAC_Candidate.BPVE_EAC_Candidate_C.BndEvt__BPVE_EAC_Candidate_BTN_SidebarCell_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UJHNeoUIGamepadConfirmButton*     Btn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_EAC_Candidate_C::BndEvt__BPVE_EAC_Candidate_BTN_SidebarCell_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature(class UJHNeoUIGamepadConfirmButton* Btn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_EAC_Candidate_C", "BndEvt__BPVE_EAC_Candidate_BTN_SidebarCell_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature");

	Params::BPVE_EAC_Candidate_C_BndEvt__BPVE_EAC_Candidate_BTN_SidebarCell_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature Parms{};

	Parms.Btn = Btn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_EAC_Candidate.BPVE_EAC_Candidate_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPVE_EAC_Candidate_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_EAC_Candidate_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
