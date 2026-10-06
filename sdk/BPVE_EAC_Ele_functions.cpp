#pragma once



// Package: BPVE_EAC_Ele

#include "Basic.hpp"

#include "BPVE_EAC_Ele_classes.hpp"
#include "BPVE_EAC_Ele_parameters.hpp"


SDK_NAMESPACE_START

// Function BPVE_EAC_Ele.BPVE_EAC_Ele_C.ExecuteUbergraph_BPVE_EAC_Ele
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_EAC_Ele_C::ExecuteUbergraph_BPVE_EAC_Ele(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_EAC_Ele_C", "ExecuteUbergraph_BPVE_EAC_Ele");

	Params::BPVE_EAC_Ele_C_ExecuteUbergraph_BPVE_EAC_Ele Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_EAC_Ele.BPVE_EAC_Ele_C.BndEvt__BPVE_EAC_Ele_BTN_EAC_Ele_K2Node_ComponentBoundEvent_1_JHNeoUIGamepadConfirmButtonDoubleClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UJHNeoUIGamepadConfirmButton*     Btn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_EAC_Ele_C::BndEvt__BPVE_EAC_Ele_BTN_EAC_Ele_K2Node_ComponentBoundEvent_1_JHNeoUIGamepadConfirmButtonDoubleClicked__DelegateSignature(class UJHNeoUIGamepadConfirmButton* Btn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_EAC_Ele_C", "BndEvt__BPVE_EAC_Ele_BTN_EAC_Ele_K2Node_ComponentBoundEvent_1_JHNeoUIGamepadConfirmButtonDoubleClicked__DelegateSignature");

	Params::BPVE_EAC_Ele_C_BndEvt__BPVE_EAC_Ele_BTN_EAC_Ele_K2Node_ComponentBoundEvent_1_JHNeoUIGamepadConfirmButtonDoubleClicked__DelegateSignature Parms{};

	Parms.Btn = Btn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_EAC_Ele.BPVE_EAC_Ele_C.BndEvt__BPVE_EAC_Ele_JHGPCBtn_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UJHNeoUIGamepadConfirmButton*     Btn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_EAC_Ele_C::BndEvt__BPVE_EAC_Ele_JHGPCBtn_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature(class UJHNeoUIGamepadConfirmButton* Btn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_EAC_Ele_C", "BndEvt__BPVE_EAC_Ele_JHGPCBtn_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature");

	Params::BPVE_EAC_Ele_C_BndEvt__BPVE_EAC_Ele_JHGPCBtn_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature Parms{};

	Parms.Btn = Btn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_EAC_Ele.BPVE_EAC_Ele_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPVE_EAC_Ele_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_EAC_Ele_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
