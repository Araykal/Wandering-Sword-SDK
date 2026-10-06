#pragma once



// Package: Quest_30051

#include "Basic.hpp"

#include "Quest_30051_classes.hpp"
#include "Quest_30051_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_30051.Quest_30051_C.ExecuteUbergraph_Quest_30051
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30051_C::ExecuteUbergraph_Quest_30051(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30051_C", "ExecuteUbergraph_Quest_30051");

	Params::Quest_30051_C_ExecuteUbergraph_Quest_30051 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30051.Quest_30051_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30051_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30051_C", "HandleFinishing");

	Params::Quest_30051_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30051.Quest_30051_C.OnFinished_AC9468A24FE2A347707127AA3DA653E3
// (BlueprintCallable, BlueprintEvent)

void UQuest_30051_C::OnFinished_AC9468A24FE2A347707127AA3DA653E3()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30051_C", "OnFinished_AC9468A24FE2A347707127AA3DA653E3");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30051.Quest_30051_C.OnStop_AC9468A24FE2A347707127AA3DA653E3
// (BlueprintCallable, BlueprintEvent)

void UQuest_30051_C::OnStop_AC9468A24FE2A347707127AA3DA653E3()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30051_C", "OnStop_AC9468A24FE2A347707127AA3DA653E3");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30051.Quest_30051_C.OnDlgClosed_7FA05AC14F4DA6FFAF6FFA800301F638
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30051_C::OnDlgClosed_7FA05AC14F4DA6FFAF6FFA800301F638(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30051_C", "OnDlgClosed_7FA05AC14F4DA6FFAF6FFA800301F638");

	Params::Quest_30051_C_OnDlgClosed_7FA05AC14F4DA6FFAF6FFA800301F638 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30051.Quest_30051_C.OnDlgSelectedOption_7FA05AC14F4DA6FFAF6FFA800301F638
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30051_C::OnDlgSelectedOption_7FA05AC14F4DA6FFAF6FFA800301F638(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30051_C", "OnDlgSelectedOption_7FA05AC14F4DA6FFAF6FFA800301F638");

	Params::Quest_30051_C_OnDlgSelectedOption_7FA05AC14F4DA6FFAF6FFA800301F638 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
