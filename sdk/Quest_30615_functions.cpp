#pragma once



// Package: Quest_30615

#include "Basic.hpp"

#include "Quest_30615_classes.hpp"
#include "Quest_30615_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_30615.Quest_30615_C.ExecuteUbergraph_Quest_30615
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30615_C::ExecuteUbergraph_Quest_30615(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30615_C", "ExecuteUbergraph_Quest_30615");

	Params::Quest_30615_C_ExecuteUbergraph_Quest_30615 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30615.Quest_30615_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30615_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30615_C", "HandleFinishing");

	Params::Quest_30615_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30615.Quest_30615_C.OnFinished_10E4ACEB47228B2E2E9EC9BBA8A48042
// (BlueprintCallable, BlueprintEvent)

void UQuest_30615_C::OnFinished_10E4ACEB47228B2E2E9EC9BBA8A48042()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30615_C", "OnFinished_10E4ACEB47228B2E2E9EC9BBA8A48042");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30615.Quest_30615_C.OnStop_10E4ACEB47228B2E2E9EC9BBA8A48042
// (BlueprintCallable, BlueprintEvent)

void UQuest_30615_C::OnStop_10E4ACEB47228B2E2E9EC9BBA8A48042()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30615_C", "OnStop_10E4ACEB47228B2E2E9EC9BBA8A48042");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30615.Quest_30615_C.OnDlgClosed_2728F4014D7BDAD391080498405C93E0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30615_C::OnDlgClosed_2728F4014D7BDAD391080498405C93E0(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30615_C", "OnDlgClosed_2728F4014D7BDAD391080498405C93E0");

	Params::Quest_30615_C_OnDlgClosed_2728F4014D7BDAD391080498405C93E0 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30615.Quest_30615_C.OnDlgSelectedOption_2728F4014D7BDAD391080498405C93E0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30615_C::OnDlgSelectedOption_2728F4014D7BDAD391080498405C93E0(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30615_C", "OnDlgSelectedOption_2728F4014D7BDAD391080498405C93E0");

	Params::Quest_30615_C_OnDlgSelectedOption_2728F4014D7BDAD391080498405C93E0 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
