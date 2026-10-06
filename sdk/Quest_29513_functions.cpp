#pragma once



// Package: Quest_29513

#include "Basic.hpp"

#include "Quest_29513_classes.hpp"
#include "Quest_29513_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_29513.Quest_29513_C.ExecuteUbergraph_Quest_29513
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_29513_C::ExecuteUbergraph_Quest_29513(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29513_C", "ExecuteUbergraph_Quest_29513");

	Params::Quest_29513_C_ExecuteUbergraph_Quest_29513 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_29513.Quest_29513_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_29513_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29513_C", "HandleFinishing");

	Params::Quest_29513_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_29513.Quest_29513_C.OnFinished_F266DBD9476F2A2BBDF393A25455F0C1
// (BlueprintCallable, BlueprintEvent)

void UQuest_29513_C::OnFinished_F266DBD9476F2A2BBDF393A25455F0C1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29513_C", "OnFinished_F266DBD9476F2A2BBDF393A25455F0C1");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_29513.Quest_29513_C.OnStop_F266DBD9476F2A2BBDF393A25455F0C1
// (BlueprintCallable, BlueprintEvent)

void UQuest_29513_C::OnStop_F266DBD9476F2A2BBDF393A25455F0C1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29513_C", "OnStop_F266DBD9476F2A2BBDF393A25455F0C1");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_29513.Quest_29513_C.OnDlgClosed_470EDBEE4BCCF659CAB5FFA8BE2A7449
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_29513_C::OnDlgClosed_470EDBEE4BCCF659CAB5FFA8BE2A7449(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29513_C", "OnDlgClosed_470EDBEE4BCCF659CAB5FFA8BE2A7449");

	Params::Quest_29513_C_OnDlgClosed_470EDBEE4BCCF659CAB5FFA8BE2A7449 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_29513.Quest_29513_C.OnDlgSelectedOption_470EDBEE4BCCF659CAB5FFA8BE2A7449
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_29513_C::OnDlgSelectedOption_470EDBEE4BCCF659CAB5FFA8BE2A7449(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29513_C", "OnDlgSelectedOption_470EDBEE4BCCF659CAB5FFA8BE2A7449");

	Params::Quest_29513_C_OnDlgSelectedOption_470EDBEE4BCCF659CAB5FFA8BE2A7449 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
