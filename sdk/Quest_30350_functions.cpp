#pragma once



// Package: Quest_30350

#include "Basic.hpp"

#include "Quest_30350_classes.hpp"
#include "Quest_30350_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_30350.Quest_30350_C.ExecuteUbergraph_Quest_30350
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30350_C::ExecuteUbergraph_Quest_30350(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30350_C", "ExecuteUbergraph_Quest_30350");

	Params::Quest_30350_C_ExecuteUbergraph_Quest_30350 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30350.Quest_30350_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30350_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30350_C", "HandleFinishing");

	Params::Quest_30350_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30350.Quest_30350_C.OnSuccess_C6D1BEF54A4D7B2EBAC286A7EDE30325
// (BlueprintCallable, BlueprintEvent)

void UQuest_30350_C::OnSuccess_C6D1BEF54A4D7B2EBAC286A7EDE30325()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30350_C", "OnSuccess_C6D1BEF54A4D7B2EBAC286A7EDE30325");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30350.Quest_30350_C.OnFinished_5C3279D947D93EF91361B59B4036EA58
// (BlueprintCallable, BlueprintEvent)

void UQuest_30350_C::OnFinished_5C3279D947D93EF91361B59B4036EA58()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30350_C", "OnFinished_5C3279D947D93EF91361B59B4036EA58");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30350.Quest_30350_C.OnStop_5C3279D947D93EF91361B59B4036EA58
// (BlueprintCallable, BlueprintEvent)

void UQuest_30350_C::OnStop_5C3279D947D93EF91361B59B4036EA58()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30350_C", "OnStop_5C3279D947D93EF91361B59B4036EA58");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30350.Quest_30350_C.OnDlgClosed_99BA7C2C4262F1D5708F3A933CFB9A6F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30350_C::OnDlgClosed_99BA7C2C4262F1D5708F3A933CFB9A6F(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30350_C", "OnDlgClosed_99BA7C2C4262F1D5708F3A933CFB9A6F");

	Params::Quest_30350_C_OnDlgClosed_99BA7C2C4262F1D5708F3A933CFB9A6F Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30350.Quest_30350_C.OnDlgSelectedOption_99BA7C2C4262F1D5708F3A933CFB9A6F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30350_C::OnDlgSelectedOption_99BA7C2C4262F1D5708F3A933CFB9A6F(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30350_C", "OnDlgSelectedOption_99BA7C2C4262F1D5708F3A933CFB9A6F");

	Params::Quest_30350_C_OnDlgSelectedOption_99BA7C2C4262F1D5708F3A933CFB9A6F Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
