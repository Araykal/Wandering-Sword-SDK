#pragma once



// Package: BPVE_NGP_InheritanceItem

#include "Basic.hpp"

#include "BPVE_NGP_InheritanceItem_classes.hpp"
#include "BPVE_NGP_InheritanceItem_parameters.hpp"


SDK_NAMESPACE_START

// Function BPVE_NGP_InheritanceItem.BPVE_NGP_InheritanceItem_C.ExecuteUbergraph_BPVE_NGP_InheritanceItem
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_NGP_InheritanceItem_C::ExecuteUbergraph_BPVE_NGP_InheritanceItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_NGP_InheritanceItem_C", "ExecuteUbergraph_BPVE_NGP_InheritanceItem");

	Params::BPVE_NGP_InheritanceItem_C_ExecuteUbergraph_BPVE_NGP_InheritanceItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_NGP_InheritanceItem.BPVE_NGP_InheritanceItem_C.EVT_GamepadShowTips
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                                   intflag                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const class FString&                    strFlag                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UBPVE_NGP_InheritanceItem_C::EVT_GamepadShowTips(int32 intflag, const class FString& strFlag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_NGP_InheritanceItem_C", "EVT_GamepadShowTips");

	Params::BPVE_NGP_InheritanceItem_C_EVT_GamepadShowTips Parms{};

	Parms.intflag = intflag;
	Parms.strFlag = std::move(strFlag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_NGP_InheritanceItem.BPVE_NGP_InheritanceItem_C.BndEvt__BPVE_NGP_InheritanceItem_BTN_NGP_InheritanceItem_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UJHNeoUIGamepadConfirmButton*     Btn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_NGP_InheritanceItem_C::BndEvt__BPVE_NGP_InheritanceItem_BTN_NGP_InheritanceItem_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature(class UJHNeoUIGamepadConfirmButton* Btn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_NGP_InheritanceItem_C", "BndEvt__BPVE_NGP_InheritanceItem_BTN_NGP_InheritanceItem_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature");

	Params::BPVE_NGP_InheritanceItem_C_BndEvt__BPVE_NGP_InheritanceItem_BTN_NGP_InheritanceItem_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature Parms{};

	Parms.Btn = Btn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_NGP_InheritanceItem.BPVE_NGP_InheritanceItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPVE_NGP_InheritanceItem_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_NGP_InheritanceItem_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPVE_NGP_InheritanceItem.BPVE_NGP_InheritanceItem_C.GetToolTipWidget_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UBPVE_NGP_InheritanceItem_C::GetToolTipWidget_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_NGP_InheritanceItem_C", "GetToolTipWidget_0");

	Params::BPVE_NGP_InheritanceItem_C_GetToolTipWidget_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


SDK_NAMESPACE_END
