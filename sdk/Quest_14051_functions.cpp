#pragma once



// Package: Quest_14051

#include "Basic.hpp"

#include "Quest_14051_classes.hpp"
#include "Quest_14051_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_14051.Quest_14051_C.ExecuteUbergraph_Quest_14051
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_14051_C::ExecuteUbergraph_Quest_14051(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_14051_C", "ExecuteUbergraph_Quest_14051");

	Params::Quest_14051_C_ExecuteUbergraph_Quest_14051 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_14051.Quest_14051_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_14051_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_14051_C", "HandleFinishing");

	Params::Quest_14051_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_14051.Quest_14051_C.OnFinished_C5C65B2541F85043F52B4DB9328C0C58
// (BlueprintCallable, BlueprintEvent)

void UQuest_14051_C::OnFinished_C5C65B2541F85043F52B4DB9328C0C58()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_14051_C", "OnFinished_C5C65B2541F85043F52B4DB9328C0C58");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_14051.Quest_14051_C.OnStop_C5C65B2541F85043F52B4DB9328C0C58
// (BlueprintCallable, BlueprintEvent)

void UQuest_14051_C::OnStop_C5C65B2541F85043F52B4DB9328C0C58()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_14051_C", "OnStop_C5C65B2541F85043F52B4DB9328C0C58");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_14051.Quest_14051_C.OnDlgClosed_3D614506413A2155D6FF288930413C72
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_14051_C::OnDlgClosed_3D614506413A2155D6FF288930413C72(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_14051_C", "OnDlgClosed_3D614506413A2155D6FF288930413C72");

	Params::Quest_14051_C_OnDlgClosed_3D614506413A2155D6FF288930413C72 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_14051.Quest_14051_C.OnDlgSelectedOption_3D614506413A2155D6FF288930413C72
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_14051_C::OnDlgSelectedOption_3D614506413A2155D6FF288930413C72(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_14051_C", "OnDlgSelectedOption_3D614506413A2155D6FF288930413C72");

	Params::Quest_14051_C_OnDlgSelectedOption_3D614506413A2155D6FF288930413C72 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
