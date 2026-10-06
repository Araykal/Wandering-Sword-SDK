#pragma once



// Package: JHGPCBtn_TXT

#include "Basic.hpp"

#include "JHGPCBtn_TXT_classes.hpp"
#include "JHGPCBtn_TXT_parameters.hpp"


SDK_NAMESPACE_START

// Function JHGPCBtn_TXT.JHGPCBtn_TXT_C.ExecuteUbergraph_JHGPCBtn_TXT
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UJHGPCBtn_TXT_C::ExecuteUbergraph_JHGPCBtn_TXT(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JHGPCBtn_TXT_C", "ExecuteUbergraph_JHGPCBtn_TXT");

	Params::JHGPCBtn_TXT_C_ExecuteUbergraph_JHGPCBtn_TXT Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function JHGPCBtn_TXT.JHGPCBtn_TXT_C.OnAddedToFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// const struct FFocusEvent&               InFocusEvent                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UJHGPCBtn_TXT_C::OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JHGPCBtn_TXT_C", "OnAddedToFocusPath");

	Params::JHGPCBtn_TXT_C_OnAddedToFocusPath Parms{};

	Parms.InFocusEvent = std::move(InFocusEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function JHGPCBtn_TXT.JHGPCBtn_TXT_C.OnRemovedFromFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// const struct FFocusEvent&               InFocusEvent                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UJHGPCBtn_TXT_C::OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JHGPCBtn_TXT_C", "OnRemovedFromFocusPath");

	Params::JHGPCBtn_TXT_C_OnRemovedFromFocusPath Parms{};

	Parms.InFocusEvent = std::move(InFocusEvent);

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
