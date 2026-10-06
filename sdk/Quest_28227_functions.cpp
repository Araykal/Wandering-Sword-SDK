#pragma once



// Package: Quest_28227

#include "Basic.hpp"

#include "Quest_28227_classes.hpp"
#include "Quest_28227_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_28227.Quest_28227_C.ExecuteUbergraph_Quest_28227
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28227_C::ExecuteUbergraph_Quest_28227(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28227_C", "ExecuteUbergraph_Quest_28227");

	Params::Quest_28227_C_ExecuteUbergraph_Quest_28227 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28227.Quest_28227_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28227_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28227_C", "HandleFinishing");

	Params::Quest_28227_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28227.Quest_28227_C.OnFinished_99C70B2847C3A4C4B746C68ADE50D5D2
// (BlueprintCallable, BlueprintEvent)

void UQuest_28227_C::OnFinished_99C70B2847C3A4C4B746C68ADE50D5D2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28227_C", "OnFinished_99C70B2847C3A4C4B746C68ADE50D5D2");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28227.Quest_28227_C.OnStop_99C70B2847C3A4C4B746C68ADE50D5D2
// (BlueprintCallable, BlueprintEvent)

void UQuest_28227_C::OnStop_99C70B2847C3A4C4B746C68ADE50D5D2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28227_C", "OnStop_99C70B2847C3A4C4B746C68ADE50D5D2");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28227.Quest_28227_C.OnDlgClosed_E34D38B344E5DA1046801999807F3458
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28227_C::OnDlgClosed_E34D38B344E5DA1046801999807F3458(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28227_C", "OnDlgClosed_E34D38B344E5DA1046801999807F3458");

	Params::Quest_28227_C_OnDlgClosed_E34D38B344E5DA1046801999807F3458 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28227.Quest_28227_C.OnDlgSelectedOption_E34D38B344E5DA1046801999807F3458
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28227_C::OnDlgSelectedOption_E34D38B344E5DA1046801999807F3458(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28227_C", "OnDlgSelectedOption_E34D38B344E5DA1046801999807F3458");

	Params::Quest_28227_C_OnDlgSelectedOption_E34D38B344E5DA1046801999807F3458 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
