#pragma once



// Package: Quest_32581

#include "Basic.hpp"

#include "Quest_32581_classes.hpp"
#include "Quest_32581_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_32581.Quest_32581_C.ExecuteUbergraph_Quest_32581
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_32581_C::ExecuteUbergraph_Quest_32581(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_32581_C", "ExecuteUbergraph_Quest_32581");

	Params::Quest_32581_C_ExecuteUbergraph_Quest_32581 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_32581.Quest_32581_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_32581_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_32581_C", "HandleFinishing");

	Params::Quest_32581_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_32581.Quest_32581_C.OnFinished_7659CE314BFC7B019093E180BCDA0B3F
// (BlueprintCallable, BlueprintEvent)

void UQuest_32581_C::OnFinished_7659CE314BFC7B019093E180BCDA0B3F()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_32581_C", "OnFinished_7659CE314BFC7B019093E180BCDA0B3F");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_32581.Quest_32581_C.OnStop_7659CE314BFC7B019093E180BCDA0B3F
// (BlueprintCallable, BlueprintEvent)

void UQuest_32581_C::OnStop_7659CE314BFC7B019093E180BCDA0B3F()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_32581_C", "OnStop_7659CE314BFC7B019093E180BCDA0B3F");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_32581.Quest_32581_C.OnDlgClosed_10BA523942C43BF4EBCD4AA51FA46372
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_32581_C::OnDlgClosed_10BA523942C43BF4EBCD4AA51FA46372(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_32581_C", "OnDlgClosed_10BA523942C43BF4EBCD4AA51FA46372");

	Params::Quest_32581_C_OnDlgClosed_10BA523942C43BF4EBCD4AA51FA46372 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_32581.Quest_32581_C.OnDlgSelectedOption_10BA523942C43BF4EBCD4AA51FA46372
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_32581_C::OnDlgSelectedOption_10BA523942C43BF4EBCD4AA51FA46372(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_32581_C", "OnDlgSelectedOption_10BA523942C43BF4EBCD4AA51FA46372");

	Params::Quest_32581_C_OnDlgSelectedOption_10BA523942C43BF4EBCD4AA51FA46372 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
