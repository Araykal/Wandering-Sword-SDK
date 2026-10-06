#pragma once



// Package: Quest_5340

#include "Basic.hpp"

#include "Quest_5340_classes.hpp"
#include "Quest_5340_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5340.Quest_5340_C.ExecuteUbergraph_Quest_5340
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5340_C::ExecuteUbergraph_Quest_5340(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5340_C", "ExecuteUbergraph_Quest_5340");

	Params::Quest_5340_C_ExecuteUbergraph_Quest_5340 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5340.Quest_5340_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5340_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5340_C", "HandleFinishing");

	Params::Quest_5340_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5340.Quest_5340_C.OnFinished_0F3C0FAB4899B7E044DEB090F3952642
// (BlueprintCallable, BlueprintEvent)

void UQuest_5340_C::OnFinished_0F3C0FAB4899B7E044DEB090F3952642()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5340_C", "OnFinished_0F3C0FAB4899B7E044DEB090F3952642");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5340.Quest_5340_C.OnStop_0F3C0FAB4899B7E044DEB090F3952642
// (BlueprintCallable, BlueprintEvent)

void UQuest_5340_C::OnStop_0F3C0FAB4899B7E044DEB090F3952642()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5340_C", "OnStop_0F3C0FAB4899B7E044DEB090F3952642");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5340.Quest_5340_C.OnDlgClosed_1F4E8FED4B1F5491E2F26EB4C2523967
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5340_C::OnDlgClosed_1F4E8FED4B1F5491E2F26EB4C2523967(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5340_C", "OnDlgClosed_1F4E8FED4B1F5491E2F26EB4C2523967");

	Params::Quest_5340_C_OnDlgClosed_1F4E8FED4B1F5491E2F26EB4C2523967 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5340.Quest_5340_C.OnDlgSelectedOption_1F4E8FED4B1F5491E2F26EB4C2523967
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5340_C::OnDlgSelectedOption_1F4E8FED4B1F5491E2F26EB4C2523967(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5340_C", "OnDlgSelectedOption_1F4E8FED4B1F5491E2F26EB4C2523967");

	Params::Quest_5340_C_OnDlgSelectedOption_1F4E8FED4B1F5491E2F26EB4C2523967 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5340.Quest_5340_C.OnSuccess_6270728D4666168B6AF7CDB85174B340
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_5340_C::OnSuccess_6270728D4666168B6AF7CDB85174B340(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5340_C", "OnSuccess_6270728D4666168B6AF7CDB85174B340");

	Params::Quest_5340_C_OnSuccess_6270728D4666168B6AF7CDB85174B340 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
