#pragma once



// Package: Quest_12388

#include "Basic.hpp"

#include "Quest_12388_classes.hpp"
#include "Quest_12388_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_12388.Quest_12388_C.ExecuteUbergraph_Quest_12388
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12388_C::ExecuteUbergraph_Quest_12388(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12388_C", "ExecuteUbergraph_Quest_12388");

	Params::Quest_12388_C_ExecuteUbergraph_Quest_12388 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12388.Quest_12388_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12388_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12388_C", "HandleFinishing");

	Params::Quest_12388_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12388.Quest_12388_C.OnFinished_C101DC014DFA5E6C653DACB9C08254A7
// (BlueprintCallable, BlueprintEvent)

void UQuest_12388_C::OnFinished_C101DC014DFA5E6C653DACB9C08254A7()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12388_C", "OnFinished_C101DC014DFA5E6C653DACB9C08254A7");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12388.Quest_12388_C.OnStop_C101DC014DFA5E6C653DACB9C08254A7
// (BlueprintCallable, BlueprintEvent)

void UQuest_12388_C::OnStop_C101DC014DFA5E6C653DACB9C08254A7()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12388_C", "OnStop_C101DC014DFA5E6C653DACB9C08254A7");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12388.Quest_12388_C.OnDlgClosed_B643215A4A554DB42A1664986DAE7DD9
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12388_C::OnDlgClosed_B643215A4A554DB42A1664986DAE7DD9(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12388_C", "OnDlgClosed_B643215A4A554DB42A1664986DAE7DD9");

	Params::Quest_12388_C_OnDlgClosed_B643215A4A554DB42A1664986DAE7DD9 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12388.Quest_12388_C.OnDlgSelectedOption_B643215A4A554DB42A1664986DAE7DD9
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12388_C::OnDlgSelectedOption_B643215A4A554DB42A1664986DAE7DD9(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12388_C", "OnDlgSelectedOption_B643215A4A554DB42A1664986DAE7DD9");

	Params::Quest_12388_C_OnDlgSelectedOption_B643215A4A554DB42A1664986DAE7DD9 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12388.Quest_12388_C.OnSuccess_477E61DC4B821CBD06C47989ABEB64B2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_12388_C::OnSuccess_477E61DC4B821CBD06C47989ABEB64B2(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12388_C", "OnSuccess_477E61DC4B821CBD06C47989ABEB64B2");

	Params::Quest_12388_C_OnSuccess_477E61DC4B821CBD06C47989ABEB64B2 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
