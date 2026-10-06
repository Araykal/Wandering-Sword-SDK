#pragma once



// Package: Quest_28401

#include "Basic.hpp"

#include "Quest_28401_classes.hpp"
#include "Quest_28401_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_28401.Quest_28401_C.ExecuteUbergraph_Quest_28401
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28401_C::ExecuteUbergraph_Quest_28401(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28401_C", "ExecuteUbergraph_Quest_28401");

	Params::Quest_28401_C_ExecuteUbergraph_Quest_28401 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28401.Quest_28401_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28401_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28401_C", "HandleFinishing");

	Params::Quest_28401_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28401.Quest_28401_C.OnSuccess_F1DC32444B322911B2F5C6B29C2FB85C
// (BlueprintCallable, BlueprintEvent)

void UQuest_28401_C::OnSuccess_F1DC32444B322911B2F5C6B29C2FB85C()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28401_C", "OnSuccess_F1DC32444B322911B2F5C6B29C2FB85C");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28401.Quest_28401_C.OnFinished_89A8777748F4D65349D25FA2B001886B
// (BlueprintCallable, BlueprintEvent)

void UQuest_28401_C::OnFinished_89A8777748F4D65349D25FA2B001886B()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28401_C", "OnFinished_89A8777748F4D65349D25FA2B001886B");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28401.Quest_28401_C.OnStop_89A8777748F4D65349D25FA2B001886B
// (BlueprintCallable, BlueprintEvent)

void UQuest_28401_C::OnStop_89A8777748F4D65349D25FA2B001886B()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28401_C", "OnStop_89A8777748F4D65349D25FA2B001886B");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28401.Quest_28401_C.OnDlgClosed_AD1A27D24A3DC0617DFDA48BE9DCFB6C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28401_C::OnDlgClosed_AD1A27D24A3DC0617DFDA48BE9DCFB6C(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28401_C", "OnDlgClosed_AD1A27D24A3DC0617DFDA48BE9DCFB6C");

	Params::Quest_28401_C_OnDlgClosed_AD1A27D24A3DC0617DFDA48BE9DCFB6C Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28401.Quest_28401_C.OnDlgSelectedOption_AD1A27D24A3DC0617DFDA48BE9DCFB6C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28401_C::OnDlgSelectedOption_AD1A27D24A3DC0617DFDA48BE9DCFB6C(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28401_C", "OnDlgSelectedOption_AD1A27D24A3DC0617DFDA48BE9DCFB6C");

	Params::Quest_28401_C_OnDlgSelectedOption_AD1A27D24A3DC0617DFDA48BE9DCFB6C Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
