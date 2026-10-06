#pragma once



// Package: Quest_11378

#include "Basic.hpp"

#include "Quest_11378_classes.hpp"
#include "Quest_11378_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_11378.Quest_11378_C.ExecuteUbergraph_Quest_11378
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11378_C::ExecuteUbergraph_Quest_11378(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11378_C", "ExecuteUbergraph_Quest_11378");

	Params::Quest_11378_C_ExecuteUbergraph_Quest_11378 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11378.Quest_11378_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11378_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11378_C", "HandleFinishing");

	Params::Quest_11378_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11378.Quest_11378_C.OnFinished_83DB20BE4A207BC1146361996A9E4077
// (BlueprintCallable, BlueprintEvent)

void UQuest_11378_C::OnFinished_83DB20BE4A207BC1146361996A9E4077()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11378_C", "OnFinished_83DB20BE4A207BC1146361996A9E4077");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_11378.Quest_11378_C.OnStop_83DB20BE4A207BC1146361996A9E4077
// (BlueprintCallable, BlueprintEvent)

void UQuest_11378_C::OnStop_83DB20BE4A207BC1146361996A9E4077()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11378_C", "OnStop_83DB20BE4A207BC1146361996A9E4077");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_11378.Quest_11378_C.OnDlgClosed_40D7D3724747056930995BB3E2F052D7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11378_C::OnDlgClosed_40D7D3724747056930995BB3E2F052D7(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11378_C", "OnDlgClosed_40D7D3724747056930995BB3E2F052D7");

	Params::Quest_11378_C_OnDlgClosed_40D7D3724747056930995BB3E2F052D7 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11378.Quest_11378_C.OnDlgSelectedOption_40D7D3724747056930995BB3E2F052D7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11378_C::OnDlgSelectedOption_40D7D3724747056930995BB3E2F052D7(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11378_C", "OnDlgSelectedOption_40D7D3724747056930995BB3E2F052D7");

	Params::Quest_11378_C_OnDlgSelectedOption_40D7D3724747056930995BB3E2F052D7 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11378.Quest_11378_C.OnSuccess_AD57497B41A675D0F6F9B4BE2C29332D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_11378_C::OnSuccess_AD57497B41A675D0F6F9B4BE2C29332D(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11378_C", "OnSuccess_AD57497B41A675D0F6F9B4BE2C29332D");

	Params::Quest_11378_C_OnSuccess_AD57497B41A675D0F6F9B4BE2C29332D Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
