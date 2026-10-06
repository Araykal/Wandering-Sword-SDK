#pragma once



// Package: Quest_12371

#include "Basic.hpp"

#include "Quest_12371_classes.hpp"
#include "Quest_12371_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_12371.Quest_12371_C.ExecuteUbergraph_Quest_12371
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12371_C::ExecuteUbergraph_Quest_12371(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12371_C", "ExecuteUbergraph_Quest_12371");

	Params::Quest_12371_C_ExecuteUbergraph_Quest_12371 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12371.Quest_12371_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12371_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12371_C", "HandleFinishing");

	Params::Quest_12371_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12371.Quest_12371_C.OnFinished_5C54D500400E0DDD002F9990B923264E
// (BlueprintCallable, BlueprintEvent)

void UQuest_12371_C::OnFinished_5C54D500400E0DDD002F9990B923264E()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12371_C", "OnFinished_5C54D500400E0DDD002F9990B923264E");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12371.Quest_12371_C.OnStop_5C54D500400E0DDD002F9990B923264E
// (BlueprintCallable, BlueprintEvent)

void UQuest_12371_C::OnStop_5C54D500400E0DDD002F9990B923264E()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12371_C", "OnStop_5C54D500400E0DDD002F9990B923264E");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12371.Quest_12371_C.OnDlgClosed_A1CC019D44A6A1ACB08C5C8C49ED0F17
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12371_C::OnDlgClosed_A1CC019D44A6A1ACB08C5C8C49ED0F17(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12371_C", "OnDlgClosed_A1CC019D44A6A1ACB08C5C8C49ED0F17");

	Params::Quest_12371_C_OnDlgClosed_A1CC019D44A6A1ACB08C5C8C49ED0F17 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12371.Quest_12371_C.OnDlgSelectedOption_A1CC019D44A6A1ACB08C5C8C49ED0F17
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12371_C::OnDlgSelectedOption_A1CC019D44A6A1ACB08C5C8C49ED0F17(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12371_C", "OnDlgSelectedOption_A1CC019D44A6A1ACB08C5C8C49ED0F17");

	Params::Quest_12371_C_OnDlgSelectedOption_A1CC019D44A6A1ACB08C5C8C49ED0F17 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12371.Quest_12371_C.OnSuccess_CDF926B14CC23AD482E6C0A92892116A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_12371_C::OnSuccess_CDF926B14CC23AD482E6C0A92892116A(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12371_C", "OnSuccess_CDF926B14CC23AD482E6C0A92892116A");

	Params::Quest_12371_C_OnSuccess_CDF926B14CC23AD482E6C0A92892116A Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
