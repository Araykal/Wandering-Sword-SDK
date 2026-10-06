#pragma once



// Package: Quest_28910

#include "Basic.hpp"

#include "Quest_28910_classes.hpp"
#include "Quest_28910_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_28910.Quest_28910_C.ExecuteUbergraph_Quest_28910
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28910_C::ExecuteUbergraph_Quest_28910(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28910_C", "ExecuteUbergraph_Quest_28910");

	Params::Quest_28910_C_ExecuteUbergraph_Quest_28910 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28910.Quest_28910_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28910_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28910_C", "HandleFinishing");

	Params::Quest_28910_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28910.Quest_28910_C.OnSuccess_A89D9D7A4C8A68FCF83EDD97058711B6
// (BlueprintCallable, BlueprintEvent)

void UQuest_28910_C::OnSuccess_A89D9D7A4C8A68FCF83EDD97058711B6()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28910_C", "OnSuccess_A89D9D7A4C8A68FCF83EDD97058711B6");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28910.Quest_28910_C.OnFinished_816170D34A56C63362F94FA9DC3D4A96
// (BlueprintCallable, BlueprintEvent)

void UQuest_28910_C::OnFinished_816170D34A56C63362F94FA9DC3D4A96()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28910_C", "OnFinished_816170D34A56C63362F94FA9DC3D4A96");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28910.Quest_28910_C.OnStop_816170D34A56C63362F94FA9DC3D4A96
// (BlueprintCallable, BlueprintEvent)

void UQuest_28910_C::OnStop_816170D34A56C63362F94FA9DC3D4A96()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28910_C", "OnStop_816170D34A56C63362F94FA9DC3D4A96");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28910.Quest_28910_C.OnDlgClosed_B433DC844F9B734AA8C8A593B7CBF48C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28910_C::OnDlgClosed_B433DC844F9B734AA8C8A593B7CBF48C(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28910_C", "OnDlgClosed_B433DC844F9B734AA8C8A593B7CBF48C");

	Params::Quest_28910_C_OnDlgClosed_B433DC844F9B734AA8C8A593B7CBF48C Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28910.Quest_28910_C.OnDlgSelectedOption_B433DC844F9B734AA8C8A593B7CBF48C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28910_C::OnDlgSelectedOption_B433DC844F9B734AA8C8A593B7CBF48C(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28910_C", "OnDlgSelectedOption_B433DC844F9B734AA8C8A593B7CBF48C");

	Params::Quest_28910_C_OnDlgSelectedOption_B433DC844F9B734AA8C8A593B7CBF48C Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
