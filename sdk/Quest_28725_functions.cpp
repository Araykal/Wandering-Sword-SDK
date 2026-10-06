#pragma once



// Package: Quest_28725

#include "Basic.hpp"

#include "Quest_28725_classes.hpp"
#include "Quest_28725_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_28725.Quest_28725_C.ExecuteUbergraph_Quest_28725
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28725_C::ExecuteUbergraph_Quest_28725(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28725_C", "ExecuteUbergraph_Quest_28725");

	Params::Quest_28725_C_ExecuteUbergraph_Quest_28725 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28725.Quest_28725_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28725_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28725_C", "HandleFinishing");

	Params::Quest_28725_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28725.Quest_28725_C.OnFinished_79513D4445C7B0BB0C6C7D8650E1631B
// (BlueprintCallable, BlueprintEvent)

void UQuest_28725_C::OnFinished_79513D4445C7B0BB0C6C7D8650E1631B()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28725_C", "OnFinished_79513D4445C7B0BB0C6C7D8650E1631B");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28725.Quest_28725_C.OnStop_79513D4445C7B0BB0C6C7D8650E1631B
// (BlueprintCallable, BlueprintEvent)

void UQuest_28725_C::OnStop_79513D4445C7B0BB0C6C7D8650E1631B()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28725_C", "OnStop_79513D4445C7B0BB0C6C7D8650E1631B");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28725.Quest_28725_C.OnDlgClosed_0AC99CDC40637B7A0C019687ACB293FC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28725_C::OnDlgClosed_0AC99CDC40637B7A0C019687ACB293FC(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28725_C", "OnDlgClosed_0AC99CDC40637B7A0C019687ACB293FC");

	Params::Quest_28725_C_OnDlgClosed_0AC99CDC40637B7A0C019687ACB293FC Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28725.Quest_28725_C.OnDlgSelectedOption_0AC99CDC40637B7A0C019687ACB293FC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28725_C::OnDlgSelectedOption_0AC99CDC40637B7A0C019687ACB293FC(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28725_C", "OnDlgSelectedOption_0AC99CDC40637B7A0C019687ACB293FC");

	Params::Quest_28725_C_OnDlgSelectedOption_0AC99CDC40637B7A0C019687ACB293FC Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
