#pragma once



// Package: Quest_5787

#include "Basic.hpp"

#include "Quest_5787_classes.hpp"
#include "Quest_5787_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5787.Quest_5787_C.ExecuteUbergraph_Quest_5787
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5787_C::ExecuteUbergraph_Quest_5787(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5787_C", "ExecuteUbergraph_Quest_5787");

	Params::Quest_5787_C_ExecuteUbergraph_Quest_5787 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5787.Quest_5787_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5787_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5787_C", "HandleFinishing");

	Params::Quest_5787_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5787.Quest_5787_C.OnSuccess_84AE07F441DA754923A68E86D09AA221
// (BlueprintCallable, BlueprintEvent)

void UQuest_5787_C::OnSuccess_84AE07F441DA754923A68E86D09AA221()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5787_C", "OnSuccess_84AE07F441DA754923A68E86D09AA221");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5787.Quest_5787_C.OnFinished_4456D85049446C24498C4DBA39B5D439
// (BlueprintCallable, BlueprintEvent)

void UQuest_5787_C::OnFinished_4456D85049446C24498C4DBA39B5D439()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5787_C", "OnFinished_4456D85049446C24498C4DBA39B5D439");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5787.Quest_5787_C.OnStop_4456D85049446C24498C4DBA39B5D439
// (BlueprintCallable, BlueprintEvent)

void UQuest_5787_C::OnStop_4456D85049446C24498C4DBA39B5D439()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5787_C", "OnStop_4456D85049446C24498C4DBA39B5D439");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5787.Quest_5787_C.OnDlgClosed_627F2AE34DB9320A7BCA2A8C130D8141
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5787_C::OnDlgClosed_627F2AE34DB9320A7BCA2A8C130D8141(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5787_C", "OnDlgClosed_627F2AE34DB9320A7BCA2A8C130D8141");

	Params::Quest_5787_C_OnDlgClosed_627F2AE34DB9320A7BCA2A8C130D8141 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5787.Quest_5787_C.OnDlgSelectedOption_627F2AE34DB9320A7BCA2A8C130D8141
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5787_C::OnDlgSelectedOption_627F2AE34DB9320A7BCA2A8C130D8141(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5787_C", "OnDlgSelectedOption_627F2AE34DB9320A7BCA2A8C130D8141");

	Params::Quest_5787_C_OnDlgSelectedOption_627F2AE34DB9320A7BCA2A8C130D8141 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
