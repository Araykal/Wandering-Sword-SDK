#pragma once



// Package: Quest_7022

#include "Basic.hpp"

#include "Quest_7022_classes.hpp"
#include "Quest_7022_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_7022.Quest_7022_C.ExecuteUbergraph_Quest_7022
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_7022_C::ExecuteUbergraph_Quest_7022(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7022_C", "ExecuteUbergraph_Quest_7022");

	Params::Quest_7022_C_ExecuteUbergraph_Quest_7022 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_7022.Quest_7022_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_7022_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7022_C", "HandleFinishing");

	Params::Quest_7022_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_7022.Quest_7022_C.OnFinished_A28028E24AC8125E846278B51322AD43
// (BlueprintCallable, BlueprintEvent)

void UQuest_7022_C::OnFinished_A28028E24AC8125E846278B51322AD43()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7022_C", "OnFinished_A28028E24AC8125E846278B51322AD43");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_7022.Quest_7022_C.OnStop_A28028E24AC8125E846278B51322AD43
// (BlueprintCallable, BlueprintEvent)

void UQuest_7022_C::OnStop_A28028E24AC8125E846278B51322AD43()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7022_C", "OnStop_A28028E24AC8125E846278B51322AD43");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_7022.Quest_7022_C.OnDlgClosed_16D142704AE1EB1771929FB10C571737
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_7022_C::OnDlgClosed_16D142704AE1EB1771929FB10C571737(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7022_C", "OnDlgClosed_16D142704AE1EB1771929FB10C571737");

	Params::Quest_7022_C_OnDlgClosed_16D142704AE1EB1771929FB10C571737 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_7022.Quest_7022_C.OnDlgSelectedOption_16D142704AE1EB1771929FB10C571737
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_7022_C::OnDlgSelectedOption_16D142704AE1EB1771929FB10C571737(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7022_C", "OnDlgSelectedOption_16D142704AE1EB1771929FB10C571737");

	Params::Quest_7022_C_OnDlgSelectedOption_16D142704AE1EB1771929FB10C571737 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_7022.Quest_7022_C.OnSuccess_ECAB6A50408E302B7B1ADE9083D5BFE9
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_7022_C::OnSuccess_ECAB6A50408E302B7B1ADE9083D5BFE9(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7022_C", "OnSuccess_ECAB6A50408E302B7B1ADE9083D5BFE9");

	Params::Quest_7022_C_OnSuccess_ECAB6A50408E302B7B1ADE9083D5BFE9 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
