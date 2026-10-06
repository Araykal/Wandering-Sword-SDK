#pragma once



// Package: Quest_30311

#include "Basic.hpp"

#include "Quest_30311_classes.hpp"
#include "Quest_30311_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_30311.Quest_30311_C.ExecuteUbergraph_Quest_30311
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30311_C::ExecuteUbergraph_Quest_30311(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30311_C", "ExecuteUbergraph_Quest_30311");

	Params::Quest_30311_C_ExecuteUbergraph_Quest_30311 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30311.Quest_30311_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30311_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30311_C", "HandleFinishing");

	Params::Quest_30311_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30311.Quest_30311_C.OnSuccess_879BD6684F5F381EE10F7DBB8428E3E3
// (BlueprintCallable, BlueprintEvent)

void UQuest_30311_C::OnSuccess_879BD6684F5F381EE10F7DBB8428E3E3()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30311_C", "OnSuccess_879BD6684F5F381EE10F7DBB8428E3E3");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30311.Quest_30311_C.OnFinished_511F4F5C4C940374121F54BA8AD1EEBA
// (BlueprintCallable, BlueprintEvent)

void UQuest_30311_C::OnFinished_511F4F5C4C940374121F54BA8AD1EEBA()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30311_C", "OnFinished_511F4F5C4C940374121F54BA8AD1EEBA");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30311.Quest_30311_C.OnStop_511F4F5C4C940374121F54BA8AD1EEBA
// (BlueprintCallable, BlueprintEvent)

void UQuest_30311_C::OnStop_511F4F5C4C940374121F54BA8AD1EEBA()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30311_C", "OnStop_511F4F5C4C940374121F54BA8AD1EEBA");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30311.Quest_30311_C.OnDlgClosed_CE6A7FB647D51B9011FCAAA889E59954
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30311_C::OnDlgClosed_CE6A7FB647D51B9011FCAAA889E59954(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30311_C", "OnDlgClosed_CE6A7FB647D51B9011FCAAA889E59954");

	Params::Quest_30311_C_OnDlgClosed_CE6A7FB647D51B9011FCAAA889E59954 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30311.Quest_30311_C.OnDlgSelectedOption_CE6A7FB647D51B9011FCAAA889E59954
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30311_C::OnDlgSelectedOption_CE6A7FB647D51B9011FCAAA889E59954(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30311_C", "OnDlgSelectedOption_CE6A7FB647D51B9011FCAAA889E59954");

	Params::Quest_30311_C_OnDlgSelectedOption_CE6A7FB647D51B9011FCAAA889E59954 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
