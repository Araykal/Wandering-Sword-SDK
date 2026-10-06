#pragma once



// Package: Quest_28221

#include "Basic.hpp"

#include "Quest_28221_classes.hpp"
#include "Quest_28221_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_28221.Quest_28221_C.ExecuteUbergraph_Quest_28221
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28221_C::ExecuteUbergraph_Quest_28221(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28221_C", "ExecuteUbergraph_Quest_28221");

	Params::Quest_28221_C_ExecuteUbergraph_Quest_28221 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28221.Quest_28221_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28221_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28221_C", "HandleFinishing");

	Params::Quest_28221_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28221.Quest_28221_C.OnSuccess_FDBCE1AD4F0A853653153BA37A55CE8D
// (BlueprintCallable, BlueprintEvent)

void UQuest_28221_C::OnSuccess_FDBCE1AD4F0A853653153BA37A55CE8D()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28221_C", "OnSuccess_FDBCE1AD4F0A853653153BA37A55CE8D");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28221.Quest_28221_C.OnFinished_0D0FEFC24D03DC0BF3E97AB1A1988950
// (BlueprintCallable, BlueprintEvent)

void UQuest_28221_C::OnFinished_0D0FEFC24D03DC0BF3E97AB1A1988950()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28221_C", "OnFinished_0D0FEFC24D03DC0BF3E97AB1A1988950");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28221.Quest_28221_C.OnStop_0D0FEFC24D03DC0BF3E97AB1A1988950
// (BlueprintCallable, BlueprintEvent)

void UQuest_28221_C::OnStop_0D0FEFC24D03DC0BF3E97AB1A1988950()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28221_C", "OnStop_0D0FEFC24D03DC0BF3E97AB1A1988950");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28221.Quest_28221_C.OnDlgClosed_12BC591140169698FFC1C38E81893926
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28221_C::OnDlgClosed_12BC591140169698FFC1C38E81893926(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28221_C", "OnDlgClosed_12BC591140169698FFC1C38E81893926");

	Params::Quest_28221_C_OnDlgClosed_12BC591140169698FFC1C38E81893926 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28221.Quest_28221_C.OnDlgSelectedOption_12BC591140169698FFC1C38E81893926
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28221_C::OnDlgSelectedOption_12BC591140169698FFC1C38E81893926(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28221_C", "OnDlgSelectedOption_12BC591140169698FFC1C38E81893926");

	Params::Quest_28221_C_OnDlgSelectedOption_12BC591140169698FFC1C38E81893926 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
