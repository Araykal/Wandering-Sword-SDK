#pragma once



// Package: Quest_28716

#include "Basic.hpp"

#include "Quest_28716_classes.hpp"
#include "Quest_28716_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_28716.Quest_28716_C.ExecuteUbergraph_Quest_28716
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28716_C::ExecuteUbergraph_Quest_28716(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28716_C", "ExecuteUbergraph_Quest_28716");

	Params::Quest_28716_C_ExecuteUbergraph_Quest_28716 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28716.Quest_28716_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28716_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28716_C", "HandleFinishing");

	Params::Quest_28716_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28716.Quest_28716_C.OnSuccess_40063192451F27C195E533BFC686A543
// (BlueprintCallable, BlueprintEvent)

void UQuest_28716_C::OnSuccess_40063192451F27C195E533BFC686A543()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28716_C", "OnSuccess_40063192451F27C195E533BFC686A543");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28716.Quest_28716_C.OnSuccess_FCED70F84FE7D03ADA591F9961F20BE4
// (BlueprintCallable, BlueprintEvent)

void UQuest_28716_C::OnSuccess_FCED70F84FE7D03ADA591F9961F20BE4()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28716_C", "OnSuccess_FCED70F84FE7D03ADA591F9961F20BE4");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28716.Quest_28716_C.OnFinished_97596F5A48CE09933DAE0AB909D71918
// (BlueprintCallable, BlueprintEvent)

void UQuest_28716_C::OnFinished_97596F5A48CE09933DAE0AB909D71918()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28716_C", "OnFinished_97596F5A48CE09933DAE0AB909D71918");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28716.Quest_28716_C.OnStop_97596F5A48CE09933DAE0AB909D71918
// (BlueprintCallable, BlueprintEvent)

void UQuest_28716_C::OnStop_97596F5A48CE09933DAE0AB909D71918()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28716_C", "OnStop_97596F5A48CE09933DAE0AB909D71918");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28716.Quest_28716_C.OnDlgClosed_C88E71094DC41D31CFE2849DF7748D04
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28716_C::OnDlgClosed_C88E71094DC41D31CFE2849DF7748D04(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28716_C", "OnDlgClosed_C88E71094DC41D31CFE2849DF7748D04");

	Params::Quest_28716_C_OnDlgClosed_C88E71094DC41D31CFE2849DF7748D04 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28716.Quest_28716_C.OnDlgSelectedOption_C88E71094DC41D31CFE2849DF7748D04
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28716_C::OnDlgSelectedOption_C88E71094DC41D31CFE2849DF7748D04(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28716_C", "OnDlgSelectedOption_C88E71094DC41D31CFE2849DF7748D04");

	Params::Quest_28716_C_OnDlgSelectedOption_C88E71094DC41D31CFE2849DF7748D04 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
