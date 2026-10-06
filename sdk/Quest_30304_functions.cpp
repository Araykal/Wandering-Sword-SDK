#pragma once



// Package: Quest_30304

#include "Basic.hpp"

#include "Quest_30304_classes.hpp"
#include "Quest_30304_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_30304.Quest_30304_C.ExecuteUbergraph_Quest_30304
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30304_C::ExecuteUbergraph_Quest_30304(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30304_C", "ExecuteUbergraph_Quest_30304");

	Params::Quest_30304_C_ExecuteUbergraph_Quest_30304 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30304.Quest_30304_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30304_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30304_C", "HandleFinishing");

	Params::Quest_30304_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30304.Quest_30304_C.OnSuccess_278FEA0A4E8A5D58977ED3B058314458
// (BlueprintCallable, BlueprintEvent)

void UQuest_30304_C::OnSuccess_278FEA0A4E8A5D58977ED3B058314458()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30304_C", "OnSuccess_278FEA0A4E8A5D58977ED3B058314458");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30304.Quest_30304_C.OnFinished_D698715D412D76FA739DE8B098109423
// (BlueprintCallable, BlueprintEvent)

void UQuest_30304_C::OnFinished_D698715D412D76FA739DE8B098109423()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30304_C", "OnFinished_D698715D412D76FA739DE8B098109423");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30304.Quest_30304_C.OnStop_D698715D412D76FA739DE8B098109423
// (BlueprintCallable, BlueprintEvent)

void UQuest_30304_C::OnStop_D698715D412D76FA739DE8B098109423()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30304_C", "OnStop_D698715D412D76FA739DE8B098109423");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30304.Quest_30304_C.OnDlgClosed_097E8D3F44A6A43C99EE59A5932E65EA
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30304_C::OnDlgClosed_097E8D3F44A6A43C99EE59A5932E65EA(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30304_C", "OnDlgClosed_097E8D3F44A6A43C99EE59A5932E65EA");

	Params::Quest_30304_C_OnDlgClosed_097E8D3F44A6A43C99EE59A5932E65EA Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30304.Quest_30304_C.OnDlgSelectedOption_097E8D3F44A6A43C99EE59A5932E65EA
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30304_C::OnDlgSelectedOption_097E8D3F44A6A43C99EE59A5932E65EA(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30304_C", "OnDlgSelectedOption_097E8D3F44A6A43C99EE59A5932E65EA");

	Params::Quest_30304_C_OnDlgSelectedOption_097E8D3F44A6A43C99EE59A5932E65EA Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
