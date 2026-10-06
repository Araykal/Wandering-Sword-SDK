#pragma once



// Package: Quest_11207

#include "Basic.hpp"

#include "Quest_11207_classes.hpp"
#include "Quest_11207_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_11207.Quest_11207_C.ExecuteUbergraph_Quest_11207
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11207_C::ExecuteUbergraph_Quest_11207(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11207_C", "ExecuteUbergraph_Quest_11207");

	Params::Quest_11207_C_ExecuteUbergraph_Quest_11207 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11207.Quest_11207_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11207_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11207_C", "HandleFinishing");

	Params::Quest_11207_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11207.Quest_11207_C.OnFinished_D23DBF0943F53E6DAFDC6EBB0620D67D
// (BlueprintCallable, BlueprintEvent)

void UQuest_11207_C::OnFinished_D23DBF0943F53E6DAFDC6EBB0620D67D()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11207_C", "OnFinished_D23DBF0943F53E6DAFDC6EBB0620D67D");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_11207.Quest_11207_C.OnStop_D23DBF0943F53E6DAFDC6EBB0620D67D
// (BlueprintCallable, BlueprintEvent)

void UQuest_11207_C::OnStop_D23DBF0943F53E6DAFDC6EBB0620D67D()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11207_C", "OnStop_D23DBF0943F53E6DAFDC6EBB0620D67D");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_11207.Quest_11207_C.OnDlgClosed_1CA57D2A4D8E81DE4DDFFBA7B33EBF6D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11207_C::OnDlgClosed_1CA57D2A4D8E81DE4DDFFBA7B33EBF6D(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11207_C", "OnDlgClosed_1CA57D2A4D8E81DE4DDFFBA7B33EBF6D");

	Params::Quest_11207_C_OnDlgClosed_1CA57D2A4D8E81DE4DDFFBA7B33EBF6D Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11207.Quest_11207_C.OnDlgSelectedOption_1CA57D2A4D8E81DE4DDFFBA7B33EBF6D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11207_C::OnDlgSelectedOption_1CA57D2A4D8E81DE4DDFFBA7B33EBF6D(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11207_C", "OnDlgSelectedOption_1CA57D2A4D8E81DE4DDFFBA7B33EBF6D");

	Params::Quest_11207_C_OnDlgSelectedOption_1CA57D2A4D8E81DE4DDFFBA7B33EBF6D Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11207.Quest_11207_C.OnSuccess_B92F5E0E4D4CD33709FC5F910273A5C0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_11207_C::OnSuccess_B92F5E0E4D4CD33709FC5F910273A5C0(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11207_C", "OnSuccess_B92F5E0E4D4CD33709FC5F910273A5C0");

	Params::Quest_11207_C_OnSuccess_B92F5E0E4D4CD33709FC5F910273A5C0 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
