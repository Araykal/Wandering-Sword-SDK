#pragma once



// Package: BPVE_JHConfigLanLine

#include "Basic.hpp"

#include "BPVE_JHConfigLanLine_classes.hpp"
#include "BPVE_JHConfigLanLine_parameters.hpp"


SDK_NAMESPACE_START

// Function BPVE_JHConfigLanLine.BPVE_JHConfigLanLine_C.ExecuteUbergraph_BPVE_JHConfigLanLine
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_JHConfigLanLine_C::ExecuteUbergraph_BPVE_JHConfigLanLine(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_JHConfigLanLine_C", "ExecuteUbergraph_BPVE_JHConfigLanLine");

	Params::BPVE_JHConfigLanLine_C_ExecuteUbergraph_BPVE_JHConfigLanLine Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_JHConfigLanLine.BPVE_JHConfigLanLine_C.BndEvt__BPVE_JHConfigVolumeItem_BTN_Plus_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBPVE_JHConfigLanLine_C::BndEvt__BPVE_JHConfigVolumeItem_BTN_Plus_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_JHConfigLanLine_C", "BndEvt__BPVE_JHConfigVolumeItem_BTN_Plus_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPVE_JHConfigLanLine.BPVE_JHConfigLanLine_C.BndEvt__BPVE_JHConfigVolumeItem_BTN_Minus_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBPVE_JHConfigLanLine_C::BndEvt__BPVE_JHConfigVolumeItem_BTN_Minus_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_JHConfigLanLine_C", "BndEvt__BPVE_JHConfigVolumeItem_BTN_Minus_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPVE_JHConfigLanLine.BPVE_JHConfigLanLine_C.BndEvt__BPMV_JHConfigVolumeItem_Slider_126_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_JHConfigLanLine_C::BndEvt__BPMV_JHConfigVolumeItem_Slider_126_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_JHConfigLanLine_C", "BndEvt__BPMV_JHConfigVolumeItem_Slider_126_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature");

	Params::BPVE_JHConfigLanLine_C_BndEvt__BPMV_JHConfigVolumeItem_Slider_126_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_JHConfigLanLine.BPVE_JHConfigLanLine_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPVE_JHConfigLanLine_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_JHConfigLanLine_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPVE_JHConfigLanLine.BPVE_JHConfigLanLine_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGeometry&                 MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// const struct FFocusEvent&               InFocusEvent                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UBPVE_JHConfigLanLine_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_JHConfigLanLine_C", "OnFocusReceived");

	Params::BPVE_JHConfigLanLine_C_OnFocusReceived Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InFocusEvent = std::move(InFocusEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


SDK_NAMESPACE_END
