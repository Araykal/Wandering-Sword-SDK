#pragma once



// Package: Quest_5339

#include "Basic.hpp"

#include "Quest_5339_classes.hpp"
#include "Quest_5339_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5339.Quest_5339_C.ExecuteUbergraph_Quest_5339
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5339_C::ExecuteUbergraph_Quest_5339(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5339_C", "ExecuteUbergraph_Quest_5339");

	Params::Quest_5339_C_ExecuteUbergraph_Quest_5339 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5339.Quest_5339_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5339_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5339_C", "HandleFinishing");

	Params::Quest_5339_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5339.Quest_5339_C.OnFinished_AAC809F2477A64D6A06E3B94E388ECD0
// (BlueprintCallable, BlueprintEvent)

void UQuest_5339_C::OnFinished_AAC809F2477A64D6A06E3B94E388ECD0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5339_C", "OnFinished_AAC809F2477A64D6A06E3B94E388ECD0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5339.Quest_5339_C.OnStop_AAC809F2477A64D6A06E3B94E388ECD0
// (BlueprintCallable, BlueprintEvent)

void UQuest_5339_C::OnStop_AAC809F2477A64D6A06E3B94E388ECD0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5339_C", "OnStop_AAC809F2477A64D6A06E3B94E388ECD0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5339.Quest_5339_C.OnDlgClosed_4297AE6C4C8B6021439E9396F1CB4C9D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5339_C::OnDlgClosed_4297AE6C4C8B6021439E9396F1CB4C9D(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5339_C", "OnDlgClosed_4297AE6C4C8B6021439E9396F1CB4C9D");

	Params::Quest_5339_C_OnDlgClosed_4297AE6C4C8B6021439E9396F1CB4C9D Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5339.Quest_5339_C.OnDlgSelectedOption_4297AE6C4C8B6021439E9396F1CB4C9D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5339_C::OnDlgSelectedOption_4297AE6C4C8B6021439E9396F1CB4C9D(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5339_C", "OnDlgSelectedOption_4297AE6C4C8B6021439E9396F1CB4C9D");

	Params::Quest_5339_C_OnDlgSelectedOption_4297AE6C4C8B6021439E9396F1CB4C9D Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5339.Quest_5339_C.OnSuccess_7CF960974F62EC19A256F48E075C50B5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_5339_C::OnSuccess_7CF960974F62EC19A256F48E075C50B5(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5339_C", "OnSuccess_7CF960974F62EC19A256F48E075C50B5");

	Params::Quest_5339_C_OnSuccess_7CF960974F62EC19A256F48E075C50B5 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
