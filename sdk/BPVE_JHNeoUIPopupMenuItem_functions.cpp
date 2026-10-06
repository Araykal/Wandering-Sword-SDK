#pragma once



// Package: BPVE_JHNeoUIPopupMenuItem

#include "Basic.hpp"

#include "BPVE_JHNeoUIPopupMenuItem_classes.hpp"
#include "BPVE_JHNeoUIPopupMenuItem_parameters.hpp"


SDK_NAMESPACE_START

// Function BPVE_JHNeoUIPopupMenuItem.BPVE_JHNeoUIPopupMenuItem_C.ExecuteUbergraph_BPVE_JHNeoUIPopupMenuItem
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_JHNeoUIPopupMenuItem_C::ExecuteUbergraph_BPVE_JHNeoUIPopupMenuItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_JHNeoUIPopupMenuItem_C", "ExecuteUbergraph_BPVE_JHNeoUIPopupMenuItem");

	Params::BPVE_JHNeoUIPopupMenuItem_C_ExecuteUbergraph_BPVE_JHNeoUIPopupMenuItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_JHNeoUIPopupMenuItem.BPVE_JHNeoUIPopupMenuItem_C.BndEvt__BPVE_JHNeoUIPopupMenuItem_BTN_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBPVE_JHNeoUIPopupMenuItem_C::BndEvt__BPVE_JHNeoUIPopupMenuItem_BTN_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_JHNeoUIPopupMenuItem_C", "BndEvt__BPVE_JHNeoUIPopupMenuItem_BTN_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPVE_JHNeoUIPopupMenuItem.BPVE_JHNeoUIPopupMenuItem_C.BndEvt__BPVE_JHNeoUIPopupMenuItem_BTN_PopupMenuItem_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UJHNeoUIGamepadConfirmButton*     Btn_0                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_JHNeoUIPopupMenuItem_C::BndEvt__BPVE_JHNeoUIPopupMenuItem_BTN_PopupMenuItem_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature(class UJHNeoUIGamepadConfirmButton* Btn_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_JHNeoUIPopupMenuItem_C", "BndEvt__BPVE_JHNeoUIPopupMenuItem_BTN_PopupMenuItem_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature");

	Params::BPVE_JHNeoUIPopupMenuItem_C_BndEvt__BPVE_JHNeoUIPopupMenuItem_BTN_PopupMenuItem_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature Parms{};

	Parms.Btn_0 = Btn_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_JHNeoUIPopupMenuItem.BPVE_JHNeoUIPopupMenuItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPVE_JHNeoUIPopupMenuItem_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_JHNeoUIPopupMenuItem_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
