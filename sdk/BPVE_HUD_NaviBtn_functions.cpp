#pragma once



// Package: BPVE_HUD_NaviBtn

#include "Basic.hpp"

#include "BPVE_HUD_NaviBtn_classes.hpp"
#include "BPVE_HUD_NaviBtn_parameters.hpp"


SDK_NAMESPACE_START

// Function BPVE_HUD_NaviBtn.BPVE_HUD_NaviBtn_C.ExecuteUbergraph_BPVE_HUD_NaviBtn
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_HUD_NaviBtn_C::ExecuteUbergraph_BPVE_HUD_NaviBtn(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_HUD_NaviBtn_C", "ExecuteUbergraph_BPVE_HUD_NaviBtn");

	Params::BPVE_HUD_NaviBtn_C_ExecuteUbergraph_BPVE_HUD_NaviBtn Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_HUD_NaviBtn.BPVE_HUD_NaviBtn_C.BndEvt__BPVE_HUD_NaviBtn_BPCMP_NeoUISimpleBtn_K2Node_ComponentBoundEvent_1_NeoUICommonButtonSingleClick__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UNeoUICommonButton*               SrcWidget                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_HUD_NaviBtn_C::BndEvt__BPVE_HUD_NaviBtn_BPCMP_NeoUISimpleBtn_K2Node_ComponentBoundEvent_1_NeoUICommonButtonSingleClick__DelegateSignature(class UNeoUICommonButton* SrcWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_HUD_NaviBtn_C", "BndEvt__BPVE_HUD_NaviBtn_BPCMP_NeoUISimpleBtn_K2Node_ComponentBoundEvent_1_NeoUICommonButtonSingleClick__DelegateSignature");

	Params::BPVE_HUD_NaviBtn_C_BndEvt__BPVE_HUD_NaviBtn_BPCMP_NeoUISimpleBtn_K2Node_ComponentBoundEvent_1_NeoUICommonButtonSingleClick__DelegateSignature Parms{};

	Parms.SrcWidget = SrcWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_HUD_NaviBtn.BPVE_HUD_NaviBtn_C.EVT_RenderView
// (Event, Public, BlueprintEvent)

void UBPVE_HUD_NaviBtn_C::EVT_RenderView()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_HUD_NaviBtn_C", "EVT_RenderView");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPVE_HUD_NaviBtn.BPVE_HUD_NaviBtn_C.BndEvt__BPVE_HUD_NaviBtn_BTN_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBPVE_HUD_NaviBtn_C::BndEvt__BPVE_HUD_NaviBtn_BTN_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_HUD_NaviBtn_C", "BndEvt__BPVE_HUD_NaviBtn_BTN_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPVE_HUD_NaviBtn.BPVE_HUD_NaviBtn_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPVE_HUD_NaviBtn_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_HUD_NaviBtn_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPVE_HUD_NaviBtn.BPVE_HUD_NaviBtn_C.SetHotKeyVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsVisible_0                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPVE_HUD_NaviBtn_C::SetHotKeyVisible(bool IsVisible_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_HUD_NaviBtn_C", "SetHotKeyVisible");

	Params::BPVE_HUD_NaviBtn_C_SetHotKeyVisible Parms{};

	Parms.IsVisible_0 = IsVisible_0;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
