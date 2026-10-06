#pragma once



// Package: BP_SceneNPC

#include "Basic.hpp"

#include "BP_SceneNPC_classes.hpp"
#include "BP_SceneNPC_parameters.hpp"


SDK_NAMESPACE_START

// Function BP_SceneNPC.BP_SceneNPC_C.ExecuteUbergraph_BP_SceneNPC
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SceneNPC_C::ExecuteUbergraph_BP_SceneNPC(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SceneNPC_C", "ExecuteUbergraph_BP_SceneNPC");

	Params::BP_SceneNPC_C_ExecuteUbergraph_BP_SceneNPC Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SceneNPC.BP_SceneNPC_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_SceneNPC_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SceneNPC_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SceneNPC.BP_SceneNPC_C.OnChangeSkin
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bNext                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                             NewAvatarName                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SceneNPC_C::OnChangeSkin(int32 NPCId_0, bool bNext, class FName NewAvatarName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SceneNPC_C", "OnChangeSkin");

	Params::BP_SceneNPC_C_OnChangeSkin Parms{};

	Parms.NPCId_0 = NPCId_0;
	Parms.bNext = bNext;
	Parms.NewAvatarName = NewAvatarName;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
