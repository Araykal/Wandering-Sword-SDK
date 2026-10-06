#pragma once



// Package: Quest_12261

#include "Basic.hpp"

#include "Quest_12261_classes.hpp"
#include "Quest_12261_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_12261.Quest_12261_C.ExecuteUbergraph_Quest_12261
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12261_C::ExecuteUbergraph_Quest_12261(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12261_C", "ExecuteUbergraph_Quest_12261");

	Params::Quest_12261_C_ExecuteUbergraph_Quest_12261 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12261.Quest_12261_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12261_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12261_C", "HandleFinishing");

	Params::Quest_12261_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12261.Quest_12261_C.OnFinished_89E8D29F462E704535111A9053BEB162
// (BlueprintCallable, BlueprintEvent)

void UQuest_12261_C::OnFinished_89E8D29F462E704535111A9053BEB162()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12261_C", "OnFinished_89E8D29F462E704535111A9053BEB162");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12261.Quest_12261_C.OnStop_89E8D29F462E704535111A9053BEB162
// (BlueprintCallable, BlueprintEvent)

void UQuest_12261_C::OnStop_89E8D29F462E704535111A9053BEB162()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12261_C", "OnStop_89E8D29F462E704535111A9053BEB162");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12261.Quest_12261_C.OnDlgClosed_F0668DD94CD0907E62308F99EDBDB64F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12261_C::OnDlgClosed_F0668DD94CD0907E62308F99EDBDB64F(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12261_C", "OnDlgClosed_F0668DD94CD0907E62308F99EDBDB64F");

	Params::Quest_12261_C_OnDlgClosed_F0668DD94CD0907E62308F99EDBDB64F Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12261.Quest_12261_C.OnDlgSelectedOption_F0668DD94CD0907E62308F99EDBDB64F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12261_C::OnDlgSelectedOption_F0668DD94CD0907E62308F99EDBDB64F(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12261_C", "OnDlgSelectedOption_F0668DD94CD0907E62308F99EDBDB64F");

	Params::Quest_12261_C_OnDlgSelectedOption_F0668DD94CD0907E62308F99EDBDB64F Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
