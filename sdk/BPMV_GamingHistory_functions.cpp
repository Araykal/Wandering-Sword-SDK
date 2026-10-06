#pragma once



// Package: BPMV_GamingHistory

#include "Basic.hpp"

#include "BPMV_GamingHistory_classes.hpp"
#include "BPMV_GamingHistory_parameters.hpp"


SDK_NAMESPACE_START

// Function BPMV_GamingHistory.BPMV_GamingHistory_C.ExecuteUbergraph_BPMV_GamingHistory
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPMV_GamingHistory_C::ExecuteUbergraph_BPMV_GamingHistory(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_GamingHistory_C", "ExecuteUbergraph_BPMV_GamingHistory");

	Params::BPMV_GamingHistory_C_ExecuteUbergraph_BPMV_GamingHistory Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_GamingHistory.BPMV_GamingHistory_C.EVT_RenderView
// (Event, Public, BlueprintEvent)

void UBPMV_GamingHistory_C::EVT_RenderView()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_GamingHistory_C", "EVT_RenderView");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_GamingHistory.BPMV_GamingHistory_C.EVT_SyncWithGlobalInputMode
// (Event, Public, BlueprintEvent)

void UBPMV_GamingHistory_C::EVT_SyncWithGlobalInputMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_GamingHistory_C", "EVT_SyncWithGlobalInputMode");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_GamingHistory.BPMV_GamingHistory_C.EVT_VisualShow
// (Event, Public, BlueprintEvent)

void UBPMV_GamingHistory_C::EVT_VisualShow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_GamingHistory_C", "EVT_VisualShow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_GamingHistory.BPMV_GamingHistory_C.EVT_SetupHierarchy
// (Event, Public, BlueprintEvent)

void UBPMV_GamingHistory_C::EVT_SetupHierarchy()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_GamingHistory_C", "EVT_SetupHierarchy");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_GamingHistory.BPMV_GamingHistory_C.EVT_SetupSubModuleSlots
// (Event, Public, BlueprintEvent)

void UBPMV_GamingHistory_C::EVT_SetupSubModuleSlots()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_GamingHistory_C", "EVT_SetupSubModuleSlots");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_GamingHistory.BPMV_GamingHistory_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPMV_GamingHistory_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_GamingHistory_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_GamingHistory.BPMV_GamingHistory_C.FocusWidgetForScenario_Direct
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// ENeoUIFocusWidgetScenario               scenario                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FNeoUIFocusWidgetParam&    Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UBPMV_GamingHistory_C::FocusWidgetForScenario_Direct(ENeoUIFocusWidgetScenario scenario, const struct FNeoUIFocusWidgetParam& Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_GamingHistory_C", "FocusWidgetForScenario_Direct");

	Params::BPMV_GamingHistory_C_FocusWidgetForScenario_Direct Parms{};

	Parms.scenario = scenario;
	Parms.Param = std::move(Param);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


SDK_NAMESPACE_END
