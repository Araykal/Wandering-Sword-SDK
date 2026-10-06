#pragma once



// Package: BP_Target

#include "Basic.hpp"

#include "BP_Target_classes.hpp"
#include "BP_Target_parameters.hpp"


SDK_NAMESPACE_START

// Function BP_Target.BP_Target_C.ExecuteUbergraph_BP_Target
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Target_C::ExecuteUbergraph_BP_Target(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Target_C", "ExecuteUbergraph_BP_Target");

	Params::BP_Target_C_ExecuteUbergraph_BP_Target Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Target.BP_Target_C.ToggleState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bOn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Target_C::ToggleState(bool bOn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Target_C", "ToggleState");

	Params::BP_Target_C_ToggleState Parms{};

	Parms.bOn = bOn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Target.BP_Target_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Target_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Target_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Target.BP_Target_C.CheckNoTagArr
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool*                                   NewParam                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Target_C::CheckNoTagArr(bool* NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Target_C", "CheckNoTagArr");

	Params::BP_Target_C_CheckNoTagArr Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;
}


SDK_NAMESPACE_END
