#pragma once



// Package: Quest_12801

#include "Basic.hpp"

#include "Quest_12801_classes.hpp"
#include "Quest_12801_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_12801.Quest_12801_C.ExecuteUbergraph_Quest_12801
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12801_C::ExecuteUbergraph_Quest_12801(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12801_C", "ExecuteUbergraph_Quest_12801");

	Params::Quest_12801_C_ExecuteUbergraph_Quest_12801 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12801.Quest_12801_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12801_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12801_C", "HandleFinishing");

	Params::Quest_12801_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12801.Quest_12801_C.OnFinished_1E70D04245801FFD41E2A7870EEF2042
// (BlueprintCallable, BlueprintEvent)

void UQuest_12801_C::OnFinished_1E70D04245801FFD41E2A7870EEF2042()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12801_C", "OnFinished_1E70D04245801FFD41E2A7870EEF2042");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12801.Quest_12801_C.OnStop_1E70D04245801FFD41E2A7870EEF2042
// (BlueprintCallable, BlueprintEvent)

void UQuest_12801_C::OnStop_1E70D04245801FFD41E2A7870EEF2042()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12801_C", "OnStop_1E70D04245801FFD41E2A7870EEF2042");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12801.Quest_12801_C.OnDlgClosed_DC17CECC429B0025D6AA9A815CA500EE
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12801_C::OnDlgClosed_DC17CECC429B0025D6AA9A815CA500EE(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12801_C", "OnDlgClosed_DC17CECC429B0025D6AA9A815CA500EE");

	Params::Quest_12801_C_OnDlgClosed_DC17CECC429B0025D6AA9A815CA500EE Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12801.Quest_12801_C.OnDlgSelectedOption_DC17CECC429B0025D6AA9A815CA500EE
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12801_C::OnDlgSelectedOption_DC17CECC429B0025D6AA9A815CA500EE(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12801_C", "OnDlgSelectedOption_DC17CECC429B0025D6AA9A815CA500EE");

	Params::Quest_12801_C_OnDlgSelectedOption_DC17CECC429B0025D6AA9A815CA500EE Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
