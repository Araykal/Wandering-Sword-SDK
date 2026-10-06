#pragma once



// Package: BPMV_Battle_Tower

#include "Basic.hpp"

#include "BPMV_Battle_Tower_classes.hpp"
#include "BPMV_Battle_Tower_parameters.hpp"


SDK_NAMESPACE_START

// Function BPMV_Battle_Tower.BPMV_Battle_Tower_C.ExecuteUbergraph_BPMV_Battle_Tower
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPMV_Battle_Tower_C::ExecuteUbergraph_BPMV_Battle_Tower(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_Battle_Tower_C", "ExecuteUbergraph_BPMV_Battle_Tower");

	Params::BPMV_Battle_Tower_C_ExecuteUbergraph_BPMV_Battle_Tower Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_Battle_Tower.BPMV_Battle_Tower_C.EVT_VisualShow
// (Event, Public, BlueprintEvent)

void UBPMV_Battle_Tower_C::EVT_VisualShow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_Battle_Tower_C", "EVT_VisualShow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_Battle_Tower.BPMV_Battle_Tower_C.EVT_UpdateTowerAimStatus
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                                   aimIndex                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    successful                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPMV_Battle_Tower_C::EVT_UpdateTowerAimStatus(int32 aimIndex, bool successful)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_Battle_Tower_C", "EVT_UpdateTowerAimStatus");

	Params::BPMV_Battle_Tower_C_EVT_UpdateTowerAimStatus Parms{};

	Parms.aimIndex = aimIndex;
	Parms.successful = successful;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_Battle_Tower.BPMV_Battle_Tower_C.EVT_RenderView
// (Event, Public, BlueprintEvent)

void UBPMV_Battle_Tower_C::EVT_RenderView()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_Battle_Tower_C", "EVT_RenderView");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_Battle_Tower.BPMV_Battle_Tower_C.EVT_SetupHierarchy
// (Event, Public, BlueprintEvent)

void UBPMV_Battle_Tower_C::EVT_SetupHierarchy()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_Battle_Tower_C", "EVT_SetupHierarchy");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
