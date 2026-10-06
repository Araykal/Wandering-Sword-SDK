#pragma once



// Package: Quest_5317

#include "Basic.hpp"

#include "Quest_5317_classes.hpp"
#include "Quest_5317_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5317.Quest_5317_C.ExecuteUbergraph_Quest_5317
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5317_C::ExecuteUbergraph_Quest_5317(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5317_C", "ExecuteUbergraph_Quest_5317");

	Params::Quest_5317_C_ExecuteUbergraph_Quest_5317 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5317.Quest_5317_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5317_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5317_C", "HandleFinishing");

	Params::Quest_5317_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5317.Quest_5317_C.OnFinished_441B0D01458A334D36A609A7149C2223
// (BlueprintCallable, BlueprintEvent)

void UQuest_5317_C::OnFinished_441B0D01458A334D36A609A7149C2223()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5317_C", "OnFinished_441B0D01458A334D36A609A7149C2223");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5317.Quest_5317_C.OnStop_441B0D01458A334D36A609A7149C2223
// (BlueprintCallable, BlueprintEvent)

void UQuest_5317_C::OnStop_441B0D01458A334D36A609A7149C2223()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5317_C", "OnStop_441B0D01458A334D36A609A7149C2223");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5317.Quest_5317_C.OnDlgClosed_5F1C7FC34AB15B16CE7C72843B1F09F4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5317_C::OnDlgClosed_5F1C7FC34AB15B16CE7C72843B1F09F4(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5317_C", "OnDlgClosed_5F1C7FC34AB15B16CE7C72843B1F09F4");

	Params::Quest_5317_C_OnDlgClosed_5F1C7FC34AB15B16CE7C72843B1F09F4 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5317.Quest_5317_C.OnDlgSelectedOption_5F1C7FC34AB15B16CE7C72843B1F09F4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5317_C::OnDlgSelectedOption_5F1C7FC34AB15B16CE7C72843B1F09F4(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5317_C", "OnDlgSelectedOption_5F1C7FC34AB15B16CE7C72843B1F09F4");

	Params::Quest_5317_C_OnDlgSelectedOption_5F1C7FC34AB15B16CE7C72843B1F09F4 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
