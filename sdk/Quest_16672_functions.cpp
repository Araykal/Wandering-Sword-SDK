#pragma once



// Package: Quest_16672

#include "Basic.hpp"

#include "Quest_16672_classes.hpp"
#include "Quest_16672_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_16672.Quest_16672_C.ExecuteUbergraph_Quest_16672
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_16672_C::ExecuteUbergraph_Quest_16672(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16672_C", "ExecuteUbergraph_Quest_16672");

	Params::Quest_16672_C_ExecuteUbergraph_Quest_16672 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_16672.Quest_16672_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_16672_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16672_C", "HandleFinishing");

	Params::Quest_16672_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_16672.Quest_16672_C.OnSuccess_3C1E604744EAD91313A2F88A3293C2D7
// (BlueprintCallable, BlueprintEvent)

void UQuest_16672_C::OnSuccess_3C1E604744EAD91313A2F88A3293C2D7()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16672_C", "OnSuccess_3C1E604744EAD91313A2F88A3293C2D7");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_16672.Quest_16672_C.OnFinished_1E11D49843B7AD732A48ACA6272DEF44
// (BlueprintCallable, BlueprintEvent)

void UQuest_16672_C::OnFinished_1E11D49843B7AD732A48ACA6272DEF44()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16672_C", "OnFinished_1E11D49843B7AD732A48ACA6272DEF44");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_16672.Quest_16672_C.OnStop_1E11D49843B7AD732A48ACA6272DEF44
// (BlueprintCallable, BlueprintEvent)

void UQuest_16672_C::OnStop_1E11D49843B7AD732A48ACA6272DEF44()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16672_C", "OnStop_1E11D49843B7AD732A48ACA6272DEF44");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_16672.Quest_16672_C.OnDlgClosed_D4C8B467495F7890A523E78120EB50E9
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_16672_C::OnDlgClosed_D4C8B467495F7890A523E78120EB50E9(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16672_C", "OnDlgClosed_D4C8B467495F7890A523E78120EB50E9");

	Params::Quest_16672_C_OnDlgClosed_D4C8B467495F7890A523E78120EB50E9 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_16672.Quest_16672_C.OnDlgSelectedOption_D4C8B467495F7890A523E78120EB50E9
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_16672_C::OnDlgSelectedOption_D4C8B467495F7890A523E78120EB50E9(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16672_C", "OnDlgSelectedOption_D4C8B467495F7890A523E78120EB50E9");

	Params::Quest_16672_C_OnDlgSelectedOption_D4C8B467495F7890A523E78120EB50E9 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
