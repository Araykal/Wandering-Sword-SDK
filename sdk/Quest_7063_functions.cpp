#pragma once



// Package: Quest_7063

#include "Basic.hpp"

#include "Quest_7063_classes.hpp"
#include "Quest_7063_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_7063.Quest_7063_C.ExecuteUbergraph_Quest_7063
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_7063_C::ExecuteUbergraph_Quest_7063(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7063_C", "ExecuteUbergraph_Quest_7063");

	Params::Quest_7063_C_ExecuteUbergraph_Quest_7063 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_7063.Quest_7063_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_7063_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7063_C", "HandleFinishing");

	Params::Quest_7063_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_7063.Quest_7063_C.OnFinished_9B1EEDA544B4828FBEB771A5E6B0A9FA
// (BlueprintCallable, BlueprintEvent)

void UQuest_7063_C::OnFinished_9B1EEDA544B4828FBEB771A5E6B0A9FA()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7063_C", "OnFinished_9B1EEDA544B4828FBEB771A5E6B0A9FA");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_7063.Quest_7063_C.OnStop_9B1EEDA544B4828FBEB771A5E6B0A9FA
// (BlueprintCallable, BlueprintEvent)

void UQuest_7063_C::OnStop_9B1EEDA544B4828FBEB771A5E6B0A9FA()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7063_C", "OnStop_9B1EEDA544B4828FBEB771A5E6B0A9FA");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_7063.Quest_7063_C.OnDlgClosed_622F1C04418845A1868410966F526BAC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_7063_C::OnDlgClosed_622F1C04418845A1868410966F526BAC(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7063_C", "OnDlgClosed_622F1C04418845A1868410966F526BAC");

	Params::Quest_7063_C_OnDlgClosed_622F1C04418845A1868410966F526BAC Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_7063.Quest_7063_C.OnDlgSelectedOption_622F1C04418845A1868410966F526BAC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_7063_C::OnDlgSelectedOption_622F1C04418845A1868410966F526BAC(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7063_C", "OnDlgSelectedOption_622F1C04418845A1868410966F526BAC");

	Params::Quest_7063_C_OnDlgSelectedOption_622F1C04418845A1868410966F526BAC Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
