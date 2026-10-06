#pragma once



// Package: Quest_12276

#include "Basic.hpp"

#include "Quest_12276_classes.hpp"
#include "Quest_12276_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_12276.Quest_12276_C.ExecuteUbergraph_Quest_12276
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12276_C::ExecuteUbergraph_Quest_12276(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12276_C", "ExecuteUbergraph_Quest_12276");

	Params::Quest_12276_C_ExecuteUbergraph_Quest_12276 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12276.Quest_12276_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12276_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12276_C", "HandleFinishing");

	Params::Quest_12276_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
