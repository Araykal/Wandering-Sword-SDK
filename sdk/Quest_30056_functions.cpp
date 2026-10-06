#pragma once



// Package: Quest_30056

#include "Basic.hpp"

#include "Quest_30056_classes.hpp"
#include "Quest_30056_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_30056.Quest_30056_C.ExecuteUbergraph_Quest_30056
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30056_C::ExecuteUbergraph_Quest_30056(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30056_C", "ExecuteUbergraph_Quest_30056");

	Params::Quest_30056_C_ExecuteUbergraph_Quest_30056 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30056.Quest_30056_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30056_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30056_C", "HandleFinishing");

	Params::Quest_30056_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30056.Quest_30056_C.OnSuccess_D49D15024299FF59407CDCA24A6879A7
// (BlueprintCallable, BlueprintEvent)

void UQuest_30056_C::OnSuccess_D49D15024299FF59407CDCA24A6879A7()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30056_C", "OnSuccess_D49D15024299FF59407CDCA24A6879A7");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30056.Quest_30056_C.OnFinished_1B7368B744EC56CB1D8FF1BF780F02F4
// (BlueprintCallable, BlueprintEvent)

void UQuest_30056_C::OnFinished_1B7368B744EC56CB1D8FF1BF780F02F4()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30056_C", "OnFinished_1B7368B744EC56CB1D8FF1BF780F02F4");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30056.Quest_30056_C.OnStop_1B7368B744EC56CB1D8FF1BF780F02F4
// (BlueprintCallable, BlueprintEvent)

void UQuest_30056_C::OnStop_1B7368B744EC56CB1D8FF1BF780F02F4()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30056_C", "OnStop_1B7368B744EC56CB1D8FF1BF780F02F4");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30056.Quest_30056_C.OnDlgClosed_641630FA44278D6588B7758A2CD9ABE6
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30056_C::OnDlgClosed_641630FA44278D6588B7758A2CD9ABE6(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30056_C", "OnDlgClosed_641630FA44278D6588B7758A2CD9ABE6");

	Params::Quest_30056_C_OnDlgClosed_641630FA44278D6588B7758A2CD9ABE6 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30056.Quest_30056_C.OnDlgSelectedOption_641630FA44278D6588B7758A2CD9ABE6
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30056_C::OnDlgSelectedOption_641630FA44278D6588B7758A2CD9ABE6(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30056_C", "OnDlgSelectedOption_641630FA44278D6588B7758A2CD9ABE6");

	Params::Quest_30056_C_OnDlgSelectedOption_641630FA44278D6588B7758A2CD9ABE6 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
