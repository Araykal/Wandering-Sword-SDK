#pragma once



// Package: BPCMP_JHBtn_T1

#include "Basic.hpp"

#include "BPCMP_JHBtn_T1_classes.hpp"
#include "BPCMP_JHBtn_T1_parameters.hpp"


SDK_NAMESPACE_START

// Function BPCMP_JHBtn_T1.BPCMP_JHBtn_T1_C.ExecuteUbergraph_BPCMP_JHBtn_T1
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPCMP_JHBtn_T1_C::ExecuteUbergraph_BPCMP_JHBtn_T1(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPCMP_JHBtn_T1_C", "ExecuteUbergraph_BPCMP_JHBtn_T1");

	Params::BPCMP_JHBtn_T1_C_ExecuteUbergraph_BPCMP_JHBtn_T1 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPCMP_JHBtn_T1.BPCMP_JHBtn_T1_C.BndEvt__BPCMP_JHBtn_T1_BTN_1BTN1TXT_K2Node_ComponentBoundEvent_1_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UJHNeoUIGamepadConfirmButton*     Btn_0                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPCMP_JHBtn_T1_C::BndEvt__BPCMP_JHBtn_T1_BTN_1BTN1TXT_K2Node_ComponentBoundEvent_1_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature(class UJHNeoUIGamepadConfirmButton* Btn_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPCMP_JHBtn_T1_C", "BndEvt__BPCMP_JHBtn_T1_BTN_1BTN1TXT_K2Node_ComponentBoundEvent_1_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature");

	Params::BPCMP_JHBtn_T1_C_BndEvt__BPCMP_JHBtn_T1_BTN_1BTN1TXT_K2Node_ComponentBoundEvent_1_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature Parms{};

	Parms.Btn_0 = Btn_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPCMP_JHBtn_T1.BPCMP_JHBtn_T1_C.BndEvt__BPCMP_JHBtn_T1_BTN_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBPCMP_JHBtn_T1_C::BndEvt__BPCMP_JHBtn_T1_BTN_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPCMP_JHBtn_T1_C", "BndEvt__BPCMP_JHBtn_T1_BTN_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPCMP_JHBtn_T1.BPCMP_JHBtn_T1_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPCMP_JHBtn_T1_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPCMP_JHBtn_T1_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPCMP_JHBtn_T1.BPCMP_JHBtn_T1_C.SetEanbleButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InEnable                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPCMP_JHBtn_T1_C::SetEanbleButton(bool InEnable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPCMP_JHBtn_T1_C", "SetEanbleButton");

	Params::BPCMP_JHBtn_T1_C_SetEanbleButton Parms{};

	Parms.InEnable = InEnable;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
