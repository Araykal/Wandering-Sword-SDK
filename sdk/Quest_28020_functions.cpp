#pragma once



// Package: Quest_28020

#include "Basic.hpp"

#include "Quest_28020_classes.hpp"
#include "Quest_28020_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_28020.Quest_28020_C.ExecuteUbergraph_Quest_28020
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28020_C::ExecuteUbergraph_Quest_28020(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28020_C", "ExecuteUbergraph_Quest_28020");

	Params::Quest_28020_C_ExecuteUbergraph_Quest_28020 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28020.Quest_28020_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28020_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28020_C", "HandleFinishing");

	Params::Quest_28020_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28020.Quest_28020_C.OnSuccess_045A6B0C48B5B91B0B322CA5864CFE63
// (BlueprintCallable, BlueprintEvent)

void UQuest_28020_C::OnSuccess_045A6B0C48B5B91B0B322CA5864CFE63()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28020_C", "OnSuccess_045A6B0C48B5B91B0B322CA5864CFE63");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28020.Quest_28020_C.OnFinished_6D193F31435B34DA460C31A1599434C7
// (BlueprintCallable, BlueprintEvent)

void UQuest_28020_C::OnFinished_6D193F31435B34DA460C31A1599434C7()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28020_C", "OnFinished_6D193F31435B34DA460C31A1599434C7");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28020.Quest_28020_C.OnStop_6D193F31435B34DA460C31A1599434C7
// (BlueprintCallable, BlueprintEvent)

void UQuest_28020_C::OnStop_6D193F31435B34DA460C31A1599434C7()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28020_C", "OnStop_6D193F31435B34DA460C31A1599434C7");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28020.Quest_28020_C.OnDlgClosed_3C63D4F04E82D65F255B579559307E5C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28020_C::OnDlgClosed_3C63D4F04E82D65F255B579559307E5C(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28020_C", "OnDlgClosed_3C63D4F04E82D65F255B579559307E5C");

	Params::Quest_28020_C_OnDlgClosed_3C63D4F04E82D65F255B579559307E5C Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28020.Quest_28020_C.OnDlgSelectedOption_3C63D4F04E82D65F255B579559307E5C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28020_C::OnDlgSelectedOption_3C63D4F04E82D65F255B579559307E5C(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28020_C", "OnDlgSelectedOption_3C63D4F04E82D65F255B579559307E5C");

	Params::Quest_28020_C_OnDlgSelectedOption_3C63D4F04E82D65F255B579559307E5C Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
