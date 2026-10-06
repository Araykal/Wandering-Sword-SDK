#pragma once



// Package: Quest_16101

#include "Basic.hpp"

#include "Quest_16101_classes.hpp"
#include "Quest_16101_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_16101.Quest_16101_C.ExecuteUbergraph_Quest_16101
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_16101_C::ExecuteUbergraph_Quest_16101(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16101_C", "ExecuteUbergraph_Quest_16101");

	Params::Quest_16101_C_ExecuteUbergraph_Quest_16101 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_16101.Quest_16101_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_16101_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16101_C", "HandleFinishing");

	Params::Quest_16101_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_16101.Quest_16101_C.OnFinished_A43030174B7F7CA989AA068D21A29A09
// (BlueprintCallable, BlueprintEvent)

void UQuest_16101_C::OnFinished_A43030174B7F7CA989AA068D21A29A09()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16101_C", "OnFinished_A43030174B7F7CA989AA068D21A29A09");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_16101.Quest_16101_C.OnStop_A43030174B7F7CA989AA068D21A29A09
// (BlueprintCallable, BlueprintEvent)

void UQuest_16101_C::OnStop_A43030174B7F7CA989AA068D21A29A09()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16101_C", "OnStop_A43030174B7F7CA989AA068D21A29A09");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_16101.Quest_16101_C.OnDlgClosed_66F6500E432E722B09318E8A024D1024
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_16101_C::OnDlgClosed_66F6500E432E722B09318E8A024D1024(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16101_C", "OnDlgClosed_66F6500E432E722B09318E8A024D1024");

	Params::Quest_16101_C_OnDlgClosed_66F6500E432E722B09318E8A024D1024 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_16101.Quest_16101_C.OnDlgSelectedOption_66F6500E432E722B09318E8A024D1024
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_16101_C::OnDlgSelectedOption_66F6500E432E722B09318E8A024D1024(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16101_C", "OnDlgSelectedOption_66F6500E432E722B09318E8A024D1024");

	Params::Quest_16101_C_OnDlgSelectedOption_66F6500E432E722B09318E8A024D1024 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
