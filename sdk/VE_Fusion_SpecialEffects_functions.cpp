#pragma once



// Package: VE_Fusion_SpecialEffects

#include "Basic.hpp"

#include "VE_Fusion_SpecialEffects_classes.hpp"
#include "VE_Fusion_SpecialEffects_parameters.hpp"


SDK_NAMESPACE_START

// Function VE_Fusion_SpecialEffects.VE_Fusion_SpecialEffects_C.ExecuteUbergraph_VE_Fusion_SpecialEffects
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UVE_Fusion_SpecialEffects_C::ExecuteUbergraph_VE_Fusion_SpecialEffects(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VE_Fusion_SpecialEffects_C", "ExecuteUbergraph_VE_Fusion_SpecialEffects");

	Params::VE_Fusion_SpecialEffects_C_ExecuteUbergraph_VE_Fusion_SpecialEffects Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function VE_Fusion_SpecialEffects.VE_Fusion_SpecialEffects_C.EVT_SetupHierarchy
// (Event, Public, BlueprintEvent)

void UVE_Fusion_SpecialEffects_C::EVT_SetupHierarchy()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VE_Fusion_SpecialEffects_C", "EVT_SetupHierarchy");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
