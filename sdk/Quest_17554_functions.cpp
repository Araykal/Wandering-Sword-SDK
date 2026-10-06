#pragma once



// Package: Quest_17554

#include "Basic.hpp"

#include "Quest_17554_classes.hpp"
#include "Quest_17554_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_17554.Quest_17554_C.ExecuteUbergraph_Quest_17554
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_17554_C::ExecuteUbergraph_Quest_17554(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_17554_C", "ExecuteUbergraph_Quest_17554");

	Params::Quest_17554_C_ExecuteUbergraph_Quest_17554 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_17554.Quest_17554_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_17554_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_17554_C", "HandleFinishing");

	Params::Quest_17554_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_17554.Quest_17554_C.OnFinished_5A03889C47E0A672FDC5A9B41AE53EAC
// (BlueprintCallable, BlueprintEvent)

void UQuest_17554_C::OnFinished_5A03889C47E0A672FDC5A9B41AE53EAC()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_17554_C", "OnFinished_5A03889C47E0A672FDC5A9B41AE53EAC");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_17554.Quest_17554_C.OnStop_5A03889C47E0A672FDC5A9B41AE53EAC
// (BlueprintCallable, BlueprintEvent)

void UQuest_17554_C::OnStop_5A03889C47E0A672FDC5A9B41AE53EAC()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_17554_C", "OnStop_5A03889C47E0A672FDC5A9B41AE53EAC");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_17554.Quest_17554_C.OnDlgClosed_18A77AE94A5E2C0852F1C5AC2FE03F1A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_17554_C::OnDlgClosed_18A77AE94A5E2C0852F1C5AC2FE03F1A(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_17554_C", "OnDlgClosed_18A77AE94A5E2C0852F1C5AC2FE03F1A");

	Params::Quest_17554_C_OnDlgClosed_18A77AE94A5E2C0852F1C5AC2FE03F1A Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_17554.Quest_17554_C.OnDlgSelectedOption_18A77AE94A5E2C0852F1C5AC2FE03F1A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_17554_C::OnDlgSelectedOption_18A77AE94A5E2C0852F1C5AC2FE03F1A(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_17554_C", "OnDlgSelectedOption_18A77AE94A5E2C0852F1C5AC2FE03F1A");

	Params::Quest_17554_C_OnDlgSelectedOption_18A77AE94A5E2C0852F1C5AC2FE03F1A Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
