#pragma once



// Package: Quest_12096

#include "Basic.hpp"

#include "Quest_12096_classes.hpp"
#include "Quest_12096_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_12096.Quest_12096_C.ExecuteUbergraph_Quest_12096
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12096_C::ExecuteUbergraph_Quest_12096(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12096_C", "ExecuteUbergraph_Quest_12096");

	Params::Quest_12096_C_ExecuteUbergraph_Quest_12096 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12096.Quest_12096_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12096_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12096_C", "HandleFinishing");

	Params::Quest_12096_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12096.Quest_12096_C.OnFinished_F1C126444D9CA2568B201A87248006EA
// (BlueprintCallable, BlueprintEvent)

void UQuest_12096_C::OnFinished_F1C126444D9CA2568B201A87248006EA()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12096_C", "OnFinished_F1C126444D9CA2568B201A87248006EA");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12096.Quest_12096_C.OnStop_F1C126444D9CA2568B201A87248006EA
// (BlueprintCallable, BlueprintEvent)

void UQuest_12096_C::OnStop_F1C126444D9CA2568B201A87248006EA()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12096_C", "OnStop_F1C126444D9CA2568B201A87248006EA");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12096.Quest_12096_C.OnDlgClosed_9566A6764802AD6F369A588DA26EFA2D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12096_C::OnDlgClosed_9566A6764802AD6F369A588DA26EFA2D(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12096_C", "OnDlgClosed_9566A6764802AD6F369A588DA26EFA2D");

	Params::Quest_12096_C_OnDlgClosed_9566A6764802AD6F369A588DA26EFA2D Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12096.Quest_12096_C.OnDlgSelectedOption_9566A6764802AD6F369A588DA26EFA2D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12096_C::OnDlgSelectedOption_9566A6764802AD6F369A588DA26EFA2D(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12096_C", "OnDlgSelectedOption_9566A6764802AD6F369A588DA26EFA2D");

	Params::Quest_12096_C_OnDlgSelectedOption_9566A6764802AD6F369A588DA26EFA2D Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
