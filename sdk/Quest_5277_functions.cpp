#pragma once



// Package: Quest_5277

#include "Basic.hpp"

#include "Quest_5277_classes.hpp"
#include "Quest_5277_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5277.Quest_5277_C.ExecuteUbergraph_Quest_5277
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5277_C::ExecuteUbergraph_Quest_5277(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5277_C", "ExecuteUbergraph_Quest_5277");

	Params::Quest_5277_C_ExecuteUbergraph_Quest_5277 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5277.Quest_5277_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5277_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5277_C", "HandleFinishing");

	Params::Quest_5277_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5277.Quest_5277_C.OnFinished_1D7B808642B245D716297093B2C31207
// (BlueprintCallable, BlueprintEvent)

void UQuest_5277_C::OnFinished_1D7B808642B245D716297093B2C31207()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5277_C", "OnFinished_1D7B808642B245D716297093B2C31207");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5277.Quest_5277_C.OnStop_1D7B808642B245D716297093B2C31207
// (BlueprintCallable, BlueprintEvent)

void UQuest_5277_C::OnStop_1D7B808642B245D716297093B2C31207()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5277_C", "OnStop_1D7B808642B245D716297093B2C31207");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5277.Quest_5277_C.OnDlgClosed_9231D53C4815583967D6AA9F7063F45A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5277_C::OnDlgClosed_9231D53C4815583967D6AA9F7063F45A(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5277_C", "OnDlgClosed_9231D53C4815583967D6AA9F7063F45A");

	Params::Quest_5277_C_OnDlgClosed_9231D53C4815583967D6AA9F7063F45A Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5277.Quest_5277_C.OnDlgSelectedOption_9231D53C4815583967D6AA9F7063F45A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5277_C::OnDlgSelectedOption_9231D53C4815583967D6AA9F7063F45A(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5277_C", "OnDlgSelectedOption_9231D53C4815583967D6AA9F7063F45A");

	Params::Quest_5277_C_OnDlgSelectedOption_9231D53C4815583967D6AA9F7063F45A Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
