#pragma once



// Package: Quest_28793

#include "Basic.hpp"

#include "Quest_28793_classes.hpp"
#include "Quest_28793_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_28793.Quest_28793_C.ExecuteUbergraph_Quest_28793
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28793_C::ExecuteUbergraph_Quest_28793(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28793_C", "ExecuteUbergraph_Quest_28793");

	Params::Quest_28793_C_ExecuteUbergraph_Quest_28793 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28793.Quest_28793_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28793_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28793_C", "HandleFinishing");

	Params::Quest_28793_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28793.Quest_28793_C.OnFinished_E254B019438E9E23C0B15AA6776972C5
// (BlueprintCallable, BlueprintEvent)

void UQuest_28793_C::OnFinished_E254B019438E9E23C0B15AA6776972C5()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28793_C", "OnFinished_E254B019438E9E23C0B15AA6776972C5");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28793.Quest_28793_C.OnStop_E254B019438E9E23C0B15AA6776972C5
// (BlueprintCallable, BlueprintEvent)

void UQuest_28793_C::OnStop_E254B019438E9E23C0B15AA6776972C5()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28793_C", "OnStop_E254B019438E9E23C0B15AA6776972C5");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28793.Quest_28793_C.OnDlgClosed_000403DF4D4A811C8B2CE493247E02CA
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28793_C::OnDlgClosed_000403DF4D4A811C8B2CE493247E02CA(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28793_C", "OnDlgClosed_000403DF4D4A811C8B2CE493247E02CA");

	Params::Quest_28793_C_OnDlgClosed_000403DF4D4A811C8B2CE493247E02CA Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28793.Quest_28793_C.OnDlgSelectedOption_000403DF4D4A811C8B2CE493247E02CA
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28793_C::OnDlgSelectedOption_000403DF4D4A811C8B2CE493247E02CA(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28793_C", "OnDlgSelectedOption_000403DF4D4A811C8B2CE493247E02CA");

	Params::Quest_28793_C_OnDlgSelectedOption_000403DF4D4A811C8B2CE493247E02CA Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
