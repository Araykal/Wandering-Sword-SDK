#pragma once



// Package: BPMV_GMCommand

#include "Basic.hpp"

#include "BPMV_GMCommand_classes.hpp"
#include "BPMV_GMCommand_parameters.hpp"


SDK_NAMESPACE_START

// Function BPMV_GMCommand.BPMV_GMCommand_C.ExecuteUbergraph_BPMV_GMCommand
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPMV_GMCommand_C::ExecuteUbergraph_BPMV_GMCommand(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_GMCommand_C", "ExecuteUbergraph_BPMV_GMCommand");

	Params::BPMV_GMCommand_C_ExecuteUbergraph_BPMV_GMCommand Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_GMCommand.BPMV_GMCommand_C.BndEvt__BPMV_GMCommand_BTN_EXIT_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBPMV_GMCommand_C::BndEvt__BPMV_GMCommand_BTN_EXIT_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_GMCommand_C", "BndEvt__BPMV_GMCommand_BTN_EXIT_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_GMCommand.BPMV_GMCommand_C.EVT_VisualShow
// (Event, Public, BlueprintEvent)

void UBPMV_GMCommand_C::EVT_VisualShow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_GMCommand_C", "EVT_VisualShow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_GMCommand.BPMV_GMCommand_C.BndEvt__Text_K2Node_ComponentBoundEvent_0_OnEditableTextCommittedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// const class FText&                      Text                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// ETextCommit                             CommitMethod                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPMV_GMCommand_C::BndEvt__Text_K2Node_ComponentBoundEvent_0_OnEditableTextCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_GMCommand_C", "BndEvt__Text_K2Node_ComponentBoundEvent_0_OnEditableTextCommittedEvent__DelegateSignature");

	Params::BPMV_GMCommand_C_BndEvt__Text_K2Node_ComponentBoundEvent_0_OnEditableTextCommittedEvent__DelegateSignature Parms{};

	Parms.Text = std::move(Text);
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_GMCommand.BPMV_GMCommand_C.OnSuccess_BDBA5095439BB6872F7DD2A2D4D1A0D8
// (BlueprintCallable, BlueprintEvent)

void UBPMV_GMCommand_C::OnSuccess_BDBA5095439BB6872F7DD2A2D4D1A0D8()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_GMCommand_C", "OnSuccess_BDBA5095439BB6872F7DD2A2D4D1A0D8");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_GMCommand.BPMV_GMCommand_C.OnSuccess_54B378F542C0B7DDA9541D8879593A88
// (BlueprintCallable, BlueprintEvent)

void UBPMV_GMCommand_C::OnSuccess_54B378F542C0B7DDA9541D8879593A88()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_GMCommand_C", "OnSuccess_54B378F542C0B7DDA9541D8879593A88");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_GMCommand.BPMV_GMCommand_C.OnSuccess_5A855CEE488055762FED2583DD74410E
// (BlueprintCallable, BlueprintEvent)

void UBPMV_GMCommand_C::OnSuccess_5A855CEE488055762FED2583DD74410E()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_GMCommand_C", "OnSuccess_5A855CEE488055762FED2583DD74410E");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_GMCommand.BPMV_GMCommand_C.AddNPCSkill
// (Public, BlueprintCallable, BlueprintEvent)

void UBPMV_GMCommand_C::AddNPCSkill()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_GMCommand_C", "AddNPCSkill");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_GMCommand.BPMV_GMCommand_C.AddSkill
// (Public, BlueprintCallable, BlueprintEvent)

void UBPMV_GMCommand_C::AddSkill()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_GMCommand_C", "AddSkill");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
