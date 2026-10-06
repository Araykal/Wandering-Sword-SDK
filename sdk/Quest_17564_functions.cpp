#pragma once



// Package: Quest_17564

#include "Basic.hpp"

#include "Quest_17564_classes.hpp"
#include "Quest_17564_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_17564.Quest_17564_C.ExecuteUbergraph_Quest_17564
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_17564_C::ExecuteUbergraph_Quest_17564(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_17564_C", "ExecuteUbergraph_Quest_17564");

	Params::Quest_17564_C_ExecuteUbergraph_Quest_17564 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_17564.Quest_17564_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_17564_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_17564_C", "HandleFinishing");

	Params::Quest_17564_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_17564.Quest_17564_C.OnFinished_982A51D1427174EC0BEA00A6B70FDB88
// (BlueprintCallable, BlueprintEvent)

void UQuest_17564_C::OnFinished_982A51D1427174EC0BEA00A6B70FDB88()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_17564_C", "OnFinished_982A51D1427174EC0BEA00A6B70FDB88");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_17564.Quest_17564_C.OnStop_982A51D1427174EC0BEA00A6B70FDB88
// (BlueprintCallable, BlueprintEvent)

void UQuest_17564_C::OnStop_982A51D1427174EC0BEA00A6B70FDB88()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_17564_C", "OnStop_982A51D1427174EC0BEA00A6B70FDB88");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_17564.Quest_17564_C.OnDlgClosed_41CCE65C41BF3C59E488B99E4EF6E52D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_17564_C::OnDlgClosed_41CCE65C41BF3C59E488B99E4EF6E52D(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_17564_C", "OnDlgClosed_41CCE65C41BF3C59E488B99E4EF6E52D");

	Params::Quest_17564_C_OnDlgClosed_41CCE65C41BF3C59E488B99E4EF6E52D Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_17564.Quest_17564_C.OnDlgSelectedOption_41CCE65C41BF3C59E488B99E4EF6E52D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_17564_C::OnDlgSelectedOption_41CCE65C41BF3C59E488B99E4EF6E52D(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_17564_C", "OnDlgSelectedOption_41CCE65C41BF3C59E488B99E4EF6E52D");

	Params::Quest_17564_C_OnDlgSelectedOption_41CCE65C41BF3C59E488B99E4EF6E52D Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
