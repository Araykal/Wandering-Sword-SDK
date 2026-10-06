#pragma once



// Package: Quest_5739

#include "Basic.hpp"

#include "Quest_5739_classes.hpp"
#include "Quest_5739_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5739.Quest_5739_C.ExecuteUbergraph_Quest_5739
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5739_C::ExecuteUbergraph_Quest_5739(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5739_C", "ExecuteUbergraph_Quest_5739");

	Params::Quest_5739_C_ExecuteUbergraph_Quest_5739 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5739.Quest_5739_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5739_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5739_C", "HandleFinishing");

	Params::Quest_5739_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5739.Quest_5739_C.OnFinished_020432B24883DE6A88D896A22C6D985C
// (BlueprintCallable, BlueprintEvent)

void UQuest_5739_C::OnFinished_020432B24883DE6A88D896A22C6D985C()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5739_C", "OnFinished_020432B24883DE6A88D896A22C6D985C");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5739.Quest_5739_C.OnStop_020432B24883DE6A88D896A22C6D985C
// (BlueprintCallable, BlueprintEvent)

void UQuest_5739_C::OnStop_020432B24883DE6A88D896A22C6D985C()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5739_C", "OnStop_020432B24883DE6A88D896A22C6D985C");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5739.Quest_5739_C.OnDlgClosed_F5038AF04709535DFBF457AE2B0AC6A3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5739_C::OnDlgClosed_F5038AF04709535DFBF457AE2B0AC6A3(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5739_C", "OnDlgClosed_F5038AF04709535DFBF457AE2B0AC6A3");

	Params::Quest_5739_C_OnDlgClosed_F5038AF04709535DFBF457AE2B0AC6A3 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5739.Quest_5739_C.OnDlgSelectedOption_F5038AF04709535DFBF457AE2B0AC6A3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5739_C::OnDlgSelectedOption_F5038AF04709535DFBF457AE2B0AC6A3(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5739_C", "OnDlgSelectedOption_F5038AF04709535DFBF457AE2B0AC6A3");

	Params::Quest_5739_C_OnDlgSelectedOption_F5038AF04709535DFBF457AE2B0AC6A3 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
