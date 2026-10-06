#pragma once



// Package: Quest_32037

#include "Basic.hpp"

#include "Quest_32037_classes.hpp"
#include "Quest_32037_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_32037.Quest_32037_C.ExecuteUbergraph_Quest_32037
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_32037_C::ExecuteUbergraph_Quest_32037(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_32037_C", "ExecuteUbergraph_Quest_32037");

	Params::Quest_32037_C_ExecuteUbergraph_Quest_32037 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_32037.Quest_32037_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_32037_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_32037_C", "HandleFinishing");

	Params::Quest_32037_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_32037.Quest_32037_C.OnFinished_878B363349300EAC03A5E78A42C87B88
// (BlueprintCallable, BlueprintEvent)

void UQuest_32037_C::OnFinished_878B363349300EAC03A5E78A42C87B88()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_32037_C", "OnFinished_878B363349300EAC03A5E78A42C87B88");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_32037.Quest_32037_C.OnStop_878B363349300EAC03A5E78A42C87B88
// (BlueprintCallable, BlueprintEvent)

void UQuest_32037_C::OnStop_878B363349300EAC03A5E78A42C87B88()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_32037_C", "OnStop_878B363349300EAC03A5E78A42C87B88");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_32037.Quest_32037_C.OnDlgClosed_204552BE44E668B4932BC69529A1BA0F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_32037_C::OnDlgClosed_204552BE44E668B4932BC69529A1BA0F(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_32037_C", "OnDlgClosed_204552BE44E668B4932BC69529A1BA0F");

	Params::Quest_32037_C_OnDlgClosed_204552BE44E668B4932BC69529A1BA0F Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_32037.Quest_32037_C.OnDlgSelectedOption_204552BE44E668B4932BC69529A1BA0F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_32037_C::OnDlgSelectedOption_204552BE44E668B4932BC69529A1BA0F(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_32037_C", "OnDlgSelectedOption_204552BE44E668B4932BC69529A1BA0F");

	Params::Quest_32037_C_OnDlgSelectedOption_204552BE44E668B4932BC69529A1BA0F Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
