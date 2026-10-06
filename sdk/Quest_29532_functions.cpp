#pragma once



// Package: Quest_29532

#include "Basic.hpp"

#include "Quest_29532_classes.hpp"
#include "Quest_29532_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_29532.Quest_29532_C.ExecuteUbergraph_Quest_29532
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_29532_C::ExecuteUbergraph_Quest_29532(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29532_C", "ExecuteUbergraph_Quest_29532");

	Params::Quest_29532_C_ExecuteUbergraph_Quest_29532 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_29532.Quest_29532_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_29532_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29532_C", "HandleFinishing");

	Params::Quest_29532_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_29532.Quest_29532_C.OnSuccess_2B2172164EAA4370BD979C8D0E6450A5
// (BlueprintCallable, BlueprintEvent)

void UQuest_29532_C::OnSuccess_2B2172164EAA4370BD979C8D0E6450A5()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29532_C", "OnSuccess_2B2172164EAA4370BD979C8D0E6450A5");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_29532.Quest_29532_C.OnFinished_C5D2E3BA4AAF99E798147CBA2BAD05E8
// (BlueprintCallable, BlueprintEvent)

void UQuest_29532_C::OnFinished_C5D2E3BA4AAF99E798147CBA2BAD05E8()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29532_C", "OnFinished_C5D2E3BA4AAF99E798147CBA2BAD05E8");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_29532.Quest_29532_C.OnStop_C5D2E3BA4AAF99E798147CBA2BAD05E8
// (BlueprintCallable, BlueprintEvent)

void UQuest_29532_C::OnStop_C5D2E3BA4AAF99E798147CBA2BAD05E8()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29532_C", "OnStop_C5D2E3BA4AAF99E798147CBA2BAD05E8");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_29532.Quest_29532_C.OnDlgClosed_B9752BB14CD90D28796DFA865181188B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_29532_C::OnDlgClosed_B9752BB14CD90D28796DFA865181188B(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29532_C", "OnDlgClosed_B9752BB14CD90D28796DFA865181188B");

	Params::Quest_29532_C_OnDlgClosed_B9752BB14CD90D28796DFA865181188B Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_29532.Quest_29532_C.OnDlgSelectedOption_B9752BB14CD90D28796DFA865181188B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_29532_C::OnDlgSelectedOption_B9752BB14CD90D28796DFA865181188B(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29532_C", "OnDlgSelectedOption_B9752BB14CD90D28796DFA865181188B");

	Params::Quest_29532_C_OnDlgSelectedOption_B9752BB14CD90D28796DFA865181188B Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
