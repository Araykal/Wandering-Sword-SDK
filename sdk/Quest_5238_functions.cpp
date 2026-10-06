#pragma once



// Package: Quest_5238

#include "Basic.hpp"

#include "Quest_5238_classes.hpp"
#include "Quest_5238_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5238.Quest_5238_C.ExecuteUbergraph_Quest_5238
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5238_C::ExecuteUbergraph_Quest_5238(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5238_C", "ExecuteUbergraph_Quest_5238");

	Params::Quest_5238_C_ExecuteUbergraph_Quest_5238 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5238.Quest_5238_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5238_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5238_C", "HandleFinishing");

	Params::Quest_5238_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5238.Quest_5238_C.OnSuccess_EDBA2F2846C968EF08D3ACACF6478D60
// (BlueprintCallable, BlueprintEvent)

void UQuest_5238_C::OnSuccess_EDBA2F2846C968EF08D3ACACF6478D60()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5238_C", "OnSuccess_EDBA2F2846C968EF08D3ACACF6478D60");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5238.Quest_5238_C.OnFinished_EE5343E2433F0A4ECCA7C4995F615A3E
// (BlueprintCallable, BlueprintEvent)

void UQuest_5238_C::OnFinished_EE5343E2433F0A4ECCA7C4995F615A3E()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5238_C", "OnFinished_EE5343E2433F0A4ECCA7C4995F615A3E");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5238.Quest_5238_C.OnStop_EE5343E2433F0A4ECCA7C4995F615A3E
// (BlueprintCallable, BlueprintEvent)

void UQuest_5238_C::OnStop_EE5343E2433F0A4ECCA7C4995F615A3E()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5238_C", "OnStop_EE5343E2433F0A4ECCA7C4995F615A3E");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5238.Quest_5238_C.OnDlgClosed_9DE8200447E52AA12ADA75A40E4610CF
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5238_C::OnDlgClosed_9DE8200447E52AA12ADA75A40E4610CF(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5238_C", "OnDlgClosed_9DE8200447E52AA12ADA75A40E4610CF");

	Params::Quest_5238_C_OnDlgClosed_9DE8200447E52AA12ADA75A40E4610CF Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5238.Quest_5238_C.OnDlgSelectedOption_9DE8200447E52AA12ADA75A40E4610CF
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5238_C::OnDlgSelectedOption_9DE8200447E52AA12ADA75A40E4610CF(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5238_C", "OnDlgSelectedOption_9DE8200447E52AA12ADA75A40E4610CF");

	Params::Quest_5238_C_OnDlgSelectedOption_9DE8200447E52AA12ADA75A40E4610CF Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
