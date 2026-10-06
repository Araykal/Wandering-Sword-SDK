#pragma once



// Package: Quest_28743

#include "Basic.hpp"

#include "Quest_28743_classes.hpp"
#include "Quest_28743_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_28743.Quest_28743_C.ExecuteUbergraph_Quest_28743
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28743_C::ExecuteUbergraph_Quest_28743(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28743_C", "ExecuteUbergraph_Quest_28743");

	Params::Quest_28743_C_ExecuteUbergraph_Quest_28743 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28743.Quest_28743_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28743_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28743_C", "HandleFinishing");

	Params::Quest_28743_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28743.Quest_28743_C.OnFinished_0649AB92437CC92620D47CB95A98E0F4
// (BlueprintCallable, BlueprintEvent)

void UQuest_28743_C::OnFinished_0649AB92437CC92620D47CB95A98E0F4()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28743_C", "OnFinished_0649AB92437CC92620D47CB95A98E0F4");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28743.Quest_28743_C.OnStop_0649AB92437CC92620D47CB95A98E0F4
// (BlueprintCallable, BlueprintEvent)

void UQuest_28743_C::OnStop_0649AB92437CC92620D47CB95A98E0F4()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28743_C", "OnStop_0649AB92437CC92620D47CB95A98E0F4");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28743.Quest_28743_C.OnDlgClosed_8701D7234F1C5B269EBDA4BC7DCC1496
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28743_C::OnDlgClosed_8701D7234F1C5B269EBDA4BC7DCC1496(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28743_C", "OnDlgClosed_8701D7234F1C5B269EBDA4BC7DCC1496");

	Params::Quest_28743_C_OnDlgClosed_8701D7234F1C5B269EBDA4BC7DCC1496 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28743.Quest_28743_C.OnDlgSelectedOption_8701D7234F1C5B269EBDA4BC7DCC1496
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28743_C::OnDlgSelectedOption_8701D7234F1C5B269EBDA4BC7DCC1496(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28743_C", "OnDlgSelectedOption_8701D7234F1C5B269EBDA4BC7DCC1496");

	Params::Quest_28743_C_OnDlgSelectedOption_8701D7234F1C5B269EBDA4BC7DCC1496 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
