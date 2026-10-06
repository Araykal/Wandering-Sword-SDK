#pragma once



// Package: Quest_12095

#include "Basic.hpp"

#include "Quest_12095_classes.hpp"
#include "Quest_12095_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_12095.Quest_12095_C.ExecuteUbergraph_Quest_12095
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12095_C::ExecuteUbergraph_Quest_12095(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12095_C", "ExecuteUbergraph_Quest_12095");

	Params::Quest_12095_C_ExecuteUbergraph_Quest_12095 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12095.Quest_12095_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12095_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12095_C", "HandleFinishing");

	Params::Quest_12095_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12095.Quest_12095_C.OnFinished_78FE642E479DC75C65B00B843EE9A6AD
// (BlueprintCallable, BlueprintEvent)

void UQuest_12095_C::OnFinished_78FE642E479DC75C65B00B843EE9A6AD()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12095_C", "OnFinished_78FE642E479DC75C65B00B843EE9A6AD");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12095.Quest_12095_C.OnStop_78FE642E479DC75C65B00B843EE9A6AD
// (BlueprintCallable, BlueprintEvent)

void UQuest_12095_C::OnStop_78FE642E479DC75C65B00B843EE9A6AD()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12095_C", "OnStop_78FE642E479DC75C65B00B843EE9A6AD");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12095.Quest_12095_C.OnDlgClosed_B7DDEAB042050853479AC9A0547C3511
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12095_C::OnDlgClosed_B7DDEAB042050853479AC9A0547C3511(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12095_C", "OnDlgClosed_B7DDEAB042050853479AC9A0547C3511");

	Params::Quest_12095_C_OnDlgClosed_B7DDEAB042050853479AC9A0547C3511 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12095.Quest_12095_C.OnDlgSelectedOption_B7DDEAB042050853479AC9A0547C3511
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12095_C::OnDlgSelectedOption_B7DDEAB042050853479AC9A0547C3511(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12095_C", "OnDlgSelectedOption_B7DDEAB042050853479AC9A0547C3511");

	Params::Quest_12095_C_OnDlgSelectedOption_B7DDEAB042050853479AC9A0547C3511 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12095.Quest_12095_C.OnSuccess_BA818A74448B26B95F27099E07BB41D1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_12095_C::OnSuccess_BA818A74448B26B95F27099E07BB41D1(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12095_C", "OnSuccess_BA818A74448B26B95F27099E07BB41D1");

	Params::Quest_12095_C_OnSuccess_BA818A74448B26B95F27099E07BB41D1 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
