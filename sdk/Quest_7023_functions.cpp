#pragma once



// Package: Quest_7023

#include "Basic.hpp"

#include "Quest_7023_classes.hpp"
#include "Quest_7023_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_7023.Quest_7023_C.ExecuteUbergraph_Quest_7023
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_7023_C::ExecuteUbergraph_Quest_7023(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7023_C", "ExecuteUbergraph_Quest_7023");

	Params::Quest_7023_C_ExecuteUbergraph_Quest_7023 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_7023.Quest_7023_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_7023_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7023_C", "HandleFinishing");

	Params::Quest_7023_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_7023.Quest_7023_C.OnFinished_472CBB2E436F94ECAFFA0DAE93CF29CF
// (BlueprintCallable, BlueprintEvent)

void UQuest_7023_C::OnFinished_472CBB2E436F94ECAFFA0DAE93CF29CF()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7023_C", "OnFinished_472CBB2E436F94ECAFFA0DAE93CF29CF");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_7023.Quest_7023_C.OnStop_472CBB2E436F94ECAFFA0DAE93CF29CF
// (BlueprintCallable, BlueprintEvent)

void UQuest_7023_C::OnStop_472CBB2E436F94ECAFFA0DAE93CF29CF()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7023_C", "OnStop_472CBB2E436F94ECAFFA0DAE93CF29CF");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_7023.Quest_7023_C.OnDlgClosed_E449AC524F308CAEEE2A999A72BF5586
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_7023_C::OnDlgClosed_E449AC524F308CAEEE2A999A72BF5586(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7023_C", "OnDlgClosed_E449AC524F308CAEEE2A999A72BF5586");

	Params::Quest_7023_C_OnDlgClosed_E449AC524F308CAEEE2A999A72BF5586 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_7023.Quest_7023_C.OnDlgSelectedOption_E449AC524F308CAEEE2A999A72BF5586
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_7023_C::OnDlgSelectedOption_E449AC524F308CAEEE2A999A72BF5586(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7023_C", "OnDlgSelectedOption_E449AC524F308CAEEE2A999A72BF5586");

	Params::Quest_7023_C_OnDlgSelectedOption_E449AC524F308CAEEE2A999A72BF5586 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
