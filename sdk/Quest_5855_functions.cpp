#pragma once



// Package: Quest_5855

#include "Basic.hpp"

#include "Quest_5855_classes.hpp"
#include "Quest_5855_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5855.Quest_5855_C.ExecuteUbergraph_Quest_5855
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5855_C::ExecuteUbergraph_Quest_5855(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5855_C", "ExecuteUbergraph_Quest_5855");

	Params::Quest_5855_C_ExecuteUbergraph_Quest_5855 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5855.Quest_5855_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5855_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5855_C", "HandleFinishing");

	Params::Quest_5855_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5855.Quest_5855_C.OnSuccess_69C6A4F04CE84EB3121A4F8DEA93BD4A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_5855_C::OnSuccess_69C6A4F04CE84EB3121A4F8DEA93BD4A(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5855_C", "OnSuccess_69C6A4F04CE84EB3121A4F8DEA93BD4A");

	Params::Quest_5855_C_OnSuccess_69C6A4F04CE84EB3121A4F8DEA93BD4A Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5855.Quest_5855_C.OnFinished_2274FE5A44ECBA0625E9F4BB2830C905
// (BlueprintCallable, BlueprintEvent)

void UQuest_5855_C::OnFinished_2274FE5A44ECBA0625E9F4BB2830C905()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5855_C", "OnFinished_2274FE5A44ECBA0625E9F4BB2830C905");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5855.Quest_5855_C.OnStop_2274FE5A44ECBA0625E9F4BB2830C905
// (BlueprintCallable, BlueprintEvent)

void UQuest_5855_C::OnStop_2274FE5A44ECBA0625E9F4BB2830C905()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5855_C", "OnStop_2274FE5A44ECBA0625E9F4BB2830C905");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5855.Quest_5855_C.OnDlgClosed_885002C04E9EC4017AF888ACBFE0A601
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5855_C::OnDlgClosed_885002C04E9EC4017AF888ACBFE0A601(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5855_C", "OnDlgClosed_885002C04E9EC4017AF888ACBFE0A601");

	Params::Quest_5855_C_OnDlgClosed_885002C04E9EC4017AF888ACBFE0A601 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5855.Quest_5855_C.OnDlgSelectedOption_885002C04E9EC4017AF888ACBFE0A601
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5855_C::OnDlgSelectedOption_885002C04E9EC4017AF888ACBFE0A601(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5855_C", "OnDlgSelectedOption_885002C04E9EC4017AF888ACBFE0A601");

	Params::Quest_5855_C_OnDlgSelectedOption_885002C04E9EC4017AF888ACBFE0A601 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5855.Quest_5855_C.OnSuccess_877A12C74430FC9B938A37B24FF429B6
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_5855_C::OnSuccess_877A12C74430FC9B938A37B24FF429B6(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5855_C", "OnSuccess_877A12C74430FC9B938A37B24FF429B6");

	Params::Quest_5855_C_OnSuccess_877A12C74430FC9B938A37B24FF429B6 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
