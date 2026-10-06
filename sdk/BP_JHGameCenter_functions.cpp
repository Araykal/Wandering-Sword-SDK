#pragma once



// Package: BP_JHGameCenter

#include "Basic.hpp"

#include "BP_JHGameCenter_classes.hpp"
#include "BP_JHGameCenter_parameters.hpp"


SDK_NAMESPACE_START

// Function BP_JHGameCenter.BP_JHGameCenter_C.ExecuteUbergraph_BP_JHGameCenter
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_JHGameCenter_C::ExecuteUbergraph_BP_JHGameCenter(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_JHGameCenter_C", "ExecuteUbergraph_BP_JHGameCenter");

	Params::BP_JHGameCenter_C_ExecuteUbergraph_BP_JHGameCenter Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_JHGameCenter.BP_JHGameCenter_C.EVT_GameplayStarted
// (Event, Public, BlueprintEvent)

void UBP_JHGameCenter_C::EVT_GameplayStarted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_JHGameCenter_C", "EVT_GameplayStarted");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_JHGameCenter.BP_JHGameCenter_C.EVT_UI_Trading_Start
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_JHGameCenter_C::EVT_UI_Trading_Start(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_JHGameCenter_C", "EVT_UI_Trading_Start");

	Params::BP_JHGameCenter_C_EVT_UI_Trading_Start Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_JHGameCenter.BP_JHGameCenter_C.EVT_UI_Trading_End
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_JHGameCenter_C::EVT_UI_Trading_End(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_JHGameCenter_C", "EVT_UI_Trading_End");

	Params::BP_JHGameCenter_C_EVT_UI_Trading_End Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_JHGameCenter.BP_JHGameCenter_C.EVT_UI_Trading_Purchase
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ItemId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Count                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_JHGameCenter_C::EVT_UI_Trading_Purchase(int32 NPCId, int32 ItemId, int32 Count)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_JHGameCenter_C", "EVT_UI_Trading_Purchase");

	Params::BP_JHGameCenter_C_EVT_UI_Trading_Purchase Parms{};

	Parms.NPCId = NPCId;
	Parms.ItemId = ItemId;
	Parms.Count = Count;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
