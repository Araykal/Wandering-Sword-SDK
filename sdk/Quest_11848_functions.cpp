#pragma once



// Package: Quest_11848

#include "Basic.hpp"

#include "Quest_11848_classes.hpp"
#include "Quest_11848_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_11848.Quest_11848_C.ExecuteUbergraph_Quest_11848
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11848_C::ExecuteUbergraph_Quest_11848(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11848_C", "ExecuteUbergraph_Quest_11848");

	Params::Quest_11848_C_ExecuteUbergraph_Quest_11848 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11848.Quest_11848_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11848_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11848_C", "HandleFinishing");

	Params::Quest_11848_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11848.Quest_11848_C.OnFinished_3215525649E2771E9FA4D18D1C4CB96D
// (BlueprintCallable, BlueprintEvent)

void UQuest_11848_C::OnFinished_3215525649E2771E9FA4D18D1C4CB96D()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11848_C", "OnFinished_3215525649E2771E9FA4D18D1C4CB96D");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_11848.Quest_11848_C.OnStop_3215525649E2771E9FA4D18D1C4CB96D
// (BlueprintCallable, BlueprintEvent)

void UQuest_11848_C::OnStop_3215525649E2771E9FA4D18D1C4CB96D()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11848_C", "OnStop_3215525649E2771E9FA4D18D1C4CB96D");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_11848.Quest_11848_C.OnDlgClosed_2E73FB79499E2185483908B4ACA82664
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11848_C::OnDlgClosed_2E73FB79499E2185483908B4ACA82664(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11848_C", "OnDlgClosed_2E73FB79499E2185483908B4ACA82664");

	Params::Quest_11848_C_OnDlgClosed_2E73FB79499E2185483908B4ACA82664 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11848.Quest_11848_C.OnDlgSelectedOption_2E73FB79499E2185483908B4ACA82664
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11848_C::OnDlgSelectedOption_2E73FB79499E2185483908B4ACA82664(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11848_C", "OnDlgSelectedOption_2E73FB79499E2185483908B4ACA82664");

	Params::Quest_11848_C_OnDlgSelectedOption_2E73FB79499E2185483908B4ACA82664 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11848.Quest_11848_C.OnSuccess_CEB008434EC6E8E49658E498C2D6A092
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_11848_C::OnSuccess_CEB008434EC6E8E49658E498C2D6A092(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11848_C", "OnSuccess_CEB008434EC6E8E49658E498C2D6A092");

	Params::Quest_11848_C_OnSuccess_CEB008434EC6E8E49658E498C2D6A092 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
