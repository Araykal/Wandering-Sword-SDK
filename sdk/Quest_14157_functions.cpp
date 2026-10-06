#pragma once



// Package: Quest_14157

#include "Basic.hpp"

#include "Quest_14157_classes.hpp"
#include "Quest_14157_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_14157.Quest_14157_C.ExecuteUbergraph_Quest_14157
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_14157_C::ExecuteUbergraph_Quest_14157(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_14157_C", "ExecuteUbergraph_Quest_14157");

	Params::Quest_14157_C_ExecuteUbergraph_Quest_14157 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_14157.Quest_14157_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_14157_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_14157_C", "HandleFinishing");

	Params::Quest_14157_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_14157.Quest_14157_C.OnFinished_979BBD7C4C1A32D10B43959ED8C19BD9
// (BlueprintCallable, BlueprintEvent)

void UQuest_14157_C::OnFinished_979BBD7C4C1A32D10B43959ED8C19BD9()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_14157_C", "OnFinished_979BBD7C4C1A32D10B43959ED8C19BD9");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_14157.Quest_14157_C.OnStop_979BBD7C4C1A32D10B43959ED8C19BD9
// (BlueprintCallable, BlueprintEvent)

void UQuest_14157_C::OnStop_979BBD7C4C1A32D10B43959ED8C19BD9()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_14157_C", "OnStop_979BBD7C4C1A32D10B43959ED8C19BD9");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_14157.Quest_14157_C.OnDlgClosed_D4EEAB9A43A17C738D1CCEB3177C0457
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_14157_C::OnDlgClosed_D4EEAB9A43A17C738D1CCEB3177C0457(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_14157_C", "OnDlgClosed_D4EEAB9A43A17C738D1CCEB3177C0457");

	Params::Quest_14157_C_OnDlgClosed_D4EEAB9A43A17C738D1CCEB3177C0457 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_14157.Quest_14157_C.OnDlgSelectedOption_D4EEAB9A43A17C738D1CCEB3177C0457
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_14157_C::OnDlgSelectedOption_D4EEAB9A43A17C738D1CCEB3177C0457(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_14157_C", "OnDlgSelectedOption_D4EEAB9A43A17C738D1CCEB3177C0457");

	Params::Quest_14157_C_OnDlgSelectedOption_D4EEAB9A43A17C738D1CCEB3177C0457 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_14157.Quest_14157_C.OnSuccess_ADB20E894CB04F6875D9BA93B79EB720
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_14157_C::OnSuccess_ADB20E894CB04F6875D9BA93B79EB720(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_14157_C", "OnSuccess_ADB20E894CB04F6875D9BA93B79EB720");

	Params::Quest_14157_C_OnSuccess_ADB20E894CB04F6875D9BA93B79EB720 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
