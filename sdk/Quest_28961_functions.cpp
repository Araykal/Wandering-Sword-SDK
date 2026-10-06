#pragma once



// Package: Quest_28961

#include "Basic.hpp"

#include "Quest_28961_classes.hpp"
#include "Quest_28961_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_28961.Quest_28961_C.ExecuteUbergraph_Quest_28961
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28961_C::ExecuteUbergraph_Quest_28961(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28961_C", "ExecuteUbergraph_Quest_28961");

	Params::Quest_28961_C_ExecuteUbergraph_Quest_28961 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28961.Quest_28961_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28961_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28961_C", "HandleFinishing");

	Params::Quest_28961_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28961.Quest_28961_C.OnSuccess_53C8275B4828A29E191D478F9A680EDC
// (BlueprintCallable, BlueprintEvent)

void UQuest_28961_C::OnSuccess_53C8275B4828A29E191D478F9A680EDC()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28961_C", "OnSuccess_53C8275B4828A29E191D478F9A680EDC");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28961.Quest_28961_C.OnFinished_294A49274F46F163D6586E8209BE340D
// (BlueprintCallable, BlueprintEvent)

void UQuest_28961_C::OnFinished_294A49274F46F163D6586E8209BE340D()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28961_C", "OnFinished_294A49274F46F163D6586E8209BE340D");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28961.Quest_28961_C.OnStop_294A49274F46F163D6586E8209BE340D
// (BlueprintCallable, BlueprintEvent)

void UQuest_28961_C::OnStop_294A49274F46F163D6586E8209BE340D()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28961_C", "OnStop_294A49274F46F163D6586E8209BE340D");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28961.Quest_28961_C.OnDlgClosed_10C53F884FB51491148D44B0052ECA3C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28961_C::OnDlgClosed_10C53F884FB51491148D44B0052ECA3C(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28961_C", "OnDlgClosed_10C53F884FB51491148D44B0052ECA3C");

	Params::Quest_28961_C_OnDlgClosed_10C53F884FB51491148D44B0052ECA3C Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28961.Quest_28961_C.OnDlgSelectedOption_10C53F884FB51491148D44B0052ECA3C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28961_C::OnDlgSelectedOption_10C53F884FB51491148D44B0052ECA3C(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28961_C", "OnDlgSelectedOption_10C53F884FB51491148D44B0052ECA3C");

	Params::Quest_28961_C_OnDlgSelectedOption_10C53F884FB51491148D44B0052ECA3C Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
