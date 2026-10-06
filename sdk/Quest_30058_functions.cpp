#pragma once



// Package: Quest_30058

#include "Basic.hpp"

#include "Quest_30058_classes.hpp"
#include "Quest_30058_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_30058.Quest_30058_C.ExecuteUbergraph_Quest_30058
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30058_C::ExecuteUbergraph_Quest_30058(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30058_C", "ExecuteUbergraph_Quest_30058");

	Params::Quest_30058_C_ExecuteUbergraph_Quest_30058 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30058.Quest_30058_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30058_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30058_C", "HandleFinishing");

	Params::Quest_30058_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30058.Quest_30058_C.OnSuccess_E884B8324964CF5D347C4CB90623640D
// (BlueprintCallable, BlueprintEvent)

void UQuest_30058_C::OnSuccess_E884B8324964CF5D347C4CB90623640D()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30058_C", "OnSuccess_E884B8324964CF5D347C4CB90623640D");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30058.Quest_30058_C.OnFinished_1DDF66D04B4C2C5FD62D09BB6DF549E3
// (BlueprintCallable, BlueprintEvent)

void UQuest_30058_C::OnFinished_1DDF66D04B4C2C5FD62D09BB6DF549E3()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30058_C", "OnFinished_1DDF66D04B4C2C5FD62D09BB6DF549E3");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30058.Quest_30058_C.OnStop_1DDF66D04B4C2C5FD62D09BB6DF549E3
// (BlueprintCallable, BlueprintEvent)

void UQuest_30058_C::OnStop_1DDF66D04B4C2C5FD62D09BB6DF549E3()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30058_C", "OnStop_1DDF66D04B4C2C5FD62D09BB6DF549E3");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30058.Quest_30058_C.OnDlgClosed_B0215D7F47C5608B647D649E064AA207
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30058_C::OnDlgClosed_B0215D7F47C5608B647D649E064AA207(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30058_C", "OnDlgClosed_B0215D7F47C5608B647D649E064AA207");

	Params::Quest_30058_C_OnDlgClosed_B0215D7F47C5608B647D649E064AA207 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30058.Quest_30058_C.OnDlgSelectedOption_B0215D7F47C5608B647D649E064AA207
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30058_C::OnDlgSelectedOption_B0215D7F47C5608B647D649E064AA207(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30058_C", "OnDlgSelectedOption_B0215D7F47C5608B647D649E064AA207");

	Params::Quest_30058_C_OnDlgSelectedOption_B0215D7F47C5608B647D649E064AA207 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
