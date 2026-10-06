#pragma once



// Package: Quest_30008

#include "Basic.hpp"

#include "Quest_30008_classes.hpp"
#include "Quest_30008_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_30008.Quest_30008_C.ExecuteUbergraph_Quest_30008
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30008_C::ExecuteUbergraph_Quest_30008(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30008_C", "ExecuteUbergraph_Quest_30008");

	Params::Quest_30008_C_ExecuteUbergraph_Quest_30008 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30008.Quest_30008_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30008_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30008_C", "HandleFinishing");

	Params::Quest_30008_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30008.Quest_30008_C.OnSuccess_01683DDB40BA1B367537AAAD39EE2DE5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_30008_C::OnSuccess_01683DDB40BA1B367537AAAD39EE2DE5(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30008_C", "OnSuccess_01683DDB40BA1B367537AAAD39EE2DE5");

	Params::Quest_30008_C_OnSuccess_01683DDB40BA1B367537AAAD39EE2DE5 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30008.Quest_30008_C.OnFinished_DF1225EA4A9DB30CF76F19B8D2678E13
// (BlueprintCallable, BlueprintEvent)

void UQuest_30008_C::OnFinished_DF1225EA4A9DB30CF76F19B8D2678E13()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30008_C", "OnFinished_DF1225EA4A9DB30CF76F19B8D2678E13");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30008.Quest_30008_C.OnStop_DF1225EA4A9DB30CF76F19B8D2678E13
// (BlueprintCallable, BlueprintEvent)

void UQuest_30008_C::OnStop_DF1225EA4A9DB30CF76F19B8D2678E13()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30008_C", "OnStop_DF1225EA4A9DB30CF76F19B8D2678E13");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30008.Quest_30008_C.OnDlgClosed_22693DE64EAD8EB47E018AAA6FD1D615
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30008_C::OnDlgClosed_22693DE64EAD8EB47E018AAA6FD1D615(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30008_C", "OnDlgClosed_22693DE64EAD8EB47E018AAA6FD1D615");

	Params::Quest_30008_C_OnDlgClosed_22693DE64EAD8EB47E018AAA6FD1D615 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30008.Quest_30008_C.OnDlgSelectedOption_22693DE64EAD8EB47E018AAA6FD1D615
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30008_C::OnDlgSelectedOption_22693DE64EAD8EB47E018AAA6FD1D615(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30008_C", "OnDlgSelectedOption_22693DE64EAD8EB47E018AAA6FD1D615");

	Params::Quest_30008_C_OnDlgSelectedOption_22693DE64EAD8EB47E018AAA6FD1D615 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
