#pragma once



// Package: BPEntry_Item

#include "Basic.hpp"

#include "BPEntry_Item_classes.hpp"
#include "BPEntry_Item_parameters.hpp"


SDK_NAMESPACE_START

// Function BPEntry_Item.BPEntry_Item_C.ExecuteUbergraph_BPEntry_Item
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPEntry_Item_C::ExecuteUbergraph_BPEntry_Item(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPEntry_Item_C", "ExecuteUbergraph_BPEntry_Item");

	Params::BPEntry_Item_C_ExecuteUbergraph_BPEntry_Item Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPEntry_Item.BPEntry_Item_C.BndEvt__BPEntry_Item_BTN_JHItem_K2Node_ComponentBoundEvent_1_JHNeoUIGamepadConfirmButtonDoubleClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UJHNeoUIGamepadConfirmButton*     Btn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPEntry_Item_C::BndEvt__BPEntry_Item_BTN_JHItem_K2Node_ComponentBoundEvent_1_JHNeoUIGamepadConfirmButtonDoubleClicked__DelegateSignature(class UJHNeoUIGamepadConfirmButton* Btn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPEntry_Item_C", "BndEvt__BPEntry_Item_BTN_JHItem_K2Node_ComponentBoundEvent_1_JHNeoUIGamepadConfirmButtonDoubleClicked__DelegateSignature");

	Params::BPEntry_Item_C_BndEvt__BPEntry_Item_BTN_JHItem_K2Node_ComponentBoundEvent_1_JHNeoUIGamepadConfirmButtonDoubleClicked__DelegateSignature Parms{};

	Parms.Btn = Btn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPEntry_Item.BPEntry_Item_C.BndEvt__BPEntry_Item_BTN_JHItem_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UJHNeoUIGamepadConfirmButton*     Btn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPEntry_Item_C::BndEvt__BPEntry_Item_BTN_JHItem_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature(class UJHNeoUIGamepadConfirmButton* Btn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPEntry_Item_C", "BndEvt__BPEntry_Item_BTN_JHItem_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature");

	Params::BPEntry_Item_C_BndEvt__BPEntry_Item_BTN_JHItem_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature Parms{};

	Parms.Btn = Btn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPEntry_Item.BPEntry_Item_C.EVT_GamepadShowTips
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                                   intflag                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const class FString&                    strFlag                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UBPEntry_Item_C::EVT_GamepadShowTips(int32 intflag, const class FString& strFlag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPEntry_Item_C", "EVT_GamepadShowTips");

	Params::BPEntry_Item_C_EVT_GamepadShowTips Parms{};

	Parms.intflag = intflag;
	Parms.strFlag = std::move(strFlag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPEntry_Item.BPEntry_Item_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPEntry_Item_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPEntry_Item_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPEntry_Item.BPEntry_Item_C.Get_ItemDisplay_ToolTipWidget_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UBPEntry_Item_C::Get_ItemDisplay_ToolTipWidget_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPEntry_Item_C", "Get_ItemDisplay_ToolTipWidget_0");

	Params::BPEntry_Item_C_Get_ItemDisplay_ToolTipWidget_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


SDK_NAMESPACE_END
