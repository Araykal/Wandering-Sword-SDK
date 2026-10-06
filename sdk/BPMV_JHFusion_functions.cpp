#pragma once



// Package: BPMV_JHFusion

#include "Basic.hpp"

#include "BPMV_JHFusion_classes.hpp"
#include "BPMV_JHFusion_parameters.hpp"


SDK_NAMESPACE_START

// Function BPMV_JHFusion.BPMV_JHFusion_C.ExecuteUbergraph_BPMV_JHFusion
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPMV_JHFusion_C::ExecuteUbergraph_BPMV_JHFusion(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_JHFusion_C", "ExecuteUbergraph_BPMV_JHFusion");

	Params::BPMV_JHFusion_C_ExecuteUbergraph_BPMV_JHFusion Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_JHFusion.BPMV_JHFusion_C.EVT_VisualShow
// (Event, Public, BlueprintEvent)

void UBPMV_JHFusion_C::EVT_VisualShow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_JHFusion_C", "EVT_VisualShow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_JHFusion.BPMV_JHFusion_C.EVT_SyncWithGlobalInputMode
// (Event, Public, BlueprintEvent)

void UBPMV_JHFusion_C::EVT_SyncWithGlobalInputMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_JHFusion_C", "EVT_SyncWithGlobalInputMode");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_JHFusion.BPMV_JHFusion_C.EVT_RenderView
// (Event, Public, BlueprintEvent)

void UBPMV_JHFusion_C::EVT_RenderView()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_JHFusion_C", "EVT_RenderView");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_JHFusion.BPMV_JHFusion_C.EVT_SetupSubModuleSlots
// (Event, Public, BlueprintEvent)

void UBPMV_JHFusion_C::EVT_SetupSubModuleSlots()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_JHFusion_C", "EVT_SetupSubModuleSlots");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
