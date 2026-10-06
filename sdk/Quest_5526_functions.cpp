#pragma once



// Package: Quest_5526

#include "Basic.hpp"

#include "Quest_5526_classes.hpp"
#include "Quest_5526_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5526.Quest_5526_C.ExecuteUbergraph_Quest_5526
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5526_C::ExecuteUbergraph_Quest_5526(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5526_C", "ExecuteUbergraph_Quest_5526");

	Params::Quest_5526_C_ExecuteUbergraph_Quest_5526 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5526.Quest_5526_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5526_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5526_C", "HandleFinishing");

	Params::Quest_5526_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5526.Quest_5526_C.OnFinished_CC04E11B48A6FED15DA82EA813024918
// (BlueprintCallable, BlueprintEvent)

void UQuest_5526_C::OnFinished_CC04E11B48A6FED15DA82EA813024918()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5526_C", "OnFinished_CC04E11B48A6FED15DA82EA813024918");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5526.Quest_5526_C.OnStop_CC04E11B48A6FED15DA82EA813024918
// (BlueprintCallable, BlueprintEvent)

void UQuest_5526_C::OnStop_CC04E11B48A6FED15DA82EA813024918()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5526_C", "OnStop_CC04E11B48A6FED15DA82EA813024918");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5526.Quest_5526_C.OnDlgClosed_BCFB59EB4378D1C3E1E2AB875A188048
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5526_C::OnDlgClosed_BCFB59EB4378D1C3E1E2AB875A188048(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5526_C", "OnDlgClosed_BCFB59EB4378D1C3E1E2AB875A188048");

	Params::Quest_5526_C_OnDlgClosed_BCFB59EB4378D1C3E1E2AB875A188048 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5526.Quest_5526_C.OnDlgSelectedOption_BCFB59EB4378D1C3E1E2AB875A188048
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5526_C::OnDlgSelectedOption_BCFB59EB4378D1C3E1E2AB875A188048(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5526_C", "OnDlgSelectedOption_BCFB59EB4378D1C3E1E2AB875A188048");

	Params::Quest_5526_C_OnDlgSelectedOption_BCFB59EB4378D1C3E1E2AB875A188048 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
