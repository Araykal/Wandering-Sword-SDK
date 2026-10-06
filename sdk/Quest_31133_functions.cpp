#pragma once



// Package: Quest_31133

#include "Basic.hpp"

#include "Quest_31133_classes.hpp"
#include "Quest_31133_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_31133.Quest_31133_C.ExecuteUbergraph_Quest_31133
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_31133_C::ExecuteUbergraph_Quest_31133(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_31133_C", "ExecuteUbergraph_Quest_31133");

	Params::Quest_31133_C_ExecuteUbergraph_Quest_31133 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_31133.Quest_31133_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_31133_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_31133_C", "HandleFinishing");

	Params::Quest_31133_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_31133.Quest_31133_C.OnDlgClosed_DC26312A459498B79DDB5DBAB064859A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_31133_C::OnDlgClosed_DC26312A459498B79DDB5DBAB064859A(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_31133_C", "OnDlgClosed_DC26312A459498B79DDB5DBAB064859A");

	Params::Quest_31133_C_OnDlgClosed_DC26312A459498B79DDB5DBAB064859A Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_31133.Quest_31133_C.OnDlgSelectedOption_DC26312A459498B79DDB5DBAB064859A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_31133_C::OnDlgSelectedOption_DC26312A459498B79DDB5DBAB064859A(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_31133_C", "OnDlgSelectedOption_DC26312A459498B79DDB5DBAB064859A");

	Params::Quest_31133_C_OnDlgSelectedOption_DC26312A459498B79DDB5DBAB064859A Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_31133.Quest_31133_C.OnSuccess_006C5C2B47C151F3E10D2BBEF1D354D1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_31133_C::OnSuccess_006C5C2B47C151F3E10D2BBEF1D354D1(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_31133_C", "OnSuccess_006C5C2B47C151F3E10D2BBEF1D354D1");

	Params::Quest_31133_C_OnSuccess_006C5C2B47C151F3E10D2BBEF1D354D1 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_31133.Quest_31133_C.OnFinished_60305418499B07FB385A1BBC598B38B8
// (BlueprintCallable, BlueprintEvent)

void UQuest_31133_C::OnFinished_60305418499B07FB385A1BBC598B38B8()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_31133_C", "OnFinished_60305418499B07FB385A1BBC598B38B8");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_31133.Quest_31133_C.OnStop_60305418499B07FB385A1BBC598B38B8
// (BlueprintCallable, BlueprintEvent)

void UQuest_31133_C::OnStop_60305418499B07FB385A1BBC598B38B8()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_31133_C", "OnStop_60305418499B07FB385A1BBC598B38B8");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
