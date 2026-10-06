#pragma once



// Package: Quest_7034

#include "Basic.hpp"

#include "Quest_7034_classes.hpp"
#include "Quest_7034_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_7034.Quest_7034_C.ExecuteUbergraph_Quest_7034
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_7034_C::ExecuteUbergraph_Quest_7034(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7034_C", "ExecuteUbergraph_Quest_7034");

	Params::Quest_7034_C_ExecuteUbergraph_Quest_7034 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_7034.Quest_7034_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_7034_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7034_C", "HandleFinishing");

	Params::Quest_7034_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_7034.Quest_7034_C.OnFinished_AB9C7F92415A19E13BC19FB776AD7BFB
// (BlueprintCallable, BlueprintEvent)

void UQuest_7034_C::OnFinished_AB9C7F92415A19E13BC19FB776AD7BFB()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7034_C", "OnFinished_AB9C7F92415A19E13BC19FB776AD7BFB");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_7034.Quest_7034_C.OnStop_AB9C7F92415A19E13BC19FB776AD7BFB
// (BlueprintCallable, BlueprintEvent)

void UQuest_7034_C::OnStop_AB9C7F92415A19E13BC19FB776AD7BFB()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7034_C", "OnStop_AB9C7F92415A19E13BC19FB776AD7BFB");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_7034.Quest_7034_C.OnDlgClosed_D662E365445071E42E3C59AF0EDDA8FC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_7034_C::OnDlgClosed_D662E365445071E42E3C59AF0EDDA8FC(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7034_C", "OnDlgClosed_D662E365445071E42E3C59AF0EDDA8FC");

	Params::Quest_7034_C_OnDlgClosed_D662E365445071E42E3C59AF0EDDA8FC Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_7034.Quest_7034_C.OnDlgSelectedOption_D662E365445071E42E3C59AF0EDDA8FC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_7034_C::OnDlgSelectedOption_D662E365445071E42E3C59AF0EDDA8FC(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7034_C", "OnDlgSelectedOption_D662E365445071E42E3C59AF0EDDA8FC");

	Params::Quest_7034_C_OnDlgSelectedOption_D662E365445071E42E3C59AF0EDDA8FC Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
