#pragma once



// Package: Quest_5279

#include "Basic.hpp"

#include "Quest_5279_classes.hpp"
#include "Quest_5279_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5279.Quest_5279_C.ExecuteUbergraph_Quest_5279
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5279_C::ExecuteUbergraph_Quest_5279(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5279_C", "ExecuteUbergraph_Quest_5279");

	Params::Quest_5279_C_ExecuteUbergraph_Quest_5279 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5279.Quest_5279_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5279_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5279_C", "HandleFinishing");

	Params::Quest_5279_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5279.Quest_5279_C.OnFinished_126BFD5E48E746D4A3B87FB35B3471A2
// (BlueprintCallable, BlueprintEvent)

void UQuest_5279_C::OnFinished_126BFD5E48E746D4A3B87FB35B3471A2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5279_C", "OnFinished_126BFD5E48E746D4A3B87FB35B3471A2");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5279.Quest_5279_C.OnStop_126BFD5E48E746D4A3B87FB35B3471A2
// (BlueprintCallable, BlueprintEvent)

void UQuest_5279_C::OnStop_126BFD5E48E746D4A3B87FB35B3471A2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5279_C", "OnStop_126BFD5E48E746D4A3B87FB35B3471A2");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5279.Quest_5279_C.OnDlgClosed_787F83B6476B86CF1FEB37B52A591E26
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5279_C::OnDlgClosed_787F83B6476B86CF1FEB37B52A591E26(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5279_C", "OnDlgClosed_787F83B6476B86CF1FEB37B52A591E26");

	Params::Quest_5279_C_OnDlgClosed_787F83B6476B86CF1FEB37B52A591E26 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5279.Quest_5279_C.OnDlgSelectedOption_787F83B6476B86CF1FEB37B52A591E26
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5279_C::OnDlgSelectedOption_787F83B6476B86CF1FEB37B52A591E26(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5279_C", "OnDlgSelectedOption_787F83B6476B86CF1FEB37B52A591E26");

	Params::Quest_5279_C_OnDlgSelectedOption_787F83B6476B86CF1FEB37B52A591E26 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
