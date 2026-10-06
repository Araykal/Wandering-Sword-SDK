#pragma once



// Package: UWBP_GatherTip

#include "Basic.hpp"

#include "UWBP_GatherTip_classes.hpp"
#include "UWBP_GatherTip_parameters.hpp"


SDK_NAMESPACE_START

// Function UWBP_GatherTip.UWBP_GatherTip_C.ExecuteUbergraph_UWBP_GatherTip
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUWBP_GatherTip_C::ExecuteUbergraph_UWBP_GatherTip(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UWBP_GatherTip_C", "ExecuteUbergraph_UWBP_GatherTip");

	Params::UWBP_GatherTip_C_ExecuteUbergraph_UWBP_GatherTip Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UWBP_GatherTip.UWBP_GatherTip_C.BndEvt__UWBP_GatherTip_BTNGather_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUWBP_GatherTip_C::BndEvt__UWBP_GatherTip_BTNGather_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UWBP_GatherTip_C", "BndEvt__UWBP_GatherTip_BTNGather_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UWBP_GatherTip.UWBP_GatherTip_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUWBP_GatherTip_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UWBP_GatherTip_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UWBP_GatherTip.UWBP_GatherTip_C.SetText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FText&                      InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UUWBP_GatherTip_C::SetText(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UWBP_GatherTip_C", "SetText");

	Params::UWBP_GatherTip_C_SetText Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UWBP_GatherTip.UWBP_GatherTip_C.CheckGamepad
// (Public, BlueprintCallable, BlueprintEvent)

void UUWBP_GatherTip_C::CheckGamepad()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UWBP_GatherTip_C", "CheckGamepad");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
