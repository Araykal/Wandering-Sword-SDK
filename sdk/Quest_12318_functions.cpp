#pragma once



// Package: Quest_12318

#include "Basic.hpp"

#include "Quest_12318_classes.hpp"
#include "Quest_12318_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_12318.Quest_12318_C.ExecuteUbergraph_Quest_12318
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12318_C::ExecuteUbergraph_Quest_12318(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12318_C", "ExecuteUbergraph_Quest_12318");

	Params::Quest_12318_C_ExecuteUbergraph_Quest_12318 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12318.Quest_12318_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12318_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12318_C", "HandleFinishing");

	Params::Quest_12318_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12318.Quest_12318_C.OnSuccess_24886B674F5896C11F59119F133AC54C
// (BlueprintCallable, BlueprintEvent)

void UQuest_12318_C::OnSuccess_24886B674F5896C11F59119F133AC54C()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12318_C", "OnSuccess_24886B674F5896C11F59119F133AC54C");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12318.Quest_12318_C.OnFinished_E4B0A3F84ECAF7AC5D70FF8B28BC0056
// (BlueprintCallable, BlueprintEvent)

void UQuest_12318_C::OnFinished_E4B0A3F84ECAF7AC5D70FF8B28BC0056()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12318_C", "OnFinished_E4B0A3F84ECAF7AC5D70FF8B28BC0056");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12318.Quest_12318_C.OnStop_E4B0A3F84ECAF7AC5D70FF8B28BC0056
// (BlueprintCallable, BlueprintEvent)

void UQuest_12318_C::OnStop_E4B0A3F84ECAF7AC5D70FF8B28BC0056()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12318_C", "OnStop_E4B0A3F84ECAF7AC5D70FF8B28BC0056");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12318.Quest_12318_C.OnDlgClosed_3ADC842D4045132C07D2B6BDF99CF22A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12318_C::OnDlgClosed_3ADC842D4045132C07D2B6BDF99CF22A(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12318_C", "OnDlgClosed_3ADC842D4045132C07D2B6BDF99CF22A");

	Params::Quest_12318_C_OnDlgClosed_3ADC842D4045132C07D2B6BDF99CF22A Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12318.Quest_12318_C.OnDlgSelectedOption_3ADC842D4045132C07D2B6BDF99CF22A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12318_C::OnDlgSelectedOption_3ADC842D4045132C07D2B6BDF99CF22A(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12318_C", "OnDlgSelectedOption_3ADC842D4045132C07D2B6BDF99CF22A");

	Params::Quest_12318_C_OnDlgSelectedOption_3ADC842D4045132C07D2B6BDF99CF22A Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
