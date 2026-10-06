#pragma once



// Package: Quest_5230

#include "Basic.hpp"

#include "Quest_5230_classes.hpp"
#include "Quest_5230_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5230.Quest_5230_C.ExecuteUbergraph_Quest_5230
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5230_C::ExecuteUbergraph_Quest_5230(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5230_C", "ExecuteUbergraph_Quest_5230");

	Params::Quest_5230_C_ExecuteUbergraph_Quest_5230 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5230.Quest_5230_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5230_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5230_C", "HandleFinishing");

	Params::Quest_5230_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5230.Quest_5230_C.OnFinished_AC353F2842A4CE3F1964D69BCC818B28
// (BlueprintCallable, BlueprintEvent)

void UQuest_5230_C::OnFinished_AC353F2842A4CE3F1964D69BCC818B28()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5230_C", "OnFinished_AC353F2842A4CE3F1964D69BCC818B28");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5230.Quest_5230_C.OnStop_AC353F2842A4CE3F1964D69BCC818B28
// (BlueprintCallable, BlueprintEvent)

void UQuest_5230_C::OnStop_AC353F2842A4CE3F1964D69BCC818B28()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5230_C", "OnStop_AC353F2842A4CE3F1964D69BCC818B28");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5230.Quest_5230_C.OnDlgClosed_655A5F42407426F3F9CC65824EE17283
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5230_C::OnDlgClosed_655A5F42407426F3F9CC65824EE17283(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5230_C", "OnDlgClosed_655A5F42407426F3F9CC65824EE17283");

	Params::Quest_5230_C_OnDlgClosed_655A5F42407426F3F9CC65824EE17283 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5230.Quest_5230_C.OnDlgSelectedOption_655A5F42407426F3F9CC65824EE17283
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5230_C::OnDlgSelectedOption_655A5F42407426F3F9CC65824EE17283(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5230_C", "OnDlgSelectedOption_655A5F42407426F3F9CC65824EE17283");

	Params::Quest_5230_C_OnDlgSelectedOption_655A5F42407426F3F9CC65824EE17283 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
