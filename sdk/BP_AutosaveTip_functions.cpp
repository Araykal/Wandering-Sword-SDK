#pragma once



// Package: BP_AutosaveTip

#include "Basic.hpp"

#include "BP_AutosaveTip_classes.hpp"
#include "BP_AutosaveTip_parameters.hpp"


SDK_NAMESPACE_START

// Function BP_AutosaveTip.BP_AutosaveTip_C.ExecuteUbergraph_BP_AutosaveTip
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AutosaveTip_C::ExecuteUbergraph_BP_AutosaveTip(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AutosaveTip_C", "ExecuteUbergraph_BP_AutosaveTip");

	Params::BP_AutosaveTip_C_ExecuteUbergraph_BP_AutosaveTip Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AutosaveTip.BP_AutosaveTip_C.EVT_StartAnim
// (Event, Public, BlueprintEvent)

void UBP_AutosaveTip_C::EVT_StartAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AutosaveTip_C", "EVT_StartAnim");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AutosaveTip.BP_AutosaveTip_C.SequenceEvent_0
// (BlueprintCallable, BlueprintEvent)

void UBP_AutosaveTip_C::SequenceEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AutosaveTip_C", "SequenceEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AutosaveTip.BP_AutosaveTip_C.SequenceEvent__ENTRYPOINTBP_AutosaveTip_0
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_AutosaveTip_C::SequenceEvent__ENTRYPOINTBP_AutosaveTip_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AutosaveTip_C", "SequenceEvent__ENTRYPOINTBP_AutosaveTip_0");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
