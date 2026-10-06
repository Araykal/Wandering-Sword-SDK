#pragma once



// Package: BPMV_Mount

#include "Basic.hpp"

#include "BPMV_Mount_classes.hpp"
#include "BPMV_Mount_parameters.hpp"


SDK_NAMESPACE_START

// Function BPMV_Mount.BPMV_Mount_C.ExecuteUbergraph_BPMV_Mount
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPMV_Mount_C::ExecuteUbergraph_BPMV_Mount(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_Mount_C", "ExecuteUbergraph_BPMV_Mount");

	Params::BPMV_Mount_C_ExecuteUbergraph_BPMV_Mount Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_Mount.BPMV_Mount_C.EVT_FocusWidgetForScenario
// (Event, Public, BlueprintEvent)
// Parameters:
// ENeoUIFocusWidgetScenario               scenario                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FNeoUIFocusWidgetParam&    Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm)

void UBPMV_Mount_C::EVT_FocusWidgetForScenario(ENeoUIFocusWidgetScenario scenario, const struct FNeoUIFocusWidgetParam& Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_Mount_C", "EVT_FocusWidgetForScenario");

	Params::BPMV_Mount_C_EVT_FocusWidgetForScenario Parms{};

	Parms.scenario = scenario;
	Parms.Param = std::move(Param);

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
