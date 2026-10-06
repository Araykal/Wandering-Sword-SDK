#pragma once



// Package: Quest_16514

#include "Basic.hpp"

#include "Quest_16514_classes.hpp"
#include "Quest_16514_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_16514.Quest_16514_C.ExecuteUbergraph_Quest_16514
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_16514_C::ExecuteUbergraph_Quest_16514(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16514_C", "ExecuteUbergraph_Quest_16514");

	Params::Quest_16514_C_ExecuteUbergraph_Quest_16514 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_16514.Quest_16514_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_16514_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16514_C", "HandleFinishing");

	Params::Quest_16514_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_16514.Quest_16514_C.OnFinished_B45C85594AA2F99377F67BBDC56B85AA
// (BlueprintCallable, BlueprintEvent)

void UQuest_16514_C::OnFinished_B45C85594AA2F99377F67BBDC56B85AA()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16514_C", "OnFinished_B45C85594AA2F99377F67BBDC56B85AA");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_16514.Quest_16514_C.OnStop_B45C85594AA2F99377F67BBDC56B85AA
// (BlueprintCallable, BlueprintEvent)

void UQuest_16514_C::OnStop_B45C85594AA2F99377F67BBDC56B85AA()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16514_C", "OnStop_B45C85594AA2F99377F67BBDC56B85AA");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_16514.Quest_16514_C.OnDlgClosed_B3829333408A49544B7B278F9F63A257
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_16514_C::OnDlgClosed_B3829333408A49544B7B278F9F63A257(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16514_C", "OnDlgClosed_B3829333408A49544B7B278F9F63A257");

	Params::Quest_16514_C_OnDlgClosed_B3829333408A49544B7B278F9F63A257 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_16514.Quest_16514_C.OnDlgSelectedOption_B3829333408A49544B7B278F9F63A257
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_16514_C::OnDlgSelectedOption_B3829333408A49544B7B278F9F63A257(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16514_C", "OnDlgSelectedOption_B3829333408A49544B7B278F9F63A257");

	Params::Quest_16514_C_OnDlgSelectedOption_B3829333408A49544B7B278F9F63A257 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
