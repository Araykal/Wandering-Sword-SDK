#pragma once



// Package: Quest_7091

#include "Basic.hpp"

#include "Quest_7091_classes.hpp"
#include "Quest_7091_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_7091.Quest_7091_C.ExecuteUbergraph_Quest_7091
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_7091_C::ExecuteUbergraph_Quest_7091(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7091_C", "ExecuteUbergraph_Quest_7091");

	Params::Quest_7091_C_ExecuteUbergraph_Quest_7091 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_7091.Quest_7091_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_7091_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7091_C", "HandleFinishing");

	Params::Quest_7091_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_7091.Quest_7091_C.OnFinished_D059A6B54BFA5AE7EE1B12ACD2FCE311
// (BlueprintCallable, BlueprintEvent)

void UQuest_7091_C::OnFinished_D059A6B54BFA5AE7EE1B12ACD2FCE311()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7091_C", "OnFinished_D059A6B54BFA5AE7EE1B12ACD2FCE311");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_7091.Quest_7091_C.OnStop_D059A6B54BFA5AE7EE1B12ACD2FCE311
// (BlueprintCallable, BlueprintEvent)

void UQuest_7091_C::OnStop_D059A6B54BFA5AE7EE1B12ACD2FCE311()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7091_C", "OnStop_D059A6B54BFA5AE7EE1B12ACD2FCE311");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_7091.Quest_7091_C.OnDlgClosed_11C0490E4F679DB3F60A6FAFCA283366
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_7091_C::OnDlgClosed_11C0490E4F679DB3F60A6FAFCA283366(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7091_C", "OnDlgClosed_11C0490E4F679DB3F60A6FAFCA283366");

	Params::Quest_7091_C_OnDlgClosed_11C0490E4F679DB3F60A6FAFCA283366 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_7091.Quest_7091_C.OnDlgSelectedOption_11C0490E4F679DB3F60A6FAFCA283366
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_7091_C::OnDlgSelectedOption_11C0490E4F679DB3F60A6FAFCA283366(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7091_C", "OnDlgSelectedOption_11C0490E4F679DB3F60A6FAFCA283366");

	Params::Quest_7091_C_OnDlgSelectedOption_11C0490E4F679DB3F60A6FAFCA283366 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
