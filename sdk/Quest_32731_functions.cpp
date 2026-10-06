#pragma once



// Package: Quest_32731

#include "Basic.hpp"

#include "Quest_32731_classes.hpp"
#include "Quest_32731_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_32731.Quest_32731_C.ExecuteUbergraph_Quest_32731
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_32731_C::ExecuteUbergraph_Quest_32731(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_32731_C", "ExecuteUbergraph_Quest_32731");

	Params::Quest_32731_C_ExecuteUbergraph_Quest_32731 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_32731.Quest_32731_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_32731_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_32731_C", "HandleFinishing");

	Params::Quest_32731_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_32731.Quest_32731_C.OnFinished_60572CBE4A38AD491A7473B79C79024E
// (BlueprintCallable, BlueprintEvent)

void UQuest_32731_C::OnFinished_60572CBE4A38AD491A7473B79C79024E()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_32731_C", "OnFinished_60572CBE4A38AD491A7473B79C79024E");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_32731.Quest_32731_C.OnStop_60572CBE4A38AD491A7473B79C79024E
// (BlueprintCallable, BlueprintEvent)

void UQuest_32731_C::OnStop_60572CBE4A38AD491A7473B79C79024E()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_32731_C", "OnStop_60572CBE4A38AD491A7473B79C79024E");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_32731.Quest_32731_C.OnDlgClosed_F3A1CF7547F5611F805447AA004B76DD
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_32731_C::OnDlgClosed_F3A1CF7547F5611F805447AA004B76DD(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_32731_C", "OnDlgClosed_F3A1CF7547F5611F805447AA004B76DD");

	Params::Quest_32731_C_OnDlgClosed_F3A1CF7547F5611F805447AA004B76DD Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_32731.Quest_32731_C.OnDlgSelectedOption_F3A1CF7547F5611F805447AA004B76DD
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_32731_C::OnDlgSelectedOption_F3A1CF7547F5611F805447AA004B76DD(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_32731_C", "OnDlgSelectedOption_F3A1CF7547F5611F805447AA004B76DD");

	Params::Quest_32731_C_OnDlgSelectedOption_F3A1CF7547F5611F805447AA004B76DD Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
