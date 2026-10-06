#pragma once



// Package: Quest_28911

#include "Basic.hpp"

#include "Quest_28911_classes.hpp"
#include "Quest_28911_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_28911.Quest_28911_C.ExecuteUbergraph_Quest_28911
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28911_C::ExecuteUbergraph_Quest_28911(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28911_C", "ExecuteUbergraph_Quest_28911");

	Params::Quest_28911_C_ExecuteUbergraph_Quest_28911 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28911.Quest_28911_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28911_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28911_C", "HandleFinishing");

	Params::Quest_28911_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28911.Quest_28911_C.OnFinished_6B3AE4D84C3BC80EB7FAB0A04C7DA7E9
// (BlueprintCallable, BlueprintEvent)

void UQuest_28911_C::OnFinished_6B3AE4D84C3BC80EB7FAB0A04C7DA7E9()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28911_C", "OnFinished_6B3AE4D84C3BC80EB7FAB0A04C7DA7E9");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28911.Quest_28911_C.OnStop_6B3AE4D84C3BC80EB7FAB0A04C7DA7E9
// (BlueprintCallable, BlueprintEvent)

void UQuest_28911_C::OnStop_6B3AE4D84C3BC80EB7FAB0A04C7DA7E9()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28911_C", "OnStop_6B3AE4D84C3BC80EB7FAB0A04C7DA7E9");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28911.Quest_28911_C.OnDlgClosed_E1FCBB4F4356F11B3E66E7A7EB80CA99
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28911_C::OnDlgClosed_E1FCBB4F4356F11B3E66E7A7EB80CA99(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28911_C", "OnDlgClosed_E1FCBB4F4356F11B3E66E7A7EB80CA99");

	Params::Quest_28911_C_OnDlgClosed_E1FCBB4F4356F11B3E66E7A7EB80CA99 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28911.Quest_28911_C.OnDlgSelectedOption_E1FCBB4F4356F11B3E66E7A7EB80CA99
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28911_C::OnDlgSelectedOption_E1FCBB4F4356F11B3E66E7A7EB80CA99(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28911_C", "OnDlgSelectedOption_E1FCBB4F4356F11B3E66E7A7EB80CA99");

	Params::Quest_28911_C_OnDlgSelectedOption_E1FCBB4F4356F11B3E66E7A7EB80CA99 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
