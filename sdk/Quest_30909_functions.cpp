#pragma once



// Package: Quest_30909

#include "Basic.hpp"

#include "Quest_30909_classes.hpp"
#include "Quest_30909_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_30909.Quest_30909_C.ExecuteUbergraph_Quest_30909
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30909_C::ExecuteUbergraph_Quest_30909(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30909_C", "ExecuteUbergraph_Quest_30909");

	Params::Quest_30909_C_ExecuteUbergraph_Quest_30909 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30909.Quest_30909_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30909_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30909_C", "HandleFinishing");

	Params::Quest_30909_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30909.Quest_30909_C.OnFinished_642F6CE746F3FFCCFEAFDA9CA5511D63
// (BlueprintCallable, BlueprintEvent)

void UQuest_30909_C::OnFinished_642F6CE746F3FFCCFEAFDA9CA5511D63()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30909_C", "OnFinished_642F6CE746F3FFCCFEAFDA9CA5511D63");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30909.Quest_30909_C.OnStop_642F6CE746F3FFCCFEAFDA9CA5511D63
// (BlueprintCallable, BlueprintEvent)

void UQuest_30909_C::OnStop_642F6CE746F3FFCCFEAFDA9CA5511D63()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30909_C", "OnStop_642F6CE746F3FFCCFEAFDA9CA5511D63");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30909.Quest_30909_C.OnDlgClosed_2C96BFC441DF639C0FDB9D96F6E30461
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30909_C::OnDlgClosed_2C96BFC441DF639C0FDB9D96F6E30461(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30909_C", "OnDlgClosed_2C96BFC441DF639C0FDB9D96F6E30461");

	Params::Quest_30909_C_OnDlgClosed_2C96BFC441DF639C0FDB9D96F6E30461 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30909.Quest_30909_C.OnDlgSelectedOption_2C96BFC441DF639C0FDB9D96F6E30461
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30909_C::OnDlgSelectedOption_2C96BFC441DF639C0FDB9D96F6E30461(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30909_C", "OnDlgSelectedOption_2C96BFC441DF639C0FDB9D96F6E30461");

	Params::Quest_30909_C_OnDlgSelectedOption_2C96BFC441DF639C0FDB9D96F6E30461 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
