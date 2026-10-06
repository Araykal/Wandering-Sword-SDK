#pragma once



// Package: Quest_12383

#include "Basic.hpp"

#include "Quest_12383_classes.hpp"
#include "Quest_12383_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_12383.Quest_12383_C.ExecuteUbergraph_Quest_12383
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12383_C::ExecuteUbergraph_Quest_12383(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12383_C", "ExecuteUbergraph_Quest_12383");

	Params::Quest_12383_C_ExecuteUbergraph_Quest_12383 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12383.Quest_12383_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12383_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12383_C", "HandleFinishing");

	Params::Quest_12383_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12383.Quest_12383_C.OnFinished_9B73315F4D3AC78815F4DBB2FFF9B069
// (BlueprintCallable, BlueprintEvent)

void UQuest_12383_C::OnFinished_9B73315F4D3AC78815F4DBB2FFF9B069()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12383_C", "OnFinished_9B73315F4D3AC78815F4DBB2FFF9B069");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12383.Quest_12383_C.OnStop_9B73315F4D3AC78815F4DBB2FFF9B069
// (BlueprintCallable, BlueprintEvent)

void UQuest_12383_C::OnStop_9B73315F4D3AC78815F4DBB2FFF9B069()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12383_C", "OnStop_9B73315F4D3AC78815F4DBB2FFF9B069");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12383.Quest_12383_C.OnDlgClosed_6411FA9C4BB7F1889CB8A58C1765C220
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12383_C::OnDlgClosed_6411FA9C4BB7F1889CB8A58C1765C220(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12383_C", "OnDlgClosed_6411FA9C4BB7F1889CB8A58C1765C220");

	Params::Quest_12383_C_OnDlgClosed_6411FA9C4BB7F1889CB8A58C1765C220 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12383.Quest_12383_C.OnDlgSelectedOption_6411FA9C4BB7F1889CB8A58C1765C220
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12383_C::OnDlgSelectedOption_6411FA9C4BB7F1889CB8A58C1765C220(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12383_C", "OnDlgSelectedOption_6411FA9C4BB7F1889CB8A58C1765C220");

	Params::Quest_12383_C_OnDlgSelectedOption_6411FA9C4BB7F1889CB8A58C1765C220 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
