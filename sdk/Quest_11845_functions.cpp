#pragma once



// Package: Quest_11845

#include "Basic.hpp"

#include "Quest_11845_classes.hpp"
#include "Quest_11845_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_11845.Quest_11845_C.ExecuteUbergraph_Quest_11845
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11845_C::ExecuteUbergraph_Quest_11845(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11845_C", "ExecuteUbergraph_Quest_11845");

	Params::Quest_11845_C_ExecuteUbergraph_Quest_11845 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11845.Quest_11845_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11845_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11845_C", "HandleFinishing");

	Params::Quest_11845_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11845.Quest_11845_C.OnFinished_AA2A18BF494957355757C0978CB6160A
// (BlueprintCallable, BlueprintEvent)

void UQuest_11845_C::OnFinished_AA2A18BF494957355757C0978CB6160A()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11845_C", "OnFinished_AA2A18BF494957355757C0978CB6160A");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_11845.Quest_11845_C.OnStop_AA2A18BF494957355757C0978CB6160A
// (BlueprintCallable, BlueprintEvent)

void UQuest_11845_C::OnStop_AA2A18BF494957355757C0978CB6160A()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11845_C", "OnStop_AA2A18BF494957355757C0978CB6160A");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_11845.Quest_11845_C.OnDlgClosed_56EFE0014AFE6D9F2F009EA14B092591
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11845_C::OnDlgClosed_56EFE0014AFE6D9F2F009EA14B092591(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11845_C", "OnDlgClosed_56EFE0014AFE6D9F2F009EA14B092591");

	Params::Quest_11845_C_OnDlgClosed_56EFE0014AFE6D9F2F009EA14B092591 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11845.Quest_11845_C.OnDlgSelectedOption_56EFE0014AFE6D9F2F009EA14B092591
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11845_C::OnDlgSelectedOption_56EFE0014AFE6D9F2F009EA14B092591(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11845_C", "OnDlgSelectedOption_56EFE0014AFE6D9F2F009EA14B092591");

	Params::Quest_11845_C_OnDlgSelectedOption_56EFE0014AFE6D9F2F009EA14B092591 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
