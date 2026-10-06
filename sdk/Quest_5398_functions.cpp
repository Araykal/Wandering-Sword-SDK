#pragma once



// Package: Quest_5398

#include "Basic.hpp"

#include "Quest_5398_classes.hpp"
#include "Quest_5398_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5398.Quest_5398_C.ExecuteUbergraph_Quest_5398
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5398_C::ExecuteUbergraph_Quest_5398(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5398_C", "ExecuteUbergraph_Quest_5398");

	Params::Quest_5398_C_ExecuteUbergraph_Quest_5398 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5398.Quest_5398_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5398_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5398_C", "HandleFinishing");

	Params::Quest_5398_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5398.Quest_5398_C.OnSuccess_1C00736F4B15C90141CF07BF40F89883
// (BlueprintCallable, BlueprintEvent)

void UQuest_5398_C::OnSuccess_1C00736F4B15C90141CF07BF40F89883()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5398_C", "OnSuccess_1C00736F4B15C90141CF07BF40F89883");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5398.Quest_5398_C.OnFinished_90F451C44DF65C600CF8E1AD4E4E6063
// (BlueprintCallable, BlueprintEvent)

void UQuest_5398_C::OnFinished_90F451C44DF65C600CF8E1AD4E4E6063()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5398_C", "OnFinished_90F451C44DF65C600CF8E1AD4E4E6063");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5398.Quest_5398_C.OnStop_90F451C44DF65C600CF8E1AD4E4E6063
// (BlueprintCallable, BlueprintEvent)

void UQuest_5398_C::OnStop_90F451C44DF65C600CF8E1AD4E4E6063()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5398_C", "OnStop_90F451C44DF65C600CF8E1AD4E4E6063");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5398.Quest_5398_C.OnDlgClosed_09B81CE34B2938C4DAD0C8BAC861B0ED
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5398_C::OnDlgClosed_09B81CE34B2938C4DAD0C8BAC861B0ED(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5398_C", "OnDlgClosed_09B81CE34B2938C4DAD0C8BAC861B0ED");

	Params::Quest_5398_C_OnDlgClosed_09B81CE34B2938C4DAD0C8BAC861B0ED Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5398.Quest_5398_C.OnDlgSelectedOption_09B81CE34B2938C4DAD0C8BAC861B0ED
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5398_C::OnDlgSelectedOption_09B81CE34B2938C4DAD0C8BAC861B0ED(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5398_C", "OnDlgSelectedOption_09B81CE34B2938C4DAD0C8BAC861B0ED");

	Params::Quest_5398_C_OnDlgSelectedOption_09B81CE34B2938C4DAD0C8BAC861B0ED Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
