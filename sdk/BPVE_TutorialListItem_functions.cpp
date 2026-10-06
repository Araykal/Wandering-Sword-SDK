#pragma once



// Package: BPVE_TutorialListItem

#include "Basic.hpp"

#include "BPVE_TutorialListItem_classes.hpp"
#include "BPVE_TutorialListItem_parameters.hpp"


SDK_NAMESPACE_START

// Function BPVE_TutorialListItem.BPVE_TutorialListItem_C.ExecuteUbergraph_BPVE_TutorialListItem
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_TutorialListItem_C::ExecuteUbergraph_BPVE_TutorialListItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_TutorialListItem_C", "ExecuteUbergraph_BPVE_TutorialListItem");

	Params::BPVE_TutorialListItem_C_ExecuteUbergraph_BPVE_TutorialListItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_TutorialListItem.BPVE_TutorialListItem_C.BndEvt__BPVE_TutorialListItem_JHGPCBtn_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UJHNeoUIGamepadConfirmButton*     Btn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_TutorialListItem_C::BndEvt__BPVE_TutorialListItem_JHGPCBtn_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature(class UJHNeoUIGamepadConfirmButton* Btn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_TutorialListItem_C", "BndEvt__BPVE_TutorialListItem_JHGPCBtn_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature");

	Params::BPVE_TutorialListItem_C_BndEvt__BPVE_TutorialListItem_JHGPCBtn_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature Parms{};

	Parms.Btn = Btn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_TutorialListItem.BPVE_TutorialListItem_C.EVT_GotoFocusStatus
// (Event, Public, BlueprintEvent)

void UBPVE_TutorialListItem_C::EVT_GotoFocusStatus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_TutorialListItem_C", "EVT_GotoFocusStatus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPVE_TutorialListItem.BPVE_TutorialListItem_C.EVT_GotoNormalStatus
// (Event, Public, BlueprintEvent)

void UBPVE_TutorialListItem_C::EVT_GotoNormalStatus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_TutorialListItem_C", "EVT_GotoNormalStatus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPVE_TutorialListItem.BPVE_TutorialListItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPVE_TutorialListItem_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_TutorialListItem_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPVE_TutorialListItem.BPVE_TutorialListItem_C.OnMouseButtonDown_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGeometry&                 MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// const struct FPointerEvent&             MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UBPVE_TutorialListItem_C::OnMouseButtonDown_0(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_TutorialListItem_C", "OnMouseButtonDown_0");

	Params::BPVE_TutorialListItem_C_OnMouseButtonDown_0 Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


SDK_NAMESPACE_END
