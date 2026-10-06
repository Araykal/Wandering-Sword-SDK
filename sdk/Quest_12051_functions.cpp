#pragma once



// Package: Quest_12051

#include "Basic.hpp"

#include "Quest_12051_classes.hpp"
#include "Quest_12051_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_12051.Quest_12051_C.ExecuteUbergraph_Quest_12051
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12051_C::ExecuteUbergraph_Quest_12051(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12051_C", "ExecuteUbergraph_Quest_12051");

	Params::Quest_12051_C_ExecuteUbergraph_Quest_12051 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12051.Quest_12051_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12051_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12051_C", "HandleFinishing");

	Params::Quest_12051_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12051.Quest_12051_C.OnSuccess_E4C15036480E569CE5E7AC86B566CDA3
// (BlueprintCallable, BlueprintEvent)

void UQuest_12051_C::OnSuccess_E4C15036480E569CE5E7AC86B566CDA3()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12051_C", "OnSuccess_E4C15036480E569CE5E7AC86B566CDA3");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12051.Quest_12051_C.OnFinished_ECBE49DF4BA2AD879747B698D0D51B10
// (BlueprintCallable, BlueprintEvent)

void UQuest_12051_C::OnFinished_ECBE49DF4BA2AD879747B698D0D51B10()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12051_C", "OnFinished_ECBE49DF4BA2AD879747B698D0D51B10");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12051.Quest_12051_C.OnStop_ECBE49DF4BA2AD879747B698D0D51B10
// (BlueprintCallable, BlueprintEvent)

void UQuest_12051_C::OnStop_ECBE49DF4BA2AD879747B698D0D51B10()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12051_C", "OnStop_ECBE49DF4BA2AD879747B698D0D51B10");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12051.Quest_12051_C.OnDlgClosed_43EEF8214EA85F85D546678F6C6D3911
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12051_C::OnDlgClosed_43EEF8214EA85F85D546678F6C6D3911(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12051_C", "OnDlgClosed_43EEF8214EA85F85D546678F6C6D3911");

	Params::Quest_12051_C_OnDlgClosed_43EEF8214EA85F85D546678F6C6D3911 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12051.Quest_12051_C.OnDlgSelectedOption_43EEF8214EA85F85D546678F6C6D3911
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12051_C::OnDlgSelectedOption_43EEF8214EA85F85D546678F6C6D3911(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12051_C", "OnDlgSelectedOption_43EEF8214EA85F85D546678F6C6D3911");

	Params::Quest_12051_C_OnDlgSelectedOption_43EEF8214EA85F85D546678F6C6D3911 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
