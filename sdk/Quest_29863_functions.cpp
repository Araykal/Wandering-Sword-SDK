#pragma once



// Package: Quest_29863

#include "Basic.hpp"

#include "Quest_29863_classes.hpp"
#include "Quest_29863_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_29863.Quest_29863_C.ExecuteUbergraph_Quest_29863
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_29863_C::ExecuteUbergraph_Quest_29863(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29863_C", "ExecuteUbergraph_Quest_29863");

	Params::Quest_29863_C_ExecuteUbergraph_Quest_29863 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_29863.Quest_29863_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_29863_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29863_C", "HandleFinishing");

	Params::Quest_29863_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_29863.Quest_29863_C.OnSuccess_7CFEC9FE4BF9DE708964F281C5481AB1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_29863_C::OnSuccess_7CFEC9FE4BF9DE708964F281C5481AB1(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29863_C", "OnSuccess_7CFEC9FE4BF9DE708964F281C5481AB1");

	Params::Quest_29863_C_OnSuccess_7CFEC9FE4BF9DE708964F281C5481AB1 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_29863.Quest_29863_C.OnFinished_32A5813B44B5F807D2F5D2884703460E
// (BlueprintCallable, BlueprintEvent)

void UQuest_29863_C::OnFinished_32A5813B44B5F807D2F5D2884703460E()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29863_C", "OnFinished_32A5813B44B5F807D2F5D2884703460E");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_29863.Quest_29863_C.OnStop_32A5813B44B5F807D2F5D2884703460E
// (BlueprintCallable, BlueprintEvent)

void UQuest_29863_C::OnStop_32A5813B44B5F807D2F5D2884703460E()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29863_C", "OnStop_32A5813B44B5F807D2F5D2884703460E");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_29863.Quest_29863_C.OnDlgClosed_7F615A3240E23C65135F4085CA6C7700
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_29863_C::OnDlgClosed_7F615A3240E23C65135F4085CA6C7700(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29863_C", "OnDlgClosed_7F615A3240E23C65135F4085CA6C7700");

	Params::Quest_29863_C_OnDlgClosed_7F615A3240E23C65135F4085CA6C7700 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_29863.Quest_29863_C.OnDlgSelectedOption_7F615A3240E23C65135F4085CA6C7700
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_29863_C::OnDlgSelectedOption_7F615A3240E23C65135F4085CA6C7700(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29863_C", "OnDlgSelectedOption_7F615A3240E23C65135F4085CA6C7700");

	Params::Quest_29863_C_OnDlgSelectedOption_7F615A3240E23C65135F4085CA6C7700 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
