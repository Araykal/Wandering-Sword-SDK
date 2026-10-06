#pragma once



// Package: Quest_5567

#include "Basic.hpp"

#include "Quest_5567_classes.hpp"
#include "Quest_5567_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5567.Quest_5567_C.ExecuteUbergraph_Quest_5567
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5567_C::ExecuteUbergraph_Quest_5567(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5567_C", "ExecuteUbergraph_Quest_5567");

	Params::Quest_5567_C_ExecuteUbergraph_Quest_5567 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5567.Quest_5567_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5567_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5567_C", "HandleFinishing");

	Params::Quest_5567_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5567.Quest_5567_C.OnSuccess_3F364DED4466C14506CB6982A4556912
// (BlueprintCallable, BlueprintEvent)

void UQuest_5567_C::OnSuccess_3F364DED4466C14506CB6982A4556912()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5567_C", "OnSuccess_3F364DED4466C14506CB6982A4556912");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5567.Quest_5567_C.OnFinished_E9D858044E4C5F77A88D8089F8188D44
// (BlueprintCallable, BlueprintEvent)

void UQuest_5567_C::OnFinished_E9D858044E4C5F77A88D8089F8188D44()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5567_C", "OnFinished_E9D858044E4C5F77A88D8089F8188D44");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5567.Quest_5567_C.OnStop_E9D858044E4C5F77A88D8089F8188D44
// (BlueprintCallable, BlueprintEvent)

void UQuest_5567_C::OnStop_E9D858044E4C5F77A88D8089F8188D44()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5567_C", "OnStop_E9D858044E4C5F77A88D8089F8188D44");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5567.Quest_5567_C.OnDlgClosed_4CCE24EE4BD660EE296475843DF9B4BD
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5567_C::OnDlgClosed_4CCE24EE4BD660EE296475843DF9B4BD(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5567_C", "OnDlgClosed_4CCE24EE4BD660EE296475843DF9B4BD");

	Params::Quest_5567_C_OnDlgClosed_4CCE24EE4BD660EE296475843DF9B4BD Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5567.Quest_5567_C.OnDlgSelectedOption_4CCE24EE4BD660EE296475843DF9B4BD
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5567_C::OnDlgSelectedOption_4CCE24EE4BD660EE296475843DF9B4BD(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5567_C", "OnDlgSelectedOption_4CCE24EE4BD660EE296475843DF9B4BD");

	Params::Quest_5567_C_OnDlgSelectedOption_4CCE24EE4BD660EE296475843DF9B4BD Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
