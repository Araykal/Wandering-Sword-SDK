#pragma once



// Package: BPEntry_Item_WDT_Gift

#include "Basic.hpp"

#include "BPEntry_Item_WDT_Gift_classes.hpp"
#include "BPEntry_Item_WDT_Gift_parameters.hpp"


SDK_NAMESPACE_START

// Function BPEntry_Item_WDT_Gift.BPEntry_Item_WDT_Gift_C.ExecuteUbergraph_BPEntry_Item_WDT_Gift
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPEntry_Item_WDT_Gift_C::ExecuteUbergraph_BPEntry_Item_WDT_Gift(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPEntry_Item_WDT_Gift_C", "ExecuteUbergraph_BPEntry_Item_WDT_Gift");

	Params::BPEntry_Item_WDT_Gift_C_ExecuteUbergraph_BPEntry_Item_WDT_Gift Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPEntry_Item_WDT_Gift.BPEntry_Item_WDT_Gift_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPEntry_Item_WDT_Gift_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPEntry_Item_WDT_Gift_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPEntry_Item_WDT_Gift.BPEntry_Item_WDT_Gift_C.EVT_GamepadShowTips
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                                   intflag                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const class FString&                    strFlag                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UBPEntry_Item_WDT_Gift_C::EVT_GamepadShowTips(int32 intflag, const class FString& strFlag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPEntry_Item_WDT_Gift_C", "EVT_GamepadShowTips");

	Params::BPEntry_Item_WDT_Gift_C_EVT_GamepadShowTips Parms{};

	Parms.intflag = intflag;
	Parms.strFlag = std::move(strFlag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPEntry_Item_WDT_Gift.BPEntry_Item_WDT_Gift_C.BndEvt__BPEntry_Item_WDT_Gift_BTN_JHItem_K2Node_ComponentBoundEvent_1_JHNeoUIGamepadConfirmButtonDoubleClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UJHNeoUIGamepadConfirmButton*     Btn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPEntry_Item_WDT_Gift_C::BndEvt__BPEntry_Item_WDT_Gift_BTN_JHItem_K2Node_ComponentBoundEvent_1_JHNeoUIGamepadConfirmButtonDoubleClicked__DelegateSignature(class UJHNeoUIGamepadConfirmButton* Btn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPEntry_Item_WDT_Gift_C", "BndEvt__BPEntry_Item_WDT_Gift_BTN_JHItem_K2Node_ComponentBoundEvent_1_JHNeoUIGamepadConfirmButtonDoubleClicked__DelegateSignature");

	Params::BPEntry_Item_WDT_Gift_C_BndEvt__BPEntry_Item_WDT_Gift_BTN_JHItem_K2Node_ComponentBoundEvent_1_JHNeoUIGamepadConfirmButtonDoubleClicked__DelegateSignature Parms{};

	Parms.Btn = Btn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPEntry_Item_WDT_Gift.BPEntry_Item_WDT_Gift_C.BndEvt__BPEntry_Item_WDT_Gift_BTN_JHItem_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UJHNeoUIGamepadConfirmButton*     Btn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPEntry_Item_WDT_Gift_C::BndEvt__BPEntry_Item_WDT_Gift_BTN_JHItem_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature(class UJHNeoUIGamepadConfirmButton* Btn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPEntry_Item_WDT_Gift_C", "BndEvt__BPEntry_Item_WDT_Gift_BTN_JHItem_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature");

	Params::BPEntry_Item_WDT_Gift_C_BndEvt__BPEntry_Item_WDT_Gift_BTN_JHItem_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature Parms{};

	Parms.Btn = Btn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPEntry_Item_WDT_Gift.BPEntry_Item_WDT_Gift_C.Get Item Display Tool Tip Widget 0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UBPEntry_Item_WDT_Gift_C::Get_Item_Display_Tool_Tip_Widget_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPEntry_Item_WDT_Gift_C", "Get Item Display Tool Tip Widget 0");

	Params::BPEntry_Item_WDT_Gift_C_Get_Item_Display_Tool_Tip_Widget_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


SDK_NAMESPACE_END
