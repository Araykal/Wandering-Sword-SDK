#pragma once



// Package: Quest_12233

#include "Basic.hpp"

#include "Quest_12233_classes.hpp"
#include "Quest_12233_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_12233.Quest_12233_C.ExecuteUbergraph_Quest_12233
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12233_C::ExecuteUbergraph_Quest_12233(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12233_C", "ExecuteUbergraph_Quest_12233");

	Params::Quest_12233_C_ExecuteUbergraph_Quest_12233 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12233.Quest_12233_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12233_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12233_C", "HandleFinishing");

	Params::Quest_12233_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12233.Quest_12233_C.OnFinished_302228C74F78FB7776EBC19AB4F0DE37
// (BlueprintCallable, BlueprintEvent)

void UQuest_12233_C::OnFinished_302228C74F78FB7776EBC19AB4F0DE37()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12233_C", "OnFinished_302228C74F78FB7776EBC19AB4F0DE37");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12233.Quest_12233_C.OnStop_302228C74F78FB7776EBC19AB4F0DE37
// (BlueprintCallable, BlueprintEvent)

void UQuest_12233_C::OnStop_302228C74F78FB7776EBC19AB4F0DE37()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12233_C", "OnStop_302228C74F78FB7776EBC19AB4F0DE37");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12233.Quest_12233_C.OnDlgClosed_11B158E249D3CE4E449FA5993C80B056
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12233_C::OnDlgClosed_11B158E249D3CE4E449FA5993C80B056(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12233_C", "OnDlgClosed_11B158E249D3CE4E449FA5993C80B056");

	Params::Quest_12233_C_OnDlgClosed_11B158E249D3CE4E449FA5993C80B056 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12233.Quest_12233_C.OnDlgSelectedOption_11B158E249D3CE4E449FA5993C80B056
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12233_C::OnDlgSelectedOption_11B158E249D3CE4E449FA5993C80B056(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12233_C", "OnDlgSelectedOption_11B158E249D3CE4E449FA5993C80B056");

	Params::Quest_12233_C_OnDlgSelectedOption_11B158E249D3CE4E449FA5993C80B056 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
