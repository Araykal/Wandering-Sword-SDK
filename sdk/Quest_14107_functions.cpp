#pragma once



// Package: Quest_14107

#include "Basic.hpp"

#include "Quest_14107_classes.hpp"
#include "Quest_14107_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_14107.Quest_14107_C.ExecuteUbergraph_Quest_14107
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_14107_C::ExecuteUbergraph_Quest_14107(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_14107_C", "ExecuteUbergraph_Quest_14107");

	Params::Quest_14107_C_ExecuteUbergraph_Quest_14107 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_14107.Quest_14107_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_14107_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_14107_C", "HandleFinishing");

	Params::Quest_14107_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_14107.Quest_14107_C.OnFinished_E5A904AA41792DEE6A093F947FA8D809
// (BlueprintCallable, BlueprintEvent)

void UQuest_14107_C::OnFinished_E5A904AA41792DEE6A093F947FA8D809()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_14107_C", "OnFinished_E5A904AA41792DEE6A093F947FA8D809");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_14107.Quest_14107_C.OnStop_E5A904AA41792DEE6A093F947FA8D809
// (BlueprintCallable, BlueprintEvent)

void UQuest_14107_C::OnStop_E5A904AA41792DEE6A093F947FA8D809()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_14107_C", "OnStop_E5A904AA41792DEE6A093F947FA8D809");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_14107.Quest_14107_C.OnDlgClosed_3E95AB854A6B266948B8D8905E8D84CE
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_14107_C::OnDlgClosed_3E95AB854A6B266948B8D8905E8D84CE(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_14107_C", "OnDlgClosed_3E95AB854A6B266948B8D8905E8D84CE");

	Params::Quest_14107_C_OnDlgClosed_3E95AB854A6B266948B8D8905E8D84CE Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_14107.Quest_14107_C.OnDlgSelectedOption_3E95AB854A6B266948B8D8905E8D84CE
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_14107_C::OnDlgSelectedOption_3E95AB854A6B266948B8D8905E8D84CE(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_14107_C", "OnDlgSelectedOption_3E95AB854A6B266948B8D8905E8D84CE");

	Params::Quest_14107_C_OnDlgSelectedOption_3E95AB854A6B266948B8D8905E8D84CE Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
