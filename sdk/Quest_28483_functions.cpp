#pragma once



// Package: Quest_28483

#include "Basic.hpp"

#include "Quest_28483_classes.hpp"
#include "Quest_28483_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_28483.Quest_28483_C.ExecuteUbergraph_Quest_28483
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28483_C::ExecuteUbergraph_Quest_28483(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28483_C", "ExecuteUbergraph_Quest_28483");

	Params::Quest_28483_C_ExecuteUbergraph_Quest_28483 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28483.Quest_28483_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28483_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28483_C", "HandleFinishing");

	Params::Quest_28483_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28483.Quest_28483_C.OnFinished_512D5B7F4581D09CE9B0328EEA849CDD
// (BlueprintCallable, BlueprintEvent)

void UQuest_28483_C::OnFinished_512D5B7F4581D09CE9B0328EEA849CDD()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28483_C", "OnFinished_512D5B7F4581D09CE9B0328EEA849CDD");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28483.Quest_28483_C.OnStop_512D5B7F4581D09CE9B0328EEA849CDD
// (BlueprintCallable, BlueprintEvent)

void UQuest_28483_C::OnStop_512D5B7F4581D09CE9B0328EEA849CDD()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28483_C", "OnStop_512D5B7F4581D09CE9B0328EEA849CDD");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28483.Quest_28483_C.OnDlgClosed_A6BBA78F49DAB5B92B8F68B6F6AC20DA
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28483_C::OnDlgClosed_A6BBA78F49DAB5B92B8F68B6F6AC20DA(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28483_C", "OnDlgClosed_A6BBA78F49DAB5B92B8F68B6F6AC20DA");

	Params::Quest_28483_C_OnDlgClosed_A6BBA78F49DAB5B92B8F68B6F6AC20DA Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28483.Quest_28483_C.OnDlgSelectedOption_A6BBA78F49DAB5B92B8F68B6F6AC20DA
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28483_C::OnDlgSelectedOption_A6BBA78F49DAB5B92B8F68B6F6AC20DA(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28483_C", "OnDlgSelectedOption_A6BBA78F49DAB5B92B8F68B6F6AC20DA");

	Params::Quest_28483_C_OnDlgSelectedOption_A6BBA78F49DAB5B92B8F68B6F6AC20DA Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
