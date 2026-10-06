#pragma once



// Package: Quest_16232

#include "Basic.hpp"

#include "Quest_16232_classes.hpp"
#include "Quest_16232_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_16232.Quest_16232_C.ExecuteUbergraph_Quest_16232
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_16232_C::ExecuteUbergraph_Quest_16232(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16232_C", "ExecuteUbergraph_Quest_16232");

	Params::Quest_16232_C_ExecuteUbergraph_Quest_16232 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_16232.Quest_16232_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_16232_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16232_C", "HandleFinishing");

	Params::Quest_16232_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_16232.Quest_16232_C.OnFinished_4E3BBEFD49595EB057F6399851BC9E37
// (BlueprintCallable, BlueprintEvent)

void UQuest_16232_C::OnFinished_4E3BBEFD49595EB057F6399851BC9E37()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16232_C", "OnFinished_4E3BBEFD49595EB057F6399851BC9E37");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_16232.Quest_16232_C.OnStop_4E3BBEFD49595EB057F6399851BC9E37
// (BlueprintCallable, BlueprintEvent)

void UQuest_16232_C::OnStop_4E3BBEFD49595EB057F6399851BC9E37()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16232_C", "OnStop_4E3BBEFD49595EB057F6399851BC9E37");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_16232.Quest_16232_C.OnDlgClosed_7E64259E4DCC9A76CE384CB9A17996B7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_16232_C::OnDlgClosed_7E64259E4DCC9A76CE384CB9A17996B7(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16232_C", "OnDlgClosed_7E64259E4DCC9A76CE384CB9A17996B7");

	Params::Quest_16232_C_OnDlgClosed_7E64259E4DCC9A76CE384CB9A17996B7 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_16232.Quest_16232_C.OnDlgSelectedOption_7E64259E4DCC9A76CE384CB9A17996B7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_16232_C::OnDlgSelectedOption_7E64259E4DCC9A76CE384CB9A17996B7(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16232_C", "OnDlgSelectedOption_7E64259E4DCC9A76CE384CB9A17996B7");

	Params::Quest_16232_C_OnDlgSelectedOption_7E64259E4DCC9A76CE384CB9A17996B7 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
