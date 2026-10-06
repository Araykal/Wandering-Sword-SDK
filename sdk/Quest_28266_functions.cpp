#pragma once



// Package: Quest_28266

#include "Basic.hpp"

#include "Quest_28266_classes.hpp"
#include "Quest_28266_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_28266.Quest_28266_C.ExecuteUbergraph_Quest_28266
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28266_C::ExecuteUbergraph_Quest_28266(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28266_C", "ExecuteUbergraph_Quest_28266");

	Params::Quest_28266_C_ExecuteUbergraph_Quest_28266 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28266.Quest_28266_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28266_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28266_C", "HandleFinishing");

	Params::Quest_28266_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28266.Quest_28266_C.OnFinished_4817D9894FF1ADA8F065689E168A114F
// (BlueprintCallable, BlueprintEvent)

void UQuest_28266_C::OnFinished_4817D9894FF1ADA8F065689E168A114F()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28266_C", "OnFinished_4817D9894FF1ADA8F065689E168A114F");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28266.Quest_28266_C.OnStop_4817D9894FF1ADA8F065689E168A114F
// (BlueprintCallable, BlueprintEvent)

void UQuest_28266_C::OnStop_4817D9894FF1ADA8F065689E168A114F()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28266_C", "OnStop_4817D9894FF1ADA8F065689E168A114F");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28266.Quest_28266_C.OnDlgClosed_2B91DE9F47482BC342BF94B4A3306A30
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28266_C::OnDlgClosed_2B91DE9F47482BC342BF94B4A3306A30(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28266_C", "OnDlgClosed_2B91DE9F47482BC342BF94B4A3306A30");

	Params::Quest_28266_C_OnDlgClosed_2B91DE9F47482BC342BF94B4A3306A30 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28266.Quest_28266_C.OnDlgSelectedOption_2B91DE9F47482BC342BF94B4A3306A30
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28266_C::OnDlgSelectedOption_2B91DE9F47482BC342BF94B4A3306A30(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28266_C", "OnDlgSelectedOption_2B91DE9F47482BC342BF94B4A3306A30");

	Params::Quest_28266_C_OnDlgSelectedOption_2B91DE9F47482BC342BF94B4A3306A30 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
