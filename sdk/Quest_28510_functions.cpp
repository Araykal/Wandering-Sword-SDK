#pragma once



// Package: Quest_28510

#include "Basic.hpp"

#include "Quest_28510_classes.hpp"
#include "Quest_28510_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_28510.Quest_28510_C.ExecuteUbergraph_Quest_28510
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28510_C::ExecuteUbergraph_Quest_28510(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28510_C", "ExecuteUbergraph_Quest_28510");

	Params::Quest_28510_C_ExecuteUbergraph_Quest_28510 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28510.Quest_28510_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28510_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28510_C", "HandleFinishing");

	Params::Quest_28510_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28510.Quest_28510_C.OnFinished_C6FDE0A144D4EA768FFE11A368BDA01B
// (BlueprintCallable, BlueprintEvent)

void UQuest_28510_C::OnFinished_C6FDE0A144D4EA768FFE11A368BDA01B()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28510_C", "OnFinished_C6FDE0A144D4EA768FFE11A368BDA01B");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28510.Quest_28510_C.OnStop_C6FDE0A144D4EA768FFE11A368BDA01B
// (BlueprintCallable, BlueprintEvent)

void UQuest_28510_C::OnStop_C6FDE0A144D4EA768FFE11A368BDA01B()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28510_C", "OnStop_C6FDE0A144D4EA768FFE11A368BDA01B");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28510.Quest_28510_C.OnDlgClosed_1661FFA04EDF4D7901E55D94D47D5B30
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28510_C::OnDlgClosed_1661FFA04EDF4D7901E55D94D47D5B30(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28510_C", "OnDlgClosed_1661FFA04EDF4D7901E55D94D47D5B30");

	Params::Quest_28510_C_OnDlgClosed_1661FFA04EDF4D7901E55D94D47D5B30 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28510.Quest_28510_C.OnDlgSelectedOption_1661FFA04EDF4D7901E55D94D47D5B30
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28510_C::OnDlgSelectedOption_1661FFA04EDF4D7901E55D94D47D5B30(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28510_C", "OnDlgSelectedOption_1661FFA04EDF4D7901E55D94D47D5B30");

	Params::Quest_28510_C_OnDlgSelectedOption_1661FFA04EDF4D7901E55D94D47D5B30 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
