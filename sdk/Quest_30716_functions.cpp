#pragma once



// Package: Quest_30716

#include "Basic.hpp"

#include "Quest_30716_classes.hpp"
#include "Quest_30716_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_30716.Quest_30716_C.ExecuteUbergraph_Quest_30716
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30716_C::ExecuteUbergraph_Quest_30716(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30716_C", "ExecuteUbergraph_Quest_30716");

	Params::Quest_30716_C_ExecuteUbergraph_Quest_30716 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30716.Quest_30716_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30716_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30716_C", "HandleFinishing");

	Params::Quest_30716_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30716.Quest_30716_C.OnSuccess_AF71EBE7429E2133C307FBA244F4366A
// (BlueprintCallable, BlueprintEvent)

void UQuest_30716_C::OnSuccess_AF71EBE7429E2133C307FBA244F4366A()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30716_C", "OnSuccess_AF71EBE7429E2133C307FBA244F4366A");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30716.Quest_30716_C.OnFinished_0CAC04E84DD92502169FB18745881DC3
// (BlueprintCallable, BlueprintEvent)

void UQuest_30716_C::OnFinished_0CAC04E84DD92502169FB18745881DC3()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30716_C", "OnFinished_0CAC04E84DD92502169FB18745881DC3");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30716.Quest_30716_C.OnStop_0CAC04E84DD92502169FB18745881DC3
// (BlueprintCallable, BlueprintEvent)

void UQuest_30716_C::OnStop_0CAC04E84DD92502169FB18745881DC3()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30716_C", "OnStop_0CAC04E84DD92502169FB18745881DC3");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30716.Quest_30716_C.OnDlgClosed_CA37D5784E73A327B67DC4B26EC8002E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30716_C::OnDlgClosed_CA37D5784E73A327B67DC4B26EC8002E(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30716_C", "OnDlgClosed_CA37D5784E73A327B67DC4B26EC8002E");

	Params::Quest_30716_C_OnDlgClosed_CA37D5784E73A327B67DC4B26EC8002E Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30716.Quest_30716_C.OnDlgSelectedOption_CA37D5784E73A327B67DC4B26EC8002E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30716_C::OnDlgSelectedOption_CA37D5784E73A327B67DC4B26EC8002E(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30716_C", "OnDlgSelectedOption_CA37D5784E73A327B67DC4B26EC8002E");

	Params::Quest_30716_C_OnDlgSelectedOption_CA37D5784E73A327B67DC4B26EC8002E Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
