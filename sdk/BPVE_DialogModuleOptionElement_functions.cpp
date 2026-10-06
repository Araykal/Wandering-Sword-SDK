#pragma once



// Package: BPVE_DialogModuleOptionElement

#include "Basic.hpp"

#include "BPVE_DialogModuleOptionElement_classes.hpp"
#include "BPVE_DialogModuleOptionElement_parameters.hpp"


SDK_NAMESPACE_START

// Function BPVE_DialogModuleOptionElement.BPVE_DialogModuleOptionElement_C.ExecuteUbergraph_BPVE_DialogModuleOptionElement
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_DialogModuleOptionElement_C::ExecuteUbergraph_BPVE_DialogModuleOptionElement(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_DialogModuleOptionElement_C", "ExecuteUbergraph_BPVE_DialogModuleOptionElement");

	Params::BPVE_DialogModuleOptionElement_C_ExecuteUbergraph_BPVE_DialogModuleOptionElement Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_DialogModuleOptionElement.BPVE_DialogModuleOptionElement_C.BndEvt__BPVE_DialogModuleOptionElement_BTN_DialogOption_K2Node_ComponentBoundEvent_2_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UJHNeoUIGamepadConfirmButton*     Btn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_DialogModuleOptionElement_C::BndEvt__BPVE_DialogModuleOptionElement_BTN_DialogOption_K2Node_ComponentBoundEvent_2_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature(class UJHNeoUIGamepadConfirmButton* Btn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_DialogModuleOptionElement_C", "BndEvt__BPVE_DialogModuleOptionElement_BTN_DialogOption_K2Node_ComponentBoundEvent_2_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature");

	Params::BPVE_DialogModuleOptionElement_C_BndEvt__BPVE_DialogModuleOptionElement_BTN_DialogOption_K2Node_ComponentBoundEvent_2_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature Parms{};

	Parms.Btn = Btn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_DialogModuleOptionElement.BPVE_DialogModuleOptionElement_C.EVT_RenderView
// (Event, Public, BlueprintEvent)

void UBPVE_DialogModuleOptionElement_C::EVT_RenderView()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_DialogModuleOptionElement_C", "EVT_RenderView");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPVE_DialogModuleOptionElement.BPVE_DialogModuleOptionElement_C.BndEvt__BPVE_DialogModuleOptionElement_BTN_Option_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBPVE_DialogModuleOptionElement_C::BndEvt__BPVE_DialogModuleOptionElement_BTN_Option_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_DialogModuleOptionElement_C", "BndEvt__BPVE_DialogModuleOptionElement_BTN_Option_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPVE_DialogModuleOptionElement.BPVE_DialogModuleOptionElement_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPVE_DialogModuleOptionElement_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_DialogModuleOptionElement_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
