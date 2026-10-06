#pragma once



// Package: Quest_5803

#include "Basic.hpp"

#include "Quest_5803_classes.hpp"
#include "Quest_5803_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5803.Quest_5803_C.ExecuteUbergraph_Quest_5803
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5803_C::ExecuteUbergraph_Quest_5803(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5803_C", "ExecuteUbergraph_Quest_5803");

	Params::Quest_5803_C_ExecuteUbergraph_Quest_5803 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5803.Quest_5803_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5803_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5803_C", "HandleFinishing");

	Params::Quest_5803_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5803.Quest_5803_C.OnFinished_ACEBAD6340CB83E624893FACA44946CE
// (BlueprintCallable, BlueprintEvent)

void UQuest_5803_C::OnFinished_ACEBAD6340CB83E624893FACA44946CE()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5803_C", "OnFinished_ACEBAD6340CB83E624893FACA44946CE");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5803.Quest_5803_C.OnStop_ACEBAD6340CB83E624893FACA44946CE
// (BlueprintCallable, BlueprintEvent)

void UQuest_5803_C::OnStop_ACEBAD6340CB83E624893FACA44946CE()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5803_C", "OnStop_ACEBAD6340CB83E624893FACA44946CE");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5803.Quest_5803_C.OnDlgClosed_61F18C0D4923A916A64FB0B41707DDD6
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5803_C::OnDlgClosed_61F18C0D4923A916A64FB0B41707DDD6(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5803_C", "OnDlgClosed_61F18C0D4923A916A64FB0B41707DDD6");

	Params::Quest_5803_C_OnDlgClosed_61F18C0D4923A916A64FB0B41707DDD6 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5803.Quest_5803_C.OnDlgSelectedOption_61F18C0D4923A916A64FB0B41707DDD6
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5803_C::OnDlgSelectedOption_61F18C0D4923A916A64FB0B41707DDD6(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5803_C", "OnDlgSelectedOption_61F18C0D4923A916A64FB0B41707DDD6");

	Params::Quest_5803_C_OnDlgSelectedOption_61F18C0D4923A916A64FB0B41707DDD6 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5803.Quest_5803_C.OnSuccess_DC3DB42C48A1F7828C25EEA953386E4D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_5803_C::OnSuccess_DC3DB42C48A1F7828C25EEA953386E4D(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5803_C", "OnSuccess_DC3DB42C48A1F7828C25EEA953386E4D");

	Params::Quest_5803_C_OnSuccess_DC3DB42C48A1F7828C25EEA953386E4D Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
