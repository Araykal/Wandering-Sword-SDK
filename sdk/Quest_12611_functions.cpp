#pragma once



// Package: Quest_12611

#include "Basic.hpp"

#include "Quest_12611_classes.hpp"
#include "Quest_12611_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_12611.Quest_12611_C.ExecuteUbergraph_Quest_12611
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12611_C::ExecuteUbergraph_Quest_12611(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12611_C", "ExecuteUbergraph_Quest_12611");

	Params::Quest_12611_C_ExecuteUbergraph_Quest_12611 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12611.Quest_12611_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12611_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12611_C", "HandleFinishing");

	Params::Quest_12611_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12611.Quest_12611_C.OnSuccess_62B0B7554F4C6C478149F28FDE6B1CB8
// (BlueprintCallable, BlueprintEvent)

void UQuest_12611_C::OnSuccess_62B0B7554F4C6C478149F28FDE6B1CB8()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12611_C", "OnSuccess_62B0B7554F4C6C478149F28FDE6B1CB8");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12611.Quest_12611_C.OnFinished_B5E4728E4B433A299BAB898BB2D20AE6
// (BlueprintCallable, BlueprintEvent)

void UQuest_12611_C::OnFinished_B5E4728E4B433A299BAB898BB2D20AE6()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12611_C", "OnFinished_B5E4728E4B433A299BAB898BB2D20AE6");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12611.Quest_12611_C.OnStop_B5E4728E4B433A299BAB898BB2D20AE6
// (BlueprintCallable, BlueprintEvent)

void UQuest_12611_C::OnStop_B5E4728E4B433A299BAB898BB2D20AE6()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12611_C", "OnStop_B5E4728E4B433A299BAB898BB2D20AE6");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12611.Quest_12611_C.OnDlgClosed_4F33B35B4D228EDF07CCC699599F0CC1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12611_C::OnDlgClosed_4F33B35B4D228EDF07CCC699599F0CC1(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12611_C", "OnDlgClosed_4F33B35B4D228EDF07CCC699599F0CC1");

	Params::Quest_12611_C_OnDlgClosed_4F33B35B4D228EDF07CCC699599F0CC1 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12611.Quest_12611_C.OnDlgSelectedOption_4F33B35B4D228EDF07CCC699599F0CC1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12611_C::OnDlgSelectedOption_4F33B35B4D228EDF07CCC699599F0CC1(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12611_C", "OnDlgSelectedOption_4F33B35B4D228EDF07CCC699599F0CC1");

	Params::Quest_12611_C_OnDlgSelectedOption_4F33B35B4D228EDF07CCC699599F0CC1 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
