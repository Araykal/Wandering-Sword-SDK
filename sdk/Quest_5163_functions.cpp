#pragma once



// Package: Quest_5163

#include "Basic.hpp"

#include "Quest_5163_classes.hpp"
#include "Quest_5163_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5163.Quest_5163_C.ExecuteUbergraph_Quest_5163
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5163_C::ExecuteUbergraph_Quest_5163(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5163_C", "ExecuteUbergraph_Quest_5163");

	Params::Quest_5163_C_ExecuteUbergraph_Quest_5163 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5163.Quest_5163_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5163_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5163_C", "HandleFinishing");

	Params::Quest_5163_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5163.Quest_5163_C.OnFinished_95CCD6FD4544B78887AD568CC5EAEDF0
// (BlueprintCallable, BlueprintEvent)

void UQuest_5163_C::OnFinished_95CCD6FD4544B78887AD568CC5EAEDF0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5163_C", "OnFinished_95CCD6FD4544B78887AD568CC5EAEDF0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5163.Quest_5163_C.OnStop_95CCD6FD4544B78887AD568CC5EAEDF0
// (BlueprintCallable, BlueprintEvent)

void UQuest_5163_C::OnStop_95CCD6FD4544B78887AD568CC5EAEDF0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5163_C", "OnStop_95CCD6FD4544B78887AD568CC5EAEDF0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5163.Quest_5163_C.OnDlgClosed_6CF34C804B3C3E6228D00AAF3A0692B5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5163_C::OnDlgClosed_6CF34C804B3C3E6228D00AAF3A0692B5(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5163_C", "OnDlgClosed_6CF34C804B3C3E6228D00AAF3A0692B5");

	Params::Quest_5163_C_OnDlgClosed_6CF34C804B3C3E6228D00AAF3A0692B5 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5163.Quest_5163_C.OnDlgSelectedOption_6CF34C804B3C3E6228D00AAF3A0692B5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5163_C::OnDlgSelectedOption_6CF34C804B3C3E6228D00AAF3A0692B5(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5163_C", "OnDlgSelectedOption_6CF34C804B3C3E6228D00AAF3A0692B5");

	Params::Quest_5163_C_OnDlgSelectedOption_6CF34C804B3C3E6228D00AAF3A0692B5 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
