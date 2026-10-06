#pragma once



// Package: Quest_30301

#include "Basic.hpp"

#include "Quest_30301_classes.hpp"
#include "Quest_30301_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_30301.Quest_30301_C.ExecuteUbergraph_Quest_30301
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30301_C::ExecuteUbergraph_Quest_30301(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30301_C", "ExecuteUbergraph_Quest_30301");

	Params::Quest_30301_C_ExecuteUbergraph_Quest_30301 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30301.Quest_30301_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30301_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30301_C", "HandleFinishing");

	Params::Quest_30301_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30301.Quest_30301_C.OnSuccess_2DF4D68943CEB596783284BA7D5DBF72
// (BlueprintCallable, BlueprintEvent)

void UQuest_30301_C::OnSuccess_2DF4D68943CEB596783284BA7D5DBF72()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30301_C", "OnSuccess_2DF4D68943CEB596783284BA7D5DBF72");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30301.Quest_30301_C.OnFinished_83BED69C4D6FB50010A356A49C06C9D6
// (BlueprintCallable, BlueprintEvent)

void UQuest_30301_C::OnFinished_83BED69C4D6FB50010A356A49C06C9D6()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30301_C", "OnFinished_83BED69C4D6FB50010A356A49C06C9D6");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30301.Quest_30301_C.OnStop_83BED69C4D6FB50010A356A49C06C9D6
// (BlueprintCallable, BlueprintEvent)

void UQuest_30301_C::OnStop_83BED69C4D6FB50010A356A49C06C9D6()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30301_C", "OnStop_83BED69C4D6FB50010A356A49C06C9D6");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30301.Quest_30301_C.OnDlgClosed_4437314B427AF1F8797E13B4BE0C840A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30301_C::OnDlgClosed_4437314B427AF1F8797E13B4BE0C840A(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30301_C", "OnDlgClosed_4437314B427AF1F8797E13B4BE0C840A");

	Params::Quest_30301_C_OnDlgClosed_4437314B427AF1F8797E13B4BE0C840A Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30301.Quest_30301_C.OnDlgSelectedOption_4437314B427AF1F8797E13B4BE0C840A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30301_C::OnDlgSelectedOption_4437314B427AF1F8797E13B4BE0C840A(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30301_C", "OnDlgSelectedOption_4437314B427AF1F8797E13B4BE0C840A");

	Params::Quest_30301_C_OnDlgSelectedOption_4437314B427AF1F8797E13B4BE0C840A Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
