#pragma once



// Package: Quest_29741

#include "Basic.hpp"

#include "Quest_29741_classes.hpp"
#include "Quest_29741_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_29741.Quest_29741_C.ExecuteUbergraph_Quest_29741
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_29741_C::ExecuteUbergraph_Quest_29741(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29741_C", "ExecuteUbergraph_Quest_29741");

	Params::Quest_29741_C_ExecuteUbergraph_Quest_29741 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_29741.Quest_29741_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_29741_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29741_C", "HandleFinishing");

	Params::Quest_29741_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_29741.Quest_29741_C.OnFinished_3F49D4EE45FE40357B0B9B8645176BCE
// (BlueprintCallable, BlueprintEvent)

void UQuest_29741_C::OnFinished_3F49D4EE45FE40357B0B9B8645176BCE()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29741_C", "OnFinished_3F49D4EE45FE40357B0B9B8645176BCE");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_29741.Quest_29741_C.OnStop_3F49D4EE45FE40357B0B9B8645176BCE
// (BlueprintCallable, BlueprintEvent)

void UQuest_29741_C::OnStop_3F49D4EE45FE40357B0B9B8645176BCE()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29741_C", "OnStop_3F49D4EE45FE40357B0B9B8645176BCE");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_29741.Quest_29741_C.OnDlgClosed_14BC5FD6440898FDE8BC98A75BF9C11A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_29741_C::OnDlgClosed_14BC5FD6440898FDE8BC98A75BF9C11A(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29741_C", "OnDlgClosed_14BC5FD6440898FDE8BC98A75BF9C11A");

	Params::Quest_29741_C_OnDlgClosed_14BC5FD6440898FDE8BC98A75BF9C11A Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_29741.Quest_29741_C.OnDlgSelectedOption_14BC5FD6440898FDE8BC98A75BF9C11A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_29741_C::OnDlgSelectedOption_14BC5FD6440898FDE8BC98A75BF9C11A(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29741_C", "OnDlgSelectedOption_14BC5FD6440898FDE8BC98A75BF9C11A");

	Params::Quest_29741_C_OnDlgSelectedOption_14BC5FD6440898FDE8BC98A75BF9C11A Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
