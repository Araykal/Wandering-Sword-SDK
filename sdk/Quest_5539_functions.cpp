#pragma once



// Package: Quest_5539

#include "Basic.hpp"

#include "Quest_5539_classes.hpp"
#include "Quest_5539_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5539.Quest_5539_C.ExecuteUbergraph_Quest_5539
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5539_C::ExecuteUbergraph_Quest_5539(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5539_C", "ExecuteUbergraph_Quest_5539");

	Params::Quest_5539_C_ExecuteUbergraph_Quest_5539 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5539.Quest_5539_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5539_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5539_C", "HandleFinishing");

	Params::Quest_5539_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5539.Quest_5539_C.OnFinished_C7FC4BF94E006AF924881B8D2939D16B
// (BlueprintCallable, BlueprintEvent)

void UQuest_5539_C::OnFinished_C7FC4BF94E006AF924881B8D2939D16B()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5539_C", "OnFinished_C7FC4BF94E006AF924881B8D2939D16B");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5539.Quest_5539_C.OnStop_C7FC4BF94E006AF924881B8D2939D16B
// (BlueprintCallable, BlueprintEvent)

void UQuest_5539_C::OnStop_C7FC4BF94E006AF924881B8D2939D16B()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5539_C", "OnStop_C7FC4BF94E006AF924881B8D2939D16B");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5539.Quest_5539_C.OnDlgClosed_AA8BFD8E49F06025688F32AA75C8AB18
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5539_C::OnDlgClosed_AA8BFD8E49F06025688F32AA75C8AB18(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5539_C", "OnDlgClosed_AA8BFD8E49F06025688F32AA75C8AB18");

	Params::Quest_5539_C_OnDlgClosed_AA8BFD8E49F06025688F32AA75C8AB18 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5539.Quest_5539_C.OnDlgSelectedOption_AA8BFD8E49F06025688F32AA75C8AB18
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5539_C::OnDlgSelectedOption_AA8BFD8E49F06025688F32AA75C8AB18(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5539_C", "OnDlgSelectedOption_AA8BFD8E49F06025688F32AA75C8AB18");

	Params::Quest_5539_C_OnDlgSelectedOption_AA8BFD8E49F06025688F32AA75C8AB18 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
