#pragma once



// Package: Quest_28071

#include "Basic.hpp"

#include "Quest_28071_classes.hpp"
#include "Quest_28071_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_28071.Quest_28071_C.ExecuteUbergraph_Quest_28071
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28071_C::ExecuteUbergraph_Quest_28071(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28071_C", "ExecuteUbergraph_Quest_28071");

	Params::Quest_28071_C_ExecuteUbergraph_Quest_28071 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28071.Quest_28071_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28071_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28071_C", "HandleFinishing");

	Params::Quest_28071_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28071.Quest_28071_C.OnFinished_FC1C5212407D59344D0EFCA9D9D43935
// (BlueprintCallable, BlueprintEvent)

void UQuest_28071_C::OnFinished_FC1C5212407D59344D0EFCA9D9D43935()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28071_C", "OnFinished_FC1C5212407D59344D0EFCA9D9D43935");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28071.Quest_28071_C.OnStop_FC1C5212407D59344D0EFCA9D9D43935
// (BlueprintCallable, BlueprintEvent)

void UQuest_28071_C::OnStop_FC1C5212407D59344D0EFCA9D9D43935()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28071_C", "OnStop_FC1C5212407D59344D0EFCA9D9D43935");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28071.Quest_28071_C.OnDlgClosed_E582FA964AE2D7A541167FAFEAEA0EB4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28071_C::OnDlgClosed_E582FA964AE2D7A541167FAFEAEA0EB4(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28071_C", "OnDlgClosed_E582FA964AE2D7A541167FAFEAEA0EB4");

	Params::Quest_28071_C_OnDlgClosed_E582FA964AE2D7A541167FAFEAEA0EB4 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28071.Quest_28071_C.OnDlgSelectedOption_E582FA964AE2D7A541167FAFEAEA0EB4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28071_C::OnDlgSelectedOption_E582FA964AE2D7A541167FAFEAEA0EB4(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28071_C", "OnDlgSelectedOption_E582FA964AE2D7A541167FAFEAEA0EB4");

	Params::Quest_28071_C_OnDlgSelectedOption_E582FA964AE2D7A541167FAFEAEA0EB4 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
