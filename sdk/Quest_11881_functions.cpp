#pragma once



// Package: Quest_11881

#include "Basic.hpp"

#include "Quest_11881_classes.hpp"
#include "Quest_11881_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_11881.Quest_11881_C.ExecuteUbergraph_Quest_11881
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11881_C::ExecuteUbergraph_Quest_11881(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11881_C", "ExecuteUbergraph_Quest_11881");

	Params::Quest_11881_C_ExecuteUbergraph_Quest_11881 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11881.Quest_11881_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11881_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11881_C", "HandleFinishing");

	Params::Quest_11881_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11881.Quest_11881_C.OnFinished_2D180D47406BF3A84181A2A848400E02
// (BlueprintCallable, BlueprintEvent)

void UQuest_11881_C::OnFinished_2D180D47406BF3A84181A2A848400E02()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11881_C", "OnFinished_2D180D47406BF3A84181A2A848400E02");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_11881.Quest_11881_C.OnStop_2D180D47406BF3A84181A2A848400E02
// (BlueprintCallable, BlueprintEvent)

void UQuest_11881_C::OnStop_2D180D47406BF3A84181A2A848400E02()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11881_C", "OnStop_2D180D47406BF3A84181A2A848400E02");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_11881.Quest_11881_C.OnDlgClosed_4B7FCC934784437E4E79D1B868950D9A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11881_C::OnDlgClosed_4B7FCC934784437E4E79D1B868950D9A(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11881_C", "OnDlgClosed_4B7FCC934784437E4E79D1B868950D9A");

	Params::Quest_11881_C_OnDlgClosed_4B7FCC934784437E4E79D1B868950D9A Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11881.Quest_11881_C.OnDlgSelectedOption_4B7FCC934784437E4E79D1B868950D9A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11881_C::OnDlgSelectedOption_4B7FCC934784437E4E79D1B868950D9A(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11881_C", "OnDlgSelectedOption_4B7FCC934784437E4E79D1B868950D9A");

	Params::Quest_11881_C_OnDlgSelectedOption_4B7FCC934784437E4E79D1B868950D9A Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
