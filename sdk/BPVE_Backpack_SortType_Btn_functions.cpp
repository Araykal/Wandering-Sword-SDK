#pragma once



// Package: BPVE_Backpack_SortType_Btn

#include "Basic.hpp"

#include "BPVE_Backpack_SortType_Btn_classes.hpp"
#include "BPVE_Backpack_SortType_Btn_parameters.hpp"


SDK_NAMESPACE_START

// Function BPVE_Backpack_SortType_Btn.BPVE_Backpack_SortType_Btn_C.ExecuteUbergraph_BPVE_Backpack_SortType_Btn
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_Backpack_SortType_Btn_C::ExecuteUbergraph_BPVE_Backpack_SortType_Btn(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_Backpack_SortType_Btn_C", "ExecuteUbergraph_BPVE_Backpack_SortType_Btn");

	Params::BPVE_Backpack_SortType_Btn_C_ExecuteUbergraph_BPVE_Backpack_SortType_Btn Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_Backpack_SortType_Btn.BPVE_Backpack_SortType_Btn_C.BndEvt__BPVE_Backpack_SortType_Btn_BTN_SortTypeBtn_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UJHNeoUIGamepadConfirmButton*     Btn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_Backpack_SortType_Btn_C::BndEvt__BPVE_Backpack_SortType_Btn_BTN_SortTypeBtn_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature(class UJHNeoUIGamepadConfirmButton* Btn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_Backpack_SortType_Btn_C", "BndEvt__BPVE_Backpack_SortType_Btn_BTN_SortTypeBtn_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature");

	Params::BPVE_Backpack_SortType_Btn_C_BndEvt__BPVE_Backpack_SortType_Btn_BTN_SortTypeBtn_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature Parms{};

	Parms.Btn = Btn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_Backpack_SortType_Btn.BPVE_Backpack_SortType_Btn_C.EVT_SetupHierarchy
// (Event, Public, BlueprintEvent)

void UBPVE_Backpack_SortType_Btn_C::EVT_SetupHierarchy()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_Backpack_SortType_Btn_C", "EVT_SetupHierarchy");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPVE_Backpack_SortType_Btn.BPVE_Backpack_SortType_Btn_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPVE_Backpack_SortType_Btn_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_Backpack_SortType_Btn_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
