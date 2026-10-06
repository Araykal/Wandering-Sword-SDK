#pragma once



// Package: BPMV_FusionInfo

#include "Basic.hpp"

#include "BPMV_FusionInfo_classes.hpp"
#include "BPMV_FusionInfo_parameters.hpp"


SDK_NAMESPACE_START

// Function BPMV_FusionInfo.BPMV_FusionInfo_C.ExecuteUbergraph_BPMV_FusionInfo
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPMV_FusionInfo_C::ExecuteUbergraph_BPMV_FusionInfo(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_FusionInfo_C", "ExecuteUbergraph_BPMV_FusionInfo");

	Params::BPMV_FusionInfo_C_ExecuteUbergraph_BPMV_FusionInfo Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_FusionInfo.BPMV_FusionInfo_C.EVT_RenderView
// (Event, Public, BlueprintEvent)

void UBPMV_FusionInfo_C::EVT_RenderView()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_FusionInfo_C", "EVT_RenderView");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_FusionInfo.BPMV_FusionInfo_C.EVT_SetupHierarchy
// (Event, Public, BlueprintEvent)

void UBPMV_FusionInfo_C::EVT_SetupHierarchy()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_FusionInfo_C", "EVT_SetupHierarchy");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
