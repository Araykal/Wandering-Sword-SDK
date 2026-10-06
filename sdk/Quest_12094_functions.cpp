#pragma once



// Package: Quest_12094

#include "Basic.hpp"

#include "Quest_12094_classes.hpp"
#include "Quest_12094_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_12094.Quest_12094_C.ExecuteUbergraph_Quest_12094
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12094_C::ExecuteUbergraph_Quest_12094(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12094_C", "ExecuteUbergraph_Quest_12094");

	Params::Quest_12094_C_ExecuteUbergraph_Quest_12094 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12094.Quest_12094_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12094_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12094_C", "HandleFinishing");

	Params::Quest_12094_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12094.Quest_12094_C.OnFinished_A55937B147E3BF20F65892ABFE96FA26
// (BlueprintCallable, BlueprintEvent)

void UQuest_12094_C::OnFinished_A55937B147E3BF20F65892ABFE96FA26()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12094_C", "OnFinished_A55937B147E3BF20F65892ABFE96FA26");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12094.Quest_12094_C.OnStop_A55937B147E3BF20F65892ABFE96FA26
// (BlueprintCallable, BlueprintEvent)

void UQuest_12094_C::OnStop_A55937B147E3BF20F65892ABFE96FA26()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12094_C", "OnStop_A55937B147E3BF20F65892ABFE96FA26");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12094.Quest_12094_C.OnDlgClosed_BA8658C849831A540F380091E0BB0CE9
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12094_C::OnDlgClosed_BA8658C849831A540F380091E0BB0CE9(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12094_C", "OnDlgClosed_BA8658C849831A540F380091E0BB0CE9");

	Params::Quest_12094_C_OnDlgClosed_BA8658C849831A540F380091E0BB0CE9 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12094.Quest_12094_C.OnDlgSelectedOption_BA8658C849831A540F380091E0BB0CE9
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12094_C::OnDlgSelectedOption_BA8658C849831A540F380091E0BB0CE9(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12094_C", "OnDlgSelectedOption_BA8658C849831A540F380091E0BB0CE9");

	Params::Quest_12094_C_OnDlgSelectedOption_BA8658C849831A540F380091E0BB0CE9 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
