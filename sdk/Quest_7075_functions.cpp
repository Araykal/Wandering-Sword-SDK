#pragma once



// Package: Quest_7075

#include "Basic.hpp"

#include "Quest_7075_classes.hpp"
#include "Quest_7075_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_7075.Quest_7075_C.ExecuteUbergraph_Quest_7075
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_7075_C::ExecuteUbergraph_Quest_7075(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7075_C", "ExecuteUbergraph_Quest_7075");

	Params::Quest_7075_C_ExecuteUbergraph_Quest_7075 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_7075.Quest_7075_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_7075_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7075_C", "HandleFinishing");

	Params::Quest_7075_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_7075.Quest_7075_C.OnFinished_DECDDCAE4D42D305212B89BC8A7D9EAF
// (BlueprintCallable, BlueprintEvent)

void UQuest_7075_C::OnFinished_DECDDCAE4D42D305212B89BC8A7D9EAF()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7075_C", "OnFinished_DECDDCAE4D42D305212B89BC8A7D9EAF");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_7075.Quest_7075_C.OnStop_DECDDCAE4D42D305212B89BC8A7D9EAF
// (BlueprintCallable, BlueprintEvent)

void UQuest_7075_C::OnStop_DECDDCAE4D42D305212B89BC8A7D9EAF()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7075_C", "OnStop_DECDDCAE4D42D305212B89BC8A7D9EAF");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_7075.Quest_7075_C.OnDlgClosed_6F22A4B9480E2F27AE251F913224D4FA
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_7075_C::OnDlgClosed_6F22A4B9480E2F27AE251F913224D4FA(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7075_C", "OnDlgClosed_6F22A4B9480E2F27AE251F913224D4FA");

	Params::Quest_7075_C_OnDlgClosed_6F22A4B9480E2F27AE251F913224D4FA Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_7075.Quest_7075_C.OnDlgSelectedOption_6F22A4B9480E2F27AE251F913224D4FA
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_7075_C::OnDlgSelectedOption_6F22A4B9480E2F27AE251F913224D4FA(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7075_C", "OnDlgSelectedOption_6F22A4B9480E2F27AE251F913224D4FA");

	Params::Quest_7075_C_OnDlgSelectedOption_6F22A4B9480E2F27AE251F913224D4FA Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
