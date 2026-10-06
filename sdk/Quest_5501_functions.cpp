#pragma once



// Package: Quest_5501

#include "Basic.hpp"

#include "Quest_5501_classes.hpp"
#include "Quest_5501_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5501.Quest_5501_C.ExecuteUbergraph_Quest_5501
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5501_C::ExecuteUbergraph_Quest_5501(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5501_C", "ExecuteUbergraph_Quest_5501");

	Params::Quest_5501_C_ExecuteUbergraph_Quest_5501 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5501.Quest_5501_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5501_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5501_C", "HandleFinishing");

	Params::Quest_5501_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5501.Quest_5501_C.OnFinished_3304F8F44B9879F99811C7A232BF432F
// (BlueprintCallable, BlueprintEvent)

void UQuest_5501_C::OnFinished_3304F8F44B9879F99811C7A232BF432F()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5501_C", "OnFinished_3304F8F44B9879F99811C7A232BF432F");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5501.Quest_5501_C.OnStop_3304F8F44B9879F99811C7A232BF432F
// (BlueprintCallable, BlueprintEvent)

void UQuest_5501_C::OnStop_3304F8F44B9879F99811C7A232BF432F()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5501_C", "OnStop_3304F8F44B9879F99811C7A232BF432F");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5501.Quest_5501_C.OnDlgClosed_A6BD1AAA4BB6E9FBB85532B1A1135F89
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5501_C::OnDlgClosed_A6BD1AAA4BB6E9FBB85532B1A1135F89(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5501_C", "OnDlgClosed_A6BD1AAA4BB6E9FBB85532B1A1135F89");

	Params::Quest_5501_C_OnDlgClosed_A6BD1AAA4BB6E9FBB85532B1A1135F89 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5501.Quest_5501_C.OnDlgSelectedOption_A6BD1AAA4BB6E9FBB85532B1A1135F89
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5501_C::OnDlgSelectedOption_A6BD1AAA4BB6E9FBB85532B1A1135F89(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5501_C", "OnDlgSelectedOption_A6BD1AAA4BB6E9FBB85532B1A1135F89");

	Params::Quest_5501_C_OnDlgSelectedOption_A6BD1AAA4BB6E9FBB85532B1A1135F89 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5501.Quest_5501_C.OnSuccess_78C1DB5444484A5146206998297245E6
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_5501_C::OnSuccess_78C1DB5444484A5146206998297245E6(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5501_C", "OnSuccess_78C1DB5444484A5146206998297245E6");

	Params::Quest_5501_C_OnSuccess_78C1DB5444484A5146206998297245E6 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
