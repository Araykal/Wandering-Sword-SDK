#pragma once



// Package: VE_Cooking_ListGenreGroup

#include "Basic.hpp"

#include "VE_Cooking_ListGenreGroup_classes.hpp"
#include "VE_Cooking_ListGenreGroup_parameters.hpp"


SDK_NAMESPACE_START

// Function VE_Cooking_ListGenreGroup.VE_Cooking_ListGenreGroup_C.ExecuteUbergraph_VE_Cooking_ListGenreGroup
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UVE_Cooking_ListGenreGroup_C::ExecuteUbergraph_VE_Cooking_ListGenreGroup(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VE_Cooking_ListGenreGroup_C", "ExecuteUbergraph_VE_Cooking_ListGenreGroup");

	Params::VE_Cooking_ListGenreGroup_C_ExecuteUbergraph_VE_Cooking_ListGenreGroup Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function VE_Cooking_ListGenreGroup.VE_Cooking_ListGenreGroup_C.EVT_SetupHierarchy
// (Event, Public, BlueprintEvent)

void UVE_Cooking_ListGenreGroup_C::EVT_SetupHierarchy()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VE_Cooking_ListGenreGroup_C", "EVT_SetupHierarchy");

	UObject::ProcessEvent(Func, nullptr);
}


// Function VE_Cooking_ListGenreGroup.VE_Cooking_ListGenreGroup_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UVE_Cooking_ListGenreGroup_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VE_Cooking_ListGenreGroup_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
