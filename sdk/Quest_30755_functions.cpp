#pragma once



// Package: Quest_30755

#include "Basic.hpp"

#include "Quest_30755_classes.hpp"
#include "Quest_30755_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_30755.Quest_30755_C.ExecuteUbergraph_Quest_30755
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30755_C::ExecuteUbergraph_Quest_30755(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30755_C", "ExecuteUbergraph_Quest_30755");

	Params::Quest_30755_C_ExecuteUbergraph_Quest_30755 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30755.Quest_30755_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30755_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30755_C", "HandleFinishing");

	Params::Quest_30755_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30755.Quest_30755_C.OnSuccess_1A9742564D45236543F4A38A8F1D227E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_30755_C::OnSuccess_1A9742564D45236543F4A38A8F1D227E(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30755_C", "OnSuccess_1A9742564D45236543F4A38A8F1D227E");

	Params::Quest_30755_C_OnSuccess_1A9742564D45236543F4A38A8F1D227E Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30755.Quest_30755_C.OnFinished_ADFEA2934689B974732A0DB468FA32EF
// (BlueprintCallable, BlueprintEvent)

void UQuest_30755_C::OnFinished_ADFEA2934689B974732A0DB468FA32EF()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30755_C", "OnFinished_ADFEA2934689B974732A0DB468FA32EF");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30755.Quest_30755_C.OnStop_ADFEA2934689B974732A0DB468FA32EF
// (BlueprintCallable, BlueprintEvent)

void UQuest_30755_C::OnStop_ADFEA2934689B974732A0DB468FA32EF()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30755_C", "OnStop_ADFEA2934689B974732A0DB468FA32EF");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30755.Quest_30755_C.OnDlgClosed_B2AD9A7448D72701D08420A07D13294C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30755_C::OnDlgClosed_B2AD9A7448D72701D08420A07D13294C(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30755_C", "OnDlgClosed_B2AD9A7448D72701D08420A07D13294C");

	Params::Quest_30755_C_OnDlgClosed_B2AD9A7448D72701D08420A07D13294C Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30755.Quest_30755_C.OnDlgSelectedOption_B2AD9A7448D72701D08420A07D13294C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30755_C::OnDlgSelectedOption_B2AD9A7448D72701D08420A07D13294C(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30755_C", "OnDlgSelectedOption_B2AD9A7448D72701D08420A07D13294C");

	Params::Quest_30755_C_OnDlgSelectedOption_B2AD9A7448D72701D08420A07D13294C Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
