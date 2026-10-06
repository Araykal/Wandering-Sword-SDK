#pragma once



// Package: Quest_28501

#include "Basic.hpp"

#include "Quest_28501_classes.hpp"
#include "Quest_28501_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_28501.Quest_28501_C.ExecuteUbergraph_Quest_28501
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28501_C::ExecuteUbergraph_Quest_28501(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28501_C", "ExecuteUbergraph_Quest_28501");

	Params::Quest_28501_C_ExecuteUbergraph_Quest_28501 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28501.Quest_28501_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28501_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28501_C", "HandleFinishing");

	Params::Quest_28501_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28501.Quest_28501_C.OnSuccess_EBB15446462113EF1A767B93401476AF
// (BlueprintCallable, BlueprintEvent)

void UQuest_28501_C::OnSuccess_EBB15446462113EF1A767B93401476AF()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28501_C", "OnSuccess_EBB15446462113EF1A767B93401476AF");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28501.Quest_28501_C.OnFinished_0C8A82C842F26D788386118CB58D20B3
// (BlueprintCallable, BlueprintEvent)

void UQuest_28501_C::OnFinished_0C8A82C842F26D788386118CB58D20B3()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28501_C", "OnFinished_0C8A82C842F26D788386118CB58D20B3");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28501.Quest_28501_C.OnStop_0C8A82C842F26D788386118CB58D20B3
// (BlueprintCallable, BlueprintEvent)

void UQuest_28501_C::OnStop_0C8A82C842F26D788386118CB58D20B3()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28501_C", "OnStop_0C8A82C842F26D788386118CB58D20B3");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28501.Quest_28501_C.OnDlgClosed_25CD7E6A40DBC3228E3F9A951799DD97
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28501_C::OnDlgClosed_25CD7E6A40DBC3228E3F9A951799DD97(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28501_C", "OnDlgClosed_25CD7E6A40DBC3228E3F9A951799DD97");

	Params::Quest_28501_C_OnDlgClosed_25CD7E6A40DBC3228E3F9A951799DD97 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28501.Quest_28501_C.OnDlgSelectedOption_25CD7E6A40DBC3228E3F9A951799DD97
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28501_C::OnDlgSelectedOption_25CD7E6A40DBC3228E3F9A951799DD97(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28501_C", "OnDlgSelectedOption_25CD7E6A40DBC3228E3F9A951799DD97");

	Params::Quest_28501_C_OnDlgSelectedOption_25CD7E6A40DBC3228E3F9A951799DD97 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
