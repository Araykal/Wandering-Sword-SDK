#pragma once



// Package: Quest_17557

#include "Basic.hpp"

#include "Quest_17557_classes.hpp"
#include "Quest_17557_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_17557.Quest_17557_C.ExecuteUbergraph_Quest_17557
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_17557_C::ExecuteUbergraph_Quest_17557(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_17557_C", "ExecuteUbergraph_Quest_17557");

	Params::Quest_17557_C_ExecuteUbergraph_Quest_17557 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_17557.Quest_17557_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_17557_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_17557_C", "HandleFinishing");

	Params::Quest_17557_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_17557.Quest_17557_C.OnSuccess_B404680F4B3DB53851D830B0031C52DD
// (BlueprintCallable, BlueprintEvent)

void UQuest_17557_C::OnSuccess_B404680F4B3DB53851D830B0031C52DD()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_17557_C", "OnSuccess_B404680F4B3DB53851D830B0031C52DD");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_17557.Quest_17557_C.OnFinished_CABF54804444D3DF42AC569EEF2560CE
// (BlueprintCallable, BlueprintEvent)

void UQuest_17557_C::OnFinished_CABF54804444D3DF42AC569EEF2560CE()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_17557_C", "OnFinished_CABF54804444D3DF42AC569EEF2560CE");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_17557.Quest_17557_C.OnStop_CABF54804444D3DF42AC569EEF2560CE
// (BlueprintCallable, BlueprintEvent)

void UQuest_17557_C::OnStop_CABF54804444D3DF42AC569EEF2560CE()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_17557_C", "OnStop_CABF54804444D3DF42AC569EEF2560CE");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_17557.Quest_17557_C.OnDlgClosed_6D6261A84419784D6A8F9B98A5AFCD95
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_17557_C::OnDlgClosed_6D6261A84419784D6A8F9B98A5AFCD95(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_17557_C", "OnDlgClosed_6D6261A84419784D6A8F9B98A5AFCD95");

	Params::Quest_17557_C_OnDlgClosed_6D6261A84419784D6A8F9B98A5AFCD95 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_17557.Quest_17557_C.OnDlgSelectedOption_6D6261A84419784D6A8F9B98A5AFCD95
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_17557_C::OnDlgSelectedOption_6D6261A84419784D6A8F9B98A5AFCD95(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_17557_C", "OnDlgSelectedOption_6D6261A84419784D6A8F9B98A5AFCD95");

	Params::Quest_17557_C_OnDlgSelectedOption_6D6261A84419784D6A8F9B98A5AFCD95 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
