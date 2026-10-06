#pragma once



// Package: BPVE_NAVI_BTN_NEXT

#include "Basic.hpp"

#include "BPVE_NAVI_BTN_NEXT_classes.hpp"
#include "BPVE_NAVI_BTN_NEXT_parameters.hpp"


SDK_NAMESPACE_START

// Function BPVE_NAVI_BTN_NEXT.BPVE_NAVI_BTN_NEXT_C.ExecuteUbergraph_BPVE_NAVI_BTN_NEXT
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_NAVI_BTN_NEXT_C::ExecuteUbergraph_BPVE_NAVI_BTN_NEXT(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_NAVI_BTN_NEXT_C", "ExecuteUbergraph_BPVE_NAVI_BTN_NEXT");

	Params::BPVE_NAVI_BTN_NEXT_C_ExecuteUbergraph_BPVE_NAVI_BTN_NEXT Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_NAVI_BTN_NEXT.BPVE_NAVI_BTN_NEXT_C.BndEvt__BPVE_NAVI_BTN_NEXT_NeoUIButtonBase_63_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBPVE_NAVI_BTN_NEXT_C::BndEvt__BPVE_NAVI_BTN_NEXT_NeoUIButtonBase_63_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_NAVI_BTN_NEXT_C", "BndEvt__BPVE_NAVI_BTN_NEXT_NeoUIButtonBase_63_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPVE_NAVI_BTN_NEXT.BPVE_NAVI_BTN_NEXT_C.EVT_RenderView
// (Event, Public, BlueprintEvent)

void UBPVE_NAVI_BTN_NEXT_C::EVT_RenderView()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_NAVI_BTN_NEXT_C", "EVT_RenderView");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPVE_NAVI_BTN_NEXT.BPVE_NAVI_BTN_NEXT_C.OnMouseButtonDown_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGeometry&                 MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// const struct FPointerEvent&             MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UBPVE_NAVI_BTN_NEXT_C::OnMouseButtonDown_0(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_NAVI_BTN_NEXT_C", "OnMouseButtonDown_0");

	Params::BPVE_NAVI_BTN_NEXT_C_OnMouseButtonDown_0 Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


SDK_NAMESPACE_END
