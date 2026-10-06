#pragma once



// Package: BPVE_EAC_AutoBtn

#include "Basic.hpp"

#include "BPVE_EAC_AutoBtn_classes.hpp"
#include "BPVE_EAC_AutoBtn_parameters.hpp"


SDK_NAMESPACE_START

// Function BPVE_EAC_AutoBtn.BPVE_EAC_AutoBtn_C.ExecuteUbergraph_BPVE_EAC_AutoBtn
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_EAC_AutoBtn_C::ExecuteUbergraph_BPVE_EAC_AutoBtn(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_EAC_AutoBtn_C", "ExecuteUbergraph_BPVE_EAC_AutoBtn");

	Params::BPVE_EAC_AutoBtn_C_ExecuteUbergraph_BPVE_EAC_AutoBtn Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_EAC_AutoBtn.BPVE_EAC_AutoBtn_C.EVT_ChangeValidStatus
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsValid                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPVE_EAC_AutoBtn_C::EVT_ChangeValidStatus(bool IsValid)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_EAC_AutoBtn_C", "EVT_ChangeValidStatus");

	Params::BPVE_EAC_AutoBtn_C_EVT_ChangeValidStatus Parms{};

	Parms.IsValid = IsValid;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_EAC_AutoBtn.BPVE_EAC_AutoBtn_C.BndEvt__BPVE_EAC_AutoBtn_JHGPCBtn_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UJHNeoUIGamepadConfirmButton*     Btn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_EAC_AutoBtn_C::BndEvt__BPVE_EAC_AutoBtn_JHGPCBtn_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature(class UJHNeoUIGamepadConfirmButton* Btn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_EAC_AutoBtn_C", "BndEvt__BPVE_EAC_AutoBtn_JHGPCBtn_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature");

	Params::BPVE_EAC_AutoBtn_C_BndEvt__BPVE_EAC_AutoBtn_JHGPCBtn_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature Parms{};

	Parms.Btn = Btn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_EAC_AutoBtn.BPVE_EAC_AutoBtn_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPVE_EAC_AutoBtn_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_EAC_AutoBtn_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
