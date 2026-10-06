#pragma once



// Package: Quest_5270

#include "Basic.hpp"

#include "Quest_5270_classes.hpp"
#include "Quest_5270_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5270.Quest_5270_C.ExecuteUbergraph_Quest_5270
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5270_C::ExecuteUbergraph_Quest_5270(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5270_C", "ExecuteUbergraph_Quest_5270");

	Params::Quest_5270_C_ExecuteUbergraph_Quest_5270 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5270.Quest_5270_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5270_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5270_C", "HandleFinishing");

	Params::Quest_5270_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5270.Quest_5270_C.OnSuccess_F32CCBFA47923A478BE71DA413F13C1B
// (BlueprintCallable, BlueprintEvent)

void UQuest_5270_C::OnSuccess_F32CCBFA47923A478BE71DA413F13C1B()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5270_C", "OnSuccess_F32CCBFA47923A478BE71DA413F13C1B");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5270.Quest_5270_C.OnFinished_020C9FE44CDFA21AE0CBE5AF1BAB2C89
// (BlueprintCallable, BlueprintEvent)

void UQuest_5270_C::OnFinished_020C9FE44CDFA21AE0CBE5AF1BAB2C89()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5270_C", "OnFinished_020C9FE44CDFA21AE0CBE5AF1BAB2C89");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5270.Quest_5270_C.OnStop_020C9FE44CDFA21AE0CBE5AF1BAB2C89
// (BlueprintCallable, BlueprintEvent)

void UQuest_5270_C::OnStop_020C9FE44CDFA21AE0CBE5AF1BAB2C89()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5270_C", "OnStop_020C9FE44CDFA21AE0CBE5AF1BAB2C89");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5270.Quest_5270_C.OnDlgClosed_22377B164AC73B77499EB893EF5CE795
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5270_C::OnDlgClosed_22377B164AC73B77499EB893EF5CE795(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5270_C", "OnDlgClosed_22377B164AC73B77499EB893EF5CE795");

	Params::Quest_5270_C_OnDlgClosed_22377B164AC73B77499EB893EF5CE795 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5270.Quest_5270_C.OnDlgSelectedOption_22377B164AC73B77499EB893EF5CE795
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5270_C::OnDlgSelectedOption_22377B164AC73B77499EB893EF5CE795(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5270_C", "OnDlgSelectedOption_22377B164AC73B77499EB893EF5CE795");

	Params::Quest_5270_C_OnDlgSelectedOption_22377B164AC73B77499EB893EF5CE795 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
