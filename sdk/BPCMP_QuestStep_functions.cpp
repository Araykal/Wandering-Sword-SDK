#pragma once



// Package: BPCMP_QuestStep

#include "Basic.hpp"

#include "BPCMP_QuestStep_classes.hpp"
#include "BPCMP_QuestStep_parameters.hpp"


SDK_NAMESPACE_START

// Function BPCMP_QuestStep.BPCMP_QuestStep_C.ExecuteUbergraph_BPCMP_QuestStep
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPCMP_QuestStep_C::ExecuteUbergraph_BPCMP_QuestStep(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPCMP_QuestStep_C", "ExecuteUbergraph_BPCMP_QuestStep");

	Params::BPCMP_QuestStep_C_ExecuteUbergraph_BPCMP_QuestStep Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPCMP_QuestStep.BPCMP_QuestStep_C.BndEvt__BPCMP_QuestStep_BTN_QuestStep_K2Node_ComponentBoundEvent_2_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UJHNeoUIGamepadConfirmButton*     Btn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPCMP_QuestStep_C::BndEvt__BPCMP_QuestStep_BTN_QuestStep_K2Node_ComponentBoundEvent_2_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature(class UJHNeoUIGamepadConfirmButton* Btn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPCMP_QuestStep_C", "BndEvt__BPCMP_QuestStep_BTN_QuestStep_K2Node_ComponentBoundEvent_2_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature");

	Params::BPCMP_QuestStep_C_BndEvt__BPCMP_QuestStep_BTN_QuestStep_K2Node_ComponentBoundEvent_2_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature Parms{};

	Parms.Btn = Btn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPCMP_QuestStep.BPCMP_QuestStep_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPCMP_QuestStep_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPCMP_QuestStep_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPCMP_QuestStep.BPCMP_QuestStep_C.BndEvt__BPCMP_QuestStep_BTN_Fold_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBPCMP_QuestStep_C::BndEvt__BPCMP_QuestStep_BTN_Fold_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPCMP_QuestStep_C", "BndEvt__BPCMP_QuestStep_BTN_Fold_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPCMP_QuestStep.BPCMP_QuestStep_C.EVT_RenderView
// (Event, Public, BlueprintEvent)

void UBPCMP_QuestStep_C::EVT_RenderView()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPCMP_QuestStep_C", "EVT_RenderView");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPCMP_QuestStep.BPCMP_QuestStep_C.BndEvt__BPCMP_QuestStep_BTN_Unfold_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBPCMP_QuestStep_C::BndEvt__BPCMP_QuestStep_BTN_Unfold_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPCMP_QuestStep_C", "BndEvt__BPCMP_QuestStep_BTN_Unfold_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
