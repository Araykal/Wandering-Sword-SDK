#pragma once



// Package: Quest_5604

#include "Basic.hpp"

#include "Quest_5604_classes.hpp"
#include "Quest_5604_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5604.Quest_5604_C.ExecuteUbergraph_Quest_5604
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5604_C::ExecuteUbergraph_Quest_5604(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5604_C", "ExecuteUbergraph_Quest_5604");

	Params::Quest_5604_C_ExecuteUbergraph_Quest_5604 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5604.Quest_5604_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5604_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5604_C", "HandleFinishing");

	Params::Quest_5604_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5604.Quest_5604_C.OnFinished_2E7AEE3E457A6405FEE6378B38D01F67
// (BlueprintCallable, BlueprintEvent)

void UQuest_5604_C::OnFinished_2E7AEE3E457A6405FEE6378B38D01F67()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5604_C", "OnFinished_2E7AEE3E457A6405FEE6378B38D01F67");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5604.Quest_5604_C.OnStop_2E7AEE3E457A6405FEE6378B38D01F67
// (BlueprintCallable, BlueprintEvent)

void UQuest_5604_C::OnStop_2E7AEE3E457A6405FEE6378B38D01F67()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5604_C", "OnStop_2E7AEE3E457A6405FEE6378B38D01F67");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5604.Quest_5604_C.OnDlgClosed_DB365515457117D48ECAE4819A55BB66
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5604_C::OnDlgClosed_DB365515457117D48ECAE4819A55BB66(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5604_C", "OnDlgClosed_DB365515457117D48ECAE4819A55BB66");

	Params::Quest_5604_C_OnDlgClosed_DB365515457117D48ECAE4819A55BB66 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5604.Quest_5604_C.OnDlgSelectedOption_DB365515457117D48ECAE4819A55BB66
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5604_C::OnDlgSelectedOption_DB365515457117D48ECAE4819A55BB66(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5604_C", "OnDlgSelectedOption_DB365515457117D48ECAE4819A55BB66");

	Params::Quest_5604_C_OnDlgSelectedOption_DB365515457117D48ECAE4819A55BB66 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
