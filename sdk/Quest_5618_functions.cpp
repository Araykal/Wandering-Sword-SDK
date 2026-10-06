#pragma once



// Package: Quest_5618

#include "Basic.hpp"

#include "Quest_5618_classes.hpp"
#include "Quest_5618_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5618.Quest_5618_C.ExecuteUbergraph_Quest_5618
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5618_C::ExecuteUbergraph_Quest_5618(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5618_C", "ExecuteUbergraph_Quest_5618");

	Params::Quest_5618_C_ExecuteUbergraph_Quest_5618 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5618.Quest_5618_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5618_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5618_C", "HandleFinishing");

	Params::Quest_5618_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5618.Quest_5618_C.OnSuccess_0FD36C8C496916EC053332A8E5708D50
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_5618_C::OnSuccess_0FD36C8C496916EC053332A8E5708D50(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5618_C", "OnSuccess_0FD36C8C496916EC053332A8E5708D50");

	Params::Quest_5618_C_OnSuccess_0FD36C8C496916EC053332A8E5708D50 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5618.Quest_5618_C.OnFinished_9CF047104AA5F55EB10DEE820D70BA20
// (BlueprintCallable, BlueprintEvent)

void UQuest_5618_C::OnFinished_9CF047104AA5F55EB10DEE820D70BA20()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5618_C", "OnFinished_9CF047104AA5F55EB10DEE820D70BA20");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5618.Quest_5618_C.OnStop_9CF047104AA5F55EB10DEE820D70BA20
// (BlueprintCallable, BlueprintEvent)

void UQuest_5618_C::OnStop_9CF047104AA5F55EB10DEE820D70BA20()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5618_C", "OnStop_9CF047104AA5F55EB10DEE820D70BA20");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5618.Quest_5618_C.OnDlgClosed_9414A80C4094420C129E3D8F0029B38F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5618_C::OnDlgClosed_9414A80C4094420C129E3D8F0029B38F(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5618_C", "OnDlgClosed_9414A80C4094420C129E3D8F0029B38F");

	Params::Quest_5618_C_OnDlgClosed_9414A80C4094420C129E3D8F0029B38F Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5618.Quest_5618_C.OnDlgSelectedOption_9414A80C4094420C129E3D8F0029B38F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5618_C::OnDlgSelectedOption_9414A80C4094420C129E3D8F0029B38F(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5618_C", "OnDlgSelectedOption_9414A80C4094420C129E3D8F0029B38F");

	Params::Quest_5618_C_OnDlgSelectedOption_9414A80C4094420C129E3D8F0029B38F Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
