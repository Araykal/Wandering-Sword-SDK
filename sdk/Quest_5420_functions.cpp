#pragma once



// Package: Quest_5420

#include "Basic.hpp"

#include "Quest_5420_classes.hpp"
#include "Quest_5420_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5420.Quest_5420_C.ExecuteUbergraph_Quest_5420
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5420_C::ExecuteUbergraph_Quest_5420(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5420_C", "ExecuteUbergraph_Quest_5420");

	Params::Quest_5420_C_ExecuteUbergraph_Quest_5420 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5420.Quest_5420_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5420_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5420_C", "HandleFinishing");

	Params::Quest_5420_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5420.Quest_5420_C.OnSuccess_B93844914CBCF6F7F10BF0B88EF5D74C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_5420_C::OnSuccess_B93844914CBCF6F7F10BF0B88EF5D74C(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5420_C", "OnSuccess_B93844914CBCF6F7F10BF0B88EF5D74C");

	Params::Quest_5420_C_OnSuccess_B93844914CBCF6F7F10BF0B88EF5D74C Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5420.Quest_5420_C.OnSuccess_D184182541F6FDB4BD8990B65523D38D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_5420_C::OnSuccess_D184182541F6FDB4BD8990B65523D38D(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5420_C", "OnSuccess_D184182541F6FDB4BD8990B65523D38D");

	Params::Quest_5420_C_OnSuccess_D184182541F6FDB4BD8990B65523D38D Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5420.Quest_5420_C.OnSuccess_85A53AEF463E33E63406069BDFEA8FE8
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_5420_C::OnSuccess_85A53AEF463E33E63406069BDFEA8FE8(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5420_C", "OnSuccess_85A53AEF463E33E63406069BDFEA8FE8");

	Params::Quest_5420_C_OnSuccess_85A53AEF463E33E63406069BDFEA8FE8 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5420.Quest_5420_C.OnFinished_5C3020B040AAC0A230E89784659B158E
// (BlueprintCallable, BlueprintEvent)

void UQuest_5420_C::OnFinished_5C3020B040AAC0A230E89784659B158E()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5420_C", "OnFinished_5C3020B040AAC0A230E89784659B158E");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5420.Quest_5420_C.OnStop_5C3020B040AAC0A230E89784659B158E
// (BlueprintCallable, BlueprintEvent)

void UQuest_5420_C::OnStop_5C3020B040AAC0A230E89784659B158E()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5420_C", "OnStop_5C3020B040AAC0A230E89784659B158E");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5420.Quest_5420_C.OnDlgClosed_E5319C50462F8BA2E9B5378ABF0F131A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5420_C::OnDlgClosed_E5319C50462F8BA2E9B5378ABF0F131A(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5420_C", "OnDlgClosed_E5319C50462F8BA2E9B5378ABF0F131A");

	Params::Quest_5420_C_OnDlgClosed_E5319C50462F8BA2E9B5378ABF0F131A Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5420.Quest_5420_C.OnDlgSelectedOption_E5319C50462F8BA2E9B5378ABF0F131A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5420_C::OnDlgSelectedOption_E5319C50462F8BA2E9B5378ABF0F131A(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5420_C", "OnDlgSelectedOption_E5319C50462F8BA2E9B5378ABF0F131A");

	Params::Quest_5420_C_OnDlgSelectedOption_E5319C50462F8BA2E9B5378ABF0F131A Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5420.Quest_5420_C.OnSuccess_4820B80B480D19F6A23FD59902FC6BCE
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_5420_C::OnSuccess_4820B80B480D19F6A23FD59902FC6BCE(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5420_C", "OnSuccess_4820B80B480D19F6A23FD59902FC6BCE");

	Params::Quest_5420_C_OnSuccess_4820B80B480D19F6A23FD59902FC6BCE Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
