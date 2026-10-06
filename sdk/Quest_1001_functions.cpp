#pragma once



// Package: Quest_1001

#include "Basic.hpp"

#include "Quest_1001_classes.hpp"
#include "Quest_1001_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_1001.Quest_1001_C.ExecuteUbergraph_Quest_1001
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_1001_C::ExecuteUbergraph_Quest_1001(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_1001_C", "ExecuteUbergraph_Quest_1001");

	Params::Quest_1001_C_ExecuteUbergraph_Quest_1001 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_1001.Quest_1001_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_1001_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_1001_C", "HandleFinishing");

	Params::Quest_1001_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
