#pragma once



// Package: Quest_5294

#include "Basic.hpp"

#include "Quest_5294_classes.hpp"
#include "Quest_5294_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5294.Quest_5294_C.ExecuteUbergraph_Quest_5294
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5294_C::ExecuteUbergraph_Quest_5294(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5294_C", "ExecuteUbergraph_Quest_5294");

	Params::Quest_5294_C_ExecuteUbergraph_Quest_5294 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5294.Quest_5294_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5294_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5294_C", "HandleFinishing");

	Params::Quest_5294_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5294.Quest_5294_C.OnFinished_FCA9DD2F4D4621AEA4E10395C5C3BBD9
// (BlueprintCallable, BlueprintEvent)

void UQuest_5294_C::OnFinished_FCA9DD2F4D4621AEA4E10395C5C3BBD9()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5294_C", "OnFinished_FCA9DD2F4D4621AEA4E10395C5C3BBD9");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5294.Quest_5294_C.OnStop_FCA9DD2F4D4621AEA4E10395C5C3BBD9
// (BlueprintCallable, BlueprintEvent)

void UQuest_5294_C::OnStop_FCA9DD2F4D4621AEA4E10395C5C3BBD9()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5294_C", "OnStop_FCA9DD2F4D4621AEA4E10395C5C3BBD9");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5294.Quest_5294_C.OnDlgClosed_983CFEED4DF1080DBAE7CE90B245F21C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5294_C::OnDlgClosed_983CFEED4DF1080DBAE7CE90B245F21C(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5294_C", "OnDlgClosed_983CFEED4DF1080DBAE7CE90B245F21C");

	Params::Quest_5294_C_OnDlgClosed_983CFEED4DF1080DBAE7CE90B245F21C Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5294.Quest_5294_C.OnDlgSelectedOption_983CFEED4DF1080DBAE7CE90B245F21C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5294_C::OnDlgSelectedOption_983CFEED4DF1080DBAE7CE90B245F21C(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5294_C", "OnDlgSelectedOption_983CFEED4DF1080DBAE7CE90B245F21C");

	Params::Quest_5294_C_OnDlgSelectedOption_983CFEED4DF1080DBAE7CE90B245F21C Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
