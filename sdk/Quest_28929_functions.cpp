#pragma once



// Package: Quest_28929

#include "Basic.hpp"

#include "Quest_28929_classes.hpp"
#include "Quest_28929_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_28929.Quest_28929_C.ExecuteUbergraph_Quest_28929
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28929_C::ExecuteUbergraph_Quest_28929(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28929_C", "ExecuteUbergraph_Quest_28929");

	Params::Quest_28929_C_ExecuteUbergraph_Quest_28929 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28929.Quest_28929_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28929_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28929_C", "HandleFinishing");

	Params::Quest_28929_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28929.Quest_28929_C.OnSuccess_93E71E864313AE8AF4C9F4A198318859
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_28929_C::OnSuccess_93E71E864313AE8AF4C9F4A198318859(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28929_C", "OnSuccess_93E71E864313AE8AF4C9F4A198318859");

	Params::Quest_28929_C_OnSuccess_93E71E864313AE8AF4C9F4A198318859 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28929.Quest_28929_C.OnFinished_72638B194CF28A9A457875A82FB55159
// (BlueprintCallable, BlueprintEvent)

void UQuest_28929_C::OnFinished_72638B194CF28A9A457875A82FB55159()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28929_C", "OnFinished_72638B194CF28A9A457875A82FB55159");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28929.Quest_28929_C.OnStop_72638B194CF28A9A457875A82FB55159
// (BlueprintCallable, BlueprintEvent)

void UQuest_28929_C::OnStop_72638B194CF28A9A457875A82FB55159()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28929_C", "OnStop_72638B194CF28A9A457875A82FB55159");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28929.Quest_28929_C.OnDlgClosed_A8E398C8423917B54BC264ACA3C1059A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28929_C::OnDlgClosed_A8E398C8423917B54BC264ACA3C1059A(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28929_C", "OnDlgClosed_A8E398C8423917B54BC264ACA3C1059A");

	Params::Quest_28929_C_OnDlgClosed_A8E398C8423917B54BC264ACA3C1059A Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28929.Quest_28929_C.OnDlgSelectedOption_A8E398C8423917B54BC264ACA3C1059A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28929_C::OnDlgSelectedOption_A8E398C8423917B54BC264ACA3C1059A(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28929_C", "OnDlgSelectedOption_A8E398C8423917B54BC264ACA3C1059A");

	Params::Quest_28929_C_OnDlgSelectedOption_A8E398C8423917B54BC264ACA3C1059A Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
