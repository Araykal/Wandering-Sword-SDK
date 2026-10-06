#pragma once



// Package: BPMV_DialogModuleView

#include "Basic.hpp"

#include "BPMV_DialogModuleView_classes.hpp"
#include "BPMV_DialogModuleView_parameters.hpp"


SDK_NAMESPACE_START

// Function BPMV_DialogModuleView.BPMV_DialogModuleView_C.ExecuteUbergraph_BPMV_DialogModuleView
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPMV_DialogModuleView_C::ExecuteUbergraph_BPMV_DialogModuleView(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_DialogModuleView_C", "ExecuteUbergraph_BPMV_DialogModuleView");

	Params::BPMV_DialogModuleView_C_ExecuteUbergraph_BPMV_DialogModuleView Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_DialogModuleView.BPMV_DialogModuleView_C.EVT_DelayFocusSelf
// (Event, Public, BlueprintEvent)

void UBPMV_DialogModuleView_C::EVT_DelayFocusSelf()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_DialogModuleView_C", "EVT_DelayFocusSelf");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_DialogModuleView.BPMV_DialogModuleView_C.EVT_UpdateOptionStatus
// (Event, Public, BlueprintEvent)

void UBPMV_DialogModuleView_C::EVT_UpdateOptionStatus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_DialogModuleView_C", "EVT_UpdateOptionStatus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_DialogModuleView.BPMV_DialogModuleView_C.EVT_SyncWithGlobalInputMode
// (Event, Public, BlueprintEvent)

void UBPMV_DialogModuleView_C::EVT_SyncWithGlobalInputMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_DialogModuleView_C", "EVT_SyncWithGlobalInputMode");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_DialogModuleView.BPMV_DialogModuleView_C.EVT_VisualShow
// (Event, Public, BlueprintEvent)

void UBPMV_DialogModuleView_C::EVT_VisualShow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_DialogModuleView_C", "EVT_VisualShow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_DialogModuleView.BPMV_DialogModuleView_C.BndEvt__BPMV_DialogModuleView_BTN_DialogNext_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBPMV_DialogModuleView_C::BndEvt__BPMV_DialogModuleView_BTN_DialogNext_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_DialogModuleView_C", "BndEvt__BPMV_DialogModuleView_BTN_DialogNext_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_DialogModuleView.BPMV_DialogModuleView_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPMV_DialogModuleView_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_DialogModuleView_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_DialogModuleView.BPMV_DialogModuleView_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGeometry&                 MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// const struct FPointerEvent&             MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UBPMV_DialogModuleView_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_DialogModuleView_C", "OnMouseButtonDown");

	Params::BPMV_DialogModuleView_C_OnMouseButtonDown Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


SDK_NAMESPACE_END
