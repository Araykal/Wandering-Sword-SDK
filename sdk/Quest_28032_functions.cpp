#pragma once



// Package: Quest_28032

#include "Basic.hpp"

#include "Quest_28032_classes.hpp"
#include "Quest_28032_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_28032.Quest_28032_C.ExecuteUbergraph_Quest_28032
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28032_C::ExecuteUbergraph_Quest_28032(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28032_C", "ExecuteUbergraph_Quest_28032");

	Params::Quest_28032_C_ExecuteUbergraph_Quest_28032 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28032.Quest_28032_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28032_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28032_C", "HandleFinishing");

	Params::Quest_28032_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28032.Quest_28032_C.OnFinished_3FEA420A451C453754E545AF8154436E
// (BlueprintCallable, BlueprintEvent)

void UQuest_28032_C::OnFinished_3FEA420A451C453754E545AF8154436E()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28032_C", "OnFinished_3FEA420A451C453754E545AF8154436E");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28032.Quest_28032_C.OnStop_3FEA420A451C453754E545AF8154436E
// (BlueprintCallable, BlueprintEvent)

void UQuest_28032_C::OnStop_3FEA420A451C453754E545AF8154436E()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28032_C", "OnStop_3FEA420A451C453754E545AF8154436E");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28032.Quest_28032_C.OnDlgClosed_30731A4045C19992EC06C59A7CEE36B5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28032_C::OnDlgClosed_30731A4045C19992EC06C59A7CEE36B5(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28032_C", "OnDlgClosed_30731A4045C19992EC06C59A7CEE36B5");

	Params::Quest_28032_C_OnDlgClosed_30731A4045C19992EC06C59A7CEE36B5 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28032.Quest_28032_C.OnDlgSelectedOption_30731A4045C19992EC06C59A7CEE36B5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28032_C::OnDlgSelectedOption_30731A4045C19992EC06C59A7CEE36B5(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28032_C", "OnDlgSelectedOption_30731A4045C19992EC06C59A7CEE36B5");

	Params::Quest_28032_C_OnDlgSelectedOption_30731A4045C19992EC06C59A7CEE36B5 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28032.Quest_28032_C.OnSuccess_35B85130498FDF177D99BB98605EDC5F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_28032_C::OnSuccess_35B85130498FDF177D99BB98605EDC5F(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28032_C", "OnSuccess_35B85130498FDF177D99BB98605EDC5F");

	Params::Quest_28032_C_OnSuccess_35B85130498FDF177D99BB98605EDC5F Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
