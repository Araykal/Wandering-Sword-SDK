#pragma once



// Package: Quest_9203

#include "Basic.hpp"

#include "Quest_9203_classes.hpp"
#include "Quest_9203_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_9203.Quest_9203_C.ExecuteUbergraph_Quest_9203
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_9203_C::ExecuteUbergraph_Quest_9203(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_9203_C", "ExecuteUbergraph_Quest_9203");

	Params::Quest_9203_C_ExecuteUbergraph_Quest_9203 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_9203.Quest_9203_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_9203_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_9203_C", "HandleFinishing");

	Params::Quest_9203_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_9203.Quest_9203_C.OnFinished_950CBB4D4FA9F10DB98D83832716E883
// (BlueprintCallable, BlueprintEvent)

void UQuest_9203_C::OnFinished_950CBB4D4FA9F10DB98D83832716E883()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_9203_C", "OnFinished_950CBB4D4FA9F10DB98D83832716E883");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_9203.Quest_9203_C.OnStop_950CBB4D4FA9F10DB98D83832716E883
// (BlueprintCallable, BlueprintEvent)

void UQuest_9203_C::OnStop_950CBB4D4FA9F10DB98D83832716E883()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_9203_C", "OnStop_950CBB4D4FA9F10DB98D83832716E883");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_9203.Quest_9203_C.OnDlgClosed_0F7E0D8C47AD3F4359F00DAF51B3AEC6
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_9203_C::OnDlgClosed_0F7E0D8C47AD3F4359F00DAF51B3AEC6(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_9203_C", "OnDlgClosed_0F7E0D8C47AD3F4359F00DAF51B3AEC6");

	Params::Quest_9203_C_OnDlgClosed_0F7E0D8C47AD3F4359F00DAF51B3AEC6 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_9203.Quest_9203_C.OnDlgSelectedOption_0F7E0D8C47AD3F4359F00DAF51B3AEC6
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_9203_C::OnDlgSelectedOption_0F7E0D8C47AD3F4359F00DAF51B3AEC6(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_9203_C", "OnDlgSelectedOption_0F7E0D8C47AD3F4359F00DAF51B3AEC6");

	Params::Quest_9203_C_OnDlgSelectedOption_0F7E0D8C47AD3F4359F00DAF51B3AEC6 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
