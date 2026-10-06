#pragma once



// Package: Quest_5154

#include "Basic.hpp"

#include "Quest_5154_classes.hpp"
#include "Quest_5154_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5154.Quest_5154_C.ExecuteUbergraph_Quest_5154
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5154_C::ExecuteUbergraph_Quest_5154(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5154_C", "ExecuteUbergraph_Quest_5154");

	Params::Quest_5154_C_ExecuteUbergraph_Quest_5154 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5154.Quest_5154_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5154_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5154_C", "HandleFinishing");

	Params::Quest_5154_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5154.Quest_5154_C.OnFinished_92F9D9D844490C204ED091B66CDAF1DE
// (BlueprintCallable, BlueprintEvent)

void UQuest_5154_C::OnFinished_92F9D9D844490C204ED091B66CDAF1DE()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5154_C", "OnFinished_92F9D9D844490C204ED091B66CDAF1DE");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5154.Quest_5154_C.OnStop_92F9D9D844490C204ED091B66CDAF1DE
// (BlueprintCallable, BlueprintEvent)

void UQuest_5154_C::OnStop_92F9D9D844490C204ED091B66CDAF1DE()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5154_C", "OnStop_92F9D9D844490C204ED091B66CDAF1DE");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5154.Quest_5154_C.OnDlgClosed_929B9A64492133F242245CB131F8DDE9
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5154_C::OnDlgClosed_929B9A64492133F242245CB131F8DDE9(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5154_C", "OnDlgClosed_929B9A64492133F242245CB131F8DDE9");

	Params::Quest_5154_C_OnDlgClosed_929B9A64492133F242245CB131F8DDE9 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5154.Quest_5154_C.OnDlgSelectedOption_929B9A64492133F242245CB131F8DDE9
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5154_C::OnDlgSelectedOption_929B9A64492133F242245CB131F8DDE9(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5154_C", "OnDlgSelectedOption_929B9A64492133F242245CB131F8DDE9");

	Params::Quest_5154_C_OnDlgSelectedOption_929B9A64492133F242245CB131F8DDE9 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
