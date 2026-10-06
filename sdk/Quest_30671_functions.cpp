#pragma once



// Package: Quest_30671

#include "Basic.hpp"

#include "Quest_30671_classes.hpp"
#include "Quest_30671_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_30671.Quest_30671_C.ExecuteUbergraph_Quest_30671
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30671_C::ExecuteUbergraph_Quest_30671(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30671_C", "ExecuteUbergraph_Quest_30671");

	Params::Quest_30671_C_ExecuteUbergraph_Quest_30671 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30671.Quest_30671_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30671_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30671_C", "HandleFinishing");

	Params::Quest_30671_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30671.Quest_30671_C.OnDlgClosed_C5182C09424335478F3E9BAEBB71BEAB
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30671_C::OnDlgClosed_C5182C09424335478F3E9BAEBB71BEAB(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30671_C", "OnDlgClosed_C5182C09424335478F3E9BAEBB71BEAB");

	Params::Quest_30671_C_OnDlgClosed_C5182C09424335478F3E9BAEBB71BEAB Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30671.Quest_30671_C.OnDlgSelectedOption_C5182C09424335478F3E9BAEBB71BEAB
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30671_C::OnDlgSelectedOption_C5182C09424335478F3E9BAEBB71BEAB(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30671_C", "OnDlgSelectedOption_C5182C09424335478F3E9BAEBB71BEAB");

	Params::Quest_30671_C_OnDlgSelectedOption_C5182C09424335478F3E9BAEBB71BEAB Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30671.Quest_30671_C.OnFinished_393202954B70BA0A99E526B973889FC9
// (BlueprintCallable, BlueprintEvent)

void UQuest_30671_C::OnFinished_393202954B70BA0A99E526B973889FC9()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30671_C", "OnFinished_393202954B70BA0A99E526B973889FC9");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30671.Quest_30671_C.OnStop_393202954B70BA0A99E526B973889FC9
// (BlueprintCallable, BlueprintEvent)

void UQuest_30671_C::OnStop_393202954B70BA0A99E526B973889FC9()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30671_C", "OnStop_393202954B70BA0A99E526B973889FC9");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
