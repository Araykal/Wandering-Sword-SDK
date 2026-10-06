#pragma once



// Package: Quest_16138

#include "Basic.hpp"

#include "Quest_16138_classes.hpp"
#include "Quest_16138_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_16138.Quest_16138_C.ExecuteUbergraph_Quest_16138
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_16138_C::ExecuteUbergraph_Quest_16138(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16138_C", "ExecuteUbergraph_Quest_16138");

	Params::Quest_16138_C_ExecuteUbergraph_Quest_16138 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_16138.Quest_16138_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_16138_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16138_C", "HandleFinishing");

	Params::Quest_16138_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_16138.Quest_16138_C.OnFinished_274E571F41672ED9D8D409A0F08EB8DA
// (BlueprintCallable, BlueprintEvent)

void UQuest_16138_C::OnFinished_274E571F41672ED9D8D409A0F08EB8DA()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16138_C", "OnFinished_274E571F41672ED9D8D409A0F08EB8DA");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_16138.Quest_16138_C.OnStop_274E571F41672ED9D8D409A0F08EB8DA
// (BlueprintCallable, BlueprintEvent)

void UQuest_16138_C::OnStop_274E571F41672ED9D8D409A0F08EB8DA()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16138_C", "OnStop_274E571F41672ED9D8D409A0F08EB8DA");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_16138.Quest_16138_C.OnDlgClosed_71B6E48D46ABA76D1D96419B1F3CC7D5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_16138_C::OnDlgClosed_71B6E48D46ABA76D1D96419B1F3CC7D5(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16138_C", "OnDlgClosed_71B6E48D46ABA76D1D96419B1F3CC7D5");

	Params::Quest_16138_C_OnDlgClosed_71B6E48D46ABA76D1D96419B1F3CC7D5 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_16138.Quest_16138_C.OnDlgSelectedOption_71B6E48D46ABA76D1D96419B1F3CC7D5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_16138_C::OnDlgSelectedOption_71B6E48D46ABA76D1D96419B1F3CC7D5(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16138_C", "OnDlgSelectedOption_71B6E48D46ABA76D1D96419B1F3CC7D5");

	Params::Quest_16138_C_OnDlgSelectedOption_71B6E48D46ABA76D1D96419B1F3CC7D5 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
