#pragma once



// Package: Quest_12052

#include "Basic.hpp"

#include "Quest_12052_classes.hpp"
#include "Quest_12052_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_12052.Quest_12052_C.ExecuteUbergraph_Quest_12052
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12052_C::ExecuteUbergraph_Quest_12052(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12052_C", "ExecuteUbergraph_Quest_12052");

	Params::Quest_12052_C_ExecuteUbergraph_Quest_12052 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12052.Quest_12052_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12052_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12052_C", "HandleFinishing");

	Params::Quest_12052_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12052.Quest_12052_C.OnFinished_197F82204E35D0BB9DDD7B8A6C4F9E80
// (BlueprintCallable, BlueprintEvent)

void UQuest_12052_C::OnFinished_197F82204E35D0BB9DDD7B8A6C4F9E80()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12052_C", "OnFinished_197F82204E35D0BB9DDD7B8A6C4F9E80");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12052.Quest_12052_C.OnStop_197F82204E35D0BB9DDD7B8A6C4F9E80
// (BlueprintCallable, BlueprintEvent)

void UQuest_12052_C::OnStop_197F82204E35D0BB9DDD7B8A6C4F9E80()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12052_C", "OnStop_197F82204E35D0BB9DDD7B8A6C4F9E80");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12052.Quest_12052_C.OnDlgClosed_0C54587A4D780B09B043E0B7BBBF849F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12052_C::OnDlgClosed_0C54587A4D780B09B043E0B7BBBF849F(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12052_C", "OnDlgClosed_0C54587A4D780B09B043E0B7BBBF849F");

	Params::Quest_12052_C_OnDlgClosed_0C54587A4D780B09B043E0B7BBBF849F Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12052.Quest_12052_C.OnDlgSelectedOption_0C54587A4D780B09B043E0B7BBBF849F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12052_C::OnDlgSelectedOption_0C54587A4D780B09B043E0B7BBBF849F(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12052_C", "OnDlgSelectedOption_0C54587A4D780B09B043E0B7BBBF849F");

	Params::Quest_12052_C_OnDlgSelectedOption_0C54587A4D780B09B043E0B7BBBF849F Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
