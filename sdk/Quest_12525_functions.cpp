#pragma once



// Package: Quest_12525

#include "Basic.hpp"

#include "Quest_12525_classes.hpp"
#include "Quest_12525_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_12525.Quest_12525_C.ExecuteUbergraph_Quest_12525
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12525_C::ExecuteUbergraph_Quest_12525(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12525_C", "ExecuteUbergraph_Quest_12525");

	Params::Quest_12525_C_ExecuteUbergraph_Quest_12525 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12525.Quest_12525_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12525_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12525_C", "HandleFinishing");

	Params::Quest_12525_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12525.Quest_12525_C.OnSuccess_4875F91D4A8EB0476DCDDC9893C31816
// (BlueprintCallable, BlueprintEvent)

void UQuest_12525_C::OnSuccess_4875F91D4A8EB0476DCDDC9893C31816()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12525_C", "OnSuccess_4875F91D4A8EB0476DCDDC9893C31816");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12525.Quest_12525_C.OnFinished_7E207C5845A6C5A7B4883790577F10E1
// (BlueprintCallable, BlueprintEvent)

void UQuest_12525_C::OnFinished_7E207C5845A6C5A7B4883790577F10E1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12525_C", "OnFinished_7E207C5845A6C5A7B4883790577F10E1");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12525.Quest_12525_C.OnStop_7E207C5845A6C5A7B4883790577F10E1
// (BlueprintCallable, BlueprintEvent)

void UQuest_12525_C::OnStop_7E207C5845A6C5A7B4883790577F10E1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12525_C", "OnStop_7E207C5845A6C5A7B4883790577F10E1");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12525.Quest_12525_C.OnDlgClosed_1B814E5F4D9DB026674581AE0E36758B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12525_C::OnDlgClosed_1B814E5F4D9DB026674581AE0E36758B(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12525_C", "OnDlgClosed_1B814E5F4D9DB026674581AE0E36758B");

	Params::Quest_12525_C_OnDlgClosed_1B814E5F4D9DB026674581AE0E36758B Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12525.Quest_12525_C.OnDlgSelectedOption_1B814E5F4D9DB026674581AE0E36758B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12525_C::OnDlgSelectedOption_1B814E5F4D9DB026674581AE0E36758B(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12525_C", "OnDlgSelectedOption_1B814E5F4D9DB026674581AE0E36758B");

	Params::Quest_12525_C_OnDlgSelectedOption_1B814E5F4D9DB026674581AE0E36758B Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
