#pragma once



// Package: Quest_5173

#include "Basic.hpp"

#include "Quest_5173_classes.hpp"
#include "Quest_5173_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5173.Quest_5173_C.ExecuteUbergraph_Quest_5173
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5173_C::ExecuteUbergraph_Quest_5173(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5173_C", "ExecuteUbergraph_Quest_5173");

	Params::Quest_5173_C_ExecuteUbergraph_Quest_5173 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5173.Quest_5173_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5173_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5173_C", "HandleFinishing");

	Params::Quest_5173_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5173.Quest_5173_C.OnSuccess_DBF148214242DB0A11B7A6A77F7FA526
// (BlueprintCallable, BlueprintEvent)

void UQuest_5173_C::OnSuccess_DBF148214242DB0A11B7A6A77F7FA526()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5173_C", "OnSuccess_DBF148214242DB0A11B7A6A77F7FA526");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5173.Quest_5173_C.OnFinished_457D21B9455D888B4C96078FAA535DD4
// (BlueprintCallable, BlueprintEvent)

void UQuest_5173_C::OnFinished_457D21B9455D888B4C96078FAA535DD4()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5173_C", "OnFinished_457D21B9455D888B4C96078FAA535DD4");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5173.Quest_5173_C.OnStop_457D21B9455D888B4C96078FAA535DD4
// (BlueprintCallable, BlueprintEvent)

void UQuest_5173_C::OnStop_457D21B9455D888B4C96078FAA535DD4()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5173_C", "OnStop_457D21B9455D888B4C96078FAA535DD4");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5173.Quest_5173_C.OnDlgClosed_69F5FF43406EDDB5CB5591B01C2EA36E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5173_C::OnDlgClosed_69F5FF43406EDDB5CB5591B01C2EA36E(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5173_C", "OnDlgClosed_69F5FF43406EDDB5CB5591B01C2EA36E");

	Params::Quest_5173_C_OnDlgClosed_69F5FF43406EDDB5CB5591B01C2EA36E Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5173.Quest_5173_C.OnDlgSelectedOption_69F5FF43406EDDB5CB5591B01C2EA36E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5173_C::OnDlgSelectedOption_69F5FF43406EDDB5CB5591B01C2EA36E(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5173_C", "OnDlgSelectedOption_69F5FF43406EDDB5CB5591B01C2EA36E");

	Params::Quest_5173_C_OnDlgSelectedOption_69F5FF43406EDDB5CB5591B01C2EA36E Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
