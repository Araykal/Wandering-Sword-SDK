#pragma once



// Package: BPMV_ArenaDetailSkill

#include "Basic.hpp"

#include "BPMV_ArenaDetailSkill_classes.hpp"
#include "BPMV_ArenaDetailSkill_parameters.hpp"


SDK_NAMESPACE_START

// Function BPMV_ArenaDetailSkill.BPMV_ArenaDetailSkill_C.ExecuteUbergraph_BPMV_ArenaDetailSkill
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPMV_ArenaDetailSkill_C::ExecuteUbergraph_BPMV_ArenaDetailSkill(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_ArenaDetailSkill_C", "ExecuteUbergraph_BPMV_ArenaDetailSkill");

	Params::BPMV_ArenaDetailSkill_C_ExecuteUbergraph_BPMV_ArenaDetailSkill Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_ArenaDetailSkill.BPMV_ArenaDetailSkill_C.EVT_SetupHierarchy
// (Event, Public, BlueprintEvent)

void UBPMV_ArenaDetailSkill_C::EVT_SetupHierarchy()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_ArenaDetailSkill_C", "EVT_SetupHierarchy");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_ArenaDetailSkill.BPMV_ArenaDetailSkill_C.Navi_GotoLeftList
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EUINavigation                           Navigation_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UBPMV_ArenaDetailSkill_C::Navi_GotoLeftList(EUINavigation Navigation_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_ArenaDetailSkill_C", "Navi_GotoLeftList");

	Params::BPMV_ArenaDetailSkill_C_Navi_GotoLeftList Parms{};

	Parms.Navigation_0 = Navigation_0;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BPMV_ArenaDetailSkill.BPMV_ArenaDetailSkill_C.Navi_GotoRightList
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EUINavigation                           Navigation_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UBPMV_ArenaDetailSkill_C::Navi_GotoRightList(EUINavigation Navigation_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_ArenaDetailSkill_C", "Navi_GotoRightList");

	Params::BPMV_ArenaDetailSkill_C_Navi_GotoRightList Parms{};

	Parms.Navigation_0 = Navigation_0;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


SDK_NAMESPACE_END
