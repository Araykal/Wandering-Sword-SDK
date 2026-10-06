#pragma once



// Package: BPMV_SkillCoreTip

#include "Basic.hpp"

#include "BPMV_SkillCoreTip_classes.hpp"
#include "BPMV_SkillCoreTip_parameters.hpp"


SDK_NAMESPACE_START

// Function BPMV_SkillCoreTip.BPMV_SkillCoreTip_C.ExecuteUbergraph_BPMV_SkillCoreTip
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPMV_SkillCoreTip_C::ExecuteUbergraph_BPMV_SkillCoreTip(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_SkillCoreTip_C", "ExecuteUbergraph_BPMV_SkillCoreTip");

	Params::BPMV_SkillCoreTip_C_ExecuteUbergraph_BPMV_SkillCoreTip Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_SkillCoreTip.BPMV_SkillCoreTip_C.EVT_SetupHierarchy
// (Event, Public, BlueprintEvent)

void UBPMV_SkillCoreTip_C::EVT_SetupHierarchy()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_SkillCoreTip_C", "EVT_SetupHierarchy");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_SkillCoreTip.BPMV_SkillCoreTip_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPMV_SkillCoreTip_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_SkillCoreTip_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
