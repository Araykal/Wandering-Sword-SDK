#pragma once



// Package: Quest_5785

#include "Basic.hpp"

#include "Quest_5785_classes.hpp"
#include "Quest_5785_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5785.Quest_5785_C.ExecuteUbergraph_Quest_5785
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5785_C::ExecuteUbergraph_Quest_5785(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5785_C", "ExecuteUbergraph_Quest_5785");

	Params::Quest_5785_C_ExecuteUbergraph_Quest_5785 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5785.Quest_5785_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5785_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5785_C", "HandleFinishing");

	Params::Quest_5785_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5785.Quest_5785_C.OnSuccess_EA30797342FEEB0B29F4B39FB6B7F1BC
// (BlueprintCallable, BlueprintEvent)

void UQuest_5785_C::OnSuccess_EA30797342FEEB0B29F4B39FB6B7F1BC()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5785_C", "OnSuccess_EA30797342FEEB0B29F4B39FB6B7F1BC");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5785.Quest_5785_C.OnFinished_8BB070BA46A06F1672C5D7B1FAE7D418
// (BlueprintCallable, BlueprintEvent)

void UQuest_5785_C::OnFinished_8BB070BA46A06F1672C5D7B1FAE7D418()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5785_C", "OnFinished_8BB070BA46A06F1672C5D7B1FAE7D418");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5785.Quest_5785_C.OnStop_8BB070BA46A06F1672C5D7B1FAE7D418
// (BlueprintCallable, BlueprintEvent)

void UQuest_5785_C::OnStop_8BB070BA46A06F1672C5D7B1FAE7D418()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5785_C", "OnStop_8BB070BA46A06F1672C5D7B1FAE7D418");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5785.Quest_5785_C.OnDlgClosed_9637D08042D731390D8A649466C87251
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5785_C::OnDlgClosed_9637D08042D731390D8A649466C87251(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5785_C", "OnDlgClosed_9637D08042D731390D8A649466C87251");

	Params::Quest_5785_C_OnDlgClosed_9637D08042D731390D8A649466C87251 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5785.Quest_5785_C.OnDlgSelectedOption_9637D08042D731390D8A649466C87251
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5785_C::OnDlgSelectedOption_9637D08042D731390D8A649466C87251(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5785_C", "OnDlgSelectedOption_9637D08042D731390D8A649466C87251");

	Params::Quest_5785_C_OnDlgSelectedOption_9637D08042D731390D8A649466C87251 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
