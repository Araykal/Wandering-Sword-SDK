#pragma once



// Package: Quest_7046

#include "Basic.hpp"

#include "Quest_7046_classes.hpp"
#include "Quest_7046_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_7046.Quest_7046_C.ExecuteUbergraph_Quest_7046
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_7046_C::ExecuteUbergraph_Quest_7046(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7046_C", "ExecuteUbergraph_Quest_7046");

	Params::Quest_7046_C_ExecuteUbergraph_Quest_7046 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_7046.Quest_7046_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_7046_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7046_C", "HandleFinishing");

	Params::Quest_7046_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_7046.Quest_7046_C.OnDlgClosed_9AFC0469457D91DC5EC7D096AB2E02DF
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_7046_C::OnDlgClosed_9AFC0469457D91DC5EC7D096AB2E02DF(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7046_C", "OnDlgClosed_9AFC0469457D91DC5EC7D096AB2E02DF");

	Params::Quest_7046_C_OnDlgClosed_9AFC0469457D91DC5EC7D096AB2E02DF Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_7046.Quest_7046_C.OnDlgSelectedOption_9AFC0469457D91DC5EC7D096AB2E02DF
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_7046_C::OnDlgSelectedOption_9AFC0469457D91DC5EC7D096AB2E02DF(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7046_C", "OnDlgSelectedOption_9AFC0469457D91DC5EC7D096AB2E02DF");

	Params::Quest_7046_C_OnDlgSelectedOption_9AFC0469457D91DC5EC7D096AB2E02DF Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_7046.Quest_7046_C.OnFinished_22B6BE31466FB1CF91E9FBAE40242674
// (BlueprintCallable, BlueprintEvent)

void UQuest_7046_C::OnFinished_22B6BE31466FB1CF91E9FBAE40242674()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7046_C", "OnFinished_22B6BE31466FB1CF91E9FBAE40242674");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_7046.Quest_7046_C.OnStop_22B6BE31466FB1CF91E9FBAE40242674
// (BlueprintCallable, BlueprintEvent)

void UQuest_7046_C::OnStop_22B6BE31466FB1CF91E9FBAE40242674()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7046_C", "OnStop_22B6BE31466FB1CF91E9FBAE40242674");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
