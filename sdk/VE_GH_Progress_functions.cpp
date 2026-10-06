#pragma once



// Package: VE_GH_Progress

#include "Basic.hpp"

#include "VE_GH_Progress_classes.hpp"
#include "VE_GH_Progress_parameters.hpp"


SDK_NAMESPACE_START

// Function VE_GH_Progress.VE_GH_Progress_C.ExecuteUbergraph_VE_GH_Progress
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UVE_GH_Progress_C::ExecuteUbergraph_VE_GH_Progress(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VE_GH_Progress_C", "ExecuteUbergraph_VE_GH_Progress");

	Params::VE_GH_Progress_C_ExecuteUbergraph_VE_GH_Progress Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function VE_GH_Progress.VE_GH_Progress_C.EVT_RenderView
// (Event, Public, BlueprintEvent)

void UVE_GH_Progress_C::EVT_RenderView()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VE_GH_Progress_C", "EVT_RenderView");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
