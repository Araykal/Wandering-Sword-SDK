#pragma once



// Package: Quest_29822

#include "Basic.hpp"

#include "Quest_29822_classes.hpp"
#include "Quest_29822_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_29822.Quest_29822_C.ExecuteUbergraph_Quest_29822
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_29822_C::ExecuteUbergraph_Quest_29822(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29822_C", "ExecuteUbergraph_Quest_29822");

	Params::Quest_29822_C_ExecuteUbergraph_Quest_29822 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_29822.Quest_29822_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_29822_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29822_C", "HandleFinishing");

	Params::Quest_29822_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_29822.Quest_29822_C.OnSuccess_35B8605F4A2577CBD284229632CB50A0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_29822_C::OnSuccess_35B8605F4A2577CBD284229632CB50A0(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29822_C", "OnSuccess_35B8605F4A2577CBD284229632CB50A0");

	Params::Quest_29822_C_OnSuccess_35B8605F4A2577CBD284229632CB50A0 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_29822.Quest_29822_C.OnFinished_93CD9F6447B0C446BF9DCAA5EA497CD8
// (BlueprintCallable, BlueprintEvent)

void UQuest_29822_C::OnFinished_93CD9F6447B0C446BF9DCAA5EA497CD8()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29822_C", "OnFinished_93CD9F6447B0C446BF9DCAA5EA497CD8");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_29822.Quest_29822_C.OnStop_93CD9F6447B0C446BF9DCAA5EA497CD8
// (BlueprintCallable, BlueprintEvent)

void UQuest_29822_C::OnStop_93CD9F6447B0C446BF9DCAA5EA497CD8()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29822_C", "OnStop_93CD9F6447B0C446BF9DCAA5EA497CD8");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_29822.Quest_29822_C.OnDlgClosed_3F63D0B74D5F0D2D84118E88E71B4EC3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_29822_C::OnDlgClosed_3F63D0B74D5F0D2D84118E88E71B4EC3(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29822_C", "OnDlgClosed_3F63D0B74D5F0D2D84118E88E71B4EC3");

	Params::Quest_29822_C_OnDlgClosed_3F63D0B74D5F0D2D84118E88E71B4EC3 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_29822.Quest_29822_C.OnDlgSelectedOption_3F63D0B74D5F0D2D84118E88E71B4EC3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_29822_C::OnDlgSelectedOption_3F63D0B74D5F0D2D84118E88E71B4EC3(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29822_C", "OnDlgSelectedOption_3F63D0B74D5F0D2D84118E88E71B4EC3");

	Params::Quest_29822_C_OnDlgSelectedOption_3F63D0B74D5F0D2D84118E88E71B4EC3 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
