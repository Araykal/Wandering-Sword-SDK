#pragma once



// Package: Quest_5645

#include "Basic.hpp"

#include "Quest_5645_classes.hpp"
#include "Quest_5645_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5645.Quest_5645_C.ExecuteUbergraph_Quest_5645
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5645_C::ExecuteUbergraph_Quest_5645(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5645_C", "ExecuteUbergraph_Quest_5645");

	Params::Quest_5645_C_ExecuteUbergraph_Quest_5645 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5645.Quest_5645_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5645_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5645_C", "HandleFinishing");

	Params::Quest_5645_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5645.Quest_5645_C.OnSuccess_1CD9F58C4D79506C7E9EA4A5A13C8408
// (BlueprintCallable, BlueprintEvent)

void UQuest_5645_C::OnSuccess_1CD9F58C4D79506C7E9EA4A5A13C8408()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5645_C", "OnSuccess_1CD9F58C4D79506C7E9EA4A5A13C8408");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5645.Quest_5645_C.OnFinished_58D1CE724660DD5F4B90F9958647F84D
// (BlueprintCallable, BlueprintEvent)

void UQuest_5645_C::OnFinished_58D1CE724660DD5F4B90F9958647F84D()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5645_C", "OnFinished_58D1CE724660DD5F4B90F9958647F84D");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5645.Quest_5645_C.OnStop_58D1CE724660DD5F4B90F9958647F84D
// (BlueprintCallable, BlueprintEvent)

void UQuest_5645_C::OnStop_58D1CE724660DD5F4B90F9958647F84D()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5645_C", "OnStop_58D1CE724660DD5F4B90F9958647F84D");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5645.Quest_5645_C.OnDlgClosed_BB6ECC274AD9151E95C3F4B382C91A5E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5645_C::OnDlgClosed_BB6ECC274AD9151E95C3F4B382C91A5E(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5645_C", "OnDlgClosed_BB6ECC274AD9151E95C3F4B382C91A5E");

	Params::Quest_5645_C_OnDlgClosed_BB6ECC274AD9151E95C3F4B382C91A5E Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5645.Quest_5645_C.OnDlgSelectedOption_BB6ECC274AD9151E95C3F4B382C91A5E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5645_C::OnDlgSelectedOption_BB6ECC274AD9151E95C3F4B382C91A5E(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5645_C", "OnDlgSelectedOption_BB6ECC274AD9151E95C3F4B382C91A5E");

	Params::Quest_5645_C_OnDlgSelectedOption_BB6ECC274AD9151E95C3F4B382C91A5E Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
