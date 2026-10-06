#pragma once



// Package: Quest_5619

#include "Basic.hpp"

#include "Quest_5619_classes.hpp"
#include "Quest_5619_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5619.Quest_5619_C.ExecuteUbergraph_Quest_5619
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5619_C::ExecuteUbergraph_Quest_5619(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5619_C", "ExecuteUbergraph_Quest_5619");

	Params::Quest_5619_C_ExecuteUbergraph_Quest_5619 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5619.Quest_5619_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5619_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5619_C", "HandleFinishing");

	Params::Quest_5619_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5619.Quest_5619_C.OnSuccess_38210E274F5076E681396F8B329CE2E5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_5619_C::OnSuccess_38210E274F5076E681396F8B329CE2E5(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5619_C", "OnSuccess_38210E274F5076E681396F8B329CE2E5");

	Params::Quest_5619_C_OnSuccess_38210E274F5076E681396F8B329CE2E5 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5619.Quest_5619_C.OnFinished_1157C82145307C49AA34578797030D6B
// (BlueprintCallable, BlueprintEvent)

void UQuest_5619_C::OnFinished_1157C82145307C49AA34578797030D6B()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5619_C", "OnFinished_1157C82145307C49AA34578797030D6B");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5619.Quest_5619_C.OnStop_1157C82145307C49AA34578797030D6B
// (BlueprintCallable, BlueprintEvent)

void UQuest_5619_C::OnStop_1157C82145307C49AA34578797030D6B()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5619_C", "OnStop_1157C82145307C49AA34578797030D6B");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5619.Quest_5619_C.OnDlgClosed_E3A4B7774BA358145F98C5BFE0E53CB1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5619_C::OnDlgClosed_E3A4B7774BA358145F98C5BFE0E53CB1(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5619_C", "OnDlgClosed_E3A4B7774BA358145F98C5BFE0E53CB1");

	Params::Quest_5619_C_OnDlgClosed_E3A4B7774BA358145F98C5BFE0E53CB1 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5619.Quest_5619_C.OnDlgSelectedOption_E3A4B7774BA358145F98C5BFE0E53CB1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5619_C::OnDlgSelectedOption_E3A4B7774BA358145F98C5BFE0E53CB1(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5619_C", "OnDlgSelectedOption_E3A4B7774BA358145F98C5BFE0E53CB1");

	Params::Quest_5619_C_OnDlgSelectedOption_E3A4B7774BA358145F98C5BFE0E53CB1 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
