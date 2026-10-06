#pragma once



// Package: Quest_12265

#include "Basic.hpp"

#include "Quest_12265_classes.hpp"
#include "Quest_12265_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_12265.Quest_12265_C.ExecuteUbergraph_Quest_12265
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12265_C::ExecuteUbergraph_Quest_12265(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12265_C", "ExecuteUbergraph_Quest_12265");

	Params::Quest_12265_C_ExecuteUbergraph_Quest_12265 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12265.Quest_12265_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12265_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12265_C", "HandleFinishing");

	Params::Quest_12265_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12265.Quest_12265_C.OnSuccess_108C615841CF539B02BAF99CFD679B13
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_12265_C::OnSuccess_108C615841CF539B02BAF99CFD679B13(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12265_C", "OnSuccess_108C615841CF539B02BAF99CFD679B13");

	Params::Quest_12265_C_OnSuccess_108C615841CF539B02BAF99CFD679B13 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12265.Quest_12265_C.OnDlgClosed_46E6DFF1480D6C1833788491598154C8
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12265_C::OnDlgClosed_46E6DFF1480D6C1833788491598154C8(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12265_C", "OnDlgClosed_46E6DFF1480D6C1833788491598154C8");

	Params::Quest_12265_C_OnDlgClosed_46E6DFF1480D6C1833788491598154C8 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12265.Quest_12265_C.OnDlgSelectedOption_46E6DFF1480D6C1833788491598154C8
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12265_C::OnDlgSelectedOption_46E6DFF1480D6C1833788491598154C8(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12265_C", "OnDlgSelectedOption_46E6DFF1480D6C1833788491598154C8");

	Params::Quest_12265_C_OnDlgSelectedOption_46E6DFF1480D6C1833788491598154C8 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12265.Quest_12265_C.OnFinished_C9A32A064DA8431E281A4D81B2A29ED3
// (BlueprintCallable, BlueprintEvent)

void UQuest_12265_C::OnFinished_C9A32A064DA8431E281A4D81B2A29ED3()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12265_C", "OnFinished_C9A32A064DA8431E281A4D81B2A29ED3");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12265.Quest_12265_C.OnStop_C9A32A064DA8431E281A4D81B2A29ED3
// (BlueprintCallable, BlueprintEvent)

void UQuest_12265_C::OnStop_C9A32A064DA8431E281A4D81B2A29ED3()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12265_C", "OnStop_C9A32A064DA8431E281A4D81B2A29ED3");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
