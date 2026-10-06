#pragma once



// Package: Quest_28750

#include "Basic.hpp"

#include "Quest_28750_classes.hpp"
#include "Quest_28750_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_28750.Quest_28750_C.ExecuteUbergraph_Quest_28750
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28750_C::ExecuteUbergraph_Quest_28750(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28750_C", "ExecuteUbergraph_Quest_28750");

	Params::Quest_28750_C_ExecuteUbergraph_Quest_28750 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28750.Quest_28750_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28750_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28750_C", "HandleFinishing");

	Params::Quest_28750_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28750.Quest_28750_C.OnFinished_3DC20D3C458AD5063EE854A2D0B01D14
// (BlueprintCallable, BlueprintEvent)

void UQuest_28750_C::OnFinished_3DC20D3C458AD5063EE854A2D0B01D14()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28750_C", "OnFinished_3DC20D3C458AD5063EE854A2D0B01D14");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28750.Quest_28750_C.OnStop_3DC20D3C458AD5063EE854A2D0B01D14
// (BlueprintCallable, BlueprintEvent)

void UQuest_28750_C::OnStop_3DC20D3C458AD5063EE854A2D0B01D14()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28750_C", "OnStop_3DC20D3C458AD5063EE854A2D0B01D14");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28750.Quest_28750_C.OnDlgClosed_3EA023FD4816D057FFFFE781D4C43854
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28750_C::OnDlgClosed_3EA023FD4816D057FFFFE781D4C43854(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28750_C", "OnDlgClosed_3EA023FD4816D057FFFFE781D4C43854");

	Params::Quest_28750_C_OnDlgClosed_3EA023FD4816D057FFFFE781D4C43854 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28750.Quest_28750_C.OnDlgSelectedOption_3EA023FD4816D057FFFFE781D4C43854
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28750_C::OnDlgSelectedOption_3EA023FD4816D057FFFFE781D4C43854(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28750_C", "OnDlgSelectedOption_3EA023FD4816D057FFFFE781D4C43854");

	Params::Quest_28750_C_OnDlgSelectedOption_3EA023FD4816D057FFFFE781D4C43854 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
