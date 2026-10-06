#pragma once



// Package: BP_SceneHero

#include "Basic.hpp"

#include "BP_SceneHero_classes.hpp"
#include "BP_SceneHero_parameters.hpp"


SDK_NAMESPACE_START

// Function BP_SceneHero.BP_SceneHero_C.ExecuteUbergraph_BP_SceneHero
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SceneHero_C::ExecuteUbergraph_BP_SceneHero(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SceneHero_C", "ExecuteUbergraph_BP_SceneHero");

	Params::BP_SceneHero_C_ExecuteUbergraph_BP_SceneHero Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SceneHero.BP_SceneHero_C.EVT_TeleportToPlayerStartLocation
// (Event, Public, BlueprintEvent)

void ABP_SceneHero_C::EVT_TeleportToPlayerStartLocation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SceneHero_C", "EVT_TeleportToPlayerStartLocation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SceneHero.BP_SceneHero_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SceneHero_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SceneHero_C", "ReceiveTick");

	Params::BP_SceneHero_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SceneHero.BP_SceneHero_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_SceneHero_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SceneHero_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
