#pragma once



// Package: Quest_7033

#include "Basic.hpp"

#include "Quest_7033_classes.hpp"
#include "Quest_7033_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_7033.Quest_7033_C.ExecuteUbergraph_Quest_7033
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_7033_C::ExecuteUbergraph_Quest_7033(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7033_C", "ExecuteUbergraph_Quest_7033");

	Params::Quest_7033_C_ExecuteUbergraph_Quest_7033 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_7033.Quest_7033_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_7033_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7033_C", "HandleFinishing");

	Params::Quest_7033_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_7033.Quest_7033_C.OnFinished_25F2102D466473DFCFA6C194093FC65D
// (BlueprintCallable, BlueprintEvent)

void UQuest_7033_C::OnFinished_25F2102D466473DFCFA6C194093FC65D()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7033_C", "OnFinished_25F2102D466473DFCFA6C194093FC65D");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_7033.Quest_7033_C.OnStop_25F2102D466473DFCFA6C194093FC65D
// (BlueprintCallable, BlueprintEvent)

void UQuest_7033_C::OnStop_25F2102D466473DFCFA6C194093FC65D()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7033_C", "OnStop_25F2102D466473DFCFA6C194093FC65D");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_7033.Quest_7033_C.OnDlgClosed_B651155C4FF41B95E30E1084FBA42FC7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_7033_C::OnDlgClosed_B651155C4FF41B95E30E1084FBA42FC7(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7033_C", "OnDlgClosed_B651155C4FF41B95E30E1084FBA42FC7");

	Params::Quest_7033_C_OnDlgClosed_B651155C4FF41B95E30E1084FBA42FC7 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_7033.Quest_7033_C.OnDlgSelectedOption_B651155C4FF41B95E30E1084FBA42FC7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_7033_C::OnDlgSelectedOption_B651155C4FF41B95E30E1084FBA42FC7(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7033_C", "OnDlgSelectedOption_B651155C4FF41B95E30E1084FBA42FC7");

	Params::Quest_7033_C_OnDlgSelectedOption_B651155C4FF41B95E30E1084FBA42FC7 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
