#pragma once



// Package: Quest_12084

#include "Basic.hpp"

#include "Quest_12084_classes.hpp"
#include "Quest_12084_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_12084.Quest_12084_C.ExecuteUbergraph_Quest_12084
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12084_C::ExecuteUbergraph_Quest_12084(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12084_C", "ExecuteUbergraph_Quest_12084");

	Params::Quest_12084_C_ExecuteUbergraph_Quest_12084 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12084.Quest_12084_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12084_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12084_C", "HandleFinishing");

	Params::Quest_12084_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12084.Quest_12084_C.OnFinished_73CEFA0741F55F905D3526AC0B365749
// (BlueprintCallable, BlueprintEvent)

void UQuest_12084_C::OnFinished_73CEFA0741F55F905D3526AC0B365749()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12084_C", "OnFinished_73CEFA0741F55F905D3526AC0B365749");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12084.Quest_12084_C.OnStop_73CEFA0741F55F905D3526AC0B365749
// (BlueprintCallable, BlueprintEvent)

void UQuest_12084_C::OnStop_73CEFA0741F55F905D3526AC0B365749()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12084_C", "OnStop_73CEFA0741F55F905D3526AC0B365749");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12084.Quest_12084_C.OnDlgClosed_7F31C3C14BFD7F89E7F4E2BEA61A09B5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12084_C::OnDlgClosed_7F31C3C14BFD7F89E7F4E2BEA61A09B5(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12084_C", "OnDlgClosed_7F31C3C14BFD7F89E7F4E2BEA61A09B5");

	Params::Quest_12084_C_OnDlgClosed_7F31C3C14BFD7F89E7F4E2BEA61A09B5 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12084.Quest_12084_C.OnDlgSelectedOption_7F31C3C14BFD7F89E7F4E2BEA61A09B5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12084_C::OnDlgSelectedOption_7F31C3C14BFD7F89E7F4E2BEA61A09B5(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12084_C", "OnDlgSelectedOption_7F31C3C14BFD7F89E7F4E2BEA61A09B5");

	Params::Quest_12084_C_OnDlgSelectedOption_7F31C3C14BFD7F89E7F4E2BEA61A09B5 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
