#pragma once



// Package: BPVE_JHConfigVolumeItem2

#include "Basic.hpp"

#include "BPVE_JHConfigVolumeItem2_classes.hpp"
#include "BPVE_JHConfigVolumeItem2_parameters.hpp"


SDK_NAMESPACE_START

// Function BPVE_JHConfigVolumeItem2.BPVE_JHConfigVolumeItem2_C.ExecuteUbergraph_BPVE_JHConfigVolumeItem2
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_JHConfigVolumeItem2_C::ExecuteUbergraph_BPVE_JHConfigVolumeItem2(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_JHConfigVolumeItem2_C", "ExecuteUbergraph_BPVE_JHConfigVolumeItem2");

	Params::BPVE_JHConfigVolumeItem2_C_ExecuteUbergraph_BPVE_JHConfigVolumeItem2 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_JHConfigVolumeItem2.BPVE_JHConfigVolumeItem2_C.BndEvt__BPVE_JHConfigVolumeItem_BTN_Plus_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBPVE_JHConfigVolumeItem2_C::BndEvt__BPVE_JHConfigVolumeItem_BTN_Plus_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_JHConfigVolumeItem2_C", "BndEvt__BPVE_JHConfigVolumeItem_BTN_Plus_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPVE_JHConfigVolumeItem2.BPVE_JHConfigVolumeItem2_C.BndEvt__BPVE_JHConfigVolumeItem_BTN_Minus_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBPVE_JHConfigVolumeItem2_C::BndEvt__BPVE_JHConfigVolumeItem_BTN_Minus_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_JHConfigVolumeItem2_C", "BndEvt__BPVE_JHConfigVolumeItem_BTN_Minus_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPVE_JHConfigVolumeItem2.BPVE_JHConfigVolumeItem2_C.BndEvt__BPMV_JHConfigVolumeItem_Slider_126_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_JHConfigVolumeItem2_C::BndEvt__BPMV_JHConfigVolumeItem_Slider_126_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_JHConfigVolumeItem2_C", "BndEvt__BPMV_JHConfigVolumeItem_Slider_126_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature");

	Params::BPVE_JHConfigVolumeItem2_C_BndEvt__BPMV_JHConfigVolumeItem_Slider_126_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_JHConfigVolumeItem2.BPVE_JHConfigVolumeItem2_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPVE_JHConfigVolumeItem2_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_JHConfigVolumeItem2_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPVE_JHConfigVolumeItem2.BPVE_JHConfigVolumeItem2_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGeometry&                 MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// const struct FFocusEvent&               InFocusEvent                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UBPVE_JHConfigVolumeItem2_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_JHConfigVolumeItem2_C", "OnFocusReceived");

	Params::BPVE_JHConfigVolumeItem2_C_OnFocusReceived Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InFocusEvent = std::move(InFocusEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


SDK_NAMESPACE_END
