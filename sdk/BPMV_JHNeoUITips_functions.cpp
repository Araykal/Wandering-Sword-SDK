#pragma once



// Package: BPMV_JHNeoUITips

#include "Basic.hpp"

#include "BPMV_JHNeoUITips_classes.hpp"
#include "BPMV_JHNeoUITips_parameters.hpp"


SDK_NAMESPACE_START

// Function BPMV_JHNeoUITips.BPMV_JHNeoUITips_C.ExecuteUbergraph_BPMV_JHNeoUITips
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPMV_JHNeoUITips_C::ExecuteUbergraph_BPMV_JHNeoUITips(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_JHNeoUITips_C", "ExecuteUbergraph_BPMV_JHNeoUITips");

	Params::BPMV_JHNeoUITips_C_ExecuteUbergraph_BPMV_JHNeoUITips Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_JHNeoUITips.BPMV_JHNeoUITips_C.EVT_SetupHierarchy
// (Event, Public, BlueprintEvent)

void UBPMV_JHNeoUITips_C::EVT_SetupHierarchy()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_JHNeoUITips_C", "EVT_SetupHierarchy");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
