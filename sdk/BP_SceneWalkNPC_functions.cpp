#pragma once



// Package: BP_SceneWalkNPC

#include "Basic.hpp"

#include "BP_SceneWalkNPC_classes.hpp"
#include "BP_SceneWalkNPC_parameters.hpp"


SDK_NAMESPACE_START

// Function BP_SceneWalkNPC.BP_SceneWalkNPC_C.ExecuteUbergraph_BP_SceneWalkNPC
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SceneWalkNPC_C::ExecuteUbergraph_BP_SceneWalkNPC(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SceneWalkNPC_C", "ExecuteUbergraph_BP_SceneWalkNPC");

	Params::BP_SceneWalkNPC_C_ExecuteUbergraph_BP_SceneWalkNPC Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SceneWalkNPC.BP_SceneWalkNPC_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SceneWalkNPC_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SceneWalkNPC_C", "ReceiveTick");

	Params::BP_SceneWalkNPC_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
