#pragma once



// Package: Quest_28269

#include "Basic.hpp"

#include "Quest_28269_classes.hpp"
#include "Quest_28269_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_28269.Quest_28269_C.ExecuteUbergraph_Quest_28269
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28269_C::ExecuteUbergraph_Quest_28269(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28269_C", "ExecuteUbergraph_Quest_28269");

	Params::Quest_28269_C_ExecuteUbergraph_Quest_28269 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28269.Quest_28269_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28269_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28269_C", "HandleFinishing");

	Params::Quest_28269_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28269.Quest_28269_C.OnFinished_0DCA259A4022CA9282170AA5AFF5D559
// (BlueprintCallable, BlueprintEvent)

void UQuest_28269_C::OnFinished_0DCA259A4022CA9282170AA5AFF5D559()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28269_C", "OnFinished_0DCA259A4022CA9282170AA5AFF5D559");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28269.Quest_28269_C.OnStop_0DCA259A4022CA9282170AA5AFF5D559
// (BlueprintCallable, BlueprintEvent)

void UQuest_28269_C::OnStop_0DCA259A4022CA9282170AA5AFF5D559()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28269_C", "OnStop_0DCA259A4022CA9282170AA5AFF5D559");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28269.Quest_28269_C.OnDlgClosed_A936870B45A2F3FAF246E5A663DD82E9
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28269_C::OnDlgClosed_A936870B45A2F3FAF246E5A663DD82E9(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28269_C", "OnDlgClosed_A936870B45A2F3FAF246E5A663DD82E9");

	Params::Quest_28269_C_OnDlgClosed_A936870B45A2F3FAF246E5A663DD82E9 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28269.Quest_28269_C.OnDlgSelectedOption_A936870B45A2F3FAF246E5A663DD82E9
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28269_C::OnDlgSelectedOption_A936870B45A2F3FAF246E5A663DD82E9(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28269_C", "OnDlgSelectedOption_A936870B45A2F3FAF246E5A663DD82E9");

	Params::Quest_28269_C_OnDlgSelectedOption_A936870B45A2F3FAF246E5A663DD82E9 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
