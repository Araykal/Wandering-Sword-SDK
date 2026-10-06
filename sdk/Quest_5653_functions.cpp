#pragma once



// Package: Quest_5653

#include "Basic.hpp"

#include "Quest_5653_classes.hpp"
#include "Quest_5653_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5653.Quest_5653_C.ExecuteUbergraph_Quest_5653
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5653_C::ExecuteUbergraph_Quest_5653(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5653_C", "ExecuteUbergraph_Quest_5653");

	Params::Quest_5653_C_ExecuteUbergraph_Quest_5653 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5653.Quest_5653_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5653_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5653_C", "HandleFinishing");

	Params::Quest_5653_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5653.Quest_5653_C.OnSuccess_3CFC37F7445028058D9FA3B8FC4C2F52
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_5653_C::OnSuccess_3CFC37F7445028058D9FA3B8FC4C2F52(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5653_C", "OnSuccess_3CFC37F7445028058D9FA3B8FC4C2F52");

	Params::Quest_5653_C_OnSuccess_3CFC37F7445028058D9FA3B8FC4C2F52 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5653.Quest_5653_C.OnFinished_484DB98F4A391BF40A1DE9B3193C36E4
// (BlueprintCallable, BlueprintEvent)

void UQuest_5653_C::OnFinished_484DB98F4A391BF40A1DE9B3193C36E4()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5653_C", "OnFinished_484DB98F4A391BF40A1DE9B3193C36E4");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5653.Quest_5653_C.OnStop_484DB98F4A391BF40A1DE9B3193C36E4
// (BlueprintCallable, BlueprintEvent)

void UQuest_5653_C::OnStop_484DB98F4A391BF40A1DE9B3193C36E4()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5653_C", "OnStop_484DB98F4A391BF40A1DE9B3193C36E4");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5653.Quest_5653_C.OnDlgClosed_198100014F46046E66A85BA32A419680
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5653_C::OnDlgClosed_198100014F46046E66A85BA32A419680(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5653_C", "OnDlgClosed_198100014F46046E66A85BA32A419680");

	Params::Quest_5653_C_OnDlgClosed_198100014F46046E66A85BA32A419680 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5653.Quest_5653_C.OnDlgSelectedOption_198100014F46046E66A85BA32A419680
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5653_C::OnDlgSelectedOption_198100014F46046E66A85BA32A419680(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5653_C", "OnDlgSelectedOption_198100014F46046E66A85BA32A419680");

	Params::Quest_5653_C_OnDlgSelectedOption_198100014F46046E66A85BA32A419680 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5653.Quest_5653_C.OnSuccess_7D37514E4F5356E91D2775AD84AADE02
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_5653_C::OnSuccess_7D37514E4F5356E91D2775AD84AADE02(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5653_C", "OnSuccess_7D37514E4F5356E91D2775AD84AADE02");

	Params::Quest_5653_C_OnSuccess_7D37514E4F5356E91D2775AD84AADE02 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
