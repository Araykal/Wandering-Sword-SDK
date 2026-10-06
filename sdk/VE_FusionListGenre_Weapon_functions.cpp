#pragma once



// Package: VE_FusionListGenre_Weapon

#include "Basic.hpp"

#include "VE_FusionListGenre_Weapon_classes.hpp"
#include "VE_FusionListGenre_Weapon_parameters.hpp"


SDK_NAMESPACE_START

// Function VE_FusionListGenre_Weapon.VE_FusionListGenre_Weapon_C.ExecuteUbergraph_VE_FusionListGenre_Weapon
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UVE_FusionListGenre_Weapon_C::ExecuteUbergraph_VE_FusionListGenre_Weapon(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VE_FusionListGenre_Weapon_C", "ExecuteUbergraph_VE_FusionListGenre_Weapon");

	Params::VE_FusionListGenre_Weapon_C_ExecuteUbergraph_VE_FusionListGenre_Weapon Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function VE_FusionListGenre_Weapon.VE_FusionListGenre_Weapon_C.EVT_SetupHierarchy
// (Event, Public, BlueprintEvent)

void UVE_FusionListGenre_Weapon_C::EVT_SetupHierarchy()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VE_FusionListGenre_Weapon_C", "EVT_SetupHierarchy");

	UObject::ProcessEvent(Func, nullptr);
}


// Function VE_FusionListGenre_Weapon.VE_FusionListGenre_Weapon_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UVE_FusionListGenre_Weapon_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VE_FusionListGenre_Weapon_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
