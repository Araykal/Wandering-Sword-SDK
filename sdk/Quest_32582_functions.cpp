#pragma once



// Package: Quest_32582

#include "Basic.hpp"

#include "Quest_32582_classes.hpp"
#include "Quest_32582_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_32582.Quest_32582_C.ExecuteUbergraph_Quest_32582
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_32582_C::ExecuteUbergraph_Quest_32582(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_32582_C", "ExecuteUbergraph_Quest_32582");

	Params::Quest_32582_C_ExecuteUbergraph_Quest_32582 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_32582.Quest_32582_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_32582_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_32582_C", "HandleFinishing");

	Params::Quest_32582_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_32582.Quest_32582_C.OnFinished_B16B6C1D4B3CA632034F528E1D226CDA
// (BlueprintCallable, BlueprintEvent)

void UQuest_32582_C::OnFinished_B16B6C1D4B3CA632034F528E1D226CDA()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_32582_C", "OnFinished_B16B6C1D4B3CA632034F528E1D226CDA");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_32582.Quest_32582_C.OnStop_B16B6C1D4B3CA632034F528E1D226CDA
// (BlueprintCallable, BlueprintEvent)

void UQuest_32582_C::OnStop_B16B6C1D4B3CA632034F528E1D226CDA()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_32582_C", "OnStop_B16B6C1D4B3CA632034F528E1D226CDA");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_32582.Quest_32582_C.OnDlgClosed_EC37FBF94952EA1A56D7D49BAEDA7F6C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_32582_C::OnDlgClosed_EC37FBF94952EA1A56D7D49BAEDA7F6C(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_32582_C", "OnDlgClosed_EC37FBF94952EA1A56D7D49BAEDA7F6C");

	Params::Quest_32582_C_OnDlgClosed_EC37FBF94952EA1A56D7D49BAEDA7F6C Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_32582.Quest_32582_C.OnDlgSelectedOption_EC37FBF94952EA1A56D7D49BAEDA7F6C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_32582_C::OnDlgSelectedOption_EC37FBF94952EA1A56D7D49BAEDA7F6C(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_32582_C", "OnDlgSelectedOption_EC37FBF94952EA1A56D7D49BAEDA7F6C");

	Params::Quest_32582_C_OnDlgSelectedOption_EC37FBF94952EA1A56D7D49BAEDA7F6C Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
