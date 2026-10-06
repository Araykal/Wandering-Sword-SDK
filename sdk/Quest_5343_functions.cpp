#pragma once



// Package: Quest_5343

#include "Basic.hpp"

#include "Quest_5343_classes.hpp"
#include "Quest_5343_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5343.Quest_5343_C.ExecuteUbergraph_Quest_5343
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5343_C::ExecuteUbergraph_Quest_5343(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5343_C", "ExecuteUbergraph_Quest_5343");

	Params::Quest_5343_C_ExecuteUbergraph_Quest_5343 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5343.Quest_5343_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5343_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5343_C", "HandleFinishing");

	Params::Quest_5343_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5343.Quest_5343_C.OnFinished_A6C744C14D91D9F04BFB009253FA5A4A
// (BlueprintCallable, BlueprintEvent)

void UQuest_5343_C::OnFinished_A6C744C14D91D9F04BFB009253FA5A4A()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5343_C", "OnFinished_A6C744C14D91D9F04BFB009253FA5A4A");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5343.Quest_5343_C.OnStop_A6C744C14D91D9F04BFB009253FA5A4A
// (BlueprintCallable, BlueprintEvent)

void UQuest_5343_C::OnStop_A6C744C14D91D9F04BFB009253FA5A4A()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5343_C", "OnStop_A6C744C14D91D9F04BFB009253FA5A4A");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5343.Quest_5343_C.OnDlgClosed_B460314C455F1904AE32D0B12CC59D47
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5343_C::OnDlgClosed_B460314C455F1904AE32D0B12CC59D47(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5343_C", "OnDlgClosed_B460314C455F1904AE32D0B12CC59D47");

	Params::Quest_5343_C_OnDlgClosed_B460314C455F1904AE32D0B12CC59D47 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5343.Quest_5343_C.OnDlgSelectedOption_B460314C455F1904AE32D0B12CC59D47
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5343_C::OnDlgSelectedOption_B460314C455F1904AE32D0B12CC59D47(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5343_C", "OnDlgSelectedOption_B460314C455F1904AE32D0B12CC59D47");

	Params::Quest_5343_C_OnDlgSelectedOption_B460314C455F1904AE32D0B12CC59D47 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
