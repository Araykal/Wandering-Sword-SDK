#pragma once



// Package: Quest_5654

#include "Basic.hpp"

#include "Quest_5654_classes.hpp"
#include "Quest_5654_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5654.Quest_5654_C.ExecuteUbergraph_Quest_5654
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5654_C::ExecuteUbergraph_Quest_5654(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5654_C", "ExecuteUbergraph_Quest_5654");

	Params::Quest_5654_C_ExecuteUbergraph_Quest_5654 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5654.Quest_5654_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5654_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5654_C", "HandleFinishing");

	Params::Quest_5654_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5654.Quest_5654_C.OnSuccess_83A8AFB643A974A45DECCFAE9846B861
// (BlueprintCallable, BlueprintEvent)

void UQuest_5654_C::OnSuccess_83A8AFB643A974A45DECCFAE9846B861()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5654_C", "OnSuccess_83A8AFB643A974A45DECCFAE9846B861");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5654.Quest_5654_C.OnFinished_5F615B494DB32A383955C3A2F82A631F
// (BlueprintCallable, BlueprintEvent)

void UQuest_5654_C::OnFinished_5F615B494DB32A383955C3A2F82A631F()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5654_C", "OnFinished_5F615B494DB32A383955C3A2F82A631F");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5654.Quest_5654_C.OnStop_5F615B494DB32A383955C3A2F82A631F
// (BlueprintCallable, BlueprintEvent)

void UQuest_5654_C::OnStop_5F615B494DB32A383955C3A2F82A631F()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5654_C", "OnStop_5F615B494DB32A383955C3A2F82A631F");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5654.Quest_5654_C.OnDlgClosed_CA173910482901F18500A8BAC53B02B1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5654_C::OnDlgClosed_CA173910482901F18500A8BAC53B02B1(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5654_C", "OnDlgClosed_CA173910482901F18500A8BAC53B02B1");

	Params::Quest_5654_C_OnDlgClosed_CA173910482901F18500A8BAC53B02B1 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5654.Quest_5654_C.OnDlgSelectedOption_CA173910482901F18500A8BAC53B02B1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5654_C::OnDlgSelectedOption_CA173910482901F18500A8BAC53B02B1(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5654_C", "OnDlgSelectedOption_CA173910482901F18500A8BAC53B02B1");

	Params::Quest_5654_C_OnDlgSelectedOption_CA173910482901F18500A8BAC53B02B1 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
