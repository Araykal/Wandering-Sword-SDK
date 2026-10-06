#pragma once



// Package: Quest_14071

#include "Basic.hpp"

#include "Quest_14071_classes.hpp"
#include "Quest_14071_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_14071.Quest_14071_C.ExecuteUbergraph_Quest_14071
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_14071_C::ExecuteUbergraph_Quest_14071(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_14071_C", "ExecuteUbergraph_Quest_14071");

	Params::Quest_14071_C_ExecuteUbergraph_Quest_14071 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_14071.Quest_14071_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_14071_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_14071_C", "HandleFinishing");

	Params::Quest_14071_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_14071.Quest_14071_C.OnFinished_A6FBD9A14C7DAD0D39B71A976DA4F530
// (BlueprintCallable, BlueprintEvent)

void UQuest_14071_C::OnFinished_A6FBD9A14C7DAD0D39B71A976DA4F530()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_14071_C", "OnFinished_A6FBD9A14C7DAD0D39B71A976DA4F530");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_14071.Quest_14071_C.OnStop_A6FBD9A14C7DAD0D39B71A976DA4F530
// (BlueprintCallable, BlueprintEvent)

void UQuest_14071_C::OnStop_A6FBD9A14C7DAD0D39B71A976DA4F530()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_14071_C", "OnStop_A6FBD9A14C7DAD0D39B71A976DA4F530");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_14071.Quest_14071_C.OnDlgClosed_0522331549C930769131FEAAA2AFA5C1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_14071_C::OnDlgClosed_0522331549C930769131FEAAA2AFA5C1(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_14071_C", "OnDlgClosed_0522331549C930769131FEAAA2AFA5C1");

	Params::Quest_14071_C_OnDlgClosed_0522331549C930769131FEAAA2AFA5C1 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_14071.Quest_14071_C.OnDlgSelectedOption_0522331549C930769131FEAAA2AFA5C1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_14071_C::OnDlgSelectedOption_0522331549C930769131FEAAA2AFA5C1(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_14071_C", "OnDlgSelectedOption_0522331549C930769131FEAAA2AFA5C1");

	Params::Quest_14071_C_OnDlgSelectedOption_0522331549C930769131FEAAA2AFA5C1 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
