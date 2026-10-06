#pragma once



// Package: Quest_29804

#include "Basic.hpp"

#include "Quest_29804_classes.hpp"
#include "Quest_29804_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_29804.Quest_29804_C.ExecuteUbergraph_Quest_29804
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_29804_C::ExecuteUbergraph_Quest_29804(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29804_C", "ExecuteUbergraph_Quest_29804");

	Params::Quest_29804_C_ExecuteUbergraph_Quest_29804 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_29804.Quest_29804_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_29804_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29804_C", "HandleFinishing");

	Params::Quest_29804_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_29804.Quest_29804_C.OnSuccess_A498EE614E0D8AAC071E4CBC1F46333E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_29804_C::OnSuccess_A498EE614E0D8AAC071E4CBC1F46333E(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29804_C", "OnSuccess_A498EE614E0D8AAC071E4CBC1F46333E");

	Params::Quest_29804_C_OnSuccess_A498EE614E0D8AAC071E4CBC1F46333E Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_29804.Quest_29804_C.OnFinished_4FAE001F41C8F90141EE62A13330494F
// (BlueprintCallable, BlueprintEvent)

void UQuest_29804_C::OnFinished_4FAE001F41C8F90141EE62A13330494F()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29804_C", "OnFinished_4FAE001F41C8F90141EE62A13330494F");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_29804.Quest_29804_C.OnStop_4FAE001F41C8F90141EE62A13330494F
// (BlueprintCallable, BlueprintEvent)

void UQuest_29804_C::OnStop_4FAE001F41C8F90141EE62A13330494F()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29804_C", "OnStop_4FAE001F41C8F90141EE62A13330494F");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_29804.Quest_29804_C.OnDlgClosed_0018F1064F4064677E59D695F82664C5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_29804_C::OnDlgClosed_0018F1064F4064677E59D695F82664C5(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29804_C", "OnDlgClosed_0018F1064F4064677E59D695F82664C5");

	Params::Quest_29804_C_OnDlgClosed_0018F1064F4064677E59D695F82664C5 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_29804.Quest_29804_C.OnDlgSelectedOption_0018F1064F4064677E59D695F82664C5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_29804_C::OnDlgSelectedOption_0018F1064F4064677E59D695F82664C5(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29804_C", "OnDlgSelectedOption_0018F1064F4064677E59D695F82664C5");

	Params::Quest_29804_C_OnDlgSelectedOption_0018F1064F4064677E59D695F82664C5 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
