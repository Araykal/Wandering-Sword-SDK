#pragma once



// Package: Quest_14058

#include "Basic.hpp"

#include "Quest_14058_classes.hpp"
#include "Quest_14058_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_14058.Quest_14058_C.ExecuteUbergraph_Quest_14058
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_14058_C::ExecuteUbergraph_Quest_14058(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_14058_C", "ExecuteUbergraph_Quest_14058");

	Params::Quest_14058_C_ExecuteUbergraph_Quest_14058 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_14058.Quest_14058_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_14058_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_14058_C", "HandleFinishing");

	Params::Quest_14058_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_14058.Quest_14058_C.OnFinished_3E2FCEA54831F102BCB56B8D9F8FC161
// (BlueprintCallable, BlueprintEvent)

void UQuest_14058_C::OnFinished_3E2FCEA54831F102BCB56B8D9F8FC161()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_14058_C", "OnFinished_3E2FCEA54831F102BCB56B8D9F8FC161");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_14058.Quest_14058_C.OnStop_3E2FCEA54831F102BCB56B8D9F8FC161
// (BlueprintCallable, BlueprintEvent)

void UQuest_14058_C::OnStop_3E2FCEA54831F102BCB56B8D9F8FC161()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_14058_C", "OnStop_3E2FCEA54831F102BCB56B8D9F8FC161");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_14058.Quest_14058_C.OnDlgClosed_0278422B40190013AFEA3EB0DCE06F53
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_14058_C::OnDlgClosed_0278422B40190013AFEA3EB0DCE06F53(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_14058_C", "OnDlgClosed_0278422B40190013AFEA3EB0DCE06F53");

	Params::Quest_14058_C_OnDlgClosed_0278422B40190013AFEA3EB0DCE06F53 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_14058.Quest_14058_C.OnDlgSelectedOption_0278422B40190013AFEA3EB0DCE06F53
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_14058_C::OnDlgSelectedOption_0278422B40190013AFEA3EB0DCE06F53(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_14058_C", "OnDlgSelectedOption_0278422B40190013AFEA3EB0DCE06F53");

	Params::Quest_14058_C_OnDlgSelectedOption_0278422B40190013AFEA3EB0DCE06F53 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_14058.Quest_14058_C.OnSuccess_AEA97ADB4F8843FBACDBC7AE9BEDD81B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_14058_C::OnSuccess_AEA97ADB4F8843FBACDBC7AE9BEDD81B(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_14058_C", "OnSuccess_AEA97ADB4F8843FBACDBC7AE9BEDD81B");

	Params::Quest_14058_C_OnSuccess_AEA97ADB4F8843FBACDBC7AE9BEDD81B Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
