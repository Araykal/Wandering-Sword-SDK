#pragma once



// Package: Quest_28201

#include "Basic.hpp"

#include "Quest_28201_classes.hpp"
#include "Quest_28201_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_28201.Quest_28201_C.ExecuteUbergraph_Quest_28201
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28201_C::ExecuteUbergraph_Quest_28201(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28201_C", "ExecuteUbergraph_Quest_28201");

	Params::Quest_28201_C_ExecuteUbergraph_Quest_28201 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28201.Quest_28201_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28201_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28201_C", "HandleFinishing");

	Params::Quest_28201_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28201.Quest_28201_C.OnSuccess_0C4DF2A84EDDB6C3D3DD71A460FD749A
// (BlueprintCallable, BlueprintEvent)

void UQuest_28201_C::OnSuccess_0C4DF2A84EDDB6C3D3DD71A460FD749A()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28201_C", "OnSuccess_0C4DF2A84EDDB6C3D3DD71A460FD749A");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28201.Quest_28201_C.OnFinished_C6B954E0433944D4309B49B745C4A589
// (BlueprintCallable, BlueprintEvent)

void UQuest_28201_C::OnFinished_C6B954E0433944D4309B49B745C4A589()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28201_C", "OnFinished_C6B954E0433944D4309B49B745C4A589");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28201.Quest_28201_C.OnStop_C6B954E0433944D4309B49B745C4A589
// (BlueprintCallable, BlueprintEvent)

void UQuest_28201_C::OnStop_C6B954E0433944D4309B49B745C4A589()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28201_C", "OnStop_C6B954E0433944D4309B49B745C4A589");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28201.Quest_28201_C.OnDlgClosed_C9E66B3D4DDF4975F3E1DAA2CD0D5569
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28201_C::OnDlgClosed_C9E66B3D4DDF4975F3E1DAA2CD0D5569(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28201_C", "OnDlgClosed_C9E66B3D4DDF4975F3E1DAA2CD0D5569");

	Params::Quest_28201_C_OnDlgClosed_C9E66B3D4DDF4975F3E1DAA2CD0D5569 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28201.Quest_28201_C.OnDlgSelectedOption_C9E66B3D4DDF4975F3E1DAA2CD0D5569
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28201_C::OnDlgSelectedOption_C9E66B3D4DDF4975F3E1DAA2CD0D5569(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28201_C", "OnDlgSelectedOption_C9E66B3D4DDF4975F3E1DAA2CD0D5569");

	Params::Quest_28201_C_OnDlgSelectedOption_C9E66B3D4DDF4975F3E1DAA2CD0D5569 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
