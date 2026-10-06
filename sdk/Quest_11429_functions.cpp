#pragma once



// Package: Quest_11429

#include "Basic.hpp"

#include "Quest_11429_classes.hpp"
#include "Quest_11429_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_11429.Quest_11429_C.ExecuteUbergraph_Quest_11429
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11429_C::ExecuteUbergraph_Quest_11429(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11429_C", "ExecuteUbergraph_Quest_11429");

	Params::Quest_11429_C_ExecuteUbergraph_Quest_11429 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11429.Quest_11429_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11429_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11429_C", "HandleFinishing");

	Params::Quest_11429_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11429.Quest_11429_C.OnFinished_1924041447D9D359184434A4B1900F41
// (BlueprintCallable, BlueprintEvent)

void UQuest_11429_C::OnFinished_1924041447D9D359184434A4B1900F41()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11429_C", "OnFinished_1924041447D9D359184434A4B1900F41");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_11429.Quest_11429_C.OnStop_1924041447D9D359184434A4B1900F41
// (BlueprintCallable, BlueprintEvent)

void UQuest_11429_C::OnStop_1924041447D9D359184434A4B1900F41()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11429_C", "OnStop_1924041447D9D359184434A4B1900F41");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_11429.Quest_11429_C.OnDlgClosed_0979F125468EA68C9866F2812BC9D03E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11429_C::OnDlgClosed_0979F125468EA68C9866F2812BC9D03E(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11429_C", "OnDlgClosed_0979F125468EA68C9866F2812BC9D03E");

	Params::Quest_11429_C_OnDlgClosed_0979F125468EA68C9866F2812BC9D03E Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11429.Quest_11429_C.OnDlgSelectedOption_0979F125468EA68C9866F2812BC9D03E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11429_C::OnDlgSelectedOption_0979F125468EA68C9866F2812BC9D03E(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11429_C", "OnDlgSelectedOption_0979F125468EA68C9866F2812BC9D03E");

	Params::Quest_11429_C_OnDlgSelectedOption_0979F125468EA68C9866F2812BC9D03E Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
