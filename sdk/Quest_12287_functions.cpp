#pragma once



// Package: Quest_12287

#include "Basic.hpp"

#include "Quest_12287_classes.hpp"
#include "Quest_12287_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_12287.Quest_12287_C.ExecuteUbergraph_Quest_12287
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12287_C::ExecuteUbergraph_Quest_12287(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12287_C", "ExecuteUbergraph_Quest_12287");

	Params::Quest_12287_C_ExecuteUbergraph_Quest_12287 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12287.Quest_12287_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12287_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12287_C", "HandleFinishing");

	Params::Quest_12287_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12287.Quest_12287_C.OnFinished_4DD81D1B438CFE9CE19424905D1CB78E
// (BlueprintCallable, BlueprintEvent)

void UQuest_12287_C::OnFinished_4DD81D1B438CFE9CE19424905D1CB78E()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12287_C", "OnFinished_4DD81D1B438CFE9CE19424905D1CB78E");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12287.Quest_12287_C.OnStop_4DD81D1B438CFE9CE19424905D1CB78E
// (BlueprintCallable, BlueprintEvent)

void UQuest_12287_C::OnStop_4DD81D1B438CFE9CE19424905D1CB78E()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12287_C", "OnStop_4DD81D1B438CFE9CE19424905D1CB78E");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12287.Quest_12287_C.OnDlgClosed_1C45BB6F46E16FF1B5949DB1CB9C1F6F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12287_C::OnDlgClosed_1C45BB6F46E16FF1B5949DB1CB9C1F6F(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12287_C", "OnDlgClosed_1C45BB6F46E16FF1B5949DB1CB9C1F6F");

	Params::Quest_12287_C_OnDlgClosed_1C45BB6F46E16FF1B5949DB1CB9C1F6F Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12287.Quest_12287_C.OnDlgSelectedOption_1C45BB6F46E16FF1B5949DB1CB9C1F6F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12287_C::OnDlgSelectedOption_1C45BB6F46E16FF1B5949DB1CB9C1F6F(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12287_C", "OnDlgSelectedOption_1C45BB6F46E16FF1B5949DB1CB9C1F6F");

	Params::Quest_12287_C_OnDlgSelectedOption_1C45BB6F46E16FF1B5949DB1CB9C1F6F Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
