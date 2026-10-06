#pragma once



// Package: Quest_12687

#include "Basic.hpp"

#include "Quest_12687_classes.hpp"
#include "Quest_12687_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_12687.Quest_12687_C.ExecuteUbergraph_Quest_12687
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12687_C::ExecuteUbergraph_Quest_12687(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12687_C", "ExecuteUbergraph_Quest_12687");

	Params::Quest_12687_C_ExecuteUbergraph_Quest_12687 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12687.Quest_12687_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12687_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12687_C", "HandleFinishing");

	Params::Quest_12687_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12687.Quest_12687_C.OnSuccess_84099F31433718788273E9B3FE4CF679
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_12687_C::OnSuccess_84099F31433718788273E9B3FE4CF679(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12687_C", "OnSuccess_84099F31433718788273E9B3FE4CF679");

	Params::Quest_12687_C_OnSuccess_84099F31433718788273E9B3FE4CF679 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12687.Quest_12687_C.OnSuccess_FE6B98C445A9595CDE6A85BBF3251EC1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_12687_C::OnSuccess_FE6B98C445A9595CDE6A85BBF3251EC1(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12687_C", "OnSuccess_FE6B98C445A9595CDE6A85BBF3251EC1");

	Params::Quest_12687_C_OnSuccess_FE6B98C445A9595CDE6A85BBF3251EC1 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12687.Quest_12687_C.OnFinished_15CCC8B24E9091746496578E25A9CFD3
// (BlueprintCallable, BlueprintEvent)

void UQuest_12687_C::OnFinished_15CCC8B24E9091746496578E25A9CFD3()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12687_C", "OnFinished_15CCC8B24E9091746496578E25A9CFD3");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12687.Quest_12687_C.OnStop_15CCC8B24E9091746496578E25A9CFD3
// (BlueprintCallable, BlueprintEvent)

void UQuest_12687_C::OnStop_15CCC8B24E9091746496578E25A9CFD3()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12687_C", "OnStop_15CCC8B24E9091746496578E25A9CFD3");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12687.Quest_12687_C.OnDlgClosed_00AF71D240A509E8F0F6829E5E5868A9
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12687_C::OnDlgClosed_00AF71D240A509E8F0F6829E5E5868A9(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12687_C", "OnDlgClosed_00AF71D240A509E8F0F6829E5E5868A9");

	Params::Quest_12687_C_OnDlgClosed_00AF71D240A509E8F0F6829E5E5868A9 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12687.Quest_12687_C.OnDlgSelectedOption_00AF71D240A509E8F0F6829E5E5868A9
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12687_C::OnDlgSelectedOption_00AF71D240A509E8F0F6829E5E5868A9(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12687_C", "OnDlgSelectedOption_00AF71D240A509E8F0F6829E5E5868A9");

	Params::Quest_12687_C_OnDlgSelectedOption_00AF71D240A509E8F0F6829E5E5868A9 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12687.Quest_12687_C.OnSuccess_E1E9E31549F889546C08279E5B864368
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_12687_C::OnSuccess_E1E9E31549F889546C08279E5B864368(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12687_C", "OnSuccess_E1E9E31549F889546C08279E5B864368");

	Params::Quest_12687_C_OnSuccess_E1E9E31549F889546C08279E5B864368 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
