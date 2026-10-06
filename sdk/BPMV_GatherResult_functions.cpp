#pragma once



// Package: BPMV_GatherResult

#include "Basic.hpp"

#include "BPMV_GatherResult_classes.hpp"
#include "BPMV_GatherResult_parameters.hpp"


SDK_NAMESPACE_START

// Function BPMV_GatherResult.BPMV_GatherResult_C.ExecuteUbergraph_BPMV_GatherResult
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPMV_GatherResult_C::ExecuteUbergraph_BPMV_GatherResult(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_GatherResult_C", "ExecuteUbergraph_BPMV_GatherResult");

	Params::BPMV_GatherResult_C_ExecuteUbergraph_BPMV_GatherResult Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_GatherResult.BPMV_GatherResult_C.EVT_VisualShow
// (Event, Public, BlueprintEvent)

void UBPMV_GatherResult_C::EVT_VisualShow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_GatherResult_C", "EVT_VisualShow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_GatherResult.BPMV_GatherResult_C.EVT_SyncWithGlobalInputMode
// (Event, Public, BlueprintEvent)

void UBPMV_GatherResult_C::EVT_SyncWithGlobalInputMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_GatherResult_C", "EVT_SyncWithGlobalInputMode");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_GatherResult.BPMV_GatherResult_C.EVT_FocusWidgetForScenario
// (Event, Public, BlueprintEvent)
// Parameters:
// ENeoUIFocusWidgetScenario               scenario                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FNeoUIFocusWidgetParam&    Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm)

void UBPMV_GatherResult_C::EVT_FocusWidgetForScenario(ENeoUIFocusWidgetScenario scenario, const struct FNeoUIFocusWidgetParam& Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_GatherResult_C", "EVT_FocusWidgetForScenario");

	Params::BPMV_GatherResult_C_EVT_FocusWidgetForScenario Parms{};

	Parms.scenario = scenario;
	Parms.Param = std::move(Param);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_GatherResult.BPMV_GatherResult_C.BndEvt__BPMV_GatherResult_BTN_EXIT_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBPMV_GatherResult_C::BndEvt__BPMV_GatherResult_BTN_EXIT_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_GatherResult_C", "BndEvt__BPMV_GatherResult_BTN_EXIT_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_GatherResult.BPMV_GatherResult_C.EVT_ModuleShow
// (Event, Public, BlueprintEvent)

void UBPMV_GatherResult_C::EVT_ModuleShow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_GatherResult_C", "EVT_ModuleShow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_GatherResult.BPMV_GatherResult_C.BndEvt__BPMV_GatherResult_NeoUIButtonBase_45_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBPMV_GatherResult_C::BndEvt__BPMV_GatherResult_NeoUIButtonBase_45_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_GatherResult_C", "BndEvt__BPMV_GatherResult_NeoUIButtonBase_45_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_GatherResult.BPMV_GatherResult_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGeometry&                 MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// const struct FPointerEvent&             MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UBPMV_GatherResult_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_GatherResult_C", "OnMouseButtonDown");

	Params::BPMV_GatherResult_C_OnMouseButtonDown Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BPMV_GatherResult.BPMV_GatherResult_C.FocusWidgetForScenario_Direct
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// ENeoUIFocusWidgetScenario               scenario                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FNeoUIFocusWidgetParam&    Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UBPMV_GatherResult_C::FocusWidgetForScenario_Direct(ENeoUIFocusWidgetScenario scenario, const struct FNeoUIFocusWidgetParam& Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_GatherResult_C", "FocusWidgetForScenario_Direct");

	Params::BPMV_GatherResult_C_FocusWidgetForScenario_Direct Parms{};

	Parms.scenario = scenario;
	Parms.Param = std::move(Param);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


SDK_NAMESPACE_END
