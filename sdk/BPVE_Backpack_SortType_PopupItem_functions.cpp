#pragma once



// Package: BPVE_Backpack_SortType_PopupItem

#include "Basic.hpp"

#include "BPVE_Backpack_SortType_PopupItem_classes.hpp"
#include "BPVE_Backpack_SortType_PopupItem_parameters.hpp"


SDK_NAMESPACE_START

// Function BPVE_Backpack_SortType_PopupItem.BPVE_Backpack_SortType_PopupItem_C.ExecuteUbergraph_BPVE_Backpack_SortType_PopupItem
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_Backpack_SortType_PopupItem_C::ExecuteUbergraph_BPVE_Backpack_SortType_PopupItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_Backpack_SortType_PopupItem_C", "ExecuteUbergraph_BPVE_Backpack_SortType_PopupItem");

	Params::BPVE_Backpack_SortType_PopupItem_C_ExecuteUbergraph_BPVE_Backpack_SortType_PopupItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_Backpack_SortType_PopupItem.BPVE_Backpack_SortType_PopupItem_C.BndEvt__BPVE_Backpack_SortType_PopupItem_Btn_SortBtnPopupItem_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UJHNeoUIGamepadConfirmButton*     Btn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_Backpack_SortType_PopupItem_C::BndEvt__BPVE_Backpack_SortType_PopupItem_Btn_SortBtnPopupItem_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature(class UJHNeoUIGamepadConfirmButton* Btn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_Backpack_SortType_PopupItem_C", "BndEvt__BPVE_Backpack_SortType_PopupItem_Btn_SortBtnPopupItem_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature");

	Params::BPVE_Backpack_SortType_PopupItem_C_BndEvt__BPVE_Backpack_SortType_PopupItem_Btn_SortBtnPopupItem_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature Parms{};

	Parms.Btn = Btn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_Backpack_SortType_PopupItem.BPVE_Backpack_SortType_PopupItem_C.EVT_RenderView
// (Event, Public, BlueprintEvent)

void UBPVE_Backpack_SortType_PopupItem_C::EVT_RenderView()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_Backpack_SortType_PopupItem_C", "EVT_RenderView");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPVE_Backpack_SortType_PopupItem.BPVE_Backpack_SortType_PopupItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPVE_Backpack_SortType_PopupItem_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_Backpack_SortType_PopupItem_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPVE_Backpack_SortType_PopupItem.BPVE_Backpack_SortType_PopupItem_C.OnMouseButtonDown_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGeometry&                 MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// const struct FPointerEvent&             MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UBPVE_Backpack_SortType_PopupItem_C::OnMouseButtonDown_0(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_Backpack_SortType_PopupItem_C", "OnMouseButtonDown_0");

	Params::BPVE_Backpack_SortType_PopupItem_C_OnMouseButtonDown_0 Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


SDK_NAMESPACE_END
