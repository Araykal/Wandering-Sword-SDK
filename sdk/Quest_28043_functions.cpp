#pragma once



// Package: Quest_28043

#include "Basic.hpp"

#include "Quest_28043_classes.hpp"
#include "Quest_28043_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_28043.Quest_28043_C.ExecuteUbergraph_Quest_28043
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28043_C::ExecuteUbergraph_Quest_28043(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28043_C", "ExecuteUbergraph_Quest_28043");

	Params::Quest_28043_C_ExecuteUbergraph_Quest_28043 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28043.Quest_28043_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28043_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28043_C", "HandleFinishing");

	Params::Quest_28043_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28043.Quest_28043_C.OnFinished_57535DE34FE9913315138484B0708B80
// (BlueprintCallable, BlueprintEvent)

void UQuest_28043_C::OnFinished_57535DE34FE9913315138484B0708B80()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28043_C", "OnFinished_57535DE34FE9913315138484B0708B80");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28043.Quest_28043_C.OnStop_57535DE34FE9913315138484B0708B80
// (BlueprintCallable, BlueprintEvent)

void UQuest_28043_C::OnStop_57535DE34FE9913315138484B0708B80()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28043_C", "OnStop_57535DE34FE9913315138484B0708B80");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28043.Quest_28043_C.OnDlgClosed_214EB59E4A498141D715CCA5C48C7DBD
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28043_C::OnDlgClosed_214EB59E4A498141D715CCA5C48C7DBD(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28043_C", "OnDlgClosed_214EB59E4A498141D715CCA5C48C7DBD");

	Params::Quest_28043_C_OnDlgClosed_214EB59E4A498141D715CCA5C48C7DBD Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28043.Quest_28043_C.OnDlgSelectedOption_214EB59E4A498141D715CCA5C48C7DBD
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28043_C::OnDlgSelectedOption_214EB59E4A498141D715CCA5C48C7DBD(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28043_C", "OnDlgSelectedOption_214EB59E4A498141D715CCA5C48C7DBD");

	Params::Quest_28043_C_OnDlgSelectedOption_214EB59E4A498141D715CCA5C48C7DBD Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
