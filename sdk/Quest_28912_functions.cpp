#pragma once



// Package: Quest_28912

#include "Basic.hpp"

#include "Quest_28912_classes.hpp"
#include "Quest_28912_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_28912.Quest_28912_C.ExecuteUbergraph_Quest_28912
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28912_C::ExecuteUbergraph_Quest_28912(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28912_C", "ExecuteUbergraph_Quest_28912");

	Params::Quest_28912_C_ExecuteUbergraph_Quest_28912 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28912.Quest_28912_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28912_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28912_C", "HandleFinishing");

	Params::Quest_28912_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28912.Quest_28912_C.OnSuccess_110803EC4A195876265840977DD7134A
// (BlueprintCallable, BlueprintEvent)

void UQuest_28912_C::OnSuccess_110803EC4A195876265840977DD7134A()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28912_C", "OnSuccess_110803EC4A195876265840977DD7134A");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28912.Quest_28912_C.OnFinished_170E213E41E22768AA6FA0AF650762CB
// (BlueprintCallable, BlueprintEvent)

void UQuest_28912_C::OnFinished_170E213E41E22768AA6FA0AF650762CB()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28912_C", "OnFinished_170E213E41E22768AA6FA0AF650762CB");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28912.Quest_28912_C.OnStop_170E213E41E22768AA6FA0AF650762CB
// (BlueprintCallable, BlueprintEvent)

void UQuest_28912_C::OnStop_170E213E41E22768AA6FA0AF650762CB()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28912_C", "OnStop_170E213E41E22768AA6FA0AF650762CB");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28912.Quest_28912_C.OnDlgClosed_E443322D43426392CA22A7BEB3EED343
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28912_C::OnDlgClosed_E443322D43426392CA22A7BEB3EED343(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28912_C", "OnDlgClosed_E443322D43426392CA22A7BEB3EED343");

	Params::Quest_28912_C_OnDlgClosed_E443322D43426392CA22A7BEB3EED343 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28912.Quest_28912_C.OnDlgSelectedOption_E443322D43426392CA22A7BEB3EED343
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28912_C::OnDlgSelectedOption_E443322D43426392CA22A7BEB3EED343(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28912_C", "OnDlgSelectedOption_E443322D43426392CA22A7BEB3EED343");

	Params::Quest_28912_C_OnDlgSelectedOption_E443322D43426392CA22A7BEB3EED343 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
