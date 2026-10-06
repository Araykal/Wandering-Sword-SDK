#pragma once



// Package: Quest_5332

#include "Basic.hpp"

#include "Quest_5332_classes.hpp"
#include "Quest_5332_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5332.Quest_5332_C.ExecuteUbergraph_Quest_5332
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5332_C::ExecuteUbergraph_Quest_5332(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5332_C", "ExecuteUbergraph_Quest_5332");

	Params::Quest_5332_C_ExecuteUbergraph_Quest_5332 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5332.Quest_5332_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5332_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5332_C", "HandleFinishing");

	Params::Quest_5332_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5332.Quest_5332_C.OnFinished_A1562A51416DE84223DF4589A1A91A38
// (BlueprintCallable, BlueprintEvent)

void UQuest_5332_C::OnFinished_A1562A51416DE84223DF4589A1A91A38()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5332_C", "OnFinished_A1562A51416DE84223DF4589A1A91A38");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5332.Quest_5332_C.OnStop_A1562A51416DE84223DF4589A1A91A38
// (BlueprintCallable, BlueprintEvent)

void UQuest_5332_C::OnStop_A1562A51416DE84223DF4589A1A91A38()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5332_C", "OnStop_A1562A51416DE84223DF4589A1A91A38");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5332.Quest_5332_C.OnDlgClosed_CDAD20844D9778E69A74A8A13C25A2F1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5332_C::OnDlgClosed_CDAD20844D9778E69A74A8A13C25A2F1(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5332_C", "OnDlgClosed_CDAD20844D9778E69A74A8A13C25A2F1");

	Params::Quest_5332_C_OnDlgClosed_CDAD20844D9778E69A74A8A13C25A2F1 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5332.Quest_5332_C.OnDlgSelectedOption_CDAD20844D9778E69A74A8A13C25A2F1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5332_C::OnDlgSelectedOption_CDAD20844D9778E69A74A8A13C25A2F1(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5332_C", "OnDlgSelectedOption_CDAD20844D9778E69A74A8A13C25A2F1");

	Params::Quest_5332_C_OnDlgSelectedOption_CDAD20844D9778E69A74A8A13C25A2F1 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5332.Quest_5332_C.OnSuccess_2E46E853497BF8A279709F885BB0C8E3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_5332_C::OnSuccess_2E46E853497BF8A279709F885BB0C8E3(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5332_C", "OnSuccess_2E46E853497BF8A279709F885BB0C8E3");

	Params::Quest_5332_C_OnSuccess_2E46E853497BF8A279709F885BB0C8E3 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
