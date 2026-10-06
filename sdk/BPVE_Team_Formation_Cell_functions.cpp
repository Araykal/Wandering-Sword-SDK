#pragma once



// Package: BPVE_Team_Formation_Cell

#include "Basic.hpp"

#include "BPVE_Team_Formation_Cell_classes.hpp"
#include "BPVE_Team_Formation_Cell_parameters.hpp"


SDK_NAMESPACE_START

// Function BPVE_Team_Formation_Cell.BPVE_Team_Formation_Cell_C.ExecuteUbergraph_BPVE_Team_Formation_Cell
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_Team_Formation_Cell_C::ExecuteUbergraph_BPVE_Team_Formation_Cell(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_Team_Formation_Cell_C", "ExecuteUbergraph_BPVE_Team_Formation_Cell");

	Params::BPVE_Team_Formation_Cell_C_ExecuteUbergraph_BPVE_Team_Formation_Cell Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_Team_Formation_Cell.BPVE_Team_Formation_Cell_C.BndEvt__BPVE_Team_Formation_Cell_BTN_FORMATION_CELL_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UJHNeoUIGamepadConfirmButton*     Btn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_Team_Formation_Cell_C::BndEvt__BPVE_Team_Formation_Cell_BTN_FORMATION_CELL_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature(class UJHNeoUIGamepadConfirmButton* Btn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_Team_Formation_Cell_C", "BndEvt__BPVE_Team_Formation_Cell_BTN_FORMATION_CELL_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature");

	Params::BPVE_Team_Formation_Cell_C_BndEvt__BPVE_Team_Formation_Cell_BTN_FORMATION_CELL_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature Parms{};

	Parms.Btn = Btn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_Team_Formation_Cell.BPVE_Team_Formation_Cell_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPVE_Team_Formation_Cell_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_Team_Formation_Cell_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPVE_Team_Formation_Cell.BPVE_Team_Formation_Cell_C.OnMouseButtonDown_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGeometry&                 MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// const struct FPointerEvent&             MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UBPVE_Team_Formation_Cell_C::OnMouseButtonDown_0(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_Team_Formation_Cell_C", "OnMouseButtonDown_0");

	Params::BPVE_Team_Formation_Cell_C_OnMouseButtonDown_0 Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


SDK_NAMESPACE_END
