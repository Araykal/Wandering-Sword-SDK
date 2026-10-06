#pragma once



// Package: VE_Fusion_Probability

#include "Basic.hpp"

#include "VE_Fusion_Probability_classes.hpp"
#include "VE_Fusion_Probability_parameters.hpp"


SDK_NAMESPACE_START

// Function VE_Fusion_Probability.VE_Fusion_Probability_C.ExecuteUbergraph_VE_Fusion_Probability
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UVE_Fusion_Probability_C::ExecuteUbergraph_VE_Fusion_Probability(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VE_Fusion_Probability_C", "ExecuteUbergraph_VE_Fusion_Probability");

	Params::VE_Fusion_Probability_C_ExecuteUbergraph_VE_Fusion_Probability Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function VE_Fusion_Probability.VE_Fusion_Probability_C.EVT_SetupHierarchy
// (Event, Public, BlueprintEvent)

void UVE_Fusion_Probability_C::EVT_SetupHierarchy()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VE_Fusion_Probability_C", "EVT_SetupHierarchy");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
