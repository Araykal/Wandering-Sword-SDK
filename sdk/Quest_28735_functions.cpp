#pragma once



// Package: Quest_28735

#include "Basic.hpp"

#include "Quest_28735_classes.hpp"
#include "Quest_28735_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_28735.Quest_28735_C.ExecuteUbergraph_Quest_28735
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28735_C::ExecuteUbergraph_Quest_28735(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28735_C", "ExecuteUbergraph_Quest_28735");

	Params::Quest_28735_C_ExecuteUbergraph_Quest_28735 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28735.Quest_28735_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28735_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28735_C", "HandleFinishing");

	Params::Quest_28735_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28735.Quest_28735_C.OnSuccess_09ED97694237266442236180AC606792
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_28735_C::OnSuccess_09ED97694237266442236180AC606792(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28735_C", "OnSuccess_09ED97694237266442236180AC606792");

	Params::Quest_28735_C_OnSuccess_09ED97694237266442236180AC606792 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28735.Quest_28735_C.OnDlgClosed_BCF9E601428F7DA21C3062BB6C4FA325
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28735_C::OnDlgClosed_BCF9E601428F7DA21C3062BB6C4FA325(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28735_C", "OnDlgClosed_BCF9E601428F7DA21C3062BB6C4FA325");

	Params::Quest_28735_C_OnDlgClosed_BCF9E601428F7DA21C3062BB6C4FA325 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28735.Quest_28735_C.OnDlgSelectedOption_BCF9E601428F7DA21C3062BB6C4FA325
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28735_C::OnDlgSelectedOption_BCF9E601428F7DA21C3062BB6C4FA325(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28735_C", "OnDlgSelectedOption_BCF9E601428F7DA21C3062BB6C4FA325");

	Params::Quest_28735_C_OnDlgSelectedOption_BCF9E601428F7DA21C3062BB6C4FA325 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28735.Quest_28735_C.OnFinished_FF3EEF54473954EED4605C97609276D3
// (BlueprintCallable, BlueprintEvent)

void UQuest_28735_C::OnFinished_FF3EEF54473954EED4605C97609276D3()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28735_C", "OnFinished_FF3EEF54473954EED4605C97609276D3");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28735.Quest_28735_C.OnStop_FF3EEF54473954EED4605C97609276D3
// (BlueprintCallable, BlueprintEvent)

void UQuest_28735_C::OnStop_FF3EEF54473954EED4605C97609276D3()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28735_C", "OnStop_FF3EEF54473954EED4605C97609276D3");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
