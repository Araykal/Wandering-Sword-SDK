#pragma once



// Package: Quest_5690

#include "Basic.hpp"

#include "Quest_5690_classes.hpp"
#include "Quest_5690_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5690.Quest_5690_C.ExecuteUbergraph_Quest_5690
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5690_C::ExecuteUbergraph_Quest_5690(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5690_C", "ExecuteUbergraph_Quest_5690");

	Params::Quest_5690_C_ExecuteUbergraph_Quest_5690 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5690.Quest_5690_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5690_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5690_C", "HandleFinishing");

	Params::Quest_5690_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5690.Quest_5690_C.OnSuccess_9D9334554E3B15B67D78A18D96F959DC
// (BlueprintCallable, BlueprintEvent)

void UQuest_5690_C::OnSuccess_9D9334554E3B15B67D78A18D96F959DC()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5690_C", "OnSuccess_9D9334554E3B15B67D78A18D96F959DC");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5690.Quest_5690_C.OnFinished_619869704753FC18D13E1BB38BBF1E38
// (BlueprintCallable, BlueprintEvent)

void UQuest_5690_C::OnFinished_619869704753FC18D13E1BB38BBF1E38()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5690_C", "OnFinished_619869704753FC18D13E1BB38BBF1E38");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5690.Quest_5690_C.OnStop_619869704753FC18D13E1BB38BBF1E38
// (BlueprintCallable, BlueprintEvent)

void UQuest_5690_C::OnStop_619869704753FC18D13E1BB38BBF1E38()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5690_C", "OnStop_619869704753FC18D13E1BB38BBF1E38");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5690.Quest_5690_C.OnDlgClosed_C4252652467A83C2D8A6D49562BBAFF6
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5690_C::OnDlgClosed_C4252652467A83C2D8A6D49562BBAFF6(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5690_C", "OnDlgClosed_C4252652467A83C2D8A6D49562BBAFF6");

	Params::Quest_5690_C_OnDlgClosed_C4252652467A83C2D8A6D49562BBAFF6 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5690.Quest_5690_C.OnDlgSelectedOption_C4252652467A83C2D8A6D49562BBAFF6
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5690_C::OnDlgSelectedOption_C4252652467A83C2D8A6D49562BBAFF6(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5690_C", "OnDlgSelectedOption_C4252652467A83C2D8A6D49562BBAFF6");

	Params::Quest_5690_C_OnDlgSelectedOption_C4252652467A83C2D8A6D49562BBAFF6 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
