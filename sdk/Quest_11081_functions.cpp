#pragma once



// Package: Quest_11081

#include "Basic.hpp"

#include "Quest_11081_classes.hpp"
#include "Quest_11081_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_11081.Quest_11081_C.ExecuteUbergraph_Quest_11081
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11081_C::ExecuteUbergraph_Quest_11081(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11081_C", "ExecuteUbergraph_Quest_11081");

	Params::Quest_11081_C_ExecuteUbergraph_Quest_11081 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11081.Quest_11081_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11081_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11081_C", "HandleFinishing");

	Params::Quest_11081_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
