#pragma once



// Package: Quest_30318

#include "Basic.hpp"

#include "Quest_30318_classes.hpp"
#include "Quest_30318_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_30318.Quest_30318_C.ExecuteUbergraph_Quest_30318
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30318_C::ExecuteUbergraph_Quest_30318(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30318_C", "ExecuteUbergraph_Quest_30318");

	Params::Quest_30318_C_ExecuteUbergraph_Quest_30318 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30318.Quest_30318_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30318_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30318_C", "HandleFinishing");

	Params::Quest_30318_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30318.Quest_30318_C.OnDlgClosed_853E6E7F422831BCF8FF5C98CA730A1C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30318_C::OnDlgClosed_853E6E7F422831BCF8FF5C98CA730A1C(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30318_C", "OnDlgClosed_853E6E7F422831BCF8FF5C98CA730A1C");

	Params::Quest_30318_C_OnDlgClosed_853E6E7F422831BCF8FF5C98CA730A1C Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30318.Quest_30318_C.OnDlgSelectedOption_853E6E7F422831BCF8FF5C98CA730A1C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30318_C::OnDlgSelectedOption_853E6E7F422831BCF8FF5C98CA730A1C(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30318_C", "OnDlgSelectedOption_853E6E7F422831BCF8FF5C98CA730A1C");

	Params::Quest_30318_C_OnDlgSelectedOption_853E6E7F422831BCF8FF5C98CA730A1C Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30318.Quest_30318_C.OnSuccess_60395A244615CCFE6BFB288452D87E19
// (BlueprintCallable, BlueprintEvent)

void UQuest_30318_C::OnSuccess_60395A244615CCFE6BFB288452D87E19()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30318_C", "OnSuccess_60395A244615CCFE6BFB288452D87E19");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30318.Quest_30318_C.OnFinished_CE87A7C94CC6114B9CF6C49B3CB56D41
// (BlueprintCallable, BlueprintEvent)

void UQuest_30318_C::OnFinished_CE87A7C94CC6114B9CF6C49B3CB56D41()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30318_C", "OnFinished_CE87A7C94CC6114B9CF6C49B3CB56D41");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30318.Quest_30318_C.OnStop_CE87A7C94CC6114B9CF6C49B3CB56D41
// (BlueprintCallable, BlueprintEvent)

void UQuest_30318_C::OnStop_CE87A7C94CC6114B9CF6C49B3CB56D41()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30318_C", "OnStop_CE87A7C94CC6114B9CF6C49B3CB56D41");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
