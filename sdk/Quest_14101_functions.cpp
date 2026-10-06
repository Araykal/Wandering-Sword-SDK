#pragma once



// Package: Quest_14101

#include "Basic.hpp"

#include "Quest_14101_classes.hpp"
#include "Quest_14101_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_14101.Quest_14101_C.ExecuteUbergraph_Quest_14101
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_14101_C::ExecuteUbergraph_Quest_14101(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_14101_C", "ExecuteUbergraph_Quest_14101");

	Params::Quest_14101_C_ExecuteUbergraph_Quest_14101 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_14101.Quest_14101_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_14101_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_14101_C", "HandleFinishing");

	Params::Quest_14101_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_14101.Quest_14101_C.OnFinished_C904EF1C4031E2AEA616F3ADA1CF73F4
// (BlueprintCallable, BlueprintEvent)

void UQuest_14101_C::OnFinished_C904EF1C4031E2AEA616F3ADA1CF73F4()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_14101_C", "OnFinished_C904EF1C4031E2AEA616F3ADA1CF73F4");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_14101.Quest_14101_C.OnStop_C904EF1C4031E2AEA616F3ADA1CF73F4
// (BlueprintCallable, BlueprintEvent)

void UQuest_14101_C::OnStop_C904EF1C4031E2AEA616F3ADA1CF73F4()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_14101_C", "OnStop_C904EF1C4031E2AEA616F3ADA1CF73F4");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_14101.Quest_14101_C.OnDlgClosed_4C6806654393AAD4C2BBAFADEBC2832D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_14101_C::OnDlgClosed_4C6806654393AAD4C2BBAFADEBC2832D(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_14101_C", "OnDlgClosed_4C6806654393AAD4C2BBAFADEBC2832D");

	Params::Quest_14101_C_OnDlgClosed_4C6806654393AAD4C2BBAFADEBC2832D Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_14101.Quest_14101_C.OnDlgSelectedOption_4C6806654393AAD4C2BBAFADEBC2832D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_14101_C::OnDlgSelectedOption_4C6806654393AAD4C2BBAFADEBC2832D(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_14101_C", "OnDlgSelectedOption_4C6806654393AAD4C2BBAFADEBC2832D");

	Params::Quest_14101_C_OnDlgSelectedOption_4C6806654393AAD4C2BBAFADEBC2832D Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
