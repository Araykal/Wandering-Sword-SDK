#pragma once



// Package: Quest_5532

#include "Basic.hpp"

#include "Quest_5532_classes.hpp"
#include "Quest_5532_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5532.Quest_5532_C.ExecuteUbergraph_Quest_5532
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5532_C::ExecuteUbergraph_Quest_5532(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5532_C", "ExecuteUbergraph_Quest_5532");

	Params::Quest_5532_C_ExecuteUbergraph_Quest_5532 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5532.Quest_5532_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5532_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5532_C", "HandleFinishing");

	Params::Quest_5532_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5532.Quest_5532_C.OnFinished_5F3C9EA543E7C55029AD5AAF86D9FF26
// (BlueprintCallable, BlueprintEvent)

void UQuest_5532_C::OnFinished_5F3C9EA543E7C55029AD5AAF86D9FF26()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5532_C", "OnFinished_5F3C9EA543E7C55029AD5AAF86D9FF26");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5532.Quest_5532_C.OnStop_5F3C9EA543E7C55029AD5AAF86D9FF26
// (BlueprintCallable, BlueprintEvent)

void UQuest_5532_C::OnStop_5F3C9EA543E7C55029AD5AAF86D9FF26()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5532_C", "OnStop_5F3C9EA543E7C55029AD5AAF86D9FF26");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5532.Quest_5532_C.OnDlgClosed_E751E9124575DAA974CF13A67037AB70
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5532_C::OnDlgClosed_E751E9124575DAA974CF13A67037AB70(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5532_C", "OnDlgClosed_E751E9124575DAA974CF13A67037AB70");

	Params::Quest_5532_C_OnDlgClosed_E751E9124575DAA974CF13A67037AB70 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5532.Quest_5532_C.OnDlgSelectedOption_E751E9124575DAA974CF13A67037AB70
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5532_C::OnDlgSelectedOption_E751E9124575DAA974CF13A67037AB70(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5532_C", "OnDlgSelectedOption_E751E9124575DAA974CF13A67037AB70");

	Params::Quest_5532_C_OnDlgSelectedOption_E751E9124575DAA974CF13A67037AB70 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
