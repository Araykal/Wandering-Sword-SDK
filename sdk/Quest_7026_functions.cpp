#pragma once



// Package: Quest_7026

#include "Basic.hpp"

#include "Quest_7026_classes.hpp"
#include "Quest_7026_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_7026.Quest_7026_C.ExecuteUbergraph_Quest_7026
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_7026_C::ExecuteUbergraph_Quest_7026(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7026_C", "ExecuteUbergraph_Quest_7026");

	Params::Quest_7026_C_ExecuteUbergraph_Quest_7026 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_7026.Quest_7026_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_7026_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7026_C", "HandleFinishing");

	Params::Quest_7026_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_7026.Quest_7026_C.OnFinished_FBF2B95B42B085E2625AD0BCE24C6755
// (BlueprintCallable, BlueprintEvent)

void UQuest_7026_C::OnFinished_FBF2B95B42B085E2625AD0BCE24C6755()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7026_C", "OnFinished_FBF2B95B42B085E2625AD0BCE24C6755");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_7026.Quest_7026_C.OnStop_FBF2B95B42B085E2625AD0BCE24C6755
// (BlueprintCallable, BlueprintEvent)

void UQuest_7026_C::OnStop_FBF2B95B42B085E2625AD0BCE24C6755()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7026_C", "OnStop_FBF2B95B42B085E2625AD0BCE24C6755");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_7026.Quest_7026_C.OnDlgClosed_A7F09E844F87383FA323B7B2F540D7FF
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_7026_C::OnDlgClosed_A7F09E844F87383FA323B7B2F540D7FF(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7026_C", "OnDlgClosed_A7F09E844F87383FA323B7B2F540D7FF");

	Params::Quest_7026_C_OnDlgClosed_A7F09E844F87383FA323B7B2F540D7FF Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_7026.Quest_7026_C.OnDlgSelectedOption_A7F09E844F87383FA323B7B2F540D7FF
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_7026_C::OnDlgSelectedOption_A7F09E844F87383FA323B7B2F540D7FF(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7026_C", "OnDlgSelectedOption_A7F09E844F87383FA323B7B2F540D7FF");

	Params::Quest_7026_C_OnDlgSelectedOption_A7F09E844F87383FA323B7B2F540D7FF Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_7026.Quest_7026_C.OnSuccess_A14BBA8F4370F352D82E97A32CDE739A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_7026_C::OnSuccess_A14BBA8F4370F352D82E97A32CDE739A(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7026_C", "OnSuccess_A14BBA8F4370F352D82E97A32CDE739A");

	Params::Quest_7026_C_OnSuccess_A14BBA8F4370F352D82E97A32CDE739A Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
