#pragma once



// Package: BPMV_GHPropTip

#include "Basic.hpp"

#include "BPMV_GHPropTip_classes.hpp"
#include "BPMV_GHPropTip_parameters.hpp"


SDK_NAMESPACE_START

// Function BPMV_GHPropTip.BPMV_GHPropTip_C.ExecuteUbergraph_BPMV_GHPropTip
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPMV_GHPropTip_C::ExecuteUbergraph_BPMV_GHPropTip(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_GHPropTip_C", "ExecuteUbergraph_BPMV_GHPropTip");

	Params::BPMV_GHPropTip_C_ExecuteUbergraph_BPMV_GHPropTip Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_GHPropTip.BPMV_GHPropTip_C.EVT_SetupHierarchy
// (Event, Public, BlueprintEvent)

void UBPMV_GHPropTip_C::EVT_SetupHierarchy()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_GHPropTip_C", "EVT_SetupHierarchy");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
