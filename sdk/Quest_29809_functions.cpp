#pragma once



// Package: Quest_29809

#include "Basic.hpp"

#include "Quest_29809_classes.hpp"
#include "Quest_29809_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_29809.Quest_29809_C.ExecuteUbergraph_Quest_29809
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_29809_C::ExecuteUbergraph_Quest_29809(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29809_C", "ExecuteUbergraph_Quest_29809");

	Params::Quest_29809_C_ExecuteUbergraph_Quest_29809 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_29809.Quest_29809_C.HandleRequesting
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_29809_C::HandleRequesting(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29809_C", "HandleRequesting");

	Params::Quest_29809_C_HandleRequesting Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_29809.Quest_29809_C.OnFinished_83332CED40451715B27531B4C5D22E22
// (BlueprintCallable, BlueprintEvent)

void UQuest_29809_C::OnFinished_83332CED40451715B27531B4C5D22E22()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29809_C", "OnFinished_83332CED40451715B27531B4C5D22E22");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_29809.Quest_29809_C.OnStop_83332CED40451715B27531B4C5D22E22
// (BlueprintCallable, BlueprintEvent)

void UQuest_29809_C::OnStop_83332CED40451715B27531B4C5D22E22()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29809_C", "OnStop_83332CED40451715B27531B4C5D22E22");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_29809.Quest_29809_C.OnDlgClosed_E9B170DD4A3BC41A48E9269DD217AD56
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_29809_C::OnDlgClosed_E9B170DD4A3BC41A48E9269DD217AD56(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29809_C", "OnDlgClosed_E9B170DD4A3BC41A48E9269DD217AD56");

	Params::Quest_29809_C_OnDlgClosed_E9B170DD4A3BC41A48E9269DD217AD56 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_29809.Quest_29809_C.OnDlgSelectedOption_E9B170DD4A3BC41A48E9269DD217AD56
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_29809_C::OnDlgSelectedOption_E9B170DD4A3BC41A48E9269DD217AD56(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29809_C", "OnDlgSelectedOption_E9B170DD4A3BC41A48E9269DD217AD56");

	Params::Quest_29809_C_OnDlgSelectedOption_E9B170DD4A3BC41A48E9269DD217AD56 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
