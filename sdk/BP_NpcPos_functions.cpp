#pragma once



// Package: BP_NpcPos

#include "Basic.hpp"

#include "BP_NpcPos_classes.hpp"
#include "BP_NpcPos_parameters.hpp"


SDK_NAMESPACE_START

// Function BP_NpcPos.BP_NpcPos_C.ExecuteUbergraph_BP_NpcPos
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_NpcPos_C::ExecuteUbergraph_BP_NpcPos(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NpcPos_C", "ExecuteUbergraph_BP_NpcPos");

	Params::BP_NpcPos_C_ExecuteUbergraph_BP_NpcPos Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_NpcPos.BP_NpcPos_C.OnChangeSkin
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bNext                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                             NewAvatarName                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_NpcPos_C::OnChangeSkin(int32 NPCId_0, bool bNext, class FName NewAvatarName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NpcPos_C", "OnChangeSkin");

	Params::BP_NpcPos_C_OnChangeSkin Parms{};

	Parms.NPCId_0 = NPCId_0;
	Parms.bNext = bNext;
	Parms.NewAvatarName = NewAvatarName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_NpcPos.BP_NpcPos_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_NpcPos_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NpcPos_C", "ReceiveEndPlay");

	Params::BP_NpcPos_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_NpcPos.BP_NpcPos_C.Time
// (BlueprintCallable, BlueprintEvent)

void ABP_NpcPos_C::Time()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NpcPos_C", "Time");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_NpcPos.BP_NpcPos_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_NpcPos_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NpcPos_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_NpcPos.BP_NpcPos_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_NpcPos_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NpcPos_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
