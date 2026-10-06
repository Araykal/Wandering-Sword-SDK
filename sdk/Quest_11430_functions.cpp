#pragma once



// Package: Quest_11430

#include "Basic.hpp"

#include "Quest_11430_classes.hpp"
#include "Quest_11430_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_11430.Quest_11430_C.ExecuteUbergraph_Quest_11430
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11430_C::ExecuteUbergraph_Quest_11430(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11430_C", "ExecuteUbergraph_Quest_11430");

	Params::Quest_11430_C_ExecuteUbergraph_Quest_11430 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11430.Quest_11430_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11430_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11430_C", "HandleFinishing");

	Params::Quest_11430_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11430.Quest_11430_C.OnFinished_743325E948782B8226A6BABB5EAE46D5
// (BlueprintCallable, BlueprintEvent)

void UQuest_11430_C::OnFinished_743325E948782B8226A6BABB5EAE46D5()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11430_C", "OnFinished_743325E948782B8226A6BABB5EAE46D5");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_11430.Quest_11430_C.OnStop_743325E948782B8226A6BABB5EAE46D5
// (BlueprintCallable, BlueprintEvent)

void UQuest_11430_C::OnStop_743325E948782B8226A6BABB5EAE46D5()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11430_C", "OnStop_743325E948782B8226A6BABB5EAE46D5");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_11430.Quest_11430_C.OnDlgClosed_0B3EAA464D24FD408D3908B46131BE5C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11430_C::OnDlgClosed_0B3EAA464D24FD408D3908B46131BE5C(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11430_C", "OnDlgClosed_0B3EAA464D24FD408D3908B46131BE5C");

	Params::Quest_11430_C_OnDlgClosed_0B3EAA464D24FD408D3908B46131BE5C Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11430.Quest_11430_C.OnDlgSelectedOption_0B3EAA464D24FD408D3908B46131BE5C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11430_C::OnDlgSelectedOption_0B3EAA464D24FD408D3908B46131BE5C(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11430_C", "OnDlgSelectedOption_0B3EAA464D24FD408D3908B46131BE5C");

	Params::Quest_11430_C_OnDlgSelectedOption_0B3EAA464D24FD408D3908B46131BE5C Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
