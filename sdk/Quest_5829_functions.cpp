#pragma once



// Package: Quest_5829

#include "Basic.hpp"

#include "Quest_5829_classes.hpp"
#include "Quest_5829_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5829.Quest_5829_C.ExecuteUbergraph_Quest_5829
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5829_C::ExecuteUbergraph_Quest_5829(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5829_C", "ExecuteUbergraph_Quest_5829");

	Params::Quest_5829_C_ExecuteUbergraph_Quest_5829 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5829.Quest_5829_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5829_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5829_C", "HandleFinishing");

	Params::Quest_5829_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5829.Quest_5829_C.OnFinished_AEB6617E4A184D13FA2B5A82632281BD
// (BlueprintCallable, BlueprintEvent)

void UQuest_5829_C::OnFinished_AEB6617E4A184D13FA2B5A82632281BD()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5829_C", "OnFinished_AEB6617E4A184D13FA2B5A82632281BD");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5829.Quest_5829_C.OnStop_AEB6617E4A184D13FA2B5A82632281BD
// (BlueprintCallable, BlueprintEvent)

void UQuest_5829_C::OnStop_AEB6617E4A184D13FA2B5A82632281BD()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5829_C", "OnStop_AEB6617E4A184D13FA2B5A82632281BD");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5829.Quest_5829_C.OnDlgClosed_D4CCBFC946959ACFB66B4F8232387E9D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5829_C::OnDlgClosed_D4CCBFC946959ACFB66B4F8232387E9D(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5829_C", "OnDlgClosed_D4CCBFC946959ACFB66B4F8232387E9D");

	Params::Quest_5829_C_OnDlgClosed_D4CCBFC946959ACFB66B4F8232387E9D Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5829.Quest_5829_C.OnDlgSelectedOption_D4CCBFC946959ACFB66B4F8232387E9D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5829_C::OnDlgSelectedOption_D4CCBFC946959ACFB66B4F8232387E9D(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5829_C", "OnDlgSelectedOption_D4CCBFC946959ACFB66B4F8232387E9D");

	Params::Quest_5829_C_OnDlgSelectedOption_D4CCBFC946959ACFB66B4F8232387E9D Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
