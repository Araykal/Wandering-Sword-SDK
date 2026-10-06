#pragma once



// Package: Quest_5099

#include "Basic.hpp"

#include "Quest_5099_classes.hpp"
#include "Quest_5099_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5099.Quest_5099_C.ExecuteUbergraph_Quest_5099
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5099_C::ExecuteUbergraph_Quest_5099(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5099_C", "ExecuteUbergraph_Quest_5099");

	Params::Quest_5099_C_ExecuteUbergraph_Quest_5099 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5099.Quest_5099_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5099_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5099_C", "HandleFinishing");

	Params::Quest_5099_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5099.Quest_5099_C.OnFinished_038156804EB760DF9036A4BCBD353A65
// (BlueprintCallable, BlueprintEvent)

void UQuest_5099_C::OnFinished_038156804EB760DF9036A4BCBD353A65()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5099_C", "OnFinished_038156804EB760DF9036A4BCBD353A65");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5099.Quest_5099_C.OnStop_038156804EB760DF9036A4BCBD353A65
// (BlueprintCallable, BlueprintEvent)

void UQuest_5099_C::OnStop_038156804EB760DF9036A4BCBD353A65()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5099_C", "OnStop_038156804EB760DF9036A4BCBD353A65");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5099.Quest_5099_C.OnDlgClosed_A721BAAB407FB9534FAAFDAEE175B7AB
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5099_C::OnDlgClosed_A721BAAB407FB9534FAAFDAEE175B7AB(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5099_C", "OnDlgClosed_A721BAAB407FB9534FAAFDAEE175B7AB");

	Params::Quest_5099_C_OnDlgClosed_A721BAAB407FB9534FAAFDAEE175B7AB Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5099.Quest_5099_C.OnDlgSelectedOption_A721BAAB407FB9534FAAFDAEE175B7AB
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5099_C::OnDlgSelectedOption_A721BAAB407FB9534FAAFDAEE175B7AB(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5099_C", "OnDlgSelectedOption_A721BAAB407FB9534FAAFDAEE175B7AB");

	Params::Quest_5099_C_OnDlgSelectedOption_A721BAAB407FB9534FAAFDAEE175B7AB Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5099.Quest_5099_C.OnSuccess_13F7936A48B96351E8FE00AEA1E9066D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_5099_C::OnSuccess_13F7936A48B96351E8FE00AEA1E9066D(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5099_C", "OnSuccess_13F7936A48B96351E8FE00AEA1E9066D");

	Params::Quest_5099_C_OnSuccess_13F7936A48B96351E8FE00AEA1E9066D Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
