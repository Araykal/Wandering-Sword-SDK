#pragma once



// Package: Quest_30701

#include "Basic.hpp"

#include "Quest_30701_classes.hpp"
#include "Quest_30701_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_30701.Quest_30701_C.ExecuteUbergraph_Quest_30701
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30701_C::ExecuteUbergraph_Quest_30701(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30701_C", "ExecuteUbergraph_Quest_30701");

	Params::Quest_30701_C_ExecuteUbergraph_Quest_30701 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30701.Quest_30701_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30701_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30701_C", "HandleFinishing");

	Params::Quest_30701_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30701.Quest_30701_C.OnSuccess_7A9AB6F14B16EA5B6CB5B9923ADBDF57
// (BlueprintCallable, BlueprintEvent)

void UQuest_30701_C::OnSuccess_7A9AB6F14B16EA5B6CB5B9923ADBDF57()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30701_C", "OnSuccess_7A9AB6F14B16EA5B6CB5B9923ADBDF57");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30701.Quest_30701_C.OnFinished_F53565D4486C461247B35386ABBC1C0D
// (BlueprintCallable, BlueprintEvent)

void UQuest_30701_C::OnFinished_F53565D4486C461247B35386ABBC1C0D()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30701_C", "OnFinished_F53565D4486C461247B35386ABBC1C0D");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30701.Quest_30701_C.OnStop_F53565D4486C461247B35386ABBC1C0D
// (BlueprintCallable, BlueprintEvent)

void UQuest_30701_C::OnStop_F53565D4486C461247B35386ABBC1C0D()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30701_C", "OnStop_F53565D4486C461247B35386ABBC1C0D");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30701.Quest_30701_C.OnDlgClosed_0C97F99143B62F47665ED7BC28DE809D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30701_C::OnDlgClosed_0C97F99143B62F47665ED7BC28DE809D(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30701_C", "OnDlgClosed_0C97F99143B62F47665ED7BC28DE809D");

	Params::Quest_30701_C_OnDlgClosed_0C97F99143B62F47665ED7BC28DE809D Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30701.Quest_30701_C.OnDlgSelectedOption_0C97F99143B62F47665ED7BC28DE809D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30701_C::OnDlgSelectedOption_0C97F99143B62F47665ED7BC28DE809D(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30701_C", "OnDlgSelectedOption_0C97F99143B62F47665ED7BC28DE809D");

	Params::Quest_30701_C_OnDlgSelectedOption_0C97F99143B62F47665ED7BC28DE809D Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
