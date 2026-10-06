#pragma once



// Package: Quest_5063

#include "Basic.hpp"

#include "Quest_5063_classes.hpp"
#include "Quest_5063_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5063.Quest_5063_C.ExecuteUbergraph_Quest_5063
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5063_C::ExecuteUbergraph_Quest_5063(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5063_C", "ExecuteUbergraph_Quest_5063");

	Params::Quest_5063_C_ExecuteUbergraph_Quest_5063 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5063.Quest_5063_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5063_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5063_C", "HandleFinishing");

	Params::Quest_5063_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5063.Quest_5063_C.OnFinished_B6CB2DAF4DF6285A2B0C309B6C6FCA8E
// (BlueprintCallable, BlueprintEvent)

void UQuest_5063_C::OnFinished_B6CB2DAF4DF6285A2B0C309B6C6FCA8E()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5063_C", "OnFinished_B6CB2DAF4DF6285A2B0C309B6C6FCA8E");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5063.Quest_5063_C.OnStop_B6CB2DAF4DF6285A2B0C309B6C6FCA8E
// (BlueprintCallable, BlueprintEvent)

void UQuest_5063_C::OnStop_B6CB2DAF4DF6285A2B0C309B6C6FCA8E()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5063_C", "OnStop_B6CB2DAF4DF6285A2B0C309B6C6FCA8E");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5063.Quest_5063_C.OnDlgClosed_F3AD15234ED84401B232DA8962B86C47
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5063_C::OnDlgClosed_F3AD15234ED84401B232DA8962B86C47(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5063_C", "OnDlgClosed_F3AD15234ED84401B232DA8962B86C47");

	Params::Quest_5063_C_OnDlgClosed_F3AD15234ED84401B232DA8962B86C47 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5063.Quest_5063_C.OnDlgSelectedOption_F3AD15234ED84401B232DA8962B86C47
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5063_C::OnDlgSelectedOption_F3AD15234ED84401B232DA8962B86C47(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5063_C", "OnDlgSelectedOption_F3AD15234ED84401B232DA8962B86C47");

	Params::Quest_5063_C_OnDlgSelectedOption_F3AD15234ED84401B232DA8962B86C47 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
