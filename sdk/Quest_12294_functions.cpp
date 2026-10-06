#pragma once



// Package: Quest_12294

#include "Basic.hpp"

#include "Quest_12294_classes.hpp"
#include "Quest_12294_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_12294.Quest_12294_C.ExecuteUbergraph_Quest_12294
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12294_C::ExecuteUbergraph_Quest_12294(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12294_C", "ExecuteUbergraph_Quest_12294");

	Params::Quest_12294_C_ExecuteUbergraph_Quest_12294 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12294.Quest_12294_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12294_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12294_C", "HandleFinishing");

	Params::Quest_12294_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12294.Quest_12294_C.OnFinished_B3815E2B402B8A239966F5A9260D6C2C
// (BlueprintCallable, BlueprintEvent)

void UQuest_12294_C::OnFinished_B3815E2B402B8A239966F5A9260D6C2C()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12294_C", "OnFinished_B3815E2B402B8A239966F5A9260D6C2C");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12294.Quest_12294_C.OnStop_B3815E2B402B8A239966F5A9260D6C2C
// (BlueprintCallable, BlueprintEvent)

void UQuest_12294_C::OnStop_B3815E2B402B8A239966F5A9260D6C2C()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12294_C", "OnStop_B3815E2B402B8A239966F5A9260D6C2C");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12294.Quest_12294_C.OnDlgClosed_9C43E2FB41D8112600F142B5A4993504
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12294_C::OnDlgClosed_9C43E2FB41D8112600F142B5A4993504(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12294_C", "OnDlgClosed_9C43E2FB41D8112600F142B5A4993504");

	Params::Quest_12294_C_OnDlgClosed_9C43E2FB41D8112600F142B5A4993504 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12294.Quest_12294_C.OnDlgSelectedOption_9C43E2FB41D8112600F142B5A4993504
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12294_C::OnDlgSelectedOption_9C43E2FB41D8112600F142B5A4993504(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12294_C", "OnDlgSelectedOption_9C43E2FB41D8112600F142B5A4993504");

	Params::Quest_12294_C_OnDlgSelectedOption_9C43E2FB41D8112600F142B5A4993504 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
