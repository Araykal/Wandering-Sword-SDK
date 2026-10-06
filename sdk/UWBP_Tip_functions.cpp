#pragma once



// Package: UWBP_Tip

#include "Basic.hpp"

#include "UWBP_Tip_classes.hpp"
#include "UWBP_Tip_parameters.hpp"


SDK_NAMESPACE_START

// Function UWBP_Tip.UWBP_Tip_C.ExecuteUbergraph_UWBP_Tip
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUWBP_Tip_C::ExecuteUbergraph_UWBP_Tip(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UWBP_Tip_C", "ExecuteUbergraph_UWBP_Tip");

	Params::UWBP_Tip_C_ExecuteUbergraph_UWBP_Tip Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UWBP_Tip.UWBP_Tip_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUWBP_Tip_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UWBP_Tip_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UWBP_Tip.UWBP_Tip_C.BndEvt__UWBP_GatherTip_BTNGather_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUWBP_Tip_C::BndEvt__UWBP_GatherTip_BTNGather_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UWBP_Tip_C", "BndEvt__UWBP_GatherTip_BTNGather_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UWBP_Tip.UWBP_Tip_C.SetText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FText&                      InText_0                                               (BlueprintVisible, BlueprintReadOnly, Parm)

void UUWBP_Tip_C::SetText(const class FText& InText_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UWBP_Tip_C", "SetText");

	Params::UWBP_Tip_C_SetText Parms{};

	Parms.InText_0 = std::move(InText_0);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UWBP_Tip.UWBP_Tip_C.CheckGamepad
// (Public, BlueprintCallable, BlueprintEvent)

void UUWBP_Tip_C::CheckGamepad()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UWBP_Tip_C", "CheckGamepad");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UWBP_Tip.UWBP_Tip_C.GetText_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UUWBP_Tip_C::GetText_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UWBP_Tip_C", "GetText_0");

	Params::UWBP_Tip_C_GetText_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


SDK_NAMESPACE_END
