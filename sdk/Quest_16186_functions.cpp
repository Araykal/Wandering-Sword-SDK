#pragma once



// Package: Quest_16186

#include "Basic.hpp"

#include "Quest_16186_classes.hpp"
#include "Quest_16186_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_16186.Quest_16186_C.ExecuteUbergraph_Quest_16186
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_16186_C::ExecuteUbergraph_Quest_16186(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16186_C", "ExecuteUbergraph_Quest_16186");

	Params::Quest_16186_C_ExecuteUbergraph_Quest_16186 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_16186.Quest_16186_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_16186_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16186_C", "HandleFinishing");

	Params::Quest_16186_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_16186.Quest_16186_C.OnFinished_33A9AF614616944CF050F0B322F098DF
// (BlueprintCallable, BlueprintEvent)

void UQuest_16186_C::OnFinished_33A9AF614616944CF050F0B322F098DF()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16186_C", "OnFinished_33A9AF614616944CF050F0B322F098DF");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_16186.Quest_16186_C.OnStop_33A9AF614616944CF050F0B322F098DF
// (BlueprintCallable, BlueprintEvent)

void UQuest_16186_C::OnStop_33A9AF614616944CF050F0B322F098DF()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16186_C", "OnStop_33A9AF614616944CF050F0B322F098DF");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_16186.Quest_16186_C.OnDlgClosed_BE60976B483486E10CCFB8B0C25BBCA5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_16186_C::OnDlgClosed_BE60976B483486E10CCFB8B0C25BBCA5(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16186_C", "OnDlgClosed_BE60976B483486E10CCFB8B0C25BBCA5");

	Params::Quest_16186_C_OnDlgClosed_BE60976B483486E10CCFB8B0C25BBCA5 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_16186.Quest_16186_C.OnDlgSelectedOption_BE60976B483486E10CCFB8B0C25BBCA5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_16186_C::OnDlgSelectedOption_BE60976B483486E10CCFB8B0C25BBCA5(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16186_C", "OnDlgSelectedOption_BE60976B483486E10CCFB8B0C25BBCA5");

	Params::Quest_16186_C_OnDlgSelectedOption_BE60976B483486E10CCFB8B0C25BBCA5 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
