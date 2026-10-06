#pragma once



// Package: Quest_11678

#include "Basic.hpp"

#include "Quest_11678_classes.hpp"
#include "Quest_11678_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_11678.Quest_11678_C.ExecuteUbergraph_Quest_11678
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11678_C::ExecuteUbergraph_Quest_11678(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11678_C", "ExecuteUbergraph_Quest_11678");

	Params::Quest_11678_C_ExecuteUbergraph_Quest_11678 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11678.Quest_11678_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11678_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11678_C", "HandleFinishing");

	Params::Quest_11678_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11678.Quest_11678_C.OnFinished_60C38A714F0079E2B0F2C18C27315464
// (BlueprintCallable, BlueprintEvent)

void UQuest_11678_C::OnFinished_60C38A714F0079E2B0F2C18C27315464()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11678_C", "OnFinished_60C38A714F0079E2B0F2C18C27315464");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_11678.Quest_11678_C.OnStop_60C38A714F0079E2B0F2C18C27315464
// (BlueprintCallable, BlueprintEvent)

void UQuest_11678_C::OnStop_60C38A714F0079E2B0F2C18C27315464()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11678_C", "OnStop_60C38A714F0079E2B0F2C18C27315464");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_11678.Quest_11678_C.OnDlgClosed_FC16CDC64ED1C330B457E89AFE405B89
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11678_C::OnDlgClosed_FC16CDC64ED1C330B457E89AFE405B89(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11678_C", "OnDlgClosed_FC16CDC64ED1C330B457E89AFE405B89");

	Params::Quest_11678_C_OnDlgClosed_FC16CDC64ED1C330B457E89AFE405B89 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11678.Quest_11678_C.OnDlgSelectedOption_FC16CDC64ED1C330B457E89AFE405B89
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11678_C::OnDlgSelectedOption_FC16CDC64ED1C330B457E89AFE405B89(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11678_C", "OnDlgSelectedOption_FC16CDC64ED1C330B457E89AFE405B89");

	Params::Quest_11678_C_OnDlgSelectedOption_FC16CDC64ED1C330B457E89AFE405B89 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
