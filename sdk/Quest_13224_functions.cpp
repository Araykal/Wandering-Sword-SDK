#pragma once



// Package: Quest_13224

#include "Basic.hpp"

#include "Quest_13224_classes.hpp"
#include "Quest_13224_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_13224.Quest_13224_C.ExecuteUbergraph_Quest_13224
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_13224_C::ExecuteUbergraph_Quest_13224(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_13224_C", "ExecuteUbergraph_Quest_13224");

	Params::Quest_13224_C_ExecuteUbergraph_Quest_13224 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_13224.Quest_13224_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_13224_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_13224_C", "HandleFinishing");

	Params::Quest_13224_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_13224.Quest_13224_C.OnFinished_394FA6EB41F09F1B10A099AE7D941815
// (BlueprintCallable, BlueprintEvent)

void UQuest_13224_C::OnFinished_394FA6EB41F09F1B10A099AE7D941815()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_13224_C", "OnFinished_394FA6EB41F09F1B10A099AE7D941815");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_13224.Quest_13224_C.OnStop_394FA6EB41F09F1B10A099AE7D941815
// (BlueprintCallable, BlueprintEvent)

void UQuest_13224_C::OnStop_394FA6EB41F09F1B10A099AE7D941815()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_13224_C", "OnStop_394FA6EB41F09F1B10A099AE7D941815");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_13224.Quest_13224_C.OnDlgClosed_127FD4464F4544694DA2AA8F133152DF
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_13224_C::OnDlgClosed_127FD4464F4544694DA2AA8F133152DF(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_13224_C", "OnDlgClosed_127FD4464F4544694DA2AA8F133152DF");

	Params::Quest_13224_C_OnDlgClosed_127FD4464F4544694DA2AA8F133152DF Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_13224.Quest_13224_C.OnDlgSelectedOption_127FD4464F4544694DA2AA8F133152DF
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_13224_C::OnDlgSelectedOption_127FD4464F4544694DA2AA8F133152DF(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_13224_C", "OnDlgSelectedOption_127FD4464F4544694DA2AA8F133152DF");

	Params::Quest_13224_C_OnDlgSelectedOption_127FD4464F4544694DA2AA8F133152DF Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_13224.Quest_13224_C.OnSuccess_56398A604E252606F4F6A69E8B38E77D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_13224_C::OnSuccess_56398A604E252606F4F6A69E8B38E77D(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_13224_C", "OnSuccess_56398A604E252606F4F6A69E8B38E77D");

	Params::Quest_13224_C_OnSuccess_56398A604E252606F4F6A69E8B38E77D Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
