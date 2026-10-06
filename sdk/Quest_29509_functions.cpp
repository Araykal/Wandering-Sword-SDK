#pragma once



// Package: Quest_29509

#include "Basic.hpp"

#include "Quest_29509_classes.hpp"
#include "Quest_29509_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_29509.Quest_29509_C.ExecuteUbergraph_Quest_29509
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_29509_C::ExecuteUbergraph_Quest_29509(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29509_C", "ExecuteUbergraph_Quest_29509");

	Params::Quest_29509_C_ExecuteUbergraph_Quest_29509 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_29509.Quest_29509_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_29509_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29509_C", "HandleFinishing");

	Params::Quest_29509_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_29509.Quest_29509_C.OnFinished_13AC1B0A4CF73878943D40B4C09128A0
// (BlueprintCallable, BlueprintEvent)

void UQuest_29509_C::OnFinished_13AC1B0A4CF73878943D40B4C09128A0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29509_C", "OnFinished_13AC1B0A4CF73878943D40B4C09128A0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_29509.Quest_29509_C.OnStop_13AC1B0A4CF73878943D40B4C09128A0
// (BlueprintCallable, BlueprintEvent)

void UQuest_29509_C::OnStop_13AC1B0A4CF73878943D40B4C09128A0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29509_C", "OnStop_13AC1B0A4CF73878943D40B4C09128A0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_29509.Quest_29509_C.OnDlgClosed_844EAB264F76511665E0BC86076DD788
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_29509_C::OnDlgClosed_844EAB264F76511665E0BC86076DD788(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29509_C", "OnDlgClosed_844EAB264F76511665E0BC86076DD788");

	Params::Quest_29509_C_OnDlgClosed_844EAB264F76511665E0BC86076DD788 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_29509.Quest_29509_C.OnDlgSelectedOption_844EAB264F76511665E0BC86076DD788
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_29509_C::OnDlgSelectedOption_844EAB264F76511665E0BC86076DD788(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29509_C", "OnDlgSelectedOption_844EAB264F76511665E0BC86076DD788");

	Params::Quest_29509_C_OnDlgSelectedOption_844EAB264F76511665E0BC86076DD788 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_29509.Quest_29509_C.OnSuccess_677BE41D48B5ECE6BCE3A7A0356D5A49
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_29509_C::OnSuccess_677BE41D48B5ECE6BCE3A7A0356D5A49(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29509_C", "OnSuccess_677BE41D48B5ECE6BCE3A7A0356D5A49");

	Params::Quest_29509_C_OnSuccess_677BE41D48B5ECE6BCE3A7A0356D5A49 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
