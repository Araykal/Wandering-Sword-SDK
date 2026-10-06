#pragma once



// Package: Quest_5356

#include "Basic.hpp"

#include "Quest_5356_classes.hpp"
#include "Quest_5356_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5356.Quest_5356_C.ExecuteUbergraph_Quest_5356
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5356_C::ExecuteUbergraph_Quest_5356(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5356_C", "ExecuteUbergraph_Quest_5356");

	Params::Quest_5356_C_ExecuteUbergraph_Quest_5356 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5356.Quest_5356_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5356_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5356_C", "HandleFinishing");

	Params::Quest_5356_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5356.Quest_5356_C.OnFinished_F3E599834CC7C403C39683A9B09F966A
// (BlueprintCallable, BlueprintEvent)

void UQuest_5356_C::OnFinished_F3E599834CC7C403C39683A9B09F966A()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5356_C", "OnFinished_F3E599834CC7C403C39683A9B09F966A");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5356.Quest_5356_C.OnStop_F3E599834CC7C403C39683A9B09F966A
// (BlueprintCallable, BlueprintEvent)

void UQuest_5356_C::OnStop_F3E599834CC7C403C39683A9B09F966A()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5356_C", "OnStop_F3E599834CC7C403C39683A9B09F966A");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5356.Quest_5356_C.OnDlgClosed_BA25B5E64157D8957516AD89577F9580
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5356_C::OnDlgClosed_BA25B5E64157D8957516AD89577F9580(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5356_C", "OnDlgClosed_BA25B5E64157D8957516AD89577F9580");

	Params::Quest_5356_C_OnDlgClosed_BA25B5E64157D8957516AD89577F9580 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5356.Quest_5356_C.OnDlgSelectedOption_BA25B5E64157D8957516AD89577F9580
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5356_C::OnDlgSelectedOption_BA25B5E64157D8957516AD89577F9580(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5356_C", "OnDlgSelectedOption_BA25B5E64157D8957516AD89577F9580");

	Params::Quest_5356_C_OnDlgSelectedOption_BA25B5E64157D8957516AD89577F9580 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5356.Quest_5356_C.OnSuccess_6FE6EF31473CC9721990619BA6485F97
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_5356_C::OnSuccess_6FE6EF31473CC9721990619BA6485F97(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5356_C", "OnSuccess_6FE6EF31473CC9721990619BA6485F97");

	Params::Quest_5356_C_OnSuccess_6FE6EF31473CC9721990619BA6485F97 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
