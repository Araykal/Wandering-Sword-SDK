#pragma once



// Package: Quest_5036

#include "Basic.hpp"

#include "Quest_5036_classes.hpp"
#include "Quest_5036_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5036.Quest_5036_C.ExecuteUbergraph_Quest_5036
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5036_C::ExecuteUbergraph_Quest_5036(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5036_C", "ExecuteUbergraph_Quest_5036");

	Params::Quest_5036_C_ExecuteUbergraph_Quest_5036 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5036.Quest_5036_C.HandleAcceptRequested
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5036_C::HandleAcceptRequested(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5036_C", "HandleAcceptRequested");

	Params::Quest_5036_C_HandleAcceptRequested Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
