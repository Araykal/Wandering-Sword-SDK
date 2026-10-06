#pragma once



// Package: Quest_12609

#include "Basic.hpp"

#include "Quest_12609_classes.hpp"
#include "Quest_12609_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_12609.Quest_12609_C.ExecuteUbergraph_Quest_12609
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12609_C::ExecuteUbergraph_Quest_12609(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12609_C", "ExecuteUbergraph_Quest_12609");

	Params::Quest_12609_C_ExecuteUbergraph_Quest_12609 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12609.Quest_12609_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12609_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12609_C", "HandleFinishing");

	Params::Quest_12609_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12609.Quest_12609_C.OnFinished_FFE3952144FC23F4A683729E20607D32
// (BlueprintCallable, BlueprintEvent)

void UQuest_12609_C::OnFinished_FFE3952144FC23F4A683729E20607D32()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12609_C", "OnFinished_FFE3952144FC23F4A683729E20607D32");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12609.Quest_12609_C.OnStop_FFE3952144FC23F4A683729E20607D32
// (BlueprintCallable, BlueprintEvent)

void UQuest_12609_C::OnStop_FFE3952144FC23F4A683729E20607D32()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12609_C", "OnStop_FFE3952144FC23F4A683729E20607D32");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12609.Quest_12609_C.OnDlgClosed_EA4745C14E87E503546D9DBAC514F76D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12609_C::OnDlgClosed_EA4745C14E87E503546D9DBAC514F76D(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12609_C", "OnDlgClosed_EA4745C14E87E503546D9DBAC514F76D");

	Params::Quest_12609_C_OnDlgClosed_EA4745C14E87E503546D9DBAC514F76D Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12609.Quest_12609_C.OnDlgSelectedOption_EA4745C14E87E503546D9DBAC514F76D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12609_C::OnDlgSelectedOption_EA4745C14E87E503546D9DBAC514F76D(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12609_C", "OnDlgSelectedOption_EA4745C14E87E503546D9DBAC514F76D");

	Params::Quest_12609_C_OnDlgSelectedOption_EA4745C14E87E503546D9DBAC514F76D Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
