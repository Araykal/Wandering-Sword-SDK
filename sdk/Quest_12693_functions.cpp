#pragma once



// Package: Quest_12693

#include "Basic.hpp"

#include "Quest_12693_classes.hpp"
#include "Quest_12693_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_12693.Quest_12693_C.ExecuteUbergraph_Quest_12693
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12693_C::ExecuteUbergraph_Quest_12693(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12693_C", "ExecuteUbergraph_Quest_12693");

	Params::Quest_12693_C_ExecuteUbergraph_Quest_12693 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12693.Quest_12693_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12693_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12693_C", "HandleFinishing");

	Params::Quest_12693_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12693.Quest_12693_C.OnFinished_F5AB674E4EE33726C606D3A5188E5DDF
// (BlueprintCallable, BlueprintEvent)

void UQuest_12693_C::OnFinished_F5AB674E4EE33726C606D3A5188E5DDF()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12693_C", "OnFinished_F5AB674E4EE33726C606D3A5188E5DDF");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12693.Quest_12693_C.OnStop_F5AB674E4EE33726C606D3A5188E5DDF
// (BlueprintCallable, BlueprintEvent)

void UQuest_12693_C::OnStop_F5AB674E4EE33726C606D3A5188E5DDF()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12693_C", "OnStop_F5AB674E4EE33726C606D3A5188E5DDF");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12693.Quest_12693_C.OnDlgClosed_1EFF3464456FABCA12316BA7FC3E6F7F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12693_C::OnDlgClosed_1EFF3464456FABCA12316BA7FC3E6F7F(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12693_C", "OnDlgClosed_1EFF3464456FABCA12316BA7FC3E6F7F");

	Params::Quest_12693_C_OnDlgClosed_1EFF3464456FABCA12316BA7FC3E6F7F Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12693.Quest_12693_C.OnDlgSelectedOption_1EFF3464456FABCA12316BA7FC3E6F7F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12693_C::OnDlgSelectedOption_1EFF3464456FABCA12316BA7FC3E6F7F(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12693_C", "OnDlgSelectedOption_1EFF3464456FABCA12316BA7FC3E6F7F");

	Params::Quest_12693_C_OnDlgSelectedOption_1EFF3464456FABCA12316BA7FC3E6F7F Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
