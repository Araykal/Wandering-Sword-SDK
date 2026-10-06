#pragma once



// Package: Quest_4100

#include "Basic.hpp"

#include "Quest_4100_classes.hpp"
#include "Quest_4100_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_4100.Quest_4100_C.ExecuteUbergraph_Quest_4100
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_4100_C::ExecuteUbergraph_Quest_4100(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_4100_C", "ExecuteUbergraph_Quest_4100");

	Params::Quest_4100_C_ExecuteUbergraph_Quest_4100 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_4100.Quest_4100_C.HandleAcceptRequested
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_4100_C::HandleAcceptRequested(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_4100_C", "HandleAcceptRequested");

	Params::Quest_4100_C_HandleAcceptRequested Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
