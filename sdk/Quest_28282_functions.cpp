#pragma once



// Package: Quest_28282

#include "Basic.hpp"

#include "Quest_28282_classes.hpp"
#include "Quest_28282_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_28282.Quest_28282_C.ExecuteUbergraph_Quest_28282
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28282_C::ExecuteUbergraph_Quest_28282(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28282_C", "ExecuteUbergraph_Quest_28282");

	Params::Quest_28282_C_ExecuteUbergraph_Quest_28282 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28282.Quest_28282_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28282_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28282_C", "HandleFinishing");

	Params::Quest_28282_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28282.Quest_28282_C.OnFinished_FFFA68864F18B1ECF1694A86CECF514D
// (BlueprintCallable, BlueprintEvent)

void UQuest_28282_C::OnFinished_FFFA68864F18B1ECF1694A86CECF514D()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28282_C", "OnFinished_FFFA68864F18B1ECF1694A86CECF514D");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28282.Quest_28282_C.OnStop_FFFA68864F18B1ECF1694A86CECF514D
// (BlueprintCallable, BlueprintEvent)

void UQuest_28282_C::OnStop_FFFA68864F18B1ECF1694A86CECF514D()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28282_C", "OnStop_FFFA68864F18B1ECF1694A86CECF514D");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28282.Quest_28282_C.OnDlgClosed_6AB1B14848F102B61CC95ABD352C6A15
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28282_C::OnDlgClosed_6AB1B14848F102B61CC95ABD352C6A15(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28282_C", "OnDlgClosed_6AB1B14848F102B61CC95ABD352C6A15");

	Params::Quest_28282_C_OnDlgClosed_6AB1B14848F102B61CC95ABD352C6A15 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28282.Quest_28282_C.OnDlgSelectedOption_6AB1B14848F102B61CC95ABD352C6A15
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28282_C::OnDlgSelectedOption_6AB1B14848F102B61CC95ABD352C6A15(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28282_C", "OnDlgSelectedOption_6AB1B14848F102B61CC95ABD352C6A15");

	Params::Quest_28282_C_OnDlgSelectedOption_6AB1B14848F102B61CC95ABD352C6A15 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
