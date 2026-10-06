#pragma once



// Package: Quest_30722

#include "Basic.hpp"

#include "Quest_30722_classes.hpp"
#include "Quest_30722_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_30722.Quest_30722_C.ExecuteUbergraph_Quest_30722
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30722_C::ExecuteUbergraph_Quest_30722(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30722_C", "ExecuteUbergraph_Quest_30722");

	Params::Quest_30722_C_ExecuteUbergraph_Quest_30722 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30722.Quest_30722_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30722_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30722_C", "HandleFinishing");

	Params::Quest_30722_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30722.Quest_30722_C.OnFinished_63374940458D06D7B76F7DA4223E8A7D
// (BlueprintCallable, BlueprintEvent)

void UQuest_30722_C::OnFinished_63374940458D06D7B76F7DA4223E8A7D()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30722_C", "OnFinished_63374940458D06D7B76F7DA4223E8A7D");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30722.Quest_30722_C.OnStop_63374940458D06D7B76F7DA4223E8A7D
// (BlueprintCallable, BlueprintEvent)

void UQuest_30722_C::OnStop_63374940458D06D7B76F7DA4223E8A7D()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30722_C", "OnStop_63374940458D06D7B76F7DA4223E8A7D");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30722.Quest_30722_C.OnDlgClosed_915C688444DD96AC401204B92B8AD97E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30722_C::OnDlgClosed_915C688444DD96AC401204B92B8AD97E(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30722_C", "OnDlgClosed_915C688444DD96AC401204B92B8AD97E");

	Params::Quest_30722_C_OnDlgClosed_915C688444DD96AC401204B92B8AD97E Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30722.Quest_30722_C.OnDlgSelectedOption_915C688444DD96AC401204B92B8AD97E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30722_C::OnDlgSelectedOption_915C688444DD96AC401204B92B8AD97E(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30722_C", "OnDlgSelectedOption_915C688444DD96AC401204B92B8AD97E");

	Params::Quest_30722_C_OnDlgSelectedOption_915C688444DD96AC401204B92B8AD97E Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
