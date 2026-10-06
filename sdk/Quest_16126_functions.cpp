#pragma once



// Package: Quest_16126

#include "Basic.hpp"

#include "Quest_16126_classes.hpp"
#include "Quest_16126_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_16126.Quest_16126_C.ExecuteUbergraph_Quest_16126
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_16126_C::ExecuteUbergraph_Quest_16126(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16126_C", "ExecuteUbergraph_Quest_16126");

	Params::Quest_16126_C_ExecuteUbergraph_Quest_16126 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_16126.Quest_16126_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_16126_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16126_C", "HandleFinishing");

	Params::Quest_16126_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_16126.Quest_16126_C.OnFinished_1F757CE84F44F2F5633DF0901FCA6A23
// (BlueprintCallable, BlueprintEvent)

void UQuest_16126_C::OnFinished_1F757CE84F44F2F5633DF0901FCA6A23()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16126_C", "OnFinished_1F757CE84F44F2F5633DF0901FCA6A23");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_16126.Quest_16126_C.OnStop_1F757CE84F44F2F5633DF0901FCA6A23
// (BlueprintCallable, BlueprintEvent)

void UQuest_16126_C::OnStop_1F757CE84F44F2F5633DF0901FCA6A23()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16126_C", "OnStop_1F757CE84F44F2F5633DF0901FCA6A23");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_16126.Quest_16126_C.OnDlgClosed_01472DBB4F09F6BBBC23ABB2060B5569
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_16126_C::OnDlgClosed_01472DBB4F09F6BBBC23ABB2060B5569(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16126_C", "OnDlgClosed_01472DBB4F09F6BBBC23ABB2060B5569");

	Params::Quest_16126_C_OnDlgClosed_01472DBB4F09F6BBBC23ABB2060B5569 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_16126.Quest_16126_C.OnDlgSelectedOption_01472DBB4F09F6BBBC23ABB2060B5569
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_16126_C::OnDlgSelectedOption_01472DBB4F09F6BBBC23ABB2060B5569(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16126_C", "OnDlgSelectedOption_01472DBB4F09F6BBBC23ABB2060B5569");

	Params::Quest_16126_C_OnDlgSelectedOption_01472DBB4F09F6BBBC23ABB2060B5569 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
