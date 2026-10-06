#pragma once



// Package: WBP_GatherProgressBar

#include "Basic.hpp"

#include "WBP_GatherProgressBar_classes.hpp"
#include "WBP_GatherProgressBar_parameters.hpp"


SDK_NAMESPACE_START

// Function WBP_GatherProgressBar.WBP_GatherProgressBar_C.ExecuteUbergraph_WBP_GatherProgressBar
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GatherProgressBar_C::ExecuteUbergraph_WBP_GatherProgressBar(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GatherProgressBar_C", "ExecuteUbergraph_WBP_GatherProgressBar");

	Params::WBP_GatherProgressBar_C_ExecuteUbergraph_WBP_GatherProgressBar Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_GatherProgressBar.WBP_GatherProgressBar_C.HandlePercentChange
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   PercentValue                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GatherProgressBar_C::HandlePercentChange(float PercentValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GatherProgressBar_C", "HandlePercentChange");

	Params::WBP_GatherProgressBar_C_HandlePercentChange Parms{};

	Parms.PercentValue = PercentValue;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
