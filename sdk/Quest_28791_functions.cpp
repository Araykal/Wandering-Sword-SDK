#pragma once



// Package: Quest_28791

#include "Basic.hpp"

#include "Quest_28791_classes.hpp"
#include "Quest_28791_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_28791.Quest_28791_C.ExecuteUbergraph_Quest_28791
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28791_C::ExecuteUbergraph_Quest_28791(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28791_C", "ExecuteUbergraph_Quest_28791");

	Params::Quest_28791_C_ExecuteUbergraph_Quest_28791 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28791.Quest_28791_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28791_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28791_C", "HandleFinishing");

	Params::Quest_28791_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28791.Quest_28791_C.OnSuccess_B2764DA444A70CD7371A57A866573ED6
// (BlueprintCallable, BlueprintEvent)

void UQuest_28791_C::OnSuccess_B2764DA444A70CD7371A57A866573ED6()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28791_C", "OnSuccess_B2764DA444A70CD7371A57A866573ED6");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28791.Quest_28791_C.OnSuccess_4EA0B49249D3A2833B612AA2FEB2D01D
// (BlueprintCallable, BlueprintEvent)

void UQuest_28791_C::OnSuccess_4EA0B49249D3A2833B612AA2FEB2D01D()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28791_C", "OnSuccess_4EA0B49249D3A2833B612AA2FEB2D01D");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28791.Quest_28791_C.OnFinished_9DBBD2264A595898231E07BA5074D3C4
// (BlueprintCallable, BlueprintEvent)

void UQuest_28791_C::OnFinished_9DBBD2264A595898231E07BA5074D3C4()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28791_C", "OnFinished_9DBBD2264A595898231E07BA5074D3C4");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28791.Quest_28791_C.OnStop_9DBBD2264A595898231E07BA5074D3C4
// (BlueprintCallable, BlueprintEvent)

void UQuest_28791_C::OnStop_9DBBD2264A595898231E07BA5074D3C4()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28791_C", "OnStop_9DBBD2264A595898231E07BA5074D3C4");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28791.Quest_28791_C.OnDlgClosed_B5CCE4E94A86018089E281B2AE44ADE5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28791_C::OnDlgClosed_B5CCE4E94A86018089E281B2AE44ADE5(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28791_C", "OnDlgClosed_B5CCE4E94A86018089E281B2AE44ADE5");

	Params::Quest_28791_C_OnDlgClosed_B5CCE4E94A86018089E281B2AE44ADE5 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28791.Quest_28791_C.OnDlgSelectedOption_B5CCE4E94A86018089E281B2AE44ADE5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28791_C::OnDlgSelectedOption_B5CCE4E94A86018089E281B2AE44ADE5(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28791_C", "OnDlgSelectedOption_B5CCE4E94A86018089E281B2AE44ADE5");

	Params::Quest_28791_C_OnDlgSelectedOption_B5CCE4E94A86018089E281B2AE44ADE5 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
