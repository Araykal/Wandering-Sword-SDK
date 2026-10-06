#pragma once



// Package: BPCMP_EAD_Confirm

#include "Basic.hpp"

#include "BPCMP_EAD_Confirm_classes.hpp"
#include "BPCMP_EAD_Confirm_parameters.hpp"


SDK_NAMESPACE_START

// Function BPCMP_EAD_Confirm.BPCMP_EAD_Confirm_C.ExecuteUbergraph_BPCMP_EAD_Confirm
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPCMP_EAD_Confirm_C::ExecuteUbergraph_BPCMP_EAD_Confirm(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPCMP_EAD_Confirm_C", "ExecuteUbergraph_BPCMP_EAD_Confirm");

	Params::BPCMP_EAD_Confirm_C_ExecuteUbergraph_BPCMP_EAD_Confirm Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPCMP_EAD_Confirm.BPCMP_EAD_Confirm_C.BndEvt__BPCMP_EAD_Confirm_BTN_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBPCMP_EAD_Confirm_C::BndEvt__BPCMP_EAD_Confirm_BTN_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPCMP_EAD_Confirm_C", "BndEvt__BPCMP_EAD_Confirm_BTN_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPCMP_EAD_Confirm.BPCMP_EAD_Confirm_C.BndEvt__BPCMP_EAD_Confirm_JHGPCBtn_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UJHNeoUIGamepadConfirmButton*     Btn_0                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPCMP_EAD_Confirm_C::BndEvt__BPCMP_EAD_Confirm_JHGPCBtn_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature(class UJHNeoUIGamepadConfirmButton* Btn_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPCMP_EAD_Confirm_C", "BndEvt__BPCMP_EAD_Confirm_JHGPCBtn_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature");

	Params::BPCMP_EAD_Confirm_C_BndEvt__BPCMP_EAD_Confirm_JHGPCBtn_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature Parms{};

	Parms.Btn_0 = Btn_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPCMP_EAD_Confirm.BPCMP_EAD_Confirm_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPCMP_EAD_Confirm_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPCMP_EAD_Confirm_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
