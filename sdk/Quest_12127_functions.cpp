#pragma once



// Package: Quest_12127

#include "Basic.hpp"

#include "Quest_12127_classes.hpp"
#include "Quest_12127_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_12127.Quest_12127_C.ExecuteUbergraph_Quest_12127
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12127_C::ExecuteUbergraph_Quest_12127(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12127_C", "ExecuteUbergraph_Quest_12127");

	Params::Quest_12127_C_ExecuteUbergraph_Quest_12127 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12127.Quest_12127_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12127_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12127_C", "HandleFinishing");

	Params::Quest_12127_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12127.Quest_12127_C.OnFinished_6E1B68154B51613AD21E6480E6B4359F
// (BlueprintCallable, BlueprintEvent)

void UQuest_12127_C::OnFinished_6E1B68154B51613AD21E6480E6B4359F()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12127_C", "OnFinished_6E1B68154B51613AD21E6480E6B4359F");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12127.Quest_12127_C.OnStop_6E1B68154B51613AD21E6480E6B4359F
// (BlueprintCallable, BlueprintEvent)

void UQuest_12127_C::OnStop_6E1B68154B51613AD21E6480E6B4359F()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12127_C", "OnStop_6E1B68154B51613AD21E6480E6B4359F");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12127.Quest_12127_C.OnDlgClosed_F8038ED74E53EF5878657C934E14FD50
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12127_C::OnDlgClosed_F8038ED74E53EF5878657C934E14FD50(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12127_C", "OnDlgClosed_F8038ED74E53EF5878657C934E14FD50");

	Params::Quest_12127_C_OnDlgClosed_F8038ED74E53EF5878657C934E14FD50 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12127.Quest_12127_C.OnDlgSelectedOption_F8038ED74E53EF5878657C934E14FD50
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12127_C::OnDlgSelectedOption_F8038ED74E53EF5878657C934E14FD50(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12127_C", "OnDlgSelectedOption_F8038ED74E53EF5878657C934E14FD50");

	Params::Quest_12127_C_OnDlgSelectedOption_F8038ED74E53EF5878657C934E14FD50 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
