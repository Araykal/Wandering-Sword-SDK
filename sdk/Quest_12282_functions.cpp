#pragma once



// Package: Quest_12282

#include "Basic.hpp"

#include "Quest_12282_classes.hpp"
#include "Quest_12282_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_12282.Quest_12282_C.ExecuteUbergraph_Quest_12282
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12282_C::ExecuteUbergraph_Quest_12282(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12282_C", "ExecuteUbergraph_Quest_12282");

	Params::Quest_12282_C_ExecuteUbergraph_Quest_12282 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12282.Quest_12282_C.HandleRequesting
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12282_C::HandleRequesting(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12282_C", "HandleRequesting");

	Params::Quest_12282_C_HandleRequesting Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12282.Quest_12282_C.OnFinished_450919E449CB399A3467FBB438552750
// (BlueprintCallable, BlueprintEvent)

void UQuest_12282_C::OnFinished_450919E449CB399A3467FBB438552750()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12282_C", "OnFinished_450919E449CB399A3467FBB438552750");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12282.Quest_12282_C.OnStop_450919E449CB399A3467FBB438552750
// (BlueprintCallable, BlueprintEvent)

void UQuest_12282_C::OnStop_450919E449CB399A3467FBB438552750()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12282_C", "OnStop_450919E449CB399A3467FBB438552750");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12282.Quest_12282_C.OnDlgClosed_F29B68FC4E317A2188F88BA54D53C2A3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12282_C::OnDlgClosed_F29B68FC4E317A2188F88BA54D53C2A3(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12282_C", "OnDlgClosed_F29B68FC4E317A2188F88BA54D53C2A3");

	Params::Quest_12282_C_OnDlgClosed_F29B68FC4E317A2188F88BA54D53C2A3 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12282.Quest_12282_C.OnDlgSelectedOption_F29B68FC4E317A2188F88BA54D53C2A3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12282_C::OnDlgSelectedOption_F29B68FC4E317A2188F88BA54D53C2A3(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12282_C", "OnDlgSelectedOption_F29B68FC4E317A2188F88BA54D53C2A3");

	Params::Quest_12282_C_OnDlgSelectedOption_F29B68FC4E317A2188F88BA54D53C2A3 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
