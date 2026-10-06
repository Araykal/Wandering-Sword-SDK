#pragma once



// Package: BPCMP_Team_BottomBtn

#include "Basic.hpp"

#include "BPCMP_Team_BottomBtn_classes.hpp"
#include "BPCMP_Team_BottomBtn_parameters.hpp"


SDK_NAMESPACE_START

// Function BPCMP_Team_BottomBtn.BPCMP_Team_BottomBtn_C.ExecuteUbergraph_BPCMP_Team_BottomBtn
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPCMP_Team_BottomBtn_C::ExecuteUbergraph_BPCMP_Team_BottomBtn(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPCMP_Team_BottomBtn_C", "ExecuteUbergraph_BPCMP_Team_BottomBtn");

	Params::BPCMP_Team_BottomBtn_C_ExecuteUbergraph_BPCMP_Team_BottomBtn Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPCMP_Team_BottomBtn.BPCMP_Team_BottomBtn_C.BndEvt__BPCMP_Team_BottomBtn_BTN_TeamBottomBtn_K2Node_ComponentBoundEvent_1_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UJHNeoUIGamepadConfirmButton*     Btn_0                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPCMP_Team_BottomBtn_C::BndEvt__BPCMP_Team_BottomBtn_BTN_TeamBottomBtn_K2Node_ComponentBoundEvent_1_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature(class UJHNeoUIGamepadConfirmButton* Btn_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPCMP_Team_BottomBtn_C", "BndEvt__BPCMP_Team_BottomBtn_BTN_TeamBottomBtn_K2Node_ComponentBoundEvent_1_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature");

	Params::BPCMP_Team_BottomBtn_C_BndEvt__BPCMP_Team_BottomBtn_BTN_TeamBottomBtn_K2Node_ComponentBoundEvent_1_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature Parms{};

	Parms.Btn_0 = Btn_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPCMP_Team_BottomBtn.BPCMP_Team_BottomBtn_C.BndEvt__BPCMP_Team_BottomBtn_BTN_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBPCMP_Team_BottomBtn_C::BndEvt__BPCMP_Team_BottomBtn_BTN_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPCMP_Team_BottomBtn_C", "BndEvt__BPCMP_Team_BottomBtn_BTN_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPCMP_Team_BottomBtn.BPCMP_Team_BottomBtn_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPCMP_Team_BottomBtn_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPCMP_Team_BottomBtn_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
