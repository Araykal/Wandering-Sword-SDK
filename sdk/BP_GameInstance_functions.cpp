#pragma once



// Package: BP_GameInstance

#include "Basic.hpp"

#include "BP_GameInstance_classes.hpp"
#include "BP_GameInstance_parameters.hpp"


SDK_NAMESPACE_START

// Function BP_GameInstance.BP_GameInstance_C.ExecuteUbergraph_BP_GameInstance
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_GameInstance_C::ExecuteUbergraph_BP_GameInstance(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameInstance_C", "ExecuteUbergraph_BP_GameInstance");

	Params::BP_GameInstance_C_ExecuteUbergraph_BP_GameInstance Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GameInstance.BP_GameInstance_C.ReceiveShutdown
// (Event, Public, BlueprintEvent)

void UBP_GameInstance_C::ReceiveShutdown()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameInstance_C", "ReceiveShutdown");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GameInstance.BP_GameInstance_C.ReceiveInit
// (Event, Public, BlueprintEvent)

void UBP_GameInstance_C::ReceiveInit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameInstance_C", "ReceiveInit");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
