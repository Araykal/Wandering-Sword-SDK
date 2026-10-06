#pragma once



// Package: BPMV_Guidance

#include "Basic.hpp"

#include "BPMV_Guidance_classes.hpp"
#include "BPMV_Guidance_parameters.hpp"


SDK_NAMESPACE_START

// Function BPMV_Guidance.BPMV_Guidance_C.ExecuteUbergraph_BPMV_Guidance
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPMV_Guidance_C::ExecuteUbergraph_BPMV_Guidance(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_Guidance_C", "ExecuteUbergraph_BPMV_Guidance");

	Params::BPMV_Guidance_C_ExecuteUbergraph_BPMV_Guidance Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_Guidance.BPMV_Guidance_C.EVT_SnatchFocusAgain
// (Event, Public, BlueprintEvent)

void UBPMV_Guidance_C::EVT_SnatchFocusAgain()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_Guidance_C", "EVT_SnatchFocusAgain");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_Guidance.BPMV_Guidance_C.BndEvt__BPMV_Guidance_NeoUIButtonBase_5_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBPMV_Guidance_C::BndEvt__BPMV_Guidance_NeoUIButtonBase_5_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_Guidance_C", "BndEvt__BPMV_Guidance_NeoUIButtonBase_5_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_Guidance.BPMV_Guidance_C.BndEvt__BPMV_Guidance_NeoUIButtonBase_217_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBPMV_Guidance_C::BndEvt__BPMV_Guidance_NeoUIButtonBase_217_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_Guidance_C", "BndEvt__BPMV_Guidance_NeoUIButtonBase_217_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_Guidance.BPMV_Guidance_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPMV_Guidance_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_Guidance_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
