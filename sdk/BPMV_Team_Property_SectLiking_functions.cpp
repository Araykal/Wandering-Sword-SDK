#pragma once



// Package: BPMV_Team_Property_SectLiking

#include "Basic.hpp"

#include "BPMV_Team_Property_SectLiking_classes.hpp"
#include "BPMV_Team_Property_SectLiking_parameters.hpp"


SDK_NAMESPACE_START

// Function BPMV_Team_Property_SectLiking.BPMV_Team_Property_SectLiking_C.ExecuteUbergraph_BPMV_Team_Property_SectLiking
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPMV_Team_Property_SectLiking_C::ExecuteUbergraph_BPMV_Team_Property_SectLiking(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_Team_Property_SectLiking_C", "ExecuteUbergraph_BPMV_Team_Property_SectLiking");

	Params::BPMV_Team_Property_SectLiking_C_ExecuteUbergraph_BPMV_Team_Property_SectLiking Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_Team_Property_SectLiking.BPMV_Team_Property_SectLiking_C.EVT_SetupHierarchy
// (Event, Public, BlueprintEvent)

void UBPMV_Team_Property_SectLiking_C::EVT_SetupHierarchy()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_Team_Property_SectLiking_C", "EVT_SetupHierarchy");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
