#pragma once



// Package: Quest_16106

#include "Basic.hpp"

#include "Quest_16106_classes.hpp"
#include "Quest_16106_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_16106.Quest_16106_C.ExecuteUbergraph_Quest_16106
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_16106_C::ExecuteUbergraph_Quest_16106(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16106_C", "ExecuteUbergraph_Quest_16106");

	Params::Quest_16106_C_ExecuteUbergraph_Quest_16106 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_16106.Quest_16106_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_16106_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16106_C", "HandleFinishing");

	Params::Quest_16106_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_16106.Quest_16106_C.OnSuccess_9E7B93EA4381700E33554FBC922355E8
// (BlueprintCallable, BlueprintEvent)

void UQuest_16106_C::OnSuccess_9E7B93EA4381700E33554FBC922355E8()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16106_C", "OnSuccess_9E7B93EA4381700E33554FBC922355E8");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_16106.Quest_16106_C.OnFinished_3FEF5866497A52B7C3AE41B57C6522DE
// (BlueprintCallable, BlueprintEvent)

void UQuest_16106_C::OnFinished_3FEF5866497A52B7C3AE41B57C6522DE()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16106_C", "OnFinished_3FEF5866497A52B7C3AE41B57C6522DE");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_16106.Quest_16106_C.OnStop_3FEF5866497A52B7C3AE41B57C6522DE
// (BlueprintCallable, BlueprintEvent)

void UQuest_16106_C::OnStop_3FEF5866497A52B7C3AE41B57C6522DE()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16106_C", "OnStop_3FEF5866497A52B7C3AE41B57C6522DE");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_16106.Quest_16106_C.OnDlgClosed_9A8BB0E047F7AA315AF1F5BB094DAA3C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_16106_C::OnDlgClosed_9A8BB0E047F7AA315AF1F5BB094DAA3C(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16106_C", "OnDlgClosed_9A8BB0E047F7AA315AF1F5BB094DAA3C");

	Params::Quest_16106_C_OnDlgClosed_9A8BB0E047F7AA315AF1F5BB094DAA3C Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_16106.Quest_16106_C.OnDlgSelectedOption_9A8BB0E047F7AA315AF1F5BB094DAA3C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_16106_C::OnDlgSelectedOption_9A8BB0E047F7AA315AF1F5BB094DAA3C(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16106_C", "OnDlgSelectedOption_9A8BB0E047F7AA315AF1F5BB094DAA3C");

	Params::Quest_16106_C_OnDlgSelectedOption_9A8BB0E047F7AA315AF1F5BB094DAA3C Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
