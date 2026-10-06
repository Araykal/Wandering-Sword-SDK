#pragma once



// Package: Quest_5091

#include "Basic.hpp"

#include "Quest_5091_classes.hpp"
#include "Quest_5091_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5091.Quest_5091_C.ExecuteUbergraph_Quest_5091
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5091_C::ExecuteUbergraph_Quest_5091(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5091_C", "ExecuteUbergraph_Quest_5091");

	Params::Quest_5091_C_ExecuteUbergraph_Quest_5091 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5091.Quest_5091_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5091_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5091_C", "HandleFinishing");

	Params::Quest_5091_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5091.Quest_5091_C.OnFinished_D4D1CB37474942D5631615ADB4E98DDE
// (BlueprintCallable, BlueprintEvent)

void UQuest_5091_C::OnFinished_D4D1CB37474942D5631615ADB4E98DDE()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5091_C", "OnFinished_D4D1CB37474942D5631615ADB4E98DDE");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5091.Quest_5091_C.OnStop_D4D1CB37474942D5631615ADB4E98DDE
// (BlueprintCallable, BlueprintEvent)

void UQuest_5091_C::OnStop_D4D1CB37474942D5631615ADB4E98DDE()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5091_C", "OnStop_D4D1CB37474942D5631615ADB4E98DDE");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5091.Quest_5091_C.OnDlgClosed_4F112C234A76B0E8409622A9EE82E0A3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5091_C::OnDlgClosed_4F112C234A76B0E8409622A9EE82E0A3(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5091_C", "OnDlgClosed_4F112C234A76B0E8409622A9EE82E0A3");

	Params::Quest_5091_C_OnDlgClosed_4F112C234A76B0E8409622A9EE82E0A3 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5091.Quest_5091_C.OnDlgSelectedOption_4F112C234A76B0E8409622A9EE82E0A3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5091_C::OnDlgSelectedOption_4F112C234A76B0E8409622A9EE82E0A3(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5091_C", "OnDlgSelectedOption_4F112C234A76B0E8409622A9EE82E0A3");

	Params::Quest_5091_C_OnDlgSelectedOption_4F112C234A76B0E8409622A9EE82E0A3 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
