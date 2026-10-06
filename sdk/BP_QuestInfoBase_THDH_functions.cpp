#pragma once



// Package: BP_QuestInfoBase_THDH

#include "Basic.hpp"

#include "BP_QuestInfoBase_THDH_classes.hpp"
#include "BP_QuestInfoBase_THDH_parameters.hpp"


SDK_NAMESPACE_START

// Function BP_QuestInfoBase_THDH.BP_QuestInfoBase_THDH_C.ExecuteUbergraph_BP_QuestInfoBase_THDH
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_QuestInfoBase_THDH_C::ExecuteUbergraph_BP_QuestInfoBase_THDH(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_QuestInfoBase_THDH_C", "ExecuteUbergraph_BP_QuestInfoBase_THDH");

	Params::BP_QuestInfoBase_THDH_C_ExecuteUbergraph_BP_QuestInfoBase_THDH Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_QuestInfoBase_THDH.BP_QuestInfoBase_THDH_C.HandleProcessing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_QuestInfoBase_THDH_C::HandleProcessing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_QuestInfoBase_THDH_C", "HandleProcessing");

	Params::BP_QuestInfoBase_THDH_C_HandleProcessing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_QuestInfoBase_THDH.BP_QuestInfoBase_THDH_C.OnDlgClosed_6CA69B70480D4EDB3A04C6BA853F3823
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_QuestInfoBase_THDH_C::OnDlgClosed_6CA69B70480D4EDB3A04C6BA853F3823(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_QuestInfoBase_THDH_C", "OnDlgClosed_6CA69B70480D4EDB3A04C6BA853F3823");

	Params::BP_QuestInfoBase_THDH_C_OnDlgClosed_6CA69B70480D4EDB3A04C6BA853F3823 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_QuestInfoBase_THDH.BP_QuestInfoBase_THDH_C.OnDlgSelectedOption_6CA69B70480D4EDB3A04C6BA853F3823
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_QuestInfoBase_THDH_C::OnDlgSelectedOption_6CA69B70480D4EDB3A04C6BA853F3823(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_QuestInfoBase_THDH_C", "OnDlgSelectedOption_6CA69B70480D4EDB3A04C6BA853F3823");

	Params::BP_QuestInfoBase_THDH_C_OnDlgSelectedOption_6CA69B70480D4EDB3A04C6BA853F3823 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_QuestInfoBase_THDH.BP_QuestInfoBase_THDH_C.IsProcessed
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBP_QuestInfoBase_THDH_C::IsProcessed(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_QuestInfoBase_THDH_C", "IsProcessed");

	Params::BP_QuestInfoBase_THDH_C_IsProcessed Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


SDK_NAMESPACE_END
