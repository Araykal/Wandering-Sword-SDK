#pragma once



// Package: Quest_28700

#include "Basic.hpp"

#include "Quest_28700_classes.hpp"
#include "Quest_28700_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_28700.Quest_28700_C.ExecuteUbergraph_Quest_28700
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28700_C::ExecuteUbergraph_Quest_28700(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28700_C", "ExecuteUbergraph_Quest_28700");

	Params::Quest_28700_C_ExecuteUbergraph_Quest_28700 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28700.Quest_28700_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28700_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28700_C", "HandleFinishing");

	Params::Quest_28700_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28700.Quest_28700_C.OnSuccess_E3AF79DB444D33B596CBF6887DFE65BD
// (BlueprintCallable, BlueprintEvent)

void UQuest_28700_C::OnSuccess_E3AF79DB444D33B596CBF6887DFE65BD()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28700_C", "OnSuccess_E3AF79DB444D33B596CBF6887DFE65BD");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28700.Quest_28700_C.OnFinished_D104466D43579620689D868AFA427926
// (BlueprintCallable, BlueprintEvent)

void UQuest_28700_C::OnFinished_D104466D43579620689D868AFA427926()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28700_C", "OnFinished_D104466D43579620689D868AFA427926");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28700.Quest_28700_C.OnStop_D104466D43579620689D868AFA427926
// (BlueprintCallable, BlueprintEvent)

void UQuest_28700_C::OnStop_D104466D43579620689D868AFA427926()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28700_C", "OnStop_D104466D43579620689D868AFA427926");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28700.Quest_28700_C.OnDlgClosed_BB77BFD1404577AF5512C6ADBA6CF9E8
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28700_C::OnDlgClosed_BB77BFD1404577AF5512C6ADBA6CF9E8(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28700_C", "OnDlgClosed_BB77BFD1404577AF5512C6ADBA6CF9E8");

	Params::Quest_28700_C_OnDlgClosed_BB77BFD1404577AF5512C6ADBA6CF9E8 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28700.Quest_28700_C.OnDlgSelectedOption_BB77BFD1404577AF5512C6ADBA6CF9E8
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28700_C::OnDlgSelectedOption_BB77BFD1404577AF5512C6ADBA6CF9E8(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28700_C", "OnDlgSelectedOption_BB77BFD1404577AF5512C6ADBA6CF9E8");

	Params::Quest_28700_C_OnDlgSelectedOption_BB77BFD1404577AF5512C6ADBA6CF9E8 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
