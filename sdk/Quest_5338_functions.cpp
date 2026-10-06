#pragma once



// Package: Quest_5338

#include "Basic.hpp"

#include "Quest_5338_classes.hpp"
#include "Quest_5338_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5338.Quest_5338_C.ExecuteUbergraph_Quest_5338
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5338_C::ExecuteUbergraph_Quest_5338(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5338_C", "ExecuteUbergraph_Quest_5338");

	Params::Quest_5338_C_ExecuteUbergraph_Quest_5338 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5338.Quest_5338_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5338_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5338_C", "HandleFinishing");

	Params::Quest_5338_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5338.Quest_5338_C.OnFinished_E0E1A83F43BF134E2CD4919CD2BE850E
// (BlueprintCallable, BlueprintEvent)

void UQuest_5338_C::OnFinished_E0E1A83F43BF134E2CD4919CD2BE850E()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5338_C", "OnFinished_E0E1A83F43BF134E2CD4919CD2BE850E");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5338.Quest_5338_C.OnStop_E0E1A83F43BF134E2CD4919CD2BE850E
// (BlueprintCallable, BlueprintEvent)

void UQuest_5338_C::OnStop_E0E1A83F43BF134E2CD4919CD2BE850E()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5338_C", "OnStop_E0E1A83F43BF134E2CD4919CD2BE850E");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5338.Quest_5338_C.OnDlgClosed_AD2C138348FB606CEA66538EF32E8269
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5338_C::OnDlgClosed_AD2C138348FB606CEA66538EF32E8269(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5338_C", "OnDlgClosed_AD2C138348FB606CEA66538EF32E8269");

	Params::Quest_5338_C_OnDlgClosed_AD2C138348FB606CEA66538EF32E8269 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5338.Quest_5338_C.OnDlgSelectedOption_AD2C138348FB606CEA66538EF32E8269
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5338_C::OnDlgSelectedOption_AD2C138348FB606CEA66538EF32E8269(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5338_C", "OnDlgSelectedOption_AD2C138348FB606CEA66538EF32E8269");

	Params::Quest_5338_C_OnDlgSelectedOption_AD2C138348FB606CEA66538EF32E8269 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5338.Quest_5338_C.OnSuccess_3C4AB1A847B5275B85F107B75BBB1D2C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_5338_C::OnSuccess_3C4AB1A847B5275B85F107B75BBB1D2C(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5338_C", "OnSuccess_3C4AB1A847B5275B85F107B75BBB1D2C");

	Params::Quest_5338_C_OnSuccess_3C4AB1A847B5275B85F107B75BBB1D2C Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
