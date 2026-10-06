#pragma once



// Package: Quest_12662

#include "Basic.hpp"

#include "Quest_12662_classes.hpp"
#include "Quest_12662_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_12662.Quest_12662_C.ExecuteUbergraph_Quest_12662
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12662_C::ExecuteUbergraph_Quest_12662(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12662_C", "ExecuteUbergraph_Quest_12662");

	Params::Quest_12662_C_ExecuteUbergraph_Quest_12662 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12662.Quest_12662_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12662_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12662_C", "HandleFinishing");

	Params::Quest_12662_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12662.Quest_12662_C.OnFinished_48203633479D4848B49C33859242DCBF
// (BlueprintCallable, BlueprintEvent)

void UQuest_12662_C::OnFinished_48203633479D4848B49C33859242DCBF()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12662_C", "OnFinished_48203633479D4848B49C33859242DCBF");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12662.Quest_12662_C.OnStop_48203633479D4848B49C33859242DCBF
// (BlueprintCallable, BlueprintEvent)

void UQuest_12662_C::OnStop_48203633479D4848B49C33859242DCBF()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12662_C", "OnStop_48203633479D4848B49C33859242DCBF");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12662.Quest_12662_C.OnDlgClosed_8E9915A3476D64AB478F1FB5B6AAD4C8
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12662_C::OnDlgClosed_8E9915A3476D64AB478F1FB5B6AAD4C8(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12662_C", "OnDlgClosed_8E9915A3476D64AB478F1FB5B6AAD4C8");

	Params::Quest_12662_C_OnDlgClosed_8E9915A3476D64AB478F1FB5B6AAD4C8 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12662.Quest_12662_C.OnDlgSelectedOption_8E9915A3476D64AB478F1FB5B6AAD4C8
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12662_C::OnDlgSelectedOption_8E9915A3476D64AB478F1FB5B6AAD4C8(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12662_C", "OnDlgSelectedOption_8E9915A3476D64AB478F1FB5B6AAD4C8");

	Params::Quest_12662_C_OnDlgSelectedOption_8E9915A3476D64AB478F1FB5B6AAD4C8 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12662.Quest_12662_C.OnSuccess_8CF08CBD49854FDFF7069E9B6C1C9EB0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_12662_C::OnSuccess_8CF08CBD49854FDFF7069E9B6C1C9EB0(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12662_C", "OnSuccess_8CF08CBD49854FDFF7069E9B6C1C9EB0");

	Params::Quest_12662_C_OnSuccess_8CF08CBD49854FDFF7069E9B6C1C9EB0 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
