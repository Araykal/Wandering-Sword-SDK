#pragma once



// Package: Quest_28962

#include "Basic.hpp"

#include "Quest_28962_classes.hpp"
#include "Quest_28962_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_28962.Quest_28962_C.ExecuteUbergraph_Quest_28962
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28962_C::ExecuteUbergraph_Quest_28962(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28962_C", "ExecuteUbergraph_Quest_28962");

	Params::Quest_28962_C_ExecuteUbergraph_Quest_28962 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28962.Quest_28962_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28962_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28962_C", "HandleFinishing");

	Params::Quest_28962_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28962.Quest_28962_C.OnFinished_6040C24140AF5DAA7EF802AAC8CEDD9E
// (BlueprintCallable, BlueprintEvent)

void UQuest_28962_C::OnFinished_6040C24140AF5DAA7EF802AAC8CEDD9E()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28962_C", "OnFinished_6040C24140AF5DAA7EF802AAC8CEDD9E");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28962.Quest_28962_C.OnStop_6040C24140AF5DAA7EF802AAC8CEDD9E
// (BlueprintCallable, BlueprintEvent)

void UQuest_28962_C::OnStop_6040C24140AF5DAA7EF802AAC8CEDD9E()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28962_C", "OnStop_6040C24140AF5DAA7EF802AAC8CEDD9E");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28962.Quest_28962_C.OnDlgClosed_4E1D2D7F43536EEB9811C49B0690A0BC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28962_C::OnDlgClosed_4E1D2D7F43536EEB9811C49B0690A0BC(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28962_C", "OnDlgClosed_4E1D2D7F43536EEB9811C49B0690A0BC");

	Params::Quest_28962_C_OnDlgClosed_4E1D2D7F43536EEB9811C49B0690A0BC Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28962.Quest_28962_C.OnDlgSelectedOption_4E1D2D7F43536EEB9811C49B0690A0BC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28962_C::OnDlgSelectedOption_4E1D2D7F43536EEB9811C49B0690A0BC(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28962_C", "OnDlgSelectedOption_4E1D2D7F43536EEB9811C49B0690A0BC");

	Params::Quest_28962_C_OnDlgSelectedOption_4E1D2D7F43536EEB9811C49B0690A0BC Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
