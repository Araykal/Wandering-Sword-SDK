#pragma once



// Package: BPMV_JHCertView_mobile

#include "Basic.hpp"

#include "BPMV_JHCertView_mobile_classes.hpp"
#include "BPMV_JHCertView_mobile_parameters.hpp"


SDK_NAMESPACE_START

// Function BPMV_JHCertView_mobile.BPMV_JHCertView_mobile_C.ExecuteUbergraph_BPMV_JHCertView_mobile
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPMV_JHCertView_mobile_C::ExecuteUbergraph_BPMV_JHCertView_mobile(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_JHCertView_mobile_C", "ExecuteUbergraph_BPMV_JHCertView_mobile");

	Params::BPMV_JHCertView_mobile_C_ExecuteUbergraph_BPMV_JHCertView_mobile Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_JHCertView_mobile.BPMV_JHCertView_mobile_C.BndEvt__BPMV_JHCertView_BTN_Confirm_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBPMV_JHCertView_mobile_C::BndEvt__BPMV_JHCertView_BTN_Confirm_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_JHCertView_mobile_C", "BndEvt__BPMV_JHCertView_BTN_Confirm_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
