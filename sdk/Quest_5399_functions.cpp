#pragma once



// Package: Quest_5399

#include "Basic.hpp"

#include "Quest_5399_classes.hpp"
#include "Quest_5399_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5399.Quest_5399_C.ExecuteUbergraph_Quest_5399
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5399_C::ExecuteUbergraph_Quest_5399(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5399_C", "ExecuteUbergraph_Quest_5399");

	Params::Quest_5399_C_ExecuteUbergraph_Quest_5399 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5399.Quest_5399_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5399_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5399_C", "HandleFinishing");

	Params::Quest_5399_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5399.Quest_5399_C.OnSuccess_A47C6FED4C26127C1442E587382A50A0
// (BlueprintCallable, BlueprintEvent)

void UQuest_5399_C::OnSuccess_A47C6FED4C26127C1442E587382A50A0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5399_C", "OnSuccess_A47C6FED4C26127C1442E587382A50A0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5399.Quest_5399_C.OnFinished_9EF5F30041B3E58F1C335EB28E422E52
// (BlueprintCallable, BlueprintEvent)

void UQuest_5399_C::OnFinished_9EF5F30041B3E58F1C335EB28E422E52()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5399_C", "OnFinished_9EF5F30041B3E58F1C335EB28E422E52");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5399.Quest_5399_C.OnStop_9EF5F30041B3E58F1C335EB28E422E52
// (BlueprintCallable, BlueprintEvent)

void UQuest_5399_C::OnStop_9EF5F30041B3E58F1C335EB28E422E52()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5399_C", "OnStop_9EF5F30041B3E58F1C335EB28E422E52");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5399.Quest_5399_C.OnDlgClosed_6163043842A44FC43935FFBA0B63B42A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5399_C::OnDlgClosed_6163043842A44FC43935FFBA0B63B42A(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5399_C", "OnDlgClosed_6163043842A44FC43935FFBA0B63B42A");

	Params::Quest_5399_C_OnDlgClosed_6163043842A44FC43935FFBA0B63B42A Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5399.Quest_5399_C.OnDlgSelectedOption_6163043842A44FC43935FFBA0B63B42A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5399_C::OnDlgSelectedOption_6163043842A44FC43935FFBA0B63B42A(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5399_C", "OnDlgSelectedOption_6163043842A44FC43935FFBA0B63B42A");

	Params::Quest_5399_C_OnDlgSelectedOption_6163043842A44FC43935FFBA0B63B42A Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
