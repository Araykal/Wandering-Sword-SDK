#pragma once



// Package: BPMV_JHConfigOthers

#include "Basic.hpp"

#include "BPMV_JHConfigOthers_classes.hpp"
#include "BPMV_JHConfigOthers_parameters.hpp"


SDK_NAMESPACE_START

// Function BPMV_JHConfigOthers.BPMV_JHConfigOthers_C.ExecuteUbergraph_BPMV_JHConfigOthers
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPMV_JHConfigOthers_C::ExecuteUbergraph_BPMV_JHConfigOthers(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_JHConfigOthers_C", "ExecuteUbergraph_BPMV_JHConfigOthers");

	Params::BPMV_JHConfigOthers_C_ExecuteUbergraph_BPMV_JHConfigOthers Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_JHConfigOthers.BPMV_JHConfigOthers_C.EVT_AutoFocusForTabClick
// (Event, Public, BlueprintEvent)

void UBPMV_JHConfigOthers_C::EVT_AutoFocusForTabClick()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_JHConfigOthers_C", "EVT_AutoFocusForTabClick");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_JHConfigOthers.BPMV_JHConfigOthers_C.EVT_SetupHierarchy
// (Event, Public, BlueprintEvent)

void UBPMV_JHConfigOthers_C::EVT_SetupHierarchy()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_JHConfigOthers_C", "EVT_SetupHierarchy");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_JHConfigOthers.BPMV_JHConfigOthers_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPMV_JHConfigOthers_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_JHConfigOthers_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_JHConfigOthers.BPMV_JHConfigOthers_C.FocusWidgetForScenario_Direct
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// ENeoUIFocusWidgetScenario               scenario                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FNeoUIFocusWidgetParam&    Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UBPMV_JHConfigOthers_C::FocusWidgetForScenario_Direct(ENeoUIFocusWidgetScenario scenario, const struct FNeoUIFocusWidgetParam& Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_JHConfigOthers_C", "FocusWidgetForScenario_Direct");

	Params::BPMV_JHConfigOthers_C_FocusWidgetForScenario_Direct Parms{};

	Parms.scenario = scenario;
	Parms.Param = std::move(Param);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


SDK_NAMESPACE_END
