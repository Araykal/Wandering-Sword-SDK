#pragma once



// Package: Quest_16084

#include "Basic.hpp"

#include "Quest_16084_classes.hpp"
#include "Quest_16084_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_16084.Quest_16084_C.ExecuteUbergraph_Quest_16084
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_16084_C::ExecuteUbergraph_Quest_16084(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16084_C", "ExecuteUbergraph_Quest_16084");

	Params::Quest_16084_C_ExecuteUbergraph_Quest_16084 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_16084.Quest_16084_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_16084_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16084_C", "HandleFinishing");

	Params::Quest_16084_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_16084.Quest_16084_C.OnSuccess_ED9FD28C4DC96AFE4B1BE0AE3C19B1EA
// (BlueprintCallable, BlueprintEvent)

void UQuest_16084_C::OnSuccess_ED9FD28C4DC96AFE4B1BE0AE3C19B1EA()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16084_C", "OnSuccess_ED9FD28C4DC96AFE4B1BE0AE3C19B1EA");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_16084.Quest_16084_C.OnFinished_48DD3B13478EC8881E01028A38B0DCF1
// (BlueprintCallable, BlueprintEvent)

void UQuest_16084_C::OnFinished_48DD3B13478EC8881E01028A38B0DCF1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16084_C", "OnFinished_48DD3B13478EC8881E01028A38B0DCF1");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_16084.Quest_16084_C.OnStop_48DD3B13478EC8881E01028A38B0DCF1
// (BlueprintCallable, BlueprintEvent)

void UQuest_16084_C::OnStop_48DD3B13478EC8881E01028A38B0DCF1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16084_C", "OnStop_48DD3B13478EC8881E01028A38B0DCF1");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_16084.Quest_16084_C.OnDlgClosed_20CE9C764F60312BFF447AA2D8E83050
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_16084_C::OnDlgClosed_20CE9C764F60312BFF447AA2D8E83050(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16084_C", "OnDlgClosed_20CE9C764F60312BFF447AA2D8E83050");

	Params::Quest_16084_C_OnDlgClosed_20CE9C764F60312BFF447AA2D8E83050 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_16084.Quest_16084_C.OnDlgSelectedOption_20CE9C764F60312BFF447AA2D8E83050
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_16084_C::OnDlgSelectedOption_20CE9C764F60312BFF447AA2D8E83050(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16084_C", "OnDlgSelectedOption_20CE9C764F60312BFF447AA2D8E83050");

	Params::Quest_16084_C_OnDlgSelectedOption_20CE9C764F60312BFF447AA2D8E83050 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
