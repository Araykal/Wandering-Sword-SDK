#pragma once



// Package: Quest_28276

#include "Basic.hpp"

#include "Quest_28276_classes.hpp"
#include "Quest_28276_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_28276.Quest_28276_C.ExecuteUbergraph_Quest_28276
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28276_C::ExecuteUbergraph_Quest_28276(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28276_C", "ExecuteUbergraph_Quest_28276");

	Params::Quest_28276_C_ExecuteUbergraph_Quest_28276 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28276.Quest_28276_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28276_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28276_C", "HandleFinishing");

	Params::Quest_28276_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28276.Quest_28276_C.OnSuccess_0396CB9F40C6FFACBBBA379ACC9A5337
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_28276_C::OnSuccess_0396CB9F40C6FFACBBBA379ACC9A5337(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28276_C", "OnSuccess_0396CB9F40C6FFACBBBA379ACC9A5337");

	Params::Quest_28276_C_OnSuccess_0396CB9F40C6FFACBBBA379ACC9A5337 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28276.Quest_28276_C.OnSuccess_E29BA15F4D9B9A8278D9B2981B0FEC30
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_28276_C::OnSuccess_E29BA15F4D9B9A8278D9B2981B0FEC30(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28276_C", "OnSuccess_E29BA15F4D9B9A8278D9B2981B0FEC30");

	Params::Quest_28276_C_OnSuccess_E29BA15F4D9B9A8278D9B2981B0FEC30 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28276.Quest_28276_C.OnFinished_520DA71944C1211C24A48E90DC6541C7
// (BlueprintCallable, BlueprintEvent)

void UQuest_28276_C::OnFinished_520DA71944C1211C24A48E90DC6541C7()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28276_C", "OnFinished_520DA71944C1211C24A48E90DC6541C7");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28276.Quest_28276_C.OnStop_520DA71944C1211C24A48E90DC6541C7
// (BlueprintCallable, BlueprintEvent)

void UQuest_28276_C::OnStop_520DA71944C1211C24A48E90DC6541C7()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28276_C", "OnStop_520DA71944C1211C24A48E90DC6541C7");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28276.Quest_28276_C.OnDlgClosed_A2DACA0341A5F9FDD413679F5C9F7109
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28276_C::OnDlgClosed_A2DACA0341A5F9FDD413679F5C9F7109(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28276_C", "OnDlgClosed_A2DACA0341A5F9FDD413679F5C9F7109");

	Params::Quest_28276_C_OnDlgClosed_A2DACA0341A5F9FDD413679F5C9F7109 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28276.Quest_28276_C.OnDlgSelectedOption_A2DACA0341A5F9FDD413679F5C9F7109
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28276_C::OnDlgSelectedOption_A2DACA0341A5F9FDD413679F5C9F7109(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28276_C", "OnDlgSelectedOption_A2DACA0341A5F9FDD413679F5C9F7109");

	Params::Quest_28276_C_OnDlgSelectedOption_A2DACA0341A5F9FDD413679F5C9F7109 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
