#pragma once



// Package: Quest_28966

#include "Basic.hpp"

#include "Quest_28966_classes.hpp"
#include "Quest_28966_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_28966.Quest_28966_C.ExecuteUbergraph_Quest_28966
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28966_C::ExecuteUbergraph_Quest_28966(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28966_C", "ExecuteUbergraph_Quest_28966");

	Params::Quest_28966_C_ExecuteUbergraph_Quest_28966 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28966.Quest_28966_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28966_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28966_C", "HandleFinishing");

	Params::Quest_28966_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28966.Quest_28966_C.OnFinished_01FAA29549BBF536376E7BB4238905E4
// (BlueprintCallable, BlueprintEvent)

void UQuest_28966_C::OnFinished_01FAA29549BBF536376E7BB4238905E4()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28966_C", "OnFinished_01FAA29549BBF536376E7BB4238905E4");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28966.Quest_28966_C.OnStop_01FAA29549BBF536376E7BB4238905E4
// (BlueprintCallable, BlueprintEvent)

void UQuest_28966_C::OnStop_01FAA29549BBF536376E7BB4238905E4()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28966_C", "OnStop_01FAA29549BBF536376E7BB4238905E4");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28966.Quest_28966_C.OnDlgClosed_44997E9547BCA12D60BE278E487932AB
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28966_C::OnDlgClosed_44997E9547BCA12D60BE278E487932AB(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28966_C", "OnDlgClosed_44997E9547BCA12D60BE278E487932AB");

	Params::Quest_28966_C_OnDlgClosed_44997E9547BCA12D60BE278E487932AB Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28966.Quest_28966_C.OnDlgSelectedOption_44997E9547BCA12D60BE278E487932AB
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28966_C::OnDlgSelectedOption_44997E9547BCA12D60BE278E487932AB(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28966_C", "OnDlgSelectedOption_44997E9547BCA12D60BE278E487932AB");

	Params::Quest_28966_C_OnDlgSelectedOption_44997E9547BCA12D60BE278E487932AB Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
