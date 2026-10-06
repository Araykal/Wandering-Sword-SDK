#pragma once



// Package: BPMV_JHGHC_Skill

#include "Basic.hpp"

#include "BPMV_JHGHC_Skill_classes.hpp"
#include "BPMV_JHGHC_Skill_parameters.hpp"


SDK_NAMESPACE_START

// Function BPMV_JHGHC_Skill.BPMV_JHGHC_Skill_C.ExecuteUbergraph_BPMV_JHGHC_Skill
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPMV_JHGHC_Skill_C::ExecuteUbergraph_BPMV_JHGHC_Skill(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_JHGHC_Skill_C", "ExecuteUbergraph_BPMV_JHGHC_Skill");

	Params::BPMV_JHGHC_Skill_C_ExecuteUbergraph_BPMV_JHGHC_Skill Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_JHGHC_Skill.BPMV_JHGHC_Skill_C.EVT_FocusWidgetForScenario
// (Event, Public, BlueprintEvent)
// Parameters:
// ENeoUIFocusWidgetScenario               scenario                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FNeoUIFocusWidgetParam&    Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm)

void UBPMV_JHGHC_Skill_C::EVT_FocusWidgetForScenario(ENeoUIFocusWidgetScenario scenario, const struct FNeoUIFocusWidgetParam& Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_JHGHC_Skill_C", "EVT_FocusWidgetForScenario");

	Params::BPMV_JHGHC_Skill_C_EVT_FocusWidgetForScenario Parms{};

	Parms.scenario = scenario;
	Parms.Param = std::move(Param);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_JHGHC_Skill.BPMV_JHGHC_Skill_C.EVT_SetupSubModuleSlots
// (Event, Public, BlueprintEvent)

void UBPMV_JHGHC_Skill_C::EVT_SetupSubModuleSlots()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_JHGHC_Skill_C", "EVT_SetupSubModuleSlots");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_JHGHC_Skill.BPMV_JHGHC_Skill_C.EVT_SetupHierarchy
// (Event, Public, BlueprintEvent)

void UBPMV_JHGHC_Skill_C::EVT_SetupHierarchy()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_JHGHC_Skill_C", "EVT_SetupHierarchy");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_JHGHC_Skill.BPMV_JHGHC_Skill_C.FocusWidgetForScenario_Direct
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// ENeoUIFocusWidgetScenario               scenario                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FNeoUIFocusWidgetParam&    Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UBPMV_JHGHC_Skill_C::FocusWidgetForScenario_Direct(ENeoUIFocusWidgetScenario scenario, const struct FNeoUIFocusWidgetParam& Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_JHGHC_Skill_C", "FocusWidgetForScenario_Direct");

	Params::BPMV_JHGHC_Skill_C_FocusWidgetForScenario_Direct Parms{};

	Parms.scenario = scenario;
	Parms.Param = std::move(Param);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


SDK_NAMESPACE_END
