#pragma once



// Package: Quest_12315

#include "Basic.hpp"

#include "Quest_12315_classes.hpp"
#include "Quest_12315_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_12315.Quest_12315_C.ExecuteUbergraph_Quest_12315
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12315_C::ExecuteUbergraph_Quest_12315(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12315_C", "ExecuteUbergraph_Quest_12315");

	Params::Quest_12315_C_ExecuteUbergraph_Quest_12315 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12315.Quest_12315_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12315_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12315_C", "HandleFinishing");

	Params::Quest_12315_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12315.Quest_12315_C.OnFinished_16087D8E4AA06B5221844CBDA4BD86EC
// (BlueprintCallable, BlueprintEvent)

void UQuest_12315_C::OnFinished_16087D8E4AA06B5221844CBDA4BD86EC()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12315_C", "OnFinished_16087D8E4AA06B5221844CBDA4BD86EC");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12315.Quest_12315_C.OnStop_16087D8E4AA06B5221844CBDA4BD86EC
// (BlueprintCallable, BlueprintEvent)

void UQuest_12315_C::OnStop_16087D8E4AA06B5221844CBDA4BD86EC()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12315_C", "OnStop_16087D8E4AA06B5221844CBDA4BD86EC");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12315.Quest_12315_C.OnDlgClosed_09485344486E6630A3973599A6D01065
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12315_C::OnDlgClosed_09485344486E6630A3973599A6D01065(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12315_C", "OnDlgClosed_09485344486E6630A3973599A6D01065");

	Params::Quest_12315_C_OnDlgClosed_09485344486E6630A3973599A6D01065 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12315.Quest_12315_C.OnDlgSelectedOption_09485344486E6630A3973599A6D01065
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12315_C::OnDlgSelectedOption_09485344486E6630A3973599A6D01065(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12315_C", "OnDlgSelectedOption_09485344486E6630A3973599A6D01065");

	Params::Quest_12315_C_OnDlgSelectedOption_09485344486E6630A3973599A6D01065 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
