#pragma once



// Package: Quest_28507

#include "Basic.hpp"

#include "Quest_28507_classes.hpp"
#include "Quest_28507_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_28507.Quest_28507_C.ExecuteUbergraph_Quest_28507
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28507_C::ExecuteUbergraph_Quest_28507(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28507_C", "ExecuteUbergraph_Quest_28507");

	Params::Quest_28507_C_ExecuteUbergraph_Quest_28507 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28507.Quest_28507_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28507_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28507_C", "HandleFinishing");

	Params::Quest_28507_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28507.Quest_28507_C.OnFinished_26255BE347CC0B706D50BA8EF87C4BE3
// (BlueprintCallable, BlueprintEvent)

void UQuest_28507_C::OnFinished_26255BE347CC0B706D50BA8EF87C4BE3()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28507_C", "OnFinished_26255BE347CC0B706D50BA8EF87C4BE3");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28507.Quest_28507_C.OnStop_26255BE347CC0B706D50BA8EF87C4BE3
// (BlueprintCallable, BlueprintEvent)

void UQuest_28507_C::OnStop_26255BE347CC0B706D50BA8EF87C4BE3()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28507_C", "OnStop_26255BE347CC0B706D50BA8EF87C4BE3");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28507.Quest_28507_C.OnDlgClosed_32BD2D134C984A93063B2E94DD210DA7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28507_C::OnDlgClosed_32BD2D134C984A93063B2E94DD210DA7(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28507_C", "OnDlgClosed_32BD2D134C984A93063B2E94DD210DA7");

	Params::Quest_28507_C_OnDlgClosed_32BD2D134C984A93063B2E94DD210DA7 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28507.Quest_28507_C.OnDlgSelectedOption_32BD2D134C984A93063B2E94DD210DA7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28507_C::OnDlgSelectedOption_32BD2D134C984A93063B2E94DD210DA7(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28507_C", "OnDlgSelectedOption_32BD2D134C984A93063B2E94DD210DA7");

	Params::Quest_28507_C_OnDlgSelectedOption_32BD2D134C984A93063B2E94DD210DA7 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
