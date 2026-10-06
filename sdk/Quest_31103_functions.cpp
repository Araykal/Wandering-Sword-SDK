#pragma once



// Package: Quest_31103

#include "Basic.hpp"

#include "Quest_31103_classes.hpp"
#include "Quest_31103_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_31103.Quest_31103_C.ExecuteUbergraph_Quest_31103
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_31103_C::ExecuteUbergraph_Quest_31103(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_31103_C", "ExecuteUbergraph_Quest_31103");

	Params::Quest_31103_C_ExecuteUbergraph_Quest_31103 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_31103.Quest_31103_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_31103_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_31103_C", "HandleFinishing");

	Params::Quest_31103_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_31103.Quest_31103_C.OnFinished_FA2EAD4F490F9CC0E86D77996D8D937B
// (BlueprintCallable, BlueprintEvent)

void UQuest_31103_C::OnFinished_FA2EAD4F490F9CC0E86D77996D8D937B()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_31103_C", "OnFinished_FA2EAD4F490F9CC0E86D77996D8D937B");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_31103.Quest_31103_C.OnStop_FA2EAD4F490F9CC0E86D77996D8D937B
// (BlueprintCallable, BlueprintEvent)

void UQuest_31103_C::OnStop_FA2EAD4F490F9CC0E86D77996D8D937B()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_31103_C", "OnStop_FA2EAD4F490F9CC0E86D77996D8D937B");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_31103.Quest_31103_C.OnDlgClosed_B306A249438F388805B4D2A930F10804
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_31103_C::OnDlgClosed_B306A249438F388805B4D2A930F10804(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_31103_C", "OnDlgClosed_B306A249438F388805B4D2A930F10804");

	Params::Quest_31103_C_OnDlgClosed_B306A249438F388805B4D2A930F10804 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_31103.Quest_31103_C.OnDlgSelectedOption_B306A249438F388805B4D2A930F10804
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_31103_C::OnDlgSelectedOption_B306A249438F388805B4D2A930F10804(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_31103_C", "OnDlgSelectedOption_B306A249438F388805B4D2A930F10804");

	Params::Quest_31103_C_OnDlgSelectedOption_B306A249438F388805B4D2A930F10804 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_31103.Quest_31103_C.随机任务
// (Public, BlueprintCallable, BlueprintEvent)

void UQuest_31103_C::随机任务()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_31103_C", "随机任务");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
