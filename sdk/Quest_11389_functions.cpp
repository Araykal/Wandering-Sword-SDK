#pragma once



// Package: Quest_11389

#include "Basic.hpp"

#include "Quest_11389_classes.hpp"
#include "Quest_11389_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_11389.Quest_11389_C.ExecuteUbergraph_Quest_11389
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11389_C::ExecuteUbergraph_Quest_11389(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11389_C", "ExecuteUbergraph_Quest_11389");

	Params::Quest_11389_C_ExecuteUbergraph_Quest_11389 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11389.Quest_11389_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11389_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11389_C", "HandleFinishing");

	Params::Quest_11389_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11389.Quest_11389_C.OnFinished_318815274371CDE78C844680C113D71C
// (BlueprintCallable, BlueprintEvent)

void UQuest_11389_C::OnFinished_318815274371CDE78C844680C113D71C()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11389_C", "OnFinished_318815274371CDE78C844680C113D71C");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_11389.Quest_11389_C.OnStop_318815274371CDE78C844680C113D71C
// (BlueprintCallable, BlueprintEvent)

void UQuest_11389_C::OnStop_318815274371CDE78C844680C113D71C()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11389_C", "OnStop_318815274371CDE78C844680C113D71C");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_11389.Quest_11389_C.OnDlgClosed_AB5391584E9797E2C5DFBCA9ECAC4170
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11389_C::OnDlgClosed_AB5391584E9797E2C5DFBCA9ECAC4170(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11389_C", "OnDlgClosed_AB5391584E9797E2C5DFBCA9ECAC4170");

	Params::Quest_11389_C_OnDlgClosed_AB5391584E9797E2C5DFBCA9ECAC4170 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11389.Quest_11389_C.OnDlgSelectedOption_AB5391584E9797E2C5DFBCA9ECAC4170
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11389_C::OnDlgSelectedOption_AB5391584E9797E2C5DFBCA9ECAC4170(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11389_C", "OnDlgSelectedOption_AB5391584E9797E2C5DFBCA9ECAC4170");

	Params::Quest_11389_C_OnDlgSelectedOption_AB5391584E9797E2C5DFBCA9ECAC4170 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
