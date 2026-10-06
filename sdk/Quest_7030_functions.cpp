#pragma once



// Package: Quest_7030

#include "Basic.hpp"

#include "Quest_7030_classes.hpp"
#include "Quest_7030_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_7030.Quest_7030_C.ExecuteUbergraph_Quest_7030
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_7030_C::ExecuteUbergraph_Quest_7030(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7030_C", "ExecuteUbergraph_Quest_7030");

	Params::Quest_7030_C_ExecuteUbergraph_Quest_7030 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_7030.Quest_7030_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_7030_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7030_C", "HandleFinishing");

	Params::Quest_7030_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_7030.Quest_7030_C.OnSuccess_AF6C1AA147EDDBFE6683C7A067A666E4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_7030_C::OnSuccess_AF6C1AA147EDDBFE6683C7A067A666E4(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7030_C", "OnSuccess_AF6C1AA147EDDBFE6683C7A067A666E4");

	Params::Quest_7030_C_OnSuccess_AF6C1AA147EDDBFE6683C7A067A666E4 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_7030.Quest_7030_C.OnSuccess_219FD86542FC44ECA48B1197BA1D66E6
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_7030_C::OnSuccess_219FD86542FC44ECA48B1197BA1D66E6(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7030_C", "OnSuccess_219FD86542FC44ECA48B1197BA1D66E6");

	Params::Quest_7030_C_OnSuccess_219FD86542FC44ECA48B1197BA1D66E6 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_7030.Quest_7030_C.OnSuccess_F602ECB84434353ABC085589D6916508
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_7030_C::OnSuccess_F602ECB84434353ABC085589D6916508(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7030_C", "OnSuccess_F602ECB84434353ABC085589D6916508");

	Params::Quest_7030_C_OnSuccess_F602ECB84434353ABC085589D6916508 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_7030.Quest_7030_C.OnFinished_F5C8FA894EEB52180B2AD498CF8C1318
// (BlueprintCallable, BlueprintEvent)

void UQuest_7030_C::OnFinished_F5C8FA894EEB52180B2AD498CF8C1318()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7030_C", "OnFinished_F5C8FA894EEB52180B2AD498CF8C1318");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_7030.Quest_7030_C.OnStop_F5C8FA894EEB52180B2AD498CF8C1318
// (BlueprintCallable, BlueprintEvent)

void UQuest_7030_C::OnStop_F5C8FA894EEB52180B2AD498CF8C1318()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7030_C", "OnStop_F5C8FA894EEB52180B2AD498CF8C1318");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_7030.Quest_7030_C.OnDlgClosed_5CFBBCDB43E1F125D7630AA209AE451A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_7030_C::OnDlgClosed_5CFBBCDB43E1F125D7630AA209AE451A(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7030_C", "OnDlgClosed_5CFBBCDB43E1F125D7630AA209AE451A");

	Params::Quest_7030_C_OnDlgClosed_5CFBBCDB43E1F125D7630AA209AE451A Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_7030.Quest_7030_C.OnDlgSelectedOption_5CFBBCDB43E1F125D7630AA209AE451A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_7030_C::OnDlgSelectedOption_5CFBBCDB43E1F125D7630AA209AE451A(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7030_C", "OnDlgSelectedOption_5CFBBCDB43E1F125D7630AA209AE451A");

	Params::Quest_7030_C_OnDlgSelectedOption_5CFBBCDB43E1F125D7630AA209AE451A Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_7030.Quest_7030_C.OnSuccess_08DEE97A4B8F79030ABDC1A69A6B11EE
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_7030_C::OnSuccess_08DEE97A4B8F79030ABDC1A69A6B11EE(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7030_C", "OnSuccess_08DEE97A4B8F79030ABDC1A69A6B11EE");

	Params::Quest_7030_C_OnSuccess_08DEE97A4B8F79030ABDC1A69A6B11EE Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
