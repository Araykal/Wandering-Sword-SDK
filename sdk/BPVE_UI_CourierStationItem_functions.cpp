#pragma once



// Package: BPVE_UI_CourierStationItem

#include "Basic.hpp"

#include "BPVE_UI_CourierStationItem_classes.hpp"
#include "BPVE_UI_CourierStationItem_parameters.hpp"


SDK_NAMESPACE_START

// Function BPVE_UI_CourierStationItem.BPVE_UI_CourierStationItem_C.ExecuteUbergraph_BPVE_UI_CourierStationItem
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_UI_CourierStationItem_C::ExecuteUbergraph_BPVE_UI_CourierStationItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_UI_CourierStationItem_C", "ExecuteUbergraph_BPVE_UI_CourierStationItem");

	Params::BPVE_UI_CourierStationItem_C_ExecuteUbergraph_BPVE_UI_CourierStationItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_UI_CourierStationItem.BPVE_UI_CourierStationItem_C.BndEvt__BPVE_UI_CourierStationItem_BTN_CourierStationItem_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UJHNeoUIGamepadConfirmButton*     Btn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_UI_CourierStationItem_C::BndEvt__BPVE_UI_CourierStationItem_BTN_CourierStationItem_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature(class UJHNeoUIGamepadConfirmButton* Btn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_UI_CourierStationItem_C", "BndEvt__BPVE_UI_CourierStationItem_BTN_CourierStationItem_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature");

	Params::BPVE_UI_CourierStationItem_C_BndEvt__BPVE_UI_CourierStationItem_BTN_CourierStationItem_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature Parms{};

	Parms.Btn = Btn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_UI_CourierStationItem.BPVE_UI_CourierStationItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPVE_UI_CourierStationItem_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_UI_CourierStationItem_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
