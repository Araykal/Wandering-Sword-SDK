#pragma once



// Package: Quest_12314

#include "Basic.hpp"

#include "Quest_12314_classes.hpp"
#include "Quest_12314_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_12314.Quest_12314_C.ExecuteUbergraph_Quest_12314
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12314_C::ExecuteUbergraph_Quest_12314(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12314_C", "ExecuteUbergraph_Quest_12314");

	Params::Quest_12314_C_ExecuteUbergraph_Quest_12314 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12314.Quest_12314_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12314_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12314_C", "HandleFinishing");

	Params::Quest_12314_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12314.Quest_12314_C.OnSuccess_571E16BC4266A49BDA3FABA4ECB020CD
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_12314_C::OnSuccess_571E16BC4266A49BDA3FABA4ECB020CD(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12314_C", "OnSuccess_571E16BC4266A49BDA3FABA4ECB020CD");

	Params::Quest_12314_C_OnSuccess_571E16BC4266A49BDA3FABA4ECB020CD Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12314.Quest_12314_C.OnFinished_6204667F4EEF38CA04D9AF82BC60E17F
// (BlueprintCallable, BlueprintEvent)

void UQuest_12314_C::OnFinished_6204667F4EEF38CA04D9AF82BC60E17F()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12314_C", "OnFinished_6204667F4EEF38CA04D9AF82BC60E17F");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12314.Quest_12314_C.OnStop_6204667F4EEF38CA04D9AF82BC60E17F
// (BlueprintCallable, BlueprintEvent)

void UQuest_12314_C::OnStop_6204667F4EEF38CA04D9AF82BC60E17F()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12314_C", "OnStop_6204667F4EEF38CA04D9AF82BC60E17F");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12314.Quest_12314_C.OnDlgClosed_C6ED94D146266B82A78AA1BFA47EC237
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12314_C::OnDlgClosed_C6ED94D146266B82A78AA1BFA47EC237(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12314_C", "OnDlgClosed_C6ED94D146266B82A78AA1BFA47EC237");

	Params::Quest_12314_C_OnDlgClosed_C6ED94D146266B82A78AA1BFA47EC237 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12314.Quest_12314_C.OnDlgSelectedOption_C6ED94D146266B82A78AA1BFA47EC237
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12314_C::OnDlgSelectedOption_C6ED94D146266B82A78AA1BFA47EC237(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12314_C", "OnDlgSelectedOption_C6ED94D146266B82A78AA1BFA47EC237");

	Params::Quest_12314_C_OnDlgSelectedOption_C6ED94D146266B82A78AA1BFA47EC237 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12314.Quest_12314_C.OnSuccess_8529BD4641349D6101C8A89B9A0A7A51
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_12314_C::OnSuccess_8529BD4641349D6101C8A89B9A0A7A51(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12314_C", "OnSuccess_8529BD4641349D6101C8A89B9A0A7A51");

	Params::Quest_12314_C_OnSuccess_8529BD4641349D6101C8A89B9A0A7A51 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
