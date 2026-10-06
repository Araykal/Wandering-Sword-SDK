#pragma once



// Package: Quest_5087

#include "Basic.hpp"

#include "Quest_5087_classes.hpp"
#include "Quest_5087_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5087.Quest_5087_C.ExecuteUbergraph_Quest_5087
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5087_C::ExecuteUbergraph_Quest_5087(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5087_C", "ExecuteUbergraph_Quest_5087");

	Params::Quest_5087_C_ExecuteUbergraph_Quest_5087 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5087.Quest_5087_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5087_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5087_C", "HandleFinishing");

	Params::Quest_5087_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5087.Quest_5087_C.OnFinished_FFB751F64B53024631A973A56841A852
// (BlueprintCallable, BlueprintEvent)

void UQuest_5087_C::OnFinished_FFB751F64B53024631A973A56841A852()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5087_C", "OnFinished_FFB751F64B53024631A973A56841A852");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5087.Quest_5087_C.OnStop_FFB751F64B53024631A973A56841A852
// (BlueprintCallable, BlueprintEvent)

void UQuest_5087_C::OnStop_FFB751F64B53024631A973A56841A852()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5087_C", "OnStop_FFB751F64B53024631A973A56841A852");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5087.Quest_5087_C.OnDlgClosed_B4484E80410B416F43F09CB91E185485
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5087_C::OnDlgClosed_B4484E80410B416F43F09CB91E185485(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5087_C", "OnDlgClosed_B4484E80410B416F43F09CB91E185485");

	Params::Quest_5087_C_OnDlgClosed_B4484E80410B416F43F09CB91E185485 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5087.Quest_5087_C.OnDlgSelectedOption_B4484E80410B416F43F09CB91E185485
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5087_C::OnDlgSelectedOption_B4484E80410B416F43F09CB91E185485(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5087_C", "OnDlgSelectedOption_B4484E80410B416F43F09CB91E185485");

	Params::Quest_5087_C_OnDlgSelectedOption_B4484E80410B416F43F09CB91E185485 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5087.Quest_5087_C.OnSuccess_BAD0117649471F00AC4C0CB07816917F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_5087_C::OnSuccess_BAD0117649471F00AC4C0CB07816917F(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5087_C", "OnSuccess_BAD0117649471F00AC4C0CB07816917F");

	Params::Quest_5087_C_OnSuccess_BAD0117649471F00AC4C0CB07816917F Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
