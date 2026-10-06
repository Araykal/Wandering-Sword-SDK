#pragma once



// Package: Quest_14060

#include "Basic.hpp"

#include "Quest_14060_classes.hpp"
#include "Quest_14060_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_14060.Quest_14060_C.ExecuteUbergraph_Quest_14060
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_14060_C::ExecuteUbergraph_Quest_14060(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_14060_C", "ExecuteUbergraph_Quest_14060");

	Params::Quest_14060_C_ExecuteUbergraph_Quest_14060 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_14060.Quest_14060_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_14060_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_14060_C", "HandleFinishing");

	Params::Quest_14060_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_14060.Quest_14060_C.OnFinished_C736144C484CC0C54CED729B262DDFC0
// (BlueprintCallable, BlueprintEvent)

void UQuest_14060_C::OnFinished_C736144C484CC0C54CED729B262DDFC0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_14060_C", "OnFinished_C736144C484CC0C54CED729B262DDFC0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_14060.Quest_14060_C.OnStop_C736144C484CC0C54CED729B262DDFC0
// (BlueprintCallable, BlueprintEvent)

void UQuest_14060_C::OnStop_C736144C484CC0C54CED729B262DDFC0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_14060_C", "OnStop_C736144C484CC0C54CED729B262DDFC0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_14060.Quest_14060_C.OnDlgClosed_80DFFE3A47662560CF27A3A0B8164335
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_14060_C::OnDlgClosed_80DFFE3A47662560CF27A3A0B8164335(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_14060_C", "OnDlgClosed_80DFFE3A47662560CF27A3A0B8164335");

	Params::Quest_14060_C_OnDlgClosed_80DFFE3A47662560CF27A3A0B8164335 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_14060.Quest_14060_C.OnDlgSelectedOption_80DFFE3A47662560CF27A3A0B8164335
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_14060_C::OnDlgSelectedOption_80DFFE3A47662560CF27A3A0B8164335(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_14060_C", "OnDlgSelectedOption_80DFFE3A47662560CF27A3A0B8164335");

	Params::Quest_14060_C_OnDlgSelectedOption_80DFFE3A47662560CF27A3A0B8164335 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
