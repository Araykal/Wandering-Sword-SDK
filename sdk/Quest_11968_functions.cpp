#pragma once



// Package: Quest_11968

#include "Basic.hpp"

#include "Quest_11968_classes.hpp"
#include "Quest_11968_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_11968.Quest_11968_C.ExecuteUbergraph_Quest_11968
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11968_C::ExecuteUbergraph_Quest_11968(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11968_C", "ExecuteUbergraph_Quest_11968");

	Params::Quest_11968_C_ExecuteUbergraph_Quest_11968 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11968.Quest_11968_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11968_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11968_C", "HandleFinishing");

	Params::Quest_11968_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11968.Quest_11968_C.OnSuccess_23F55FF64DAE1D423D5C96A7FBC439D2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_11968_C::OnSuccess_23F55FF64DAE1D423D5C96A7FBC439D2(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11968_C", "OnSuccess_23F55FF64DAE1D423D5C96A7FBC439D2");

	Params::Quest_11968_C_OnSuccess_23F55FF64DAE1D423D5C96A7FBC439D2 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11968.Quest_11968_C.OnSuccess_A472CEBE49A6258F41CBC78BB3057A8B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_11968_C::OnSuccess_A472CEBE49A6258F41CBC78BB3057A8B(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11968_C", "OnSuccess_A472CEBE49A6258F41CBC78BB3057A8B");

	Params::Quest_11968_C_OnSuccess_A472CEBE49A6258F41CBC78BB3057A8B Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11968.Quest_11968_C.OnSuccess_9FB0945042174F384988F7A3189EA2DD
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_11968_C::OnSuccess_9FB0945042174F384988F7A3189EA2DD(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11968_C", "OnSuccess_9FB0945042174F384988F7A3189EA2DD");

	Params::Quest_11968_C_OnSuccess_9FB0945042174F384988F7A3189EA2DD Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11968.Quest_11968_C.OnFinished_7B6AD98C41AECC03F95579B542F8394E
// (BlueprintCallable, BlueprintEvent)

void UQuest_11968_C::OnFinished_7B6AD98C41AECC03F95579B542F8394E()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11968_C", "OnFinished_7B6AD98C41AECC03F95579B542F8394E");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_11968.Quest_11968_C.OnStop_7B6AD98C41AECC03F95579B542F8394E
// (BlueprintCallable, BlueprintEvent)

void UQuest_11968_C::OnStop_7B6AD98C41AECC03F95579B542F8394E()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11968_C", "OnStop_7B6AD98C41AECC03F95579B542F8394E");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_11968.Quest_11968_C.OnDlgClosed_A3EFACFE4B222C1400CA49B8AB6B9C02
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11968_C::OnDlgClosed_A3EFACFE4B222C1400CA49B8AB6B9C02(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11968_C", "OnDlgClosed_A3EFACFE4B222C1400CA49B8AB6B9C02");

	Params::Quest_11968_C_OnDlgClosed_A3EFACFE4B222C1400CA49B8AB6B9C02 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11968.Quest_11968_C.OnDlgSelectedOption_A3EFACFE4B222C1400CA49B8AB6B9C02
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11968_C::OnDlgSelectedOption_A3EFACFE4B222C1400CA49B8AB6B9C02(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11968_C", "OnDlgSelectedOption_A3EFACFE4B222C1400CA49B8AB6B9C02");

	Params::Quest_11968_C_OnDlgSelectedOption_A3EFACFE4B222C1400CA49B8AB6B9C02 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11968.Quest_11968_C.OnSuccess_F6E61A9142507BCC5B1BD890B5E27509
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_11968_C::OnSuccess_F6E61A9142507BCC5B1BD890B5E27509(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11968_C", "OnSuccess_F6E61A9142507BCC5B1BD890B5E27509");

	Params::Quest_11968_C_OnSuccess_F6E61A9142507BCC5B1BD890B5E27509 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
