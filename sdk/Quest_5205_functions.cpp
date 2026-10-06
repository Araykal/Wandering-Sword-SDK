#pragma once



// Package: Quest_5205

#include "Basic.hpp"

#include "Quest_5205_classes.hpp"
#include "Quest_5205_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5205.Quest_5205_C.ExecuteUbergraph_Quest_5205
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5205_C::ExecuteUbergraph_Quest_5205(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5205_C", "ExecuteUbergraph_Quest_5205");

	Params::Quest_5205_C_ExecuteUbergraph_Quest_5205 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5205.Quest_5205_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5205_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5205_C", "HandleFinishing");

	Params::Quest_5205_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5205.Quest_5205_C.OnFinished_F4F2E6134EDFAAD4CAB383A61B1009DE
// (BlueprintCallable, BlueprintEvent)

void UQuest_5205_C::OnFinished_F4F2E6134EDFAAD4CAB383A61B1009DE()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5205_C", "OnFinished_F4F2E6134EDFAAD4CAB383A61B1009DE");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5205.Quest_5205_C.OnStop_F4F2E6134EDFAAD4CAB383A61B1009DE
// (BlueprintCallable, BlueprintEvent)

void UQuest_5205_C::OnStop_F4F2E6134EDFAAD4CAB383A61B1009DE()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5205_C", "OnStop_F4F2E6134EDFAAD4CAB383A61B1009DE");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5205.Quest_5205_C.OnDlgClosed_B8A719284A27D5206BBC329A8280A28A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5205_C::OnDlgClosed_B8A719284A27D5206BBC329A8280A28A(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5205_C", "OnDlgClosed_B8A719284A27D5206BBC329A8280A28A");

	Params::Quest_5205_C_OnDlgClosed_B8A719284A27D5206BBC329A8280A28A Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5205.Quest_5205_C.OnDlgSelectedOption_B8A719284A27D5206BBC329A8280A28A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5205_C::OnDlgSelectedOption_B8A719284A27D5206BBC329A8280A28A(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5205_C", "OnDlgSelectedOption_B8A719284A27D5206BBC329A8280A28A");

	Params::Quest_5205_C_OnDlgSelectedOption_B8A719284A27D5206BBC329A8280A28A Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
