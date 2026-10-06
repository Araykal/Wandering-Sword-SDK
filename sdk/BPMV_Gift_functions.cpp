#pragma once



// Package: BPMV_Gift

#include "Basic.hpp"

#include "BPMV_Gift_classes.hpp"
#include "BPMV_Gift_parameters.hpp"


SDK_NAMESPACE_START

// Function BPMV_Gift.BPMV_Gift_C.ExecuteUbergraph_BPMV_Gift
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPMV_Gift_C::ExecuteUbergraph_BPMV_Gift(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_Gift_C", "ExecuteUbergraph_BPMV_Gift");

	Params::BPMV_Gift_C_ExecuteUbergraph_BPMV_Gift Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_Gift.BPMV_Gift_C.EVT_VisualShow
// (Event, Public, BlueprintEvent)

void UBPMV_Gift_C::EVT_VisualShow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_Gift_C", "EVT_VisualShow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_Gift.BPMV_Gift_C.EVT_SyncWithGlobalInputMode
// (Event, Public, BlueprintEvent)

void UBPMV_Gift_C::EVT_SyncWithGlobalInputMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_Gift_C", "EVT_SyncWithGlobalInputMode");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_Gift.BPMV_Gift_C.BndEvt__BPMV_Gift_BTN_EXIT_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBPMV_Gift_C::BndEvt__BPMV_Gift_BTN_EXIT_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_Gift_C", "BndEvt__BPMV_Gift_BTN_EXIT_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_Gift.BPMV_Gift_C.EVT_SetupSubModuleSlots
// (Event, Public, BlueprintEvent)

void UBPMV_Gift_C::EVT_SetupSubModuleSlots()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_Gift_C", "EVT_SetupSubModuleSlots");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
