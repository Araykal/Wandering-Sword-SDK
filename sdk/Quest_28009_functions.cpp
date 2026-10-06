#pragma once



// Package: Quest_28009

#include "Basic.hpp"

#include "Quest_28009_classes.hpp"
#include "Quest_28009_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_28009.Quest_28009_C.ExecuteUbergraph_Quest_28009
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28009_C::ExecuteUbergraph_Quest_28009(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28009_C", "ExecuteUbergraph_Quest_28009");

	Params::Quest_28009_C_ExecuteUbergraph_Quest_28009 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28009.Quest_28009_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28009_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28009_C", "HandleFinishing");

	Params::Quest_28009_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28009.Quest_28009_C.OnFinished_27543BA14483D629EC86D8A8AD63777A
// (BlueprintCallable, BlueprintEvent)

void UQuest_28009_C::OnFinished_27543BA14483D629EC86D8A8AD63777A()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28009_C", "OnFinished_27543BA14483D629EC86D8A8AD63777A");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28009.Quest_28009_C.OnStop_27543BA14483D629EC86D8A8AD63777A
// (BlueprintCallable, BlueprintEvent)

void UQuest_28009_C::OnStop_27543BA14483D629EC86D8A8AD63777A()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28009_C", "OnStop_27543BA14483D629EC86D8A8AD63777A");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28009.Quest_28009_C.OnDlgClosed_8B0650D842C747EE978C6F96CC77CB74
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28009_C::OnDlgClosed_8B0650D842C747EE978C6F96CC77CB74(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28009_C", "OnDlgClosed_8B0650D842C747EE978C6F96CC77CB74");

	Params::Quest_28009_C_OnDlgClosed_8B0650D842C747EE978C6F96CC77CB74 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28009.Quest_28009_C.OnDlgSelectedOption_8B0650D842C747EE978C6F96CC77CB74
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28009_C::OnDlgSelectedOption_8B0650D842C747EE978C6F96CC77CB74(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28009_C", "OnDlgSelectedOption_8B0650D842C747EE978C6F96CC77CB74");

	Params::Quest_28009_C_OnDlgSelectedOption_8B0650D842C747EE978C6F96CC77CB74 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
