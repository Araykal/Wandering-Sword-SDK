#pragma once



// Package: Quest_28778

#include "Basic.hpp"

#include "Quest_28778_classes.hpp"
#include "Quest_28778_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_28778.Quest_28778_C.ExecuteUbergraph_Quest_28778
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28778_C::ExecuteUbergraph_Quest_28778(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28778_C", "ExecuteUbergraph_Quest_28778");

	Params::Quest_28778_C_ExecuteUbergraph_Quest_28778 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28778.Quest_28778_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28778_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28778_C", "HandleFinishing");

	Params::Quest_28778_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28778.Quest_28778_C.OnSuccess_1B4DA03E442F98C318EECEAA55D59D1A
// (BlueprintCallable, BlueprintEvent)

void UQuest_28778_C::OnSuccess_1B4DA03E442F98C318EECEAA55D59D1A()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28778_C", "OnSuccess_1B4DA03E442F98C318EECEAA55D59D1A");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28778.Quest_28778_C.OnFinished_0E9C89FC4E653600F18D11B52628B23A
// (BlueprintCallable, BlueprintEvent)

void UQuest_28778_C::OnFinished_0E9C89FC4E653600F18D11B52628B23A()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28778_C", "OnFinished_0E9C89FC4E653600F18D11B52628B23A");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28778.Quest_28778_C.OnStop_0E9C89FC4E653600F18D11B52628B23A
// (BlueprintCallable, BlueprintEvent)

void UQuest_28778_C::OnStop_0E9C89FC4E653600F18D11B52628B23A()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28778_C", "OnStop_0E9C89FC4E653600F18D11B52628B23A");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28778.Quest_28778_C.OnDlgClosed_BCF0DF324292170AA001ACBC34D2351F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28778_C::OnDlgClosed_BCF0DF324292170AA001ACBC34D2351F(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28778_C", "OnDlgClosed_BCF0DF324292170AA001ACBC34D2351F");

	Params::Quest_28778_C_OnDlgClosed_BCF0DF324292170AA001ACBC34D2351F Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28778.Quest_28778_C.OnDlgSelectedOption_BCF0DF324292170AA001ACBC34D2351F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28778_C::OnDlgSelectedOption_BCF0DF324292170AA001ACBC34D2351F(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28778_C", "OnDlgSelectedOption_BCF0DF324292170AA001ACBC34D2351F");

	Params::Quest_28778_C_OnDlgSelectedOption_BCF0DF324292170AA001ACBC34D2351F Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
