#pragma once



// Package: Quest_17556

#include "Basic.hpp"

#include "Quest_17556_classes.hpp"
#include "Quest_17556_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_17556.Quest_17556_C.ExecuteUbergraph_Quest_17556
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_17556_C::ExecuteUbergraph_Quest_17556(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_17556_C", "ExecuteUbergraph_Quest_17556");

	Params::Quest_17556_C_ExecuteUbergraph_Quest_17556 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_17556.Quest_17556_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_17556_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_17556_C", "HandleFinishing");

	Params::Quest_17556_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_17556.Quest_17556_C.OnDlgClosed_5C558CEE42509575072102910B54E86C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_17556_C::OnDlgClosed_5C558CEE42509575072102910B54E86C(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_17556_C", "OnDlgClosed_5C558CEE42509575072102910B54E86C");

	Params::Quest_17556_C_OnDlgClosed_5C558CEE42509575072102910B54E86C Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_17556.Quest_17556_C.OnDlgSelectedOption_5C558CEE42509575072102910B54E86C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_17556_C::OnDlgSelectedOption_5C558CEE42509575072102910B54E86C(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_17556_C", "OnDlgSelectedOption_5C558CEE42509575072102910B54E86C");

	Params::Quest_17556_C_OnDlgSelectedOption_5C558CEE42509575072102910B54E86C Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_17556.Quest_17556_C.OnFinished_D8B97304452EB96EFC1D1BBFBA076974
// (BlueprintCallable, BlueprintEvent)

void UQuest_17556_C::OnFinished_D8B97304452EB96EFC1D1BBFBA076974()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_17556_C", "OnFinished_D8B97304452EB96EFC1D1BBFBA076974");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_17556.Quest_17556_C.OnStop_D8B97304452EB96EFC1D1BBFBA076974
// (BlueprintCallable, BlueprintEvent)

void UQuest_17556_C::OnStop_D8B97304452EB96EFC1D1BBFBA076974()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_17556_C", "OnStop_D8B97304452EB96EFC1D1BBFBA076974");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
