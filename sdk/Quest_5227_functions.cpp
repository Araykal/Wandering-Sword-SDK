#pragma once



// Package: Quest_5227

#include "Basic.hpp"

#include "Quest_5227_classes.hpp"
#include "Quest_5227_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5227.Quest_5227_C.ExecuteUbergraph_Quest_5227
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5227_C::ExecuteUbergraph_Quest_5227(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5227_C", "ExecuteUbergraph_Quest_5227");

	Params::Quest_5227_C_ExecuteUbergraph_Quest_5227 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5227.Quest_5227_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5227_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5227_C", "HandleFinishing");

	Params::Quest_5227_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5227.Quest_5227_C.OnFinished_01377961410B42FDC20BD8B17226F72F
// (BlueprintCallable, BlueprintEvent)

void UQuest_5227_C::OnFinished_01377961410B42FDC20BD8B17226F72F()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5227_C", "OnFinished_01377961410B42FDC20BD8B17226F72F");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5227.Quest_5227_C.OnStop_01377961410B42FDC20BD8B17226F72F
// (BlueprintCallable, BlueprintEvent)

void UQuest_5227_C::OnStop_01377961410B42FDC20BD8B17226F72F()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5227_C", "OnStop_01377961410B42FDC20BD8B17226F72F");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5227.Quest_5227_C.OnDlgClosed_53D8DEE54035E5076504BE8C419BA883
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5227_C::OnDlgClosed_53D8DEE54035E5076504BE8C419BA883(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5227_C", "OnDlgClosed_53D8DEE54035E5076504BE8C419BA883");

	Params::Quest_5227_C_OnDlgClosed_53D8DEE54035E5076504BE8C419BA883 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5227.Quest_5227_C.OnDlgSelectedOption_53D8DEE54035E5076504BE8C419BA883
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5227_C::OnDlgSelectedOption_53D8DEE54035E5076504BE8C419BA883(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5227_C", "OnDlgSelectedOption_53D8DEE54035E5076504BE8C419BA883");

	Params::Quest_5227_C_OnDlgSelectedOption_53D8DEE54035E5076504BE8C419BA883 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
