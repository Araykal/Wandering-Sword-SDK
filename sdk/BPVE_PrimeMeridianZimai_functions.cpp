#pragma once



// Package: BPVE_PrimeMeridianZimai

#include "Basic.hpp"

#include "BPVE_PrimeMeridianZimai_classes.hpp"
#include "BPVE_PrimeMeridianZimai_parameters.hpp"


SDK_NAMESPACE_START

// Function BPVE_PrimeMeridianZimai.BPVE_PrimeMeridianZimai_C.ExecuteUbergraph_BPVE_PrimeMeridianZimai
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_PrimeMeridianZimai_C::ExecuteUbergraph_BPVE_PrimeMeridianZimai(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_PrimeMeridianZimai_C", "ExecuteUbergraph_BPVE_PrimeMeridianZimai");

	Params::BPVE_PrimeMeridianZimai_C_ExecuteUbergraph_BPVE_PrimeMeridianZimai Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_PrimeMeridianZimai.BPVE_PrimeMeridianZimai_C.EVT_GamepadShowTips
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                                   intflag                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const class FString&                    strFlag                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UBPVE_PrimeMeridianZimai_C::EVT_GamepadShowTips(int32 intflag, const class FString& strFlag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_PrimeMeridianZimai_C", "EVT_GamepadShowTips");

	Params::BPVE_PrimeMeridianZimai_C_EVT_GamepadShowTips Parms{};

	Parms.intflag = intflag;
	Parms.strFlag = std::move(strFlag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_PrimeMeridianZimai.BPVE_PrimeMeridianZimai_C.BndEvt__BPVE_PrimeMeridianZimai_BTN_PrimeMeridianCell_K2Node_ComponentBoundEvent_1_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UJHNeoUIGamepadConfirmButton*     Btn_0                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_PrimeMeridianZimai_C::BndEvt__BPVE_PrimeMeridianZimai_BTN_PrimeMeridianCell_K2Node_ComponentBoundEvent_1_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature(class UJHNeoUIGamepadConfirmButton* Btn_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_PrimeMeridianZimai_C", "BndEvt__BPVE_PrimeMeridianZimai_BTN_PrimeMeridianCell_K2Node_ComponentBoundEvent_1_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature");

	Params::BPVE_PrimeMeridianZimai_C_BndEvt__BPVE_PrimeMeridianZimai_BTN_PrimeMeridianCell_K2Node_ComponentBoundEvent_1_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature Parms{};

	Parms.Btn_0 = Btn_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_PrimeMeridianZimai.BPVE_PrimeMeridianZimai_C.BndEvt__BPVE_PrimeMeridianZimai_BTN_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBPVE_PrimeMeridianZimai_C::BndEvt__BPVE_PrimeMeridianZimai_BTN_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_PrimeMeridianZimai_C", "BndEvt__BPVE_PrimeMeridianZimai_BTN_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPVE_PrimeMeridianZimai.BPVE_PrimeMeridianZimai_C.EVT_RenderView
// (Event, Public, BlueprintEvent)

void UBPVE_PrimeMeridianZimai_C::EVT_RenderView()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_PrimeMeridianZimai_C", "EVT_RenderView");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPVE_PrimeMeridianZimai.BPVE_PrimeMeridianZimai_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPVE_PrimeMeridianZimai_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_PrimeMeridianZimai_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPVE_PrimeMeridianZimai.BPVE_PrimeMeridianZimai_C.GetToolTipWidget_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UBPVE_PrimeMeridianZimai_C::GetToolTipWidget_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_PrimeMeridianZimai_C", "GetToolTipWidget_0");

	Params::BPVE_PrimeMeridianZimai_C_GetToolTipWidget_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BPVE_PrimeMeridianZimai.BPVE_PrimeMeridianZimai_C.On_IMG_MouseButtonDown_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGeometry&                 MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// const struct FPointerEvent&             MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UBPVE_PrimeMeridianZimai_C::On_IMG_MouseButtonDown_0(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_PrimeMeridianZimai_C", "On_IMG_MouseButtonDown_0");

	Params::BPVE_PrimeMeridianZimai_C_On_IMG_MouseButtonDown_0 Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


SDK_NAMESPACE_END
