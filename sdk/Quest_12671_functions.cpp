#pragma once



// Package: Quest_12671

#include "Basic.hpp"

#include "Quest_12671_classes.hpp"
#include "Quest_12671_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_12671.Quest_12671_C.ExecuteUbergraph_Quest_12671
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12671_C::ExecuteUbergraph_Quest_12671(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12671_C", "ExecuteUbergraph_Quest_12671");

	Params::Quest_12671_C_ExecuteUbergraph_Quest_12671 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12671.Quest_12671_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12671_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12671_C", "HandleFinishing");

	Params::Quest_12671_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12671.Quest_12671_C.OnSuccess_9B21A565440309E02D056C92D7FEDD19
// (BlueprintCallable, BlueprintEvent)

void UQuest_12671_C::OnSuccess_9B21A565440309E02D056C92D7FEDD19()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12671_C", "OnSuccess_9B21A565440309E02D056C92D7FEDD19");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12671.Quest_12671_C.OnFinished_02B585AF47265AF9186C9EB485560AEC
// (BlueprintCallable, BlueprintEvent)

void UQuest_12671_C::OnFinished_02B585AF47265AF9186C9EB485560AEC()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12671_C", "OnFinished_02B585AF47265AF9186C9EB485560AEC");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12671.Quest_12671_C.OnStop_02B585AF47265AF9186C9EB485560AEC
// (BlueprintCallable, BlueprintEvent)

void UQuest_12671_C::OnStop_02B585AF47265AF9186C9EB485560AEC()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12671_C", "OnStop_02B585AF47265AF9186C9EB485560AEC");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12671.Quest_12671_C.OnDlgClosed_BB0FBDB549960889726EEB92ECA3A229
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12671_C::OnDlgClosed_BB0FBDB549960889726EEB92ECA3A229(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12671_C", "OnDlgClosed_BB0FBDB549960889726EEB92ECA3A229");

	Params::Quest_12671_C_OnDlgClosed_BB0FBDB549960889726EEB92ECA3A229 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12671.Quest_12671_C.OnDlgSelectedOption_BB0FBDB549960889726EEB92ECA3A229
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12671_C::OnDlgSelectedOption_BB0FBDB549960889726EEB92ECA3A229(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12671_C", "OnDlgSelectedOption_BB0FBDB549960889726EEB92ECA3A229");

	Params::Quest_12671_C_OnDlgSelectedOption_BB0FBDB549960889726EEB92ECA3A229 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
