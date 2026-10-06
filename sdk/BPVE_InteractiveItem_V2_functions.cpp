#pragma once



// Package: BPVE_InteractiveItem_V2

#include "Basic.hpp"

#include "BPVE_InteractiveItem_V2_classes.hpp"
#include "BPVE_InteractiveItem_V2_parameters.hpp"


SDK_NAMESPACE_START

// Function BPVE_InteractiveItem_V2.BPVE_InteractiveItem_V2_C.ExecuteUbergraph_BPVE_InteractiveItem_V2
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_InteractiveItem_V2_C::ExecuteUbergraph_BPVE_InteractiveItem_V2(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_InteractiveItem_V2_C", "ExecuteUbergraph_BPVE_InteractiveItem_V2");

	Params::BPVE_InteractiveItem_V2_C_ExecuteUbergraph_BPVE_InteractiveItem_V2 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_InteractiveItem_V2.BPVE_InteractiveItem_V2_C.BndEvt__BPVE_InteractiveItem_V2_BTN_InteractiveJHItem_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonDoubleClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UJHNeoUIGamepadConfirmButton*     Btn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_InteractiveItem_V2_C::BndEvt__BPVE_InteractiveItem_V2_BTN_InteractiveJHItem_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonDoubleClicked__DelegateSignature(class UJHNeoUIGamepadConfirmButton* Btn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_InteractiveItem_V2_C", "BndEvt__BPVE_InteractiveItem_V2_BTN_InteractiveJHItem_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonDoubleClicked__DelegateSignature");

	Params::BPVE_InteractiveItem_V2_C_BndEvt__BPVE_InteractiveItem_V2_BTN_InteractiveJHItem_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonDoubleClicked__DelegateSignature Parms{};

	Parms.Btn = Btn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_InteractiveItem_V2.BPVE_InteractiveItem_V2_C.EVT_Gamepad_YPressed
// (Event, Public, BlueprintEvent)

void UBPVE_InteractiveItem_V2_C::EVT_Gamepad_YPressed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_InteractiveItem_V2_C", "EVT_Gamepad_YPressed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPVE_InteractiveItem_V2.BPVE_InteractiveItem_V2_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPVE_InteractiveItem_V2_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_InteractiveItem_V2_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPVE_InteractiveItem_V2.BPVE_InteractiveItem_V2_C.EVT_GamepadShowTips
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                                   intflag                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const class FString&                    strFlag                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UBPVE_InteractiveItem_V2_C::EVT_GamepadShowTips(int32 intflag, const class FString& strFlag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_InteractiveItem_V2_C", "EVT_GamepadShowTips");

	Params::BPVE_InteractiveItem_V2_C_EVT_GamepadShowTips Parms{};

	Parms.intflag = intflag;
	Parms.strFlag = std::move(strFlag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_InteractiveItem_V2.BPVE_InteractiveItem_V2_C.BndEvt__BPVE_InteractiveItem_V2_BTN_InteractiveJHItem_K2Node_ComponentBoundEvent_3_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UJHNeoUIGamepadConfirmButton*     Btn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_InteractiveItem_V2_C::BndEvt__BPVE_InteractiveItem_V2_BTN_InteractiveJHItem_K2Node_ComponentBoundEvent_3_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature(class UJHNeoUIGamepadConfirmButton* Btn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_InteractiveItem_V2_C", "BndEvt__BPVE_InteractiveItem_V2_BTN_InteractiveJHItem_K2Node_ComponentBoundEvent_3_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature");

	Params::BPVE_InteractiveItem_V2_C_BndEvt__BPVE_InteractiveItem_V2_BTN_InteractiveJHItem_K2Node_ComponentBoundEvent_3_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature Parms{};

	Parms.Btn = Btn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_InteractiveItem_V2.BPVE_InteractiveItem_V2_C.Get Tool Tip Widget 0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UBPVE_InteractiveItem_V2_C::Get_Tool_Tip_Widget_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_InteractiveItem_V2_C", "Get Tool Tip Widget 0");

	Params::BPVE_InteractiveItem_V2_C_Get_Tool_Tip_Widget_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


SDK_NAMESPACE_END
