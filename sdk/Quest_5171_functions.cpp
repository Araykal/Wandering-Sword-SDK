#pragma once



// Package: Quest_5171

#include "Basic.hpp"

#include "Quest_5171_classes.hpp"
#include "Quest_5171_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5171.Quest_5171_C.ExecuteUbergraph_Quest_5171
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5171_C::ExecuteUbergraph_Quest_5171(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5171_C", "ExecuteUbergraph_Quest_5171");

	Params::Quest_5171_C_ExecuteUbergraph_Quest_5171 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5171.Quest_5171_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5171_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5171_C", "HandleFinishing");

	Params::Quest_5171_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5171.Quest_5171_C.OnFinished_9A2C27C64682A137955B3FB2F2A1CA34
// (BlueprintCallable, BlueprintEvent)

void UQuest_5171_C::OnFinished_9A2C27C64682A137955B3FB2F2A1CA34()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5171_C", "OnFinished_9A2C27C64682A137955B3FB2F2A1CA34");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5171.Quest_5171_C.OnStop_9A2C27C64682A137955B3FB2F2A1CA34
// (BlueprintCallable, BlueprintEvent)

void UQuest_5171_C::OnStop_9A2C27C64682A137955B3FB2F2A1CA34()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5171_C", "OnStop_9A2C27C64682A137955B3FB2F2A1CA34");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5171.Quest_5171_C.OnDlgClosed_8B94CEAE459EC0E945D1AEAC348765BA
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5171_C::OnDlgClosed_8B94CEAE459EC0E945D1AEAC348765BA(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5171_C", "OnDlgClosed_8B94CEAE459EC0E945D1AEAC348765BA");

	Params::Quest_5171_C_OnDlgClosed_8B94CEAE459EC0E945D1AEAC348765BA Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5171.Quest_5171_C.OnDlgSelectedOption_8B94CEAE459EC0E945D1AEAC348765BA
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5171_C::OnDlgSelectedOption_8B94CEAE459EC0E945D1AEAC348765BA(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5171_C", "OnDlgSelectedOption_8B94CEAE459EC0E945D1AEAC348765BA");

	Params::Quest_5171_C_OnDlgSelectedOption_8B94CEAE459EC0E945D1AEAC348765BA Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
