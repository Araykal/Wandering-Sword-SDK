#pragma once



// Package: Quest_12661

#include "Basic.hpp"

#include "Quest_12661_classes.hpp"
#include "Quest_12661_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_12661.Quest_12661_C.ExecuteUbergraph_Quest_12661
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12661_C::ExecuteUbergraph_Quest_12661(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12661_C", "ExecuteUbergraph_Quest_12661");

	Params::Quest_12661_C_ExecuteUbergraph_Quest_12661 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12661.Quest_12661_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12661_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12661_C", "HandleFinishing");

	Params::Quest_12661_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12661.Quest_12661_C.OnFinished_975C7E3248614BA0CE33CDBB440AB079
// (BlueprintCallable, BlueprintEvent)

void UQuest_12661_C::OnFinished_975C7E3248614BA0CE33CDBB440AB079()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12661_C", "OnFinished_975C7E3248614BA0CE33CDBB440AB079");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12661.Quest_12661_C.OnStop_975C7E3248614BA0CE33CDBB440AB079
// (BlueprintCallable, BlueprintEvent)

void UQuest_12661_C::OnStop_975C7E3248614BA0CE33CDBB440AB079()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12661_C", "OnStop_975C7E3248614BA0CE33CDBB440AB079");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12661.Quest_12661_C.OnDlgClosed_A849ED784A8EACEFE3CAC6BEC73E8C52
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12661_C::OnDlgClosed_A849ED784A8EACEFE3CAC6BEC73E8C52(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12661_C", "OnDlgClosed_A849ED784A8EACEFE3CAC6BEC73E8C52");

	Params::Quest_12661_C_OnDlgClosed_A849ED784A8EACEFE3CAC6BEC73E8C52 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12661.Quest_12661_C.OnDlgSelectedOption_A849ED784A8EACEFE3CAC6BEC73E8C52
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12661_C::OnDlgSelectedOption_A849ED784A8EACEFE3CAC6BEC73E8C52(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12661_C", "OnDlgSelectedOption_A849ED784A8EACEFE3CAC6BEC73E8C52");

	Params::Quest_12661_C_OnDlgSelectedOption_A849ED784A8EACEFE3CAC6BEC73E8C52 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12661.Quest_12661_C.OnSuccess_E5CBD8ED4676FD4A46215580D6478788
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_12661_C::OnSuccess_E5CBD8ED4676FD4A46215580D6478788(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12661_C", "OnSuccess_E5CBD8ED4676FD4A46215580D6478788");

	Params::Quest_12661_C_OnSuccess_E5CBD8ED4676FD4A46215580D6478788 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
