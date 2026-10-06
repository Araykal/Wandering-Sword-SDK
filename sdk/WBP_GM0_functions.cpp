#pragma once



// Package: WBP_GM0

#include "Basic.hpp"

#include "WBP_GM0_classes.hpp"
#include "WBP_GM0_parameters.hpp"


SDK_NAMESPACE_START

// Function WBP_GM0.WBP_GM0_C.ExecuteUbergraph_WBP_GM0
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GM0_C::ExecuteUbergraph_WBP_GM0(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GM0_C", "ExecuteUbergraph_WBP_GM0");

	Params::WBP_GM0_C_ExecuteUbergraph_WBP_GM0 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_GM0.WBP_GM0_C.BndEvt__Text_K2Node_ComponentBoundEvent_0_OnEditableTextCommittedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// const class FText&                      Text_0                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// ETextCommit                             CommitMethod                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GM0_C::BndEvt__Text_K2Node_ComponentBoundEvent_0_OnEditableTextCommittedEvent__DelegateSignature(const class FText& Text_0, ETextCommit CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GM0_C", "BndEvt__Text_K2Node_ComponentBoundEvent_0_OnEditableTextCommittedEvent__DelegateSignature");

	Params::WBP_GM0_C_BndEvt__Text_K2Node_ComponentBoundEvent_0_OnEditableTextCommittedEvent__DelegateSignature Parms{};

	Parms.Text_0 = std::move(Text_0);
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_GM0.WBP_GM0_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_GM0_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GM0_C", "PreConstruct");

	Params::WBP_GM0_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_GM0.WBP_GM0_C.OnSuccess_F7F3E96A4CD1B765EE165A9ADE7E2C9B
// (BlueprintCallable, BlueprintEvent)

void UWBP_GM0_C::OnSuccess_F7F3E96A4CD1B765EE165A9ADE7E2C9B()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GM0_C", "OnSuccess_F7F3E96A4CD1B765EE165A9ADE7E2C9B");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_GM0.WBP_GM0_C.OnSuccess_3D6190B041BF3995882FC6AEC4829A8F
// (BlueprintCallable, BlueprintEvent)

void UWBP_GM0_C::OnSuccess_3D6190B041BF3995882FC6AEC4829A8F()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GM0_C", "OnSuccess_3D6190B041BF3995882FC6AEC4829A8F");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
