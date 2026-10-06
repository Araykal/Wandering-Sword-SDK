#pragma once



// Package: BPMV_Zimai_Yin

#include "Basic.hpp"

#include "BPMV_Zimai_Yin_classes.hpp"
#include "BPMV_Zimai_Yin_parameters.hpp"


SDK_NAMESPACE_START

// Function BPMV_Zimai_Yin.BPMV_Zimai_Yin_C.ExecuteUbergraph_BPMV_Zimai_Yin
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPMV_Zimai_Yin_C::ExecuteUbergraph_BPMV_Zimai_Yin(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_Zimai_Yin_C", "ExecuteUbergraph_BPMV_Zimai_Yin");

	Params::BPMV_Zimai_Yin_C_ExecuteUbergraph_BPMV_Zimai_Yin Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_Zimai_Yin.BPMV_Zimai_Yin_C.EVT_VisualConstructOnce
// (Event, Public, BlueprintEvent)

void UBPMV_Zimai_Yin_C::EVT_VisualConstructOnce()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_Zimai_Yin_C", "EVT_VisualConstructOnce");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_Zimai_Yin.BPMV_Zimai_Yin_C.EVT_SetupHierarchy
// (Event, Public, BlueprintEvent)

void UBPMV_Zimai_Yin_C::EVT_SetupHierarchy()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_Zimai_Yin_C", "EVT_SetupHierarchy");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_Zimai_Yin.BPMV_Zimai_Yin_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPMV_Zimai_Yin_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_Zimai_Yin_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_Zimai_Yin.BPMV_Zimai_Yin_C.FocusWidgetForScenario_Direct
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// ENeoUIFocusWidgetScenario               scenario                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FNeoUIFocusWidgetParam&    Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UBPMV_Zimai_Yin_C::FocusWidgetForScenario_Direct(ENeoUIFocusWidgetScenario scenario, const struct FNeoUIFocusWidgetParam& Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_Zimai_Yin_C", "FocusWidgetForScenario_Direct");

	Params::BPMV_Zimai_Yin_C_FocusWidgetForScenario_Direct Parms{};

	Parms.scenario = scenario;
	Parms.Param = std::move(Param);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


SDK_NAMESPACE_END
