#pragma once



// Package: Quest_5823

#include "Basic.hpp"

#include "Quest_5823_classes.hpp"
#include "Quest_5823_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5823.Quest_5823_C.ExecuteUbergraph_Quest_5823
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5823_C::ExecuteUbergraph_Quest_5823(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5823_C", "ExecuteUbergraph_Quest_5823");

	Params::Quest_5823_C_ExecuteUbergraph_Quest_5823 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5823.Quest_5823_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5823_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5823_C", "HandleFinishing");

	Params::Quest_5823_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5823.Quest_5823_C.OnSuccess_5A01ACF846C2F69DADE13E9FA3C127F5
// (BlueprintCallable, BlueprintEvent)

void UQuest_5823_C::OnSuccess_5A01ACF846C2F69DADE13E9FA3C127F5()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5823_C", "OnSuccess_5A01ACF846C2F69DADE13E9FA3C127F5");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5823.Quest_5823_C.OnFinished_2211F5154F9AEBEFECE8DEA8CE7E90EA
// (BlueprintCallable, BlueprintEvent)

void UQuest_5823_C::OnFinished_2211F5154F9AEBEFECE8DEA8CE7E90EA()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5823_C", "OnFinished_2211F5154F9AEBEFECE8DEA8CE7E90EA");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5823.Quest_5823_C.OnStop_2211F5154F9AEBEFECE8DEA8CE7E90EA
// (BlueprintCallable, BlueprintEvent)

void UQuest_5823_C::OnStop_2211F5154F9AEBEFECE8DEA8CE7E90EA()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5823_C", "OnStop_2211F5154F9AEBEFECE8DEA8CE7E90EA");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5823.Quest_5823_C.OnDlgClosed_7CF23966482BFEAA62150B9D883F83E9
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5823_C::OnDlgClosed_7CF23966482BFEAA62150B9D883F83E9(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5823_C", "OnDlgClosed_7CF23966482BFEAA62150B9D883F83E9");

	Params::Quest_5823_C_OnDlgClosed_7CF23966482BFEAA62150B9D883F83E9 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5823.Quest_5823_C.OnDlgSelectedOption_7CF23966482BFEAA62150B9D883F83E9
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5823_C::OnDlgSelectedOption_7CF23966482BFEAA62150B9D883F83E9(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5823_C", "OnDlgSelectedOption_7CF23966482BFEAA62150B9D883F83E9");

	Params::Quest_5823_C_OnDlgSelectedOption_7CF23966482BFEAA62150B9D883F83E9 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
