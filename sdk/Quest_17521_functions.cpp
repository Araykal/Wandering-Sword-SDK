#pragma once



// Package: Quest_17521

#include "Basic.hpp"

#include "Quest_17521_classes.hpp"
#include "Quest_17521_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_17521.Quest_17521_C.ExecuteUbergraph_Quest_17521
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_17521_C::ExecuteUbergraph_Quest_17521(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_17521_C", "ExecuteUbergraph_Quest_17521");

	Params::Quest_17521_C_ExecuteUbergraph_Quest_17521 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_17521.Quest_17521_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_17521_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_17521_C", "HandleFinishing");

	Params::Quest_17521_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_17521.Quest_17521_C.OnFinished_4569583D4C408549AC5F159962AEF04F
// (BlueprintCallable, BlueprintEvent)

void UQuest_17521_C::OnFinished_4569583D4C408549AC5F159962AEF04F()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_17521_C", "OnFinished_4569583D4C408549AC5F159962AEF04F");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_17521.Quest_17521_C.OnStop_4569583D4C408549AC5F159962AEF04F
// (BlueprintCallable, BlueprintEvent)

void UQuest_17521_C::OnStop_4569583D4C408549AC5F159962AEF04F()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_17521_C", "OnStop_4569583D4C408549AC5F159962AEF04F");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_17521.Quest_17521_C.OnDlgClosed_68C6AD244F4FA9BC04EE78BAA926E817
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_17521_C::OnDlgClosed_68C6AD244F4FA9BC04EE78BAA926E817(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_17521_C", "OnDlgClosed_68C6AD244F4FA9BC04EE78BAA926E817");

	Params::Quest_17521_C_OnDlgClosed_68C6AD244F4FA9BC04EE78BAA926E817 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_17521.Quest_17521_C.OnDlgSelectedOption_68C6AD244F4FA9BC04EE78BAA926E817
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_17521_C::OnDlgSelectedOption_68C6AD244F4FA9BC04EE78BAA926E817(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_17521_C", "OnDlgSelectedOption_68C6AD244F4FA9BC04EE78BAA926E817");

	Params::Quest_17521_C_OnDlgSelectedOption_68C6AD244F4FA9BC04EE78BAA926E817 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
