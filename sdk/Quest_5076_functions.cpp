#pragma once



// Package: Quest_5076

#include "Basic.hpp"

#include "Quest_5076_classes.hpp"
#include "Quest_5076_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5076.Quest_5076_C.ExecuteUbergraph_Quest_5076
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5076_C::ExecuteUbergraph_Quest_5076(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5076_C", "ExecuteUbergraph_Quest_5076");

	Params::Quest_5076_C_ExecuteUbergraph_Quest_5076 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5076.Quest_5076_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5076_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5076_C", "HandleFinishing");

	Params::Quest_5076_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5076.Quest_5076_C.OnFinished_68C6A2B5469AEFAC22EB919DA34F2B7D
// (BlueprintCallable, BlueprintEvent)

void UQuest_5076_C::OnFinished_68C6A2B5469AEFAC22EB919DA34F2B7D()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5076_C", "OnFinished_68C6A2B5469AEFAC22EB919DA34F2B7D");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5076.Quest_5076_C.OnStop_68C6A2B5469AEFAC22EB919DA34F2B7D
// (BlueprintCallable, BlueprintEvent)

void UQuest_5076_C::OnStop_68C6A2B5469AEFAC22EB919DA34F2B7D()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5076_C", "OnStop_68C6A2B5469AEFAC22EB919DA34F2B7D");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5076.Quest_5076_C.OnDlgClosed_6B6026624947D437B0D4C0AD71474747
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5076_C::OnDlgClosed_6B6026624947D437B0D4C0AD71474747(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5076_C", "OnDlgClosed_6B6026624947D437B0D4C0AD71474747");

	Params::Quest_5076_C_OnDlgClosed_6B6026624947D437B0D4C0AD71474747 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5076.Quest_5076_C.OnDlgSelectedOption_6B6026624947D437B0D4C0AD71474747
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5076_C::OnDlgSelectedOption_6B6026624947D437B0D4C0AD71474747(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5076_C", "OnDlgSelectedOption_6B6026624947D437B0D4C0AD71474747");

	Params::Quest_5076_C_OnDlgSelectedOption_6B6026624947D437B0D4C0AD71474747 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
