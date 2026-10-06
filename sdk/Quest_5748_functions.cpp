#pragma once



// Package: Quest_5748

#include "Basic.hpp"

#include "Quest_5748_classes.hpp"
#include "Quest_5748_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5748.Quest_5748_C.ExecuteUbergraph_Quest_5748
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5748_C::ExecuteUbergraph_Quest_5748(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5748_C", "ExecuteUbergraph_Quest_5748");

	Params::Quest_5748_C_ExecuteUbergraph_Quest_5748 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5748.Quest_5748_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5748_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5748_C", "HandleFinishing");

	Params::Quest_5748_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5748.Quest_5748_C.OnFinished_7B2C39AC481B7296D32A959277993FA0
// (BlueprintCallable, BlueprintEvent)

void UQuest_5748_C::OnFinished_7B2C39AC481B7296D32A959277993FA0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5748_C", "OnFinished_7B2C39AC481B7296D32A959277993FA0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5748.Quest_5748_C.OnStop_7B2C39AC481B7296D32A959277993FA0
// (BlueprintCallable, BlueprintEvent)

void UQuest_5748_C::OnStop_7B2C39AC481B7296D32A959277993FA0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5748_C", "OnStop_7B2C39AC481B7296D32A959277993FA0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5748.Quest_5748_C.OnDlgClosed_1A852C2D489A19EB5C262AA02E56E09B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5748_C::OnDlgClosed_1A852C2D489A19EB5C262AA02E56E09B(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5748_C", "OnDlgClosed_1A852C2D489A19EB5C262AA02E56E09B");

	Params::Quest_5748_C_OnDlgClosed_1A852C2D489A19EB5C262AA02E56E09B Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5748.Quest_5748_C.OnDlgSelectedOption_1A852C2D489A19EB5C262AA02E56E09B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5748_C::OnDlgSelectedOption_1A852C2D489A19EB5C262AA02E56E09B(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5748_C", "OnDlgSelectedOption_1A852C2D489A19EB5C262AA02E56E09B");

	Params::Quest_5748_C_OnDlgSelectedOption_1A852C2D489A19EB5C262AA02E56E09B Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
