#pragma once



// Package: Quest_11607

#include "Basic.hpp"

#include "Quest_11607_classes.hpp"
#include "Quest_11607_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_11607.Quest_11607_C.ExecuteUbergraph_Quest_11607
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11607_C::ExecuteUbergraph_Quest_11607(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11607_C", "ExecuteUbergraph_Quest_11607");

	Params::Quest_11607_C_ExecuteUbergraph_Quest_11607 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11607.Quest_11607_C.CustomEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11607_C::CustomEvent(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11607_C", "CustomEvent");

	Params::Quest_11607_C_CustomEvent Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11607.Quest_11607_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11607_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11607_C", "HandleFinishing");

	Params::Quest_11607_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11607.Quest_11607_C.OnFinished_282FA8324D6D3464E3B66885A45EA7B1
// (BlueprintCallable, BlueprintEvent)

void UQuest_11607_C::OnFinished_282FA8324D6D3464E3B66885A45EA7B1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11607_C", "OnFinished_282FA8324D6D3464E3B66885A45EA7B1");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_11607.Quest_11607_C.OnStop_282FA8324D6D3464E3B66885A45EA7B1
// (BlueprintCallable, BlueprintEvent)

void UQuest_11607_C::OnStop_282FA8324D6D3464E3B66885A45EA7B1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11607_C", "OnStop_282FA8324D6D3464E3B66885A45EA7B1");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_11607.Quest_11607_C.OnDlgClosed_9A4A05E149B5A4A373A225BDEBFD949C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11607_C::OnDlgClosed_9A4A05E149B5A4A373A225BDEBFD949C(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11607_C", "OnDlgClosed_9A4A05E149B5A4A373A225BDEBFD949C");

	Params::Quest_11607_C_OnDlgClosed_9A4A05E149B5A4A373A225BDEBFD949C Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11607.Quest_11607_C.OnDlgSelectedOption_9A4A05E149B5A4A373A225BDEBFD949C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11607_C::OnDlgSelectedOption_9A4A05E149B5A4A373A225BDEBFD949C(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11607_C", "OnDlgSelectedOption_9A4A05E149B5A4A373A225BDEBFD949C");

	Params::Quest_11607_C_OnDlgSelectedOption_9A4A05E149B5A4A373A225BDEBFD949C Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
