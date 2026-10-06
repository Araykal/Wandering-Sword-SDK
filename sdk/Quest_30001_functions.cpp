#pragma once



// Package: Quest_30001

#include "Basic.hpp"

#include "Quest_30001_classes.hpp"
#include "Quest_30001_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_30001.Quest_30001_C.ExecuteUbergraph_Quest_30001
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30001_C::ExecuteUbergraph_Quest_30001(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30001_C", "ExecuteUbergraph_Quest_30001");

	Params::Quest_30001_C_ExecuteUbergraph_Quest_30001 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30001.Quest_30001_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30001_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30001_C", "HandleFinishing");

	Params::Quest_30001_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30001.Quest_30001_C.OnSuccess_187132534D149C7A853C9481CD228035
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_30001_C::OnSuccess_187132534D149C7A853C9481CD228035(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30001_C", "OnSuccess_187132534D149C7A853C9481CD228035");

	Params::Quest_30001_C_OnSuccess_187132534D149C7A853C9481CD228035 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30001.Quest_30001_C.OnFinished_D5C045E4409E83B74B11BF84BB826D26
// (BlueprintCallable, BlueprintEvent)

void UQuest_30001_C::OnFinished_D5C045E4409E83B74B11BF84BB826D26()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30001_C", "OnFinished_D5C045E4409E83B74B11BF84BB826D26");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30001.Quest_30001_C.OnStop_D5C045E4409E83B74B11BF84BB826D26
// (BlueprintCallable, BlueprintEvent)

void UQuest_30001_C::OnStop_D5C045E4409E83B74B11BF84BB826D26()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30001_C", "OnStop_D5C045E4409E83B74B11BF84BB826D26");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30001.Quest_30001_C.OnDlgClosed_EEDF41D748841F953FFC97B2CF912A6E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30001_C::OnDlgClosed_EEDF41D748841F953FFC97B2CF912A6E(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30001_C", "OnDlgClosed_EEDF41D748841F953FFC97B2CF912A6E");

	Params::Quest_30001_C_OnDlgClosed_EEDF41D748841F953FFC97B2CF912A6E Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30001.Quest_30001_C.OnDlgSelectedOption_EEDF41D748841F953FFC97B2CF912A6E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30001_C::OnDlgSelectedOption_EEDF41D748841F953FFC97B2CF912A6E(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30001_C", "OnDlgSelectedOption_EEDF41D748841F953FFC97B2CF912A6E");

	Params::Quest_30001_C_OnDlgSelectedOption_EEDF41D748841F953FFC97B2CF912A6E Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
