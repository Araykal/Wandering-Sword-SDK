#pragma once



// Package: UWBP_SkipCG

#include "Basic.hpp"

#include "UWBP_SkipCG_classes.hpp"
#include "UWBP_SkipCG_parameters.hpp"


SDK_NAMESPACE_START

// Function UWBP_SkipCG.UWBP_SkipCG_C.ExecuteUbergraph_UWBP_SkipCG
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUWBP_SkipCG_C::ExecuteUbergraph_UWBP_SkipCG(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UWBP_SkipCG_C", "ExecuteUbergraph_UWBP_SkipCG");

	Params::UWBP_SkipCG_C_ExecuteUbergraph_UWBP_SkipCG Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UWBP_SkipCG.UWBP_SkipCG_C.EVT_ResetProgressBar
// (Event, Public, BlueprintEvent)

void UUWBP_SkipCG_C::EVT_ResetProgressBar()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UWBP_SkipCG_C", "EVT_ResetProgressBar");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UWBP_SkipCG.UWBP_SkipCG_C.EVT_StopLongPressAnim
// (Event, Public, BlueprintEvent)

void UUWBP_SkipCG_C::EVT_StopLongPressAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UWBP_SkipCG_C", "EVT_StopLongPressAnim");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UWBP_SkipCG.UWBP_SkipCG_C.EVT_StartLongPressAnim
// (Event, Public, BlueprintEvent)

void UUWBP_SkipCG_C::EVT_StartLongPressAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UWBP_SkipCG_C", "EVT_StartLongPressAnim");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UWBP_SkipCG.UWBP_SkipCG_C.OnProgressEnd_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUWBP_SkipCG_C::OnProgressEnd_Event_0(int32 Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UWBP_SkipCG_C", "OnProgressEnd_Event_0");

	Params::UWBP_SkipCG_C_OnProgressEnd_Event_0 Parms{};

	Parms.Param = Param;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UWBP_SkipCG.UWBP_SkipCG_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsGamepadMode                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUWBP_SkipCG_C::CustomEvent_0(bool IsGamepadMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UWBP_SkipCG_C", "CustomEvent_0");

	Params::UWBP_SkipCG_C_CustomEvent_0 Parms{};

	Parms.IsGamepadMode = IsGamepadMode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UWBP_SkipCG.UWBP_SkipCG_C.BP_OnShow
// (Event, Public, BlueprintEvent)

void UUWBP_SkipCG_C::BP_OnShow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UWBP_SkipCG_C", "BP_OnShow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UWBP_SkipCG.UWBP_SkipCG_C.BP_OnHide
// (Event, Public, BlueprintEvent)

void UUWBP_SkipCG_C::BP_OnHide()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UWBP_SkipCG_C", "BP_OnHide");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UWBP_SkipCG.UWBP_SkipCG_C.BndEvt__UWBP_SkipCG_Button_50_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUWBP_SkipCG_C::BndEvt__UWBP_SkipCG_Button_50_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UWBP_SkipCG_C", "BndEvt__UWBP_SkipCG_Button_50_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UWBP_SkipCG.UWBP_SkipCG_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUWBP_SkipCG_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UWBP_SkipCG_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UWBP_SkipCG.UWBP_SkipCG_C.CheckGamepad
// (Public, BlueprintCallable, BlueprintEvent)

void UUWBP_SkipCG_C::CheckGamepad()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UWBP_SkipCG_C", "CheckGamepad");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
