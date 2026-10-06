#pragma once



// Package: BPMV_ArenaDetailSkill_Column

#include "Basic.hpp"

#include "BPMV_ArenaDetailSkill_Column_classes.hpp"
#include "BPMV_ArenaDetailSkill_Column_parameters.hpp"


SDK_NAMESPACE_START

// Function BPMV_ArenaDetailSkill_Column.BPMV_ArenaDetailSkill_Column_C.ExecuteUbergraph_BPMV_ArenaDetailSkill_Column
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPMV_ArenaDetailSkill_Column_C::ExecuteUbergraph_BPMV_ArenaDetailSkill_Column(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_ArenaDetailSkill_Column_C", "ExecuteUbergraph_BPMV_ArenaDetailSkill_Column");

	Params::BPMV_ArenaDetailSkill_Column_C_ExecuteUbergraph_BPMV_ArenaDetailSkill_Column Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_ArenaDetailSkill_Column.BPMV_ArenaDetailSkill_Column_C.EVT_RenderView
// (Event, Public, BlueprintEvent)

void UBPMV_ArenaDetailSkill_Column_C::EVT_RenderView()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_ArenaDetailSkill_Column_C", "EVT_RenderView");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_ArenaDetailSkill_Column.BPMV_ArenaDetailSkill_Column_C.EVT_SetupHierarchy
// (Event, Public, BlueprintEvent)

void UBPMV_ArenaDetailSkill_Column_C::EVT_SetupHierarchy()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_ArenaDetailSkill_Column_C", "EVT_SetupHierarchy");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_ArenaDetailSkill_Column.BPMV_ArenaDetailSkill_Column_C.DoCustomNavigation_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EUINavigation                           Navigation_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UBPMV_ArenaDetailSkill_Column_C::DoCustomNavigation_0(EUINavigation Navigation_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_ArenaDetailSkill_Column_C", "DoCustomNavigation_0");

	Params::BPMV_ArenaDetailSkill_Column_C_DoCustomNavigation_0 Parms{};

	Parms.Navigation_0 = Navigation_0;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


SDK_NAMESPACE_END
