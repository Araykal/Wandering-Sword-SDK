#pragma once



// Package: Quest_12508

#include "Basic.hpp"

#include "Quest_12508_classes.hpp"
#include "Quest_12508_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_12508.Quest_12508_C.ExecuteUbergraph_Quest_12508
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12508_C::ExecuteUbergraph_Quest_12508(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12508_C", "ExecuteUbergraph_Quest_12508");

	Params::Quest_12508_C_ExecuteUbergraph_Quest_12508 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12508.Quest_12508_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12508_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12508_C", "HandleFinishing");

	Params::Quest_12508_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
