#pragma once



// Package: Quest_5808

#include "Basic.hpp"

#include "Quest_5808_classes.hpp"
#include "Quest_5808_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5808.Quest_5808_C.ExecuteUbergraph_Quest_5808
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5808_C::ExecuteUbergraph_Quest_5808(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5808_C", "ExecuteUbergraph_Quest_5808");

	Params::Quest_5808_C_ExecuteUbergraph_Quest_5808 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5808.Quest_5808_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5808_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5808_C", "HandleFinishing");

	Params::Quest_5808_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5808.Quest_5808_C.OnSuccess_22B194204D5C520027C7E5959AEE71B0
// (BlueprintCallable, BlueprintEvent)

void UQuest_5808_C::OnSuccess_22B194204D5C520027C7E5959AEE71B0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5808_C", "OnSuccess_22B194204D5C520027C7E5959AEE71B0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5808.Quest_5808_C.OnFinished_C4CE323B44A3A9B1E6BE80B5B3F20F59
// (BlueprintCallable, BlueprintEvent)

void UQuest_5808_C::OnFinished_C4CE323B44A3A9B1E6BE80B5B3F20F59()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5808_C", "OnFinished_C4CE323B44A3A9B1E6BE80B5B3F20F59");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5808.Quest_5808_C.OnStop_C4CE323B44A3A9B1E6BE80B5B3F20F59
// (BlueprintCallable, BlueprintEvent)

void UQuest_5808_C::OnStop_C4CE323B44A3A9B1E6BE80B5B3F20F59()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5808_C", "OnStop_C4CE323B44A3A9B1E6BE80B5B3F20F59");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5808.Quest_5808_C.OnDlgClosed_868C9B3E47AAF14C28277EA5724083E8
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5808_C::OnDlgClosed_868C9B3E47AAF14C28277EA5724083E8(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5808_C", "OnDlgClosed_868C9B3E47AAF14C28277EA5724083E8");

	Params::Quest_5808_C_OnDlgClosed_868C9B3E47AAF14C28277EA5724083E8 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5808.Quest_5808_C.OnDlgSelectedOption_868C9B3E47AAF14C28277EA5724083E8
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5808_C::OnDlgSelectedOption_868C9B3E47AAF14C28277EA5724083E8(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5808_C", "OnDlgSelectedOption_868C9B3E47AAF14C28277EA5724083E8");

	Params::Quest_5808_C_OnDlgSelectedOption_868C9B3E47AAF14C28277EA5724083E8 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
