#pragma once



// Package: Quest_12082

#include "Basic.hpp"

#include "Quest_12082_classes.hpp"
#include "Quest_12082_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_12082.Quest_12082_C.ExecuteUbergraph_Quest_12082
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12082_C::ExecuteUbergraph_Quest_12082(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12082_C", "ExecuteUbergraph_Quest_12082");

	Params::Quest_12082_C_ExecuteUbergraph_Quest_12082 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12082.Quest_12082_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12082_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12082_C", "HandleFinishing");

	Params::Quest_12082_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12082.Quest_12082_C.OnFinished_215989E847BE8D566931F4AC1BC56F30
// (BlueprintCallable, BlueprintEvent)

void UQuest_12082_C::OnFinished_215989E847BE8D566931F4AC1BC56F30()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12082_C", "OnFinished_215989E847BE8D566931F4AC1BC56F30");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12082.Quest_12082_C.OnStop_215989E847BE8D566931F4AC1BC56F30
// (BlueprintCallable, BlueprintEvent)

void UQuest_12082_C::OnStop_215989E847BE8D566931F4AC1BC56F30()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12082_C", "OnStop_215989E847BE8D566931F4AC1BC56F30");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12082.Quest_12082_C.OnDlgClosed_B25575A24F79C0D0202A80AFB11ECD48
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12082_C::OnDlgClosed_B25575A24F79C0D0202A80AFB11ECD48(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12082_C", "OnDlgClosed_B25575A24F79C0D0202A80AFB11ECD48");

	Params::Quest_12082_C_OnDlgClosed_B25575A24F79C0D0202A80AFB11ECD48 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12082.Quest_12082_C.OnDlgSelectedOption_B25575A24F79C0D0202A80AFB11ECD48
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12082_C::OnDlgSelectedOption_B25575A24F79C0D0202A80AFB11ECD48(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12082_C", "OnDlgSelectedOption_B25575A24F79C0D0202A80AFB11ECD48");

	Params::Quest_12082_C_OnDlgSelectedOption_B25575A24F79C0D0202A80AFB11ECD48 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12082.Quest_12082_C.OnSuccess_7FA9D4A0483E4D87286C07BF0544FE0D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_12082_C::OnSuccess_7FA9D4A0483E4D87286C07BF0544FE0D(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12082_C", "OnSuccess_7FA9D4A0483E4D87286C07BF0544FE0D");

	Params::Quest_12082_C_OnSuccess_7FA9D4A0483E4D87286C07BF0544FE0D Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
