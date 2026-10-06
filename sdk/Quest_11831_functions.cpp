#pragma once



// Package: Quest_11831

#include "Basic.hpp"

#include "Quest_11831_classes.hpp"
#include "Quest_11831_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_11831.Quest_11831_C.ExecuteUbergraph_Quest_11831
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11831_C::ExecuteUbergraph_Quest_11831(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11831_C", "ExecuteUbergraph_Quest_11831");

	Params::Quest_11831_C_ExecuteUbergraph_Quest_11831 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11831.Quest_11831_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11831_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11831_C", "HandleFinishing");

	Params::Quest_11831_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11831.Quest_11831_C.OnFinished_CF260D1F4772BCF87BE53387F5F571D2
// (BlueprintCallable, BlueprintEvent)

void UQuest_11831_C::OnFinished_CF260D1F4772BCF87BE53387F5F571D2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11831_C", "OnFinished_CF260D1F4772BCF87BE53387F5F571D2");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_11831.Quest_11831_C.OnStop_CF260D1F4772BCF87BE53387F5F571D2
// (BlueprintCallable, BlueprintEvent)

void UQuest_11831_C::OnStop_CF260D1F4772BCF87BE53387F5F571D2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11831_C", "OnStop_CF260D1F4772BCF87BE53387F5F571D2");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_11831.Quest_11831_C.OnDlgClosed_D71805374484E6C0E6A90EB3BDF85861
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11831_C::OnDlgClosed_D71805374484E6C0E6A90EB3BDF85861(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11831_C", "OnDlgClosed_D71805374484E6C0E6A90EB3BDF85861");

	Params::Quest_11831_C_OnDlgClosed_D71805374484E6C0E6A90EB3BDF85861 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11831.Quest_11831_C.OnDlgSelectedOption_D71805374484E6C0E6A90EB3BDF85861
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11831_C::OnDlgSelectedOption_D71805374484E6C0E6A90EB3BDF85861(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11831_C", "OnDlgSelectedOption_D71805374484E6C0E6A90EB3BDF85861");

	Params::Quest_11831_C_OnDlgSelectedOption_D71805374484E6C0E6A90EB3BDF85861 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
