#pragma once



// Package: BPMV_JHConfigVideo

#include "Basic.hpp"

#include "BPMV_JHConfigVideo_classes.hpp"
#include "BPMV_JHConfigVideo_parameters.hpp"


SDK_NAMESPACE_START

// Function BPMV_JHConfigVideo.BPMV_JHConfigVideo_C.ExecuteUbergraph_BPMV_JHConfigVideo
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPMV_JHConfigVideo_C::ExecuteUbergraph_BPMV_JHConfigVideo(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_JHConfigVideo_C", "ExecuteUbergraph_BPMV_JHConfigVideo");

	Params::BPMV_JHConfigVideo_C_ExecuteUbergraph_BPMV_JHConfigVideo Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_JHConfigVideo.BPMV_JHConfigVideo_C.EVT_AutoFocusForTabClick
// (Event, Public, BlueprintEvent)

void UBPMV_JHConfigVideo_C::EVT_AutoFocusForTabClick()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_JHConfigVideo_C", "EVT_AutoFocusForTabClick");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_JHConfigVideo.BPMV_JHConfigVideo_C.EVT_SetupHierarchy
// (Event, Public, BlueprintEvent)

void UBPMV_JHConfigVideo_C::EVT_SetupHierarchy()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_JHConfigVideo_C", "EVT_SetupHierarchy");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_JHConfigVideo.BPMV_JHConfigVideo_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPMV_JHConfigVideo_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_JHConfigVideo_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_JHConfigVideo.BPMV_JHConfigVideo_C.FocusWidgetForScenario_Direct
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// ENeoUIFocusWidgetScenario               scenario                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FNeoUIFocusWidgetParam&    Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UBPMV_JHConfigVideo_C::FocusWidgetForScenario_Direct(ENeoUIFocusWidgetScenario scenario, const struct FNeoUIFocusWidgetParam& Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_JHConfigVideo_C", "FocusWidgetForScenario_Direct");

	Params::BPMV_JHConfigVideo_C_FocusWidgetForScenario_Direct Parms{};

	Parms.scenario = scenario;
	Parms.Param = std::move(Param);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


SDK_NAMESPACE_END
