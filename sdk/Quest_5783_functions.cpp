#pragma once



// Package: Quest_5783

#include "Basic.hpp"

#include "Quest_5783_classes.hpp"
#include "Quest_5783_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5783.Quest_5783_C.ExecuteUbergraph_Quest_5783
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5783_C::ExecuteUbergraph_Quest_5783(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5783_C", "ExecuteUbergraph_Quest_5783");

	Params::Quest_5783_C_ExecuteUbergraph_Quest_5783 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5783.Quest_5783_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5783_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5783_C", "HandleFinishing");

	Params::Quest_5783_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5783.Quest_5783_C.OnSuccess_117A7B804FC5CB8660B16CA515BE218F
// (BlueprintCallable, BlueprintEvent)

void UQuest_5783_C::OnSuccess_117A7B804FC5CB8660B16CA515BE218F()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5783_C", "OnSuccess_117A7B804FC5CB8660B16CA515BE218F");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5783.Quest_5783_C.OnFinished_CA6FC7CB4D358751B8B44D8E96400E3E
// (BlueprintCallable, BlueprintEvent)

void UQuest_5783_C::OnFinished_CA6FC7CB4D358751B8B44D8E96400E3E()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5783_C", "OnFinished_CA6FC7CB4D358751B8B44D8E96400E3E");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5783.Quest_5783_C.OnStop_CA6FC7CB4D358751B8B44D8E96400E3E
// (BlueprintCallable, BlueprintEvent)

void UQuest_5783_C::OnStop_CA6FC7CB4D358751B8B44D8E96400E3E()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5783_C", "OnStop_CA6FC7CB4D358751B8B44D8E96400E3E");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5783.Quest_5783_C.OnDlgClosed_E17432B247B4ED3868BEA09125EAF5FC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5783_C::OnDlgClosed_E17432B247B4ED3868BEA09125EAF5FC(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5783_C", "OnDlgClosed_E17432B247B4ED3868BEA09125EAF5FC");

	Params::Quest_5783_C_OnDlgClosed_E17432B247B4ED3868BEA09125EAF5FC Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5783.Quest_5783_C.OnDlgSelectedOption_E17432B247B4ED3868BEA09125EAF5FC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5783_C::OnDlgSelectedOption_E17432B247B4ED3868BEA09125EAF5FC(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5783_C", "OnDlgSelectedOption_E17432B247B4ED3868BEA09125EAF5FC");

	Params::Quest_5783_C_OnDlgSelectedOption_E17432B247B4ED3868BEA09125EAF5FC Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
