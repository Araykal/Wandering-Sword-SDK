#pragma once



// Package: Quest_7028

#include "Basic.hpp"

#include "Quest_7028_classes.hpp"
#include "Quest_7028_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_7028.Quest_7028_C.ExecuteUbergraph_Quest_7028
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_7028_C::ExecuteUbergraph_Quest_7028(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7028_C", "ExecuteUbergraph_Quest_7028");

	Params::Quest_7028_C_ExecuteUbergraph_Quest_7028 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_7028.Quest_7028_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_7028_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7028_C", "HandleFinishing");

	Params::Quest_7028_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_7028.Quest_7028_C.OnSuccess_E23216D540521F8B650A1A8FBE90A0D2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_7028_C::OnSuccess_E23216D540521F8B650A1A8FBE90A0D2(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7028_C", "OnSuccess_E23216D540521F8B650A1A8FBE90A0D2");

	Params::Quest_7028_C_OnSuccess_E23216D540521F8B650A1A8FBE90A0D2 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_7028.Quest_7028_C.OnFinished_16BA139C49B53B4F18A006ABBD45CE1B
// (BlueprintCallable, BlueprintEvent)

void UQuest_7028_C::OnFinished_16BA139C49B53B4F18A006ABBD45CE1B()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7028_C", "OnFinished_16BA139C49B53B4F18A006ABBD45CE1B");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_7028.Quest_7028_C.OnStop_16BA139C49B53B4F18A006ABBD45CE1B
// (BlueprintCallable, BlueprintEvent)

void UQuest_7028_C::OnStop_16BA139C49B53B4F18A006ABBD45CE1B()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7028_C", "OnStop_16BA139C49B53B4F18A006ABBD45CE1B");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_7028.Quest_7028_C.OnDlgClosed_9E20CCDF4BF6F400A4E7899D409E9BF9
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_7028_C::OnDlgClosed_9E20CCDF4BF6F400A4E7899D409E9BF9(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7028_C", "OnDlgClosed_9E20CCDF4BF6F400A4E7899D409E9BF9");

	Params::Quest_7028_C_OnDlgClosed_9E20CCDF4BF6F400A4E7899D409E9BF9 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_7028.Quest_7028_C.OnDlgSelectedOption_9E20CCDF4BF6F400A4E7899D409E9BF9
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_7028_C::OnDlgSelectedOption_9E20CCDF4BF6F400A4E7899D409E9BF9(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7028_C", "OnDlgSelectedOption_9E20CCDF4BF6F400A4E7899D409E9BF9");

	Params::Quest_7028_C_OnDlgSelectedOption_9E20CCDF4BF6F400A4E7899D409E9BF9 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_7028.Quest_7028_C.OnSuccess_FA2BB3AB46AAFC9D63ED918E23222E3D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_7028_C::OnSuccess_FA2BB3AB46AAFC9D63ED918E23222E3D(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7028_C", "OnSuccess_FA2BB3AB46AAFC9D63ED918E23222E3D");

	Params::Quest_7028_C_OnSuccess_FA2BB3AB46AAFC9D63ED918E23222E3D Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
