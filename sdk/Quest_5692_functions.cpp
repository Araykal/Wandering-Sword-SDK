#pragma once



// Package: Quest_5692

#include "Basic.hpp"

#include "Quest_5692_classes.hpp"
#include "Quest_5692_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5692.Quest_5692_C.ExecuteUbergraph_Quest_5692
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5692_C::ExecuteUbergraph_Quest_5692(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5692_C", "ExecuteUbergraph_Quest_5692");

	Params::Quest_5692_C_ExecuteUbergraph_Quest_5692 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5692.Quest_5692_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5692_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5692_C", "HandleFinishing");

	Params::Quest_5692_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5692.Quest_5692_C.OnFinished_BF5DD99448F72E7B16CEAE8092F9E192
// (BlueprintCallable, BlueprintEvent)

void UQuest_5692_C::OnFinished_BF5DD99448F72E7B16CEAE8092F9E192()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5692_C", "OnFinished_BF5DD99448F72E7B16CEAE8092F9E192");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5692.Quest_5692_C.OnStop_BF5DD99448F72E7B16CEAE8092F9E192
// (BlueprintCallable, BlueprintEvent)

void UQuest_5692_C::OnStop_BF5DD99448F72E7B16CEAE8092F9E192()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5692_C", "OnStop_BF5DD99448F72E7B16CEAE8092F9E192");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5692.Quest_5692_C.OnDlgClosed_BFFAC4FA4B72BB0988E959BBB460BC88
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5692_C::OnDlgClosed_BFFAC4FA4B72BB0988E959BBB460BC88(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5692_C", "OnDlgClosed_BFFAC4FA4B72BB0988E959BBB460BC88");

	Params::Quest_5692_C_OnDlgClosed_BFFAC4FA4B72BB0988E959BBB460BC88 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5692.Quest_5692_C.OnDlgSelectedOption_BFFAC4FA4B72BB0988E959BBB460BC88
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5692_C::OnDlgSelectedOption_BFFAC4FA4B72BB0988E959BBB460BC88(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5692_C", "OnDlgSelectedOption_BFFAC4FA4B72BB0988E959BBB460BC88");

	Params::Quest_5692_C_OnDlgSelectedOption_BFFAC4FA4B72BB0988E959BBB460BC88 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
