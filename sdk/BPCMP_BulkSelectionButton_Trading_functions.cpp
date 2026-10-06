#pragma once



// Package: BPCMP_BulkSelectionButton_Trading

#include "Basic.hpp"

#include "BPCMP_BulkSelectionButton_Trading_classes.hpp"
#include "BPCMP_BulkSelectionButton_Trading_parameters.hpp"


SDK_NAMESPACE_START

// Function BPCMP_BulkSelectionButton_Trading.BPCMP_BulkSelectionButton_Trading_C.ExecuteUbergraph_BPCMP_BulkSelectionButton_Trading
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPCMP_BulkSelectionButton_Trading_C::ExecuteUbergraph_BPCMP_BulkSelectionButton_Trading(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPCMP_BulkSelectionButton_Trading_C", "ExecuteUbergraph_BPCMP_BulkSelectionButton_Trading");

	Params::BPCMP_BulkSelectionButton_Trading_C_ExecuteUbergraph_BPCMP_BulkSelectionButton_Trading Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPCMP_BulkSelectionButton_Trading.BPCMP_BulkSelectionButton_Trading_C.BndEvt__BPCMP_BulkSelectionButton_Trading_Btn_TradingBulkBtn_K2Node_ComponentBoundEvent_1_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UJHNeoUIGamepadConfirmButton*     Btn_0                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPCMP_BulkSelectionButton_Trading_C::BndEvt__BPCMP_BulkSelectionButton_Trading_Btn_TradingBulkBtn_K2Node_ComponentBoundEvent_1_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature(class UJHNeoUIGamepadConfirmButton* Btn_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPCMP_BulkSelectionButton_Trading_C", "BndEvt__BPCMP_BulkSelectionButton_Trading_Btn_TradingBulkBtn_K2Node_ComponentBoundEvent_1_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature");

	Params::BPCMP_BulkSelectionButton_Trading_C_BndEvt__BPCMP_BulkSelectionButton_Trading_Btn_TradingBulkBtn_K2Node_ComponentBoundEvent_1_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature Parms{};

	Parms.Btn_0 = Btn_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPCMP_BulkSelectionButton_Trading.BPCMP_BulkSelectionButton_Trading_C.BndEvt__BPCMP_BulkSelectionButton_Trading_BTN_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBPCMP_BulkSelectionButton_Trading_C::BndEvt__BPCMP_BulkSelectionButton_Trading_BTN_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPCMP_BulkSelectionButton_Trading_C", "BndEvt__BPCMP_BulkSelectionButton_Trading_BTN_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPCMP_BulkSelectionButton_Trading.BPCMP_BulkSelectionButton_Trading_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPCMP_BulkSelectionButton_Trading_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPCMP_BulkSelectionButton_Trading_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPCMP_BulkSelectionButton_Trading.BPCMP_BulkSelectionButton_Trading_C.OnMouseButtonDown_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGeometry&                 MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// const struct FPointerEvent&             MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UBPCMP_BulkSelectionButton_Trading_C::OnMouseButtonDown_0(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPCMP_BulkSelectionButton_Trading_C", "OnMouseButtonDown_0");

	Params::BPCMP_BulkSelectionButton_Trading_C_OnMouseButtonDown_0 Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


SDK_NAMESPACE_END
