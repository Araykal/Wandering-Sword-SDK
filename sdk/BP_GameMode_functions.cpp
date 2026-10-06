#pragma once



// Package: BP_GameMode

#include "Basic.hpp"

#include "BP_GameMode_classes.hpp"
#include "BP_GameMode_parameters.hpp"


SDK_NAMESPACE_START

// Function BP_GameMode.BP_GameMode_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_GameMode_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameMode_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GameMode.BP_GameMode_C.ExecuteUbergraph_BP_GameMode
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GameMode_C::ExecuteUbergraph_BP_GameMode(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameMode_C", "ExecuteUbergraph_BP_GameMode");

	Params::BP_GameMode_C_ExecuteUbergraph_BP_GameMode Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
