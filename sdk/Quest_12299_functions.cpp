#pragma once



// Package: Quest_12299

#include "Basic.hpp"

#include "Quest_12299_classes.hpp"
#include "Quest_12299_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_12299.Quest_12299_C.ExecuteUbergraph_Quest_12299
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12299_C::ExecuteUbergraph_Quest_12299(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12299_C", "ExecuteUbergraph_Quest_12299");

	Params::Quest_12299_C_ExecuteUbergraph_Quest_12299 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12299.Quest_12299_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12299_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12299_C", "HandleFinishing");

	Params::Quest_12299_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12299.Quest_12299_C.OnFinished_0A9AA73146CDC29927DA2E9FEDC5EE19
// (BlueprintCallable, BlueprintEvent)

void UQuest_12299_C::OnFinished_0A9AA73146CDC29927DA2E9FEDC5EE19()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12299_C", "OnFinished_0A9AA73146CDC29927DA2E9FEDC5EE19");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12299.Quest_12299_C.OnStop_0A9AA73146CDC29927DA2E9FEDC5EE19
// (BlueprintCallable, BlueprintEvent)

void UQuest_12299_C::OnStop_0A9AA73146CDC29927DA2E9FEDC5EE19()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12299_C", "OnStop_0A9AA73146CDC29927DA2E9FEDC5EE19");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12299.Quest_12299_C.OnDlgClosed_B4A9FC994524D6360FC9D5AC83A0F970
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12299_C::OnDlgClosed_B4A9FC994524D6360FC9D5AC83A0F970(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12299_C", "OnDlgClosed_B4A9FC994524D6360FC9D5AC83A0F970");

	Params::Quest_12299_C_OnDlgClosed_B4A9FC994524D6360FC9D5AC83A0F970 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12299.Quest_12299_C.OnDlgSelectedOption_B4A9FC994524D6360FC9D5AC83A0F970
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12299_C::OnDlgSelectedOption_B4A9FC994524D6360FC9D5AC83A0F970(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12299_C", "OnDlgSelectedOption_B4A9FC994524D6360FC9D5AC83A0F970");

	Params::Quest_12299_C_OnDlgSelectedOption_B4A9FC994524D6360FC9D5AC83A0F970 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
