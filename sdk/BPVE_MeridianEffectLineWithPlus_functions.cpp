#pragma once



// Package: BPVE_MeridianEffectLineWithPlus

#include "Basic.hpp"

#include "BPVE_MeridianEffectLineWithPlus_classes.hpp"
#include "BPVE_MeridianEffectLineWithPlus_parameters.hpp"


SDK_NAMESPACE_START

// Function BPVE_MeridianEffectLineWithPlus.BPVE_MeridianEffectLineWithPlus_C.ExecuteUbergraph_BPVE_MeridianEffectLineWithPlus
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_MeridianEffectLineWithPlus_C::ExecuteUbergraph_BPVE_MeridianEffectLineWithPlus(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_MeridianEffectLineWithPlus_C", "ExecuteUbergraph_BPVE_MeridianEffectLineWithPlus");

	Params::BPVE_MeridianEffectLineWithPlus_C_ExecuteUbergraph_BPVE_MeridianEffectLineWithPlus Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_MeridianEffectLineWithPlus.BPVE_MeridianEffectLineWithPlus_C.EVT_UpdatePlusButtonVisibility
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    vflag                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPVE_MeridianEffectLineWithPlus_C::EVT_UpdatePlusButtonVisibility(bool vflag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_MeridianEffectLineWithPlus_C", "EVT_UpdatePlusButtonVisibility");

	Params::BPVE_MeridianEffectLineWithPlus_C_EVT_UpdatePlusButtonVisibility Parms{};

	Parms.vflag = vflag;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_MeridianEffectLineWithPlus.BPVE_MeridianEffectLineWithPlus_C.BndEvt__BPVE_MeridianEffectLineWithPlus_BTN_PrimeMeridianDetailLine_K2Node_ComponentBoundEvent_1_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UJHNeoUIGamepadConfirmButton*     Btn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_MeridianEffectLineWithPlus_C::BndEvt__BPVE_MeridianEffectLineWithPlus_BTN_PrimeMeridianDetailLine_K2Node_ComponentBoundEvent_1_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature(class UJHNeoUIGamepadConfirmButton* Btn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_MeridianEffectLineWithPlus_C", "BndEvt__BPVE_MeridianEffectLineWithPlus_BTN_PrimeMeridianDetailLine_K2Node_ComponentBoundEvent_1_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature");

	Params::BPVE_MeridianEffectLineWithPlus_C_BndEvt__BPVE_MeridianEffectLineWithPlus_BTN_PrimeMeridianDetailLine_K2Node_ComponentBoundEvent_1_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature Parms{};

	Parms.Btn = Btn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_MeridianEffectLineWithPlus.BPVE_MeridianEffectLineWithPlus_C.BndEvt__BPVE_MeridianEffectLineWithPlus_NeoUIButtonBase_283_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBPVE_MeridianEffectLineWithPlus_C::BndEvt__BPVE_MeridianEffectLineWithPlus_NeoUIButtonBase_283_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_MeridianEffectLineWithPlus_C", "BndEvt__BPVE_MeridianEffectLineWithPlus_NeoUIButtonBase_283_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPVE_MeridianEffectLineWithPlus.BPVE_MeridianEffectLineWithPlus_C.EVT_GamepadShowTips
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                                   intflag                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const class FString&                    strFlag                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UBPVE_MeridianEffectLineWithPlus_C::EVT_GamepadShowTips(int32 intflag, const class FString& strFlag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_MeridianEffectLineWithPlus_C", "EVT_GamepadShowTips");

	Params::BPVE_MeridianEffectLineWithPlus_C_EVT_GamepadShowTips Parms{};

	Parms.intflag = intflag;
	Parms.strFlag = std::move(strFlag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_MeridianEffectLineWithPlus.BPVE_MeridianEffectLineWithPlus_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPVE_MeridianEffectLineWithPlus_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_MeridianEffectLineWithPlus_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPVE_MeridianEffectLineWithPlus.BPVE_MeridianEffectLineWithPlus_C.GetToolTipWidget_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UBPVE_MeridianEffectLineWithPlus_C::GetToolTipWidget_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_MeridianEffectLineWithPlus_C", "GetToolTipWidget_0");

	Params::BPVE_MeridianEffectLineWithPlus_C_GetToolTipWidget_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


SDK_NAMESPACE_END
