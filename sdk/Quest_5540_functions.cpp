#pragma once



// Package: Quest_5540

#include "Basic.hpp"

#include "Quest_5540_classes.hpp"
#include "Quest_5540_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5540.Quest_5540_C.ExecuteUbergraph_Quest_5540
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5540_C::ExecuteUbergraph_Quest_5540(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5540_C", "ExecuteUbergraph_Quest_5540");

	Params::Quest_5540_C_ExecuteUbergraph_Quest_5540 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5540.Quest_5540_C.HandleAcceptRequested
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5540_C::HandleAcceptRequested(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5540_C", "HandleAcceptRequested");

	Params::Quest_5540_C_HandleAcceptRequested Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
