#pragma once



// Package: Quest_28901

#include "Basic.hpp"

#include "Quest_28901_classes.hpp"
#include "Quest_28901_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_28901.Quest_28901_C.ExecuteUbergraph_Quest_28901
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28901_C::ExecuteUbergraph_Quest_28901(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28901_C", "ExecuteUbergraph_Quest_28901");

	Params::Quest_28901_C_ExecuteUbergraph_Quest_28901 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28901.Quest_28901_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28901_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28901_C", "HandleFinishing");

	Params::Quest_28901_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28901.Quest_28901_C.OnFinished_FB1764A6415E52A50442C1A9764A7040
// (BlueprintCallable, BlueprintEvent)

void UQuest_28901_C::OnFinished_FB1764A6415E52A50442C1A9764A7040()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28901_C", "OnFinished_FB1764A6415E52A50442C1A9764A7040");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28901.Quest_28901_C.OnStop_FB1764A6415E52A50442C1A9764A7040
// (BlueprintCallable, BlueprintEvent)

void UQuest_28901_C::OnStop_FB1764A6415E52A50442C1A9764A7040()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28901_C", "OnStop_FB1764A6415E52A50442C1A9764A7040");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28901.Quest_28901_C.OnDlgClosed_58A6584042565FD2431CBC86F16BA1C3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28901_C::OnDlgClosed_58A6584042565FD2431CBC86F16BA1C3(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28901_C", "OnDlgClosed_58A6584042565FD2431CBC86F16BA1C3");

	Params::Quest_28901_C_OnDlgClosed_58A6584042565FD2431CBC86F16BA1C3 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28901.Quest_28901_C.OnDlgSelectedOption_58A6584042565FD2431CBC86F16BA1C3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28901_C::OnDlgSelectedOption_58A6584042565FD2431CBC86F16BA1C3(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28901_C", "OnDlgSelectedOption_58A6584042565FD2431CBC86F16BA1C3");

	Params::Quest_28901_C_OnDlgSelectedOption_58A6584042565FD2431CBC86F16BA1C3 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
