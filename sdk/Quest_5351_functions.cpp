#pragma once



// Package: Quest_5351

#include "Basic.hpp"

#include "Quest_5351_classes.hpp"
#include "Quest_5351_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5351.Quest_5351_C.ExecuteUbergraph_Quest_5351
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5351_C::ExecuteUbergraph_Quest_5351(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5351_C", "ExecuteUbergraph_Quest_5351");

	Params::Quest_5351_C_ExecuteUbergraph_Quest_5351 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5351.Quest_5351_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5351_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5351_C", "HandleFinishing");

	Params::Quest_5351_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5351.Quest_5351_C.OnFinished_6839436B46B13C563CFCA689CB825464
// (BlueprintCallable, BlueprintEvent)

void UQuest_5351_C::OnFinished_6839436B46B13C563CFCA689CB825464()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5351_C", "OnFinished_6839436B46B13C563CFCA689CB825464");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5351.Quest_5351_C.OnStop_6839436B46B13C563CFCA689CB825464
// (BlueprintCallable, BlueprintEvent)

void UQuest_5351_C::OnStop_6839436B46B13C563CFCA689CB825464()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5351_C", "OnStop_6839436B46B13C563CFCA689CB825464");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5351.Quest_5351_C.OnDlgClosed_741EA13A44E3A198F1027C9F7ABC59C3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5351_C::OnDlgClosed_741EA13A44E3A198F1027C9F7ABC59C3(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5351_C", "OnDlgClosed_741EA13A44E3A198F1027C9F7ABC59C3");

	Params::Quest_5351_C_OnDlgClosed_741EA13A44E3A198F1027C9F7ABC59C3 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5351.Quest_5351_C.OnDlgSelectedOption_741EA13A44E3A198F1027C9F7ABC59C3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5351_C::OnDlgSelectedOption_741EA13A44E3A198F1027C9F7ABC59C3(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5351_C", "OnDlgSelectedOption_741EA13A44E3A198F1027C9F7ABC59C3");

	Params::Quest_5351_C_OnDlgSelectedOption_741EA13A44E3A198F1027C9F7ABC59C3 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
