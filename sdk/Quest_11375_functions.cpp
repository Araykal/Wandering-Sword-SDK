#pragma once



// Package: Quest_11375

#include "Basic.hpp"

#include "Quest_11375_classes.hpp"
#include "Quest_11375_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_11375.Quest_11375_C.ExecuteUbergraph_Quest_11375
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11375_C::ExecuteUbergraph_Quest_11375(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11375_C", "ExecuteUbergraph_Quest_11375");

	Params::Quest_11375_C_ExecuteUbergraph_Quest_11375 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11375.Quest_11375_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11375_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11375_C", "HandleFinishing");

	Params::Quest_11375_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11375.Quest_11375_C.OnFinished_AF01B16E40C200FD382C0C98780BD933
// (BlueprintCallable, BlueprintEvent)

void UQuest_11375_C::OnFinished_AF01B16E40C200FD382C0C98780BD933()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11375_C", "OnFinished_AF01B16E40C200FD382C0C98780BD933");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_11375.Quest_11375_C.OnStop_AF01B16E40C200FD382C0C98780BD933
// (BlueprintCallable, BlueprintEvent)

void UQuest_11375_C::OnStop_AF01B16E40C200FD382C0C98780BD933()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11375_C", "OnStop_AF01B16E40C200FD382C0C98780BD933");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_11375.Quest_11375_C.OnDlgClosed_F155A91C408569EF0569B6A16BCF856D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11375_C::OnDlgClosed_F155A91C408569EF0569B6A16BCF856D(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11375_C", "OnDlgClosed_F155A91C408569EF0569B6A16BCF856D");

	Params::Quest_11375_C_OnDlgClosed_F155A91C408569EF0569B6A16BCF856D Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11375.Quest_11375_C.OnDlgSelectedOption_F155A91C408569EF0569B6A16BCF856D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11375_C::OnDlgSelectedOption_F155A91C408569EF0569B6A16BCF856D(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11375_C", "OnDlgSelectedOption_F155A91C408569EF0569B6A16BCF856D");

	Params::Quest_11375_C_OnDlgSelectedOption_F155A91C408569EF0569B6A16BCF856D Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11375.Quest_11375_C.OnSuccess_7F0398344A293C3C36536A87C3C00BF8
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_11375_C::OnSuccess_7F0398344A293C3C36536A87C3C00BF8(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11375_C", "OnSuccess_7F0398344A293C3C36536A87C3C00BF8");

	Params::Quest_11375_C_OnSuccess_7F0398344A293C3C36536A87C3C00BF8 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
