#pragma once



// Package: Quest_11965

#include "Basic.hpp"

#include "Quest_11965_classes.hpp"
#include "Quest_11965_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_11965.Quest_11965_C.ExecuteUbergraph_Quest_11965
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11965_C::ExecuteUbergraph_Quest_11965(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11965_C", "ExecuteUbergraph_Quest_11965");

	Params::Quest_11965_C_ExecuteUbergraph_Quest_11965 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11965.Quest_11965_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11965_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11965_C", "HandleFinishing");

	Params::Quest_11965_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11965.Quest_11965_C.OnFinished_B51A54034E8E252A6CEF9D93663B42F1
// (BlueprintCallable, BlueprintEvent)

void UQuest_11965_C::OnFinished_B51A54034E8E252A6CEF9D93663B42F1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11965_C", "OnFinished_B51A54034E8E252A6CEF9D93663B42F1");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_11965.Quest_11965_C.OnStop_B51A54034E8E252A6CEF9D93663B42F1
// (BlueprintCallable, BlueprintEvent)

void UQuest_11965_C::OnStop_B51A54034E8E252A6CEF9D93663B42F1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11965_C", "OnStop_B51A54034E8E252A6CEF9D93663B42F1");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_11965.Quest_11965_C.OnDlgClosed_7F7C0B264F4C08EE8C6D6591FCAC3DF2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11965_C::OnDlgClosed_7F7C0B264F4C08EE8C6D6591FCAC3DF2(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11965_C", "OnDlgClosed_7F7C0B264F4C08EE8C6D6591FCAC3DF2");

	Params::Quest_11965_C_OnDlgClosed_7F7C0B264F4C08EE8C6D6591FCAC3DF2 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11965.Quest_11965_C.OnDlgSelectedOption_7F7C0B264F4C08EE8C6D6591FCAC3DF2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11965_C::OnDlgSelectedOption_7F7C0B264F4C08EE8C6D6591FCAC3DF2(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11965_C", "OnDlgSelectedOption_7F7C0B264F4C08EE8C6D6591FCAC3DF2");

	Params::Quest_11965_C_OnDlgSelectedOption_7F7C0B264F4C08EE8C6D6591FCAC3DF2 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
