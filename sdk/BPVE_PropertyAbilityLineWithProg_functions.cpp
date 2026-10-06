#pragma once



// Package: BPVE_PropertyAbilityLineWithProg

#include "Basic.hpp"

#include "BPVE_PropertyAbilityLineWithProg_classes.hpp"
#include "BPVE_PropertyAbilityLineWithProg_parameters.hpp"


SDK_NAMESPACE_START

// Function BPVE_PropertyAbilityLineWithProg.BPVE_PropertyAbilityLineWithProg_C.ExecuteUbergraph_BPVE_PropertyAbilityLineWithProg
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_PropertyAbilityLineWithProg_C::ExecuteUbergraph_BPVE_PropertyAbilityLineWithProg(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_PropertyAbilityLineWithProg_C", "ExecuteUbergraph_BPVE_PropertyAbilityLineWithProg");

	Params::BPVE_PropertyAbilityLineWithProg_C_ExecuteUbergraph_BPVE_PropertyAbilityLineWithProg Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_PropertyAbilityLineWithProg.BPVE_PropertyAbilityLineWithProg_C.BndEvt__BPVE_PropertyAbilityLineWithProg_BTN_PropertyAbilityLineWithProg_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UJHNeoUIGamepadConfirmButton*     Btn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_PropertyAbilityLineWithProg_C::BndEvt__BPVE_PropertyAbilityLineWithProg_BTN_PropertyAbilityLineWithProg_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature(class UJHNeoUIGamepadConfirmButton* Btn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_PropertyAbilityLineWithProg_C", "BndEvt__BPVE_PropertyAbilityLineWithProg_BTN_PropertyAbilityLineWithProg_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature");

	Params::BPVE_PropertyAbilityLineWithProg_C_BndEvt__BPVE_PropertyAbilityLineWithProg_BTN_PropertyAbilityLineWithProg_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature Parms{};

	Parms.Btn = Btn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_PropertyAbilityLineWithProg.BPVE_PropertyAbilityLineWithProg_C.EVT_GamepadShowTips
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                                   intflag                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const class FString&                    strFlag                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UBPVE_PropertyAbilityLineWithProg_C::EVT_GamepadShowTips(int32 intflag, const class FString& strFlag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_PropertyAbilityLineWithProg_C", "EVT_GamepadShowTips");

	Params::BPVE_PropertyAbilityLineWithProg_C_EVT_GamepadShowTips Parms{};

	Parms.intflag = intflag;
	Parms.strFlag = std::move(strFlag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_PropertyAbilityLineWithProg.BPVE_PropertyAbilityLineWithProg_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPVE_PropertyAbilityLineWithProg_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_PropertyAbilityLineWithProg_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPVE_PropertyAbilityLineWithProg.BPVE_PropertyAbilityLineWithProg_C.Get Tool Tip Widget 0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UBPVE_PropertyAbilityLineWithProg_C::Get_Tool_Tip_Widget_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_PropertyAbilityLineWithProg_C", "Get Tool Tip Widget 0");

	Params::BPVE_PropertyAbilityLineWithProg_C_Get_Tool_Tip_Widget_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


SDK_NAMESPACE_END
