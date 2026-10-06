#pragma once



// Package: Quest_12115

#include "Basic.hpp"

#include "Quest_12115_classes.hpp"
#include "Quest_12115_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_12115.Quest_12115_C.ExecuteUbergraph_Quest_12115
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12115_C::ExecuteUbergraph_Quest_12115(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12115_C", "ExecuteUbergraph_Quest_12115");

	Params::Quest_12115_C_ExecuteUbergraph_Quest_12115 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12115.Quest_12115_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12115_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12115_C", "HandleFinishing");

	Params::Quest_12115_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12115.Quest_12115_C.OnFinished_3209BE914047374A1A250CA86DC7CF51
// (BlueprintCallable, BlueprintEvent)

void UQuest_12115_C::OnFinished_3209BE914047374A1A250CA86DC7CF51()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12115_C", "OnFinished_3209BE914047374A1A250CA86DC7CF51");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12115.Quest_12115_C.OnStop_3209BE914047374A1A250CA86DC7CF51
// (BlueprintCallable, BlueprintEvent)

void UQuest_12115_C::OnStop_3209BE914047374A1A250CA86DC7CF51()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12115_C", "OnStop_3209BE914047374A1A250CA86DC7CF51");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12115.Quest_12115_C.OnDlgClosed_2E06FC4D44A56ABC6545ADB4E0E3369D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12115_C::OnDlgClosed_2E06FC4D44A56ABC6545ADB4E0E3369D(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12115_C", "OnDlgClosed_2E06FC4D44A56ABC6545ADB4E0E3369D");

	Params::Quest_12115_C_OnDlgClosed_2E06FC4D44A56ABC6545ADB4E0E3369D Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12115.Quest_12115_C.OnDlgSelectedOption_2E06FC4D44A56ABC6545ADB4E0E3369D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12115_C::OnDlgSelectedOption_2E06FC4D44A56ABC6545ADB4E0E3369D(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12115_C", "OnDlgSelectedOption_2E06FC4D44A56ABC6545ADB4E0E3369D");

	Params::Quest_12115_C_OnDlgSelectedOption_2E06FC4D44A56ABC6545ADB4E0E3369D Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12115.Quest_12115_C.OnSuccess_265D22A54471312BDD9C07B88B5549EC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_12115_C::OnSuccess_265D22A54471312BDD9C07B88B5549EC(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12115_C", "OnSuccess_265D22A54471312BDD9C07B88B5549EC");

	Params::Quest_12115_C_OnSuccess_265D22A54471312BDD9C07B88B5549EC Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
