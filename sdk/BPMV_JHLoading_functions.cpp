#pragma once



// Package: BPMV_JHLoading

#include "Basic.hpp"

#include "BPMV_JHLoading_classes.hpp"
#include "BPMV_JHLoading_parameters.hpp"


SDK_NAMESPACE_START

// Function BPMV_JHLoading.BPMV_JHLoading_C.ExecuteUbergraph_BPMV_JHLoading
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPMV_JHLoading_C::ExecuteUbergraph_BPMV_JHLoading(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_JHLoading_C", "ExecuteUbergraph_BPMV_JHLoading");

	Params::BPMV_JHLoading_C_ExecuteUbergraph_BPMV_JHLoading Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_JHLoading.BPMV_JHLoading_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPMV_JHLoading_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_JHLoading_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
