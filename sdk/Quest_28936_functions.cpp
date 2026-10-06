#pragma once



// Package: Quest_28936

#include "Basic.hpp"

#include "Quest_28936_classes.hpp"
#include "Quest_28936_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_28936.Quest_28936_C.ExecuteUbergraph_Quest_28936
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28936_C::ExecuteUbergraph_Quest_28936(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28936_C", "ExecuteUbergraph_Quest_28936");

	Params::Quest_28936_C_ExecuteUbergraph_Quest_28936 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28936.Quest_28936_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28936_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28936_C", "HandleFinishing");

	Params::Quest_28936_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28936.Quest_28936_C.OnSuccess_156DB5E64359C8B5EFA1F38DEF02B003
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_28936_C::OnSuccess_156DB5E64359C8B5EFA1F38DEF02B003(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28936_C", "OnSuccess_156DB5E64359C8B5EFA1F38DEF02B003");

	Params::Quest_28936_C_OnSuccess_156DB5E64359C8B5EFA1F38DEF02B003 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28936.Quest_28936_C.OnFinished_224513434138C288B269599755EA1597
// (BlueprintCallable, BlueprintEvent)

void UQuest_28936_C::OnFinished_224513434138C288B269599755EA1597()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28936_C", "OnFinished_224513434138C288B269599755EA1597");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28936.Quest_28936_C.OnStop_224513434138C288B269599755EA1597
// (BlueprintCallable, BlueprintEvent)

void UQuest_28936_C::OnStop_224513434138C288B269599755EA1597()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28936_C", "OnStop_224513434138C288B269599755EA1597");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28936.Quest_28936_C.OnDlgClosed_9D1C4B4145B6D7001752B3B5C7DF2168
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28936_C::OnDlgClosed_9D1C4B4145B6D7001752B3B5C7DF2168(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28936_C", "OnDlgClosed_9D1C4B4145B6D7001752B3B5C7DF2168");

	Params::Quest_28936_C_OnDlgClosed_9D1C4B4145B6D7001752B3B5C7DF2168 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28936.Quest_28936_C.OnDlgSelectedOption_9D1C4B4145B6D7001752B3B5C7DF2168
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28936_C::OnDlgSelectedOption_9D1C4B4145B6D7001752B3B5C7DF2168(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28936_C", "OnDlgSelectedOption_9D1C4B4145B6D7001752B3B5C7DF2168");

	Params::Quest_28936_C_OnDlgSelectedOption_9D1C4B4145B6D7001752B3B5C7DF2168 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
