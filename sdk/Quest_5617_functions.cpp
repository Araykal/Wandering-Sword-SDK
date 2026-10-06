#pragma once



// Package: Quest_5617

#include "Basic.hpp"

#include "Quest_5617_classes.hpp"
#include "Quest_5617_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5617.Quest_5617_C.ExecuteUbergraph_Quest_5617
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5617_C::ExecuteUbergraph_Quest_5617(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5617_C", "ExecuteUbergraph_Quest_5617");

	Params::Quest_5617_C_ExecuteUbergraph_Quest_5617 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5617.Quest_5617_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5617_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5617_C", "HandleFinishing");

	Params::Quest_5617_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5617.Quest_5617_C.OnSuccess_6EC1AEF9478A0A5D44B055A657D5FF7B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_5617_C::OnSuccess_6EC1AEF9478A0A5D44B055A657D5FF7B(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5617_C", "OnSuccess_6EC1AEF9478A0A5D44B055A657D5FF7B");

	Params::Quest_5617_C_OnSuccess_6EC1AEF9478A0A5D44B055A657D5FF7B Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5617.Quest_5617_C.OnFinished_26CF074D4FEA89370FE799A51914AD1A
// (BlueprintCallable, BlueprintEvent)

void UQuest_5617_C::OnFinished_26CF074D4FEA89370FE799A51914AD1A()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5617_C", "OnFinished_26CF074D4FEA89370FE799A51914AD1A");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5617.Quest_5617_C.OnStop_26CF074D4FEA89370FE799A51914AD1A
// (BlueprintCallable, BlueprintEvent)

void UQuest_5617_C::OnStop_26CF074D4FEA89370FE799A51914AD1A()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5617_C", "OnStop_26CF074D4FEA89370FE799A51914AD1A");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5617.Quest_5617_C.OnDlgClosed_FAC4BA4D46D3F8D649E477B45E843DD7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5617_C::OnDlgClosed_FAC4BA4D46D3F8D649E477B45E843DD7(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5617_C", "OnDlgClosed_FAC4BA4D46D3F8D649E477B45E843DD7");

	Params::Quest_5617_C_OnDlgClosed_FAC4BA4D46D3F8D649E477B45E843DD7 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5617.Quest_5617_C.OnDlgSelectedOption_FAC4BA4D46D3F8D649E477B45E843DD7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5617_C::OnDlgSelectedOption_FAC4BA4D46D3F8D649E477B45E843DD7(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5617_C", "OnDlgSelectedOption_FAC4BA4D46D3F8D649E477B45E843DD7");

	Params::Quest_5617_C_OnDlgSelectedOption_FAC4BA4D46D3F8D649E477B45E843DD7 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
