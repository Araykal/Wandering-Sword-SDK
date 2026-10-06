#pragma once



// Package: BPCMP_BulkSelectionItem

#include "Basic.hpp"

#include "BPCMP_BulkSelectionItem_classes.hpp"
#include "BPCMP_BulkSelectionItem_parameters.hpp"


SDK_NAMESPACE_START

// Function BPCMP_BulkSelectionItem.BPCMP_BulkSelectionItem_C.ExecuteUbergraph_BPCMP_BulkSelectionItem
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPCMP_BulkSelectionItem_C::ExecuteUbergraph_BPCMP_BulkSelectionItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPCMP_BulkSelectionItem_C", "ExecuteUbergraph_BPCMP_BulkSelectionItem");

	Params::BPCMP_BulkSelectionItem_C_ExecuteUbergraph_BPCMP_BulkSelectionItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPCMP_BulkSelectionItem.BPCMP_BulkSelectionItem_C.BndEvt__BPCMP_BulkSelectionItem_Btn_BulkItemBtn_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UJHNeoUIGamepadConfirmButton*     Btn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPCMP_BulkSelectionItem_C::BndEvt__BPCMP_BulkSelectionItem_Btn_BulkItemBtn_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature(class UJHNeoUIGamepadConfirmButton* Btn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPCMP_BulkSelectionItem_C", "BndEvt__BPCMP_BulkSelectionItem_Btn_BulkItemBtn_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature");

	Params::BPCMP_BulkSelectionItem_C_BndEvt__BPCMP_BulkSelectionItem_Btn_BulkItemBtn_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature Parms{};

	Parms.Btn = Btn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPCMP_BulkSelectionItem.BPCMP_BulkSelectionItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPCMP_BulkSelectionItem_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPCMP_BulkSelectionItem_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPCMP_BulkSelectionItem.BPCMP_BulkSelectionItem_C.OnMouseButtonDown_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGeometry&                 MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// const struct FPointerEvent&             MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UBPCMP_BulkSelectionItem_C::OnMouseButtonDown_0(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPCMP_BulkSelectionItem_C", "OnMouseButtonDown_0");

	Params::BPCMP_BulkSelectionItem_C_OnMouseButtonDown_0 Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


SDK_NAMESPACE_END
