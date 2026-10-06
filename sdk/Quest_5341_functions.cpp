#pragma once



// Package: Quest_5341

#include "Basic.hpp"

#include "Quest_5341_classes.hpp"
#include "Quest_5341_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5341.Quest_5341_C.ExecuteUbergraph_Quest_5341
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5341_C::ExecuteUbergraph_Quest_5341(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5341_C", "ExecuteUbergraph_Quest_5341");

	Params::Quest_5341_C_ExecuteUbergraph_Quest_5341 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5341.Quest_5341_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5341_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5341_C", "HandleFinishing");

	Params::Quest_5341_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5341.Quest_5341_C.OnFinished_F994A9A24B3E4238B238EE9C6A0F11BB
// (BlueprintCallable, BlueprintEvent)

void UQuest_5341_C::OnFinished_F994A9A24B3E4238B238EE9C6A0F11BB()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5341_C", "OnFinished_F994A9A24B3E4238B238EE9C6A0F11BB");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5341.Quest_5341_C.OnStop_F994A9A24B3E4238B238EE9C6A0F11BB
// (BlueprintCallable, BlueprintEvent)

void UQuest_5341_C::OnStop_F994A9A24B3E4238B238EE9C6A0F11BB()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5341_C", "OnStop_F994A9A24B3E4238B238EE9C6A0F11BB");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5341.Quest_5341_C.OnDlgClosed_4B4D39A647629B179166FFA8C89E5A05
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5341_C::OnDlgClosed_4B4D39A647629B179166FFA8C89E5A05(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5341_C", "OnDlgClosed_4B4D39A647629B179166FFA8C89E5A05");

	Params::Quest_5341_C_OnDlgClosed_4B4D39A647629B179166FFA8C89E5A05 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5341.Quest_5341_C.OnDlgSelectedOption_4B4D39A647629B179166FFA8C89E5A05
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5341_C::OnDlgSelectedOption_4B4D39A647629B179166FFA8C89E5A05(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5341_C", "OnDlgSelectedOption_4B4D39A647629B179166FFA8C89E5A05");

	Params::Quest_5341_C_OnDlgSelectedOption_4B4D39A647629B179166FFA8C89E5A05 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5341.Quest_5341_C.OnSuccess_0BD32EFB40A12D3EFCD5A1B2CE74A265
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_5341_C::OnSuccess_0BD32EFB40A12D3EFCD5A1B2CE74A265(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5341_C", "OnSuccess_0BD32EFB40A12D3EFCD5A1B2CE74A265");

	Params::Quest_5341_C_OnSuccess_0BD32EFB40A12D3EFCD5A1B2CE74A265 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
