#pragma once



// Package: BPVE_ArenaDetailListItem

#include "Basic.hpp"

#include "BPVE_ArenaDetailListItem_classes.hpp"
#include "BPVE_ArenaDetailListItem_parameters.hpp"


SDK_NAMESPACE_START

// Function BPVE_ArenaDetailListItem.BPVE_ArenaDetailListItem_C.ExecuteUbergraph_BPVE_ArenaDetailListItem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_ArenaDetailListItem_C::ExecuteUbergraph_BPVE_ArenaDetailListItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_ArenaDetailListItem_C", "ExecuteUbergraph_BPVE_ArenaDetailListItem");

	Params::BPVE_ArenaDetailListItem_C_ExecuteUbergraph_BPVE_ArenaDetailListItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_ArenaDetailListItem.BPVE_ArenaDetailListItem_C.BndEvt__BPVE_ArenaDetailListItem_BTN_ArenaDetailListItem_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UJHNeoUIGamepadConfirmButton*     Btn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_ArenaDetailListItem_C::BndEvt__BPVE_ArenaDetailListItem_BTN_ArenaDetailListItem_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature(class UJHNeoUIGamepadConfirmButton* Btn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_ArenaDetailListItem_C", "BndEvt__BPVE_ArenaDetailListItem_BTN_ArenaDetailListItem_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature");

	Params::BPVE_ArenaDetailListItem_C_BndEvt__BPVE_ArenaDetailListItem_BTN_ArenaDetailListItem_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature Parms{};

	Parms.Btn = Btn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_ArenaDetailListItem.BPVE_ArenaDetailListItem_C.EVT_RenderView
// (Event, Public, BlueprintEvent)

void UBPVE_ArenaDetailListItem_C::EVT_RenderView()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_ArenaDetailListItem_C", "EVT_RenderView");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPVE_ArenaDetailListItem.BPVE_ArenaDetailListItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPVE_ArenaDetailListItem_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_ArenaDetailListItem_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
