#pragma once



// Package: Quest_30303

#include "Basic.hpp"

#include "Quest_30303_classes.hpp"
#include "Quest_30303_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_30303.Quest_30303_C.ExecuteUbergraph_Quest_30303
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30303_C::ExecuteUbergraph_Quest_30303(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30303_C", "ExecuteUbergraph_Quest_30303");

	Params::Quest_30303_C_ExecuteUbergraph_Quest_30303 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30303.Quest_30303_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30303_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30303_C", "HandleFinishing");

	Params::Quest_30303_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30303.Quest_30303_C.OnFinished_000DD28843E2ECC212817DBE69100552
// (BlueprintCallable, BlueprintEvent)

void UQuest_30303_C::OnFinished_000DD28843E2ECC212817DBE69100552()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30303_C", "OnFinished_000DD28843E2ECC212817DBE69100552");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30303.Quest_30303_C.OnStop_000DD28843E2ECC212817DBE69100552
// (BlueprintCallable, BlueprintEvent)

void UQuest_30303_C::OnStop_000DD28843E2ECC212817DBE69100552()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30303_C", "OnStop_000DD28843E2ECC212817DBE69100552");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30303.Quest_30303_C.OnDlgClosed_FAB78A364B652776EB025D954C1220C0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30303_C::OnDlgClosed_FAB78A364B652776EB025D954C1220C0(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30303_C", "OnDlgClosed_FAB78A364B652776EB025D954C1220C0");

	Params::Quest_30303_C_OnDlgClosed_FAB78A364B652776EB025D954C1220C0 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30303.Quest_30303_C.OnDlgSelectedOption_FAB78A364B652776EB025D954C1220C0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30303_C::OnDlgSelectedOption_FAB78A364B652776EB025D954C1220C0(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30303_C", "OnDlgSelectedOption_FAB78A364B652776EB025D954C1220C0");

	Params::Quest_30303_C_OnDlgSelectedOption_FAB78A364B652776EB025D954C1220C0 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30303.Quest_30303_C.OnSuccess_FB0B15DD4AF1FDAD6F323082A18FFDB8
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_30303_C::OnSuccess_FB0B15DD4AF1FDAD6F323082A18FFDB8(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30303_C", "OnSuccess_FB0B15DD4AF1FDAD6F323082A18FFDB8");

	Params::Quest_30303_C_OnSuccess_FB0B15DD4AF1FDAD6F323082A18FFDB8 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
