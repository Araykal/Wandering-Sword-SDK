#pragma once



// Package: BP_BackpackFilterLine

#include "Basic.hpp"

#include "BP_BackpackFilterLine_classes.hpp"
#include "BP_BackpackFilterLine_parameters.hpp"


SDK_NAMESPACE_START

// Function BP_BackpackFilterLine.BP_BackpackFilterLine_C.ExecuteUbergraph_BP_BackpackFilterLine
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_BackpackFilterLine_C::ExecuteUbergraph_BP_BackpackFilterLine(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BackpackFilterLine_C", "ExecuteUbergraph_BP_BackpackFilterLine");

	Params::BP_BackpackFilterLine_C_ExecuteUbergraph_BP_BackpackFilterLine Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BackpackFilterLine.BP_BackpackFilterLine_C.EVT_SetupHierarchy
// (Event, Public, BlueprintEvent)

void UBP_BackpackFilterLine_C::EVT_SetupHierarchy()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BackpackFilterLine_C", "EVT_SetupHierarchy");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
