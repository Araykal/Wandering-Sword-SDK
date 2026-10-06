#pragma once



// Package: Quest_5301

#include "Basic.hpp"

#include "Quest_5301_classes.hpp"
#include "Quest_5301_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5301.Quest_5301_C.ExecuteUbergraph_Quest_5301
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5301_C::ExecuteUbergraph_Quest_5301(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5301_C", "ExecuteUbergraph_Quest_5301");

	Params::Quest_5301_C_ExecuteUbergraph_Quest_5301 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5301.Quest_5301_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5301_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5301_C", "HandleFinishing");

	Params::Quest_5301_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5301.Quest_5301_C.OnSuccess_502FBCD44F8A8B903DB229A1F7BE89EA
// (BlueprintCallable, BlueprintEvent)

void UQuest_5301_C::OnSuccess_502FBCD44F8A8B903DB229A1F7BE89EA()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5301_C", "OnSuccess_502FBCD44F8A8B903DB229A1F7BE89EA");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5301.Quest_5301_C.OnFinished_9D259F7249F603CA0FD1B8B58FE1F8BE
// (BlueprintCallable, BlueprintEvent)

void UQuest_5301_C::OnFinished_9D259F7249F603CA0FD1B8B58FE1F8BE()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5301_C", "OnFinished_9D259F7249F603CA0FD1B8B58FE1F8BE");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5301.Quest_5301_C.OnStop_9D259F7249F603CA0FD1B8B58FE1F8BE
// (BlueprintCallable, BlueprintEvent)

void UQuest_5301_C::OnStop_9D259F7249F603CA0FD1B8B58FE1F8BE()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5301_C", "OnStop_9D259F7249F603CA0FD1B8B58FE1F8BE");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5301.Quest_5301_C.OnDlgClosed_530DF4F84A77E8EE205DDD8E08982EF5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5301_C::OnDlgClosed_530DF4F84A77E8EE205DDD8E08982EF5(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5301_C", "OnDlgClosed_530DF4F84A77E8EE205DDD8E08982EF5");

	Params::Quest_5301_C_OnDlgClosed_530DF4F84A77E8EE205DDD8E08982EF5 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5301.Quest_5301_C.OnDlgSelectedOption_530DF4F84A77E8EE205DDD8E08982EF5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5301_C::OnDlgSelectedOption_530DF4F84A77E8EE205DDD8E08982EF5(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5301_C", "OnDlgSelectedOption_530DF4F84A77E8EE205DDD8E08982EF5");

	Params::Quest_5301_C_OnDlgSelectedOption_530DF4F84A77E8EE205DDD8E08982EF5 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
