#pragma once



// Package: BPMV_Prime

#include "Basic.hpp"

#include "BPMV_Prime_classes.hpp"
#include "BPMV_Prime_parameters.hpp"


SDK_NAMESPACE_START

// Function BPMV_Prime.BPMV_Prime_C.ExecuteUbergraph_BPMV_Prime
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPMV_Prime_C::ExecuteUbergraph_BPMV_Prime(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_Prime_C", "ExecuteUbergraph_BPMV_Prime");

	Params::BPMV_Prime_C_ExecuteUbergraph_BPMV_Prime Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_Prime.BPMV_Prime_C.EVT_RenderView
// (Event, Public, BlueprintEvent)

void UBPMV_Prime_C::EVT_RenderView()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_Prime_C", "EVT_RenderView");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_Prime.BPMV_Prime_C.EVT_VisualInit
// (Event, Public, BlueprintEvent)

void UBPMV_Prime_C::EVT_VisualInit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_Prime_C", "EVT_VisualInit");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_Prime.BPMV_Prime_C.EVT_SetupSubModuleSlots
// (Event, Public, BlueprintEvent)

void UBPMV_Prime_C::EVT_SetupSubModuleSlots()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_Prime_C", "EVT_SetupSubModuleSlots");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
