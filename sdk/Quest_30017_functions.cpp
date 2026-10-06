#pragma once



// Package: Quest_30017

#include "Basic.hpp"

#include "Quest_30017_classes.hpp"
#include "Quest_30017_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_30017.Quest_30017_C.ExecuteUbergraph_Quest_30017
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30017_C::ExecuteUbergraph_Quest_30017(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30017_C", "ExecuteUbergraph_Quest_30017");

	Params::Quest_30017_C_ExecuteUbergraph_Quest_30017 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30017.Quest_30017_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30017_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30017_C", "HandleFinishing");

	Params::Quest_30017_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30017.Quest_30017_C.OnSuccess_C901740145C72F70682EE9A5DB98AF13
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_30017_C::OnSuccess_C901740145C72F70682EE9A5DB98AF13(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30017_C", "OnSuccess_C901740145C72F70682EE9A5DB98AF13");

	Params::Quest_30017_C_OnSuccess_C901740145C72F70682EE9A5DB98AF13 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30017.Quest_30017_C.OnFinished_D56C3F6E4C3565F8FA793FAC643FC546
// (BlueprintCallable, BlueprintEvent)

void UQuest_30017_C::OnFinished_D56C3F6E4C3565F8FA793FAC643FC546()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30017_C", "OnFinished_D56C3F6E4C3565F8FA793FAC643FC546");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30017.Quest_30017_C.OnStop_D56C3F6E4C3565F8FA793FAC643FC546
// (BlueprintCallable, BlueprintEvent)

void UQuest_30017_C::OnStop_D56C3F6E4C3565F8FA793FAC643FC546()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30017_C", "OnStop_D56C3F6E4C3565F8FA793FAC643FC546");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30017.Quest_30017_C.OnDlgClosed_D8FA03B846F853DB13257481E99934E1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30017_C::OnDlgClosed_D8FA03B846F853DB13257481E99934E1(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30017_C", "OnDlgClosed_D8FA03B846F853DB13257481E99934E1");

	Params::Quest_30017_C_OnDlgClosed_D8FA03B846F853DB13257481E99934E1 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30017.Quest_30017_C.OnDlgSelectedOption_D8FA03B846F853DB13257481E99934E1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30017_C::OnDlgSelectedOption_D8FA03B846F853DB13257481E99934E1(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30017_C", "OnDlgSelectedOption_D8FA03B846F853DB13257481E99934E1");

	Params::Quest_30017_C_OnDlgSelectedOption_D8FA03B846F853DB13257481E99934E1 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
