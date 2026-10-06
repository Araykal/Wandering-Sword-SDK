#pragma once



// Package: Quest_28943

#include "Basic.hpp"

#include "Quest_28943_classes.hpp"
#include "Quest_28943_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_28943.Quest_28943_C.ExecuteUbergraph_Quest_28943
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28943_C::ExecuteUbergraph_Quest_28943(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28943_C", "ExecuteUbergraph_Quest_28943");

	Params::Quest_28943_C_ExecuteUbergraph_Quest_28943 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28943.Quest_28943_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28943_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28943_C", "HandleFinishing");

	Params::Quest_28943_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28943.Quest_28943_C.OnSuccess_E7B1B5F742607AEC3168139DB51A2DA9
// (BlueprintCallable, BlueprintEvent)

void UQuest_28943_C::OnSuccess_E7B1B5F742607AEC3168139DB51A2DA9()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28943_C", "OnSuccess_E7B1B5F742607AEC3168139DB51A2DA9");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28943.Quest_28943_C.OnFinished_0BF57B004E8C59408DB656A684157A75
// (BlueprintCallable, BlueprintEvent)

void UQuest_28943_C::OnFinished_0BF57B004E8C59408DB656A684157A75()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28943_C", "OnFinished_0BF57B004E8C59408DB656A684157A75");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28943.Quest_28943_C.OnStop_0BF57B004E8C59408DB656A684157A75
// (BlueprintCallable, BlueprintEvent)

void UQuest_28943_C::OnStop_0BF57B004E8C59408DB656A684157A75()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28943_C", "OnStop_0BF57B004E8C59408DB656A684157A75");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28943.Quest_28943_C.OnDlgClosed_A222B8404A0AFEA0B1E8689D00CB7547
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28943_C::OnDlgClosed_A222B8404A0AFEA0B1E8689D00CB7547(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28943_C", "OnDlgClosed_A222B8404A0AFEA0B1E8689D00CB7547");

	Params::Quest_28943_C_OnDlgClosed_A222B8404A0AFEA0B1E8689D00CB7547 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28943.Quest_28943_C.OnDlgSelectedOption_A222B8404A0AFEA0B1E8689D00CB7547
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28943_C::OnDlgSelectedOption_A222B8404A0AFEA0B1E8689D00CB7547(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28943_C", "OnDlgSelectedOption_A222B8404A0AFEA0B1E8689D00CB7547");

	Params::Quest_28943_C_OnDlgSelectedOption_A222B8404A0AFEA0B1E8689D00CB7547 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
