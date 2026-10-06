#pragma once



// Package: Quest_28721

#include "Basic.hpp"

#include "Quest_28721_classes.hpp"
#include "Quest_28721_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_28721.Quest_28721_C.ExecuteUbergraph_Quest_28721
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28721_C::ExecuteUbergraph_Quest_28721(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28721_C", "ExecuteUbergraph_Quest_28721");

	Params::Quest_28721_C_ExecuteUbergraph_Quest_28721 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28721.Quest_28721_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28721_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28721_C", "HandleFinishing");

	Params::Quest_28721_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28721.Quest_28721_C.OnFinished_F8CB9D544E43ED657A3B0B86EE8FE263
// (BlueprintCallable, BlueprintEvent)

void UQuest_28721_C::OnFinished_F8CB9D544E43ED657A3B0B86EE8FE263()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28721_C", "OnFinished_F8CB9D544E43ED657A3B0B86EE8FE263");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28721.Quest_28721_C.OnStop_F8CB9D544E43ED657A3B0B86EE8FE263
// (BlueprintCallable, BlueprintEvent)

void UQuest_28721_C::OnStop_F8CB9D544E43ED657A3B0B86EE8FE263()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28721_C", "OnStop_F8CB9D544E43ED657A3B0B86EE8FE263");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28721.Quest_28721_C.OnDlgClosed_89C392A940774E0E486C2498B619761C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28721_C::OnDlgClosed_89C392A940774E0E486C2498B619761C(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28721_C", "OnDlgClosed_89C392A940774E0E486C2498B619761C");

	Params::Quest_28721_C_OnDlgClosed_89C392A940774E0E486C2498B619761C Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28721.Quest_28721_C.OnDlgSelectedOption_89C392A940774E0E486C2498B619761C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28721_C::OnDlgSelectedOption_89C392A940774E0E486C2498B619761C(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28721_C", "OnDlgSelectedOption_89C392A940774E0E486C2498B619761C");

	Params::Quest_28721_C_OnDlgSelectedOption_89C392A940774E0E486C2498B619761C Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
