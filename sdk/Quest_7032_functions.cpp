#pragma once



// Package: Quest_7032

#include "Basic.hpp"

#include "Quest_7032_classes.hpp"
#include "Quest_7032_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_7032.Quest_7032_C.ExecuteUbergraph_Quest_7032
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_7032_C::ExecuteUbergraph_Quest_7032(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7032_C", "ExecuteUbergraph_Quest_7032");

	Params::Quest_7032_C_ExecuteUbergraph_Quest_7032 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_7032.Quest_7032_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_7032_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7032_C", "HandleFinishing");

	Params::Quest_7032_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_7032.Quest_7032_C.OnSuccess_0AAE190C40AB21A86F1F9995401A6F95
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_7032_C::OnSuccess_0AAE190C40AB21A86F1F9995401A6F95(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7032_C", "OnSuccess_0AAE190C40AB21A86F1F9995401A6F95");

	Params::Quest_7032_C_OnSuccess_0AAE190C40AB21A86F1F9995401A6F95 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_7032.Quest_7032_C.OnFinished_D960C179483EDFC43F4D81A92BD37C7A
// (BlueprintCallable, BlueprintEvent)

void UQuest_7032_C::OnFinished_D960C179483EDFC43F4D81A92BD37C7A()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7032_C", "OnFinished_D960C179483EDFC43F4D81A92BD37C7A");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_7032.Quest_7032_C.OnStop_D960C179483EDFC43F4D81A92BD37C7A
// (BlueprintCallable, BlueprintEvent)

void UQuest_7032_C::OnStop_D960C179483EDFC43F4D81A92BD37C7A()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7032_C", "OnStop_D960C179483EDFC43F4D81A92BD37C7A");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_7032.Quest_7032_C.OnDlgClosed_E5A65EE44D2A0D6AE780B8BF28C3E018
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_7032_C::OnDlgClosed_E5A65EE44D2A0D6AE780B8BF28C3E018(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7032_C", "OnDlgClosed_E5A65EE44D2A0D6AE780B8BF28C3E018");

	Params::Quest_7032_C_OnDlgClosed_E5A65EE44D2A0D6AE780B8BF28C3E018 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_7032.Quest_7032_C.OnDlgSelectedOption_E5A65EE44D2A0D6AE780B8BF28C3E018
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_7032_C::OnDlgSelectedOption_E5A65EE44D2A0D6AE780B8BF28C3E018(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7032_C", "OnDlgSelectedOption_E5A65EE44D2A0D6AE780B8BF28C3E018");

	Params::Quest_7032_C_OnDlgSelectedOption_E5A65EE44D2A0D6AE780B8BF28C3E018 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_7032.Quest_7032_C.OnSuccess_F07D901540EDE460EEB8EA937EC04421
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_7032_C::OnSuccess_F07D901540EDE460EEB8EA937EC04421(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7032_C", "OnSuccess_F07D901540EDE460EEB8EA937EC04421");

	Params::Quest_7032_C_OnSuccess_F07D901540EDE460EEB8EA937EC04421 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
