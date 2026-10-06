#pragma once



// Package: JHGPCBtn_ActiveBG

#include "Basic.hpp"

#include "JHGPCBtn_ActiveBG_classes.hpp"
#include "JHGPCBtn_ActiveBG_parameters.hpp"


SDK_NAMESPACE_START

// Function JHGPCBtn_ActiveBG.JHGPCBtn_ActiveBG_C.ExecuteUbergraph_JHGPCBtn_ActiveBG
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UJHGPCBtn_ActiveBG_C::ExecuteUbergraph_JHGPCBtn_ActiveBG(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JHGPCBtn_ActiveBG_C", "ExecuteUbergraph_JHGPCBtn_ActiveBG");

	Params::JHGPCBtn_ActiveBG_C_ExecuteUbergraph_JHGPCBtn_ActiveBG Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function JHGPCBtn_ActiveBG.JHGPCBtn_ActiveBG_C.HandleVisibilityChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESlateVisibility                        InVisibility                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UJHGPCBtn_ActiveBG_C::HandleVisibilityChanged(ESlateVisibility InVisibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JHGPCBtn_ActiveBG_C", "HandleVisibilityChanged");

	Params::JHGPCBtn_ActiveBG_C_HandleVisibilityChanged Parms{};

	Parms.InVisibility = InVisibility;

	UObject::ProcessEvent(Func, &Parms);
}


// Function JHGPCBtn_ActiveBG.JHGPCBtn_ActiveBG_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UJHGPCBtn_ActiveBG_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JHGPCBtn_ActiveBG_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
