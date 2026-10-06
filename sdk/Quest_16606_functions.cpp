#pragma once



// Package: Quest_16606

#include "Basic.hpp"

#include "Quest_16606_classes.hpp"
#include "Quest_16606_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_16606.Quest_16606_C.ExecuteUbergraph_Quest_16606
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_16606_C::ExecuteUbergraph_Quest_16606(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16606_C", "ExecuteUbergraph_Quest_16606");

	Params::Quest_16606_C_ExecuteUbergraph_Quest_16606 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_16606.Quest_16606_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_16606_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16606_C", "HandleFinishing");

	Params::Quest_16606_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_16606.Quest_16606_C.OnSuccess_3D92727F4D8EA39B9A68CB9A87069AFD
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_16606_C::OnSuccess_3D92727F4D8EA39B9A68CB9A87069AFD(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16606_C", "OnSuccess_3D92727F4D8EA39B9A68CB9A87069AFD");

	Params::Quest_16606_C_OnSuccess_3D92727F4D8EA39B9A68CB9A87069AFD Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_16606.Quest_16606_C.OnFinished_4822EA9A4485A7117778B294FDD7410F
// (BlueprintCallable, BlueprintEvent)

void UQuest_16606_C::OnFinished_4822EA9A4485A7117778B294FDD7410F()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16606_C", "OnFinished_4822EA9A4485A7117778B294FDD7410F");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_16606.Quest_16606_C.OnStop_4822EA9A4485A7117778B294FDD7410F
// (BlueprintCallable, BlueprintEvent)

void UQuest_16606_C::OnStop_4822EA9A4485A7117778B294FDD7410F()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16606_C", "OnStop_4822EA9A4485A7117778B294FDD7410F");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_16606.Quest_16606_C.OnDlgClosed_A93999E24D22B3F968E68B982563F476
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_16606_C::OnDlgClosed_A93999E24D22B3F968E68B982563F476(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16606_C", "OnDlgClosed_A93999E24D22B3F968E68B982563F476");

	Params::Quest_16606_C_OnDlgClosed_A93999E24D22B3F968E68B982563F476 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_16606.Quest_16606_C.OnDlgSelectedOption_A93999E24D22B3F968E68B982563F476
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_16606_C::OnDlgSelectedOption_A93999E24D22B3F968E68B982563F476(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16606_C", "OnDlgSelectedOption_A93999E24D22B3F968E68B982563F476");

	Params::Quest_16606_C_OnDlgSelectedOption_A93999E24D22B3F968E68B982563F476 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_16606.Quest_16606_C.OnSuccess_04D872754DB646F6E59241800696B970
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_16606_C::OnSuccess_04D872754DB646F6E59241800696B970(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16606_C", "OnSuccess_04D872754DB646F6E59241800696B970");

	Params::Quest_16606_C_OnSuccess_04D872754DB646F6E59241800696B970 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
