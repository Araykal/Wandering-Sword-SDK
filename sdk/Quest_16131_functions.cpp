#pragma once



// Package: Quest_16131

#include "Basic.hpp"

#include "Quest_16131_classes.hpp"
#include "Quest_16131_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_16131.Quest_16131_C.ExecuteUbergraph_Quest_16131
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_16131_C::ExecuteUbergraph_Quest_16131(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16131_C", "ExecuteUbergraph_Quest_16131");

	Params::Quest_16131_C_ExecuteUbergraph_Quest_16131 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_16131.Quest_16131_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_16131_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16131_C", "HandleFinishing");

	Params::Quest_16131_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_16131.Quest_16131_C.OnFinished_84B07E154E7A9093A3A58A94A3C348AE
// (BlueprintCallable, BlueprintEvent)

void UQuest_16131_C::OnFinished_84B07E154E7A9093A3A58A94A3C348AE()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16131_C", "OnFinished_84B07E154E7A9093A3A58A94A3C348AE");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_16131.Quest_16131_C.OnStop_84B07E154E7A9093A3A58A94A3C348AE
// (BlueprintCallable, BlueprintEvent)

void UQuest_16131_C::OnStop_84B07E154E7A9093A3A58A94A3C348AE()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16131_C", "OnStop_84B07E154E7A9093A3A58A94A3C348AE");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_16131.Quest_16131_C.OnDlgClosed_9458D7734C74B276909FB78E0601854E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_16131_C::OnDlgClosed_9458D7734C74B276909FB78E0601854E(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16131_C", "OnDlgClosed_9458D7734C74B276909FB78E0601854E");

	Params::Quest_16131_C_OnDlgClosed_9458D7734C74B276909FB78E0601854E Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_16131.Quest_16131_C.OnDlgSelectedOption_9458D7734C74B276909FB78E0601854E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_16131_C::OnDlgSelectedOption_9458D7734C74B276909FB78E0601854E(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16131_C", "OnDlgSelectedOption_9458D7734C74B276909FB78E0601854E");

	Params::Quest_16131_C_OnDlgSelectedOption_9458D7734C74B276909FB78E0601854E Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
