#pragma once



// Package: Quest_11832

#include "Basic.hpp"

#include "Quest_11832_classes.hpp"
#include "Quest_11832_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_11832.Quest_11832_C.ExecuteUbergraph_Quest_11832
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11832_C::ExecuteUbergraph_Quest_11832(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11832_C", "ExecuteUbergraph_Quest_11832");

	Params::Quest_11832_C_ExecuteUbergraph_Quest_11832 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11832.Quest_11832_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11832_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11832_C", "HandleFinishing");

	Params::Quest_11832_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11832.Quest_11832_C.OnSuccess_4B3217D9434FB2F1F913DE86C8E520AA
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_11832_C::OnSuccess_4B3217D9434FB2F1F913DE86C8E520AA(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11832_C", "OnSuccess_4B3217D9434FB2F1F913DE86C8E520AA");

	Params::Quest_11832_C_OnSuccess_4B3217D9434FB2F1F913DE86C8E520AA Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11832.Quest_11832_C.OnFinished_5D76E49142E183307CAF1E8125AAFB06
// (BlueprintCallable, BlueprintEvent)

void UQuest_11832_C::OnFinished_5D76E49142E183307CAF1E8125AAFB06()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11832_C", "OnFinished_5D76E49142E183307CAF1E8125AAFB06");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_11832.Quest_11832_C.OnStop_5D76E49142E183307CAF1E8125AAFB06
// (BlueprintCallable, BlueprintEvent)

void UQuest_11832_C::OnStop_5D76E49142E183307CAF1E8125AAFB06()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11832_C", "OnStop_5D76E49142E183307CAF1E8125AAFB06");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_11832.Quest_11832_C.OnDlgClosed_093EBFDF462EE604329988A5A7DFA435
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11832_C::OnDlgClosed_093EBFDF462EE604329988A5A7DFA435(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11832_C", "OnDlgClosed_093EBFDF462EE604329988A5A7DFA435");

	Params::Quest_11832_C_OnDlgClosed_093EBFDF462EE604329988A5A7DFA435 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11832.Quest_11832_C.OnDlgSelectedOption_093EBFDF462EE604329988A5A7DFA435
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11832_C::OnDlgSelectedOption_093EBFDF462EE604329988A5A7DFA435(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11832_C", "OnDlgSelectedOption_093EBFDF462EE604329988A5A7DFA435");

	Params::Quest_11832_C_OnDlgSelectedOption_093EBFDF462EE604329988A5A7DFA435 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11832.Quest_11832_C.OnSuccess_477D572941264E64D2DAFDAD2473C2B0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_11832_C::OnSuccess_477D572941264E64D2DAFDAD2473C2B0(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11832_C", "OnSuccess_477D572941264E64D2DAFDAD2473C2B0");

	Params::Quest_11832_C_OnSuccess_477D572941264E64D2DAFDAD2473C2B0 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
