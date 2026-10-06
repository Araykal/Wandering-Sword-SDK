#pragma once



// Package: BPMV_JHBackpack_Gift

#include "Basic.hpp"

#include "BPMV_JHBackpack_Gift_classes.hpp"
#include "BPMV_JHBackpack_Gift_parameters.hpp"


SDK_NAMESPACE_START

// Function BPMV_JHBackpack_Gift.BPMV_JHBackpack_Gift_C.ExecuteUbergraph_BPMV_JHBackpack_Gift
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPMV_JHBackpack_Gift_C::ExecuteUbergraph_BPMV_JHBackpack_Gift(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_JHBackpack_Gift_C", "ExecuteUbergraph_BPMV_JHBackpack_Gift");

	Params::BPMV_JHBackpack_Gift_C_ExecuteUbergraph_BPMV_JHBackpack_Gift Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_JHBackpack_Gift.BPMV_JHBackpack_Gift_C.EVT_FocusWidgetForScenario
// (Event, Public, BlueprintEvent)
// Parameters:
// ENeoUIFocusWidgetScenario               scenario                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FNeoUIFocusWidgetParam&    Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm)

void UBPMV_JHBackpack_Gift_C::EVT_FocusWidgetForScenario(ENeoUIFocusWidgetScenario scenario, const struct FNeoUIFocusWidgetParam& Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_JHBackpack_Gift_C", "EVT_FocusWidgetForScenario");

	Params::BPMV_JHBackpack_Gift_C_EVT_FocusWidgetForScenario Parms{};

	Parms.scenario = scenario;
	Parms.Param = std::move(Param);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_JHBackpack_Gift.BPMV_JHBackpack_Gift_C.BndEvt__BPMV_JHBackpack_Gift_BTN_Gift_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBPMV_JHBackpack_Gift_C::BndEvt__BPMV_JHBackpack_Gift_BTN_Gift_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_JHBackpack_Gift_C", "BndEvt__BPMV_JHBackpack_Gift_BTN_Gift_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_JHBackpack_Gift.BPMV_JHBackpack_Gift_C.BndEvt__BPMV_JHBackpack_Basic_NeoUIButtonBase_26_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBPMV_JHBackpack_Gift_C::BndEvt__BPMV_JHBackpack_Basic_NeoUIButtonBase_26_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_JHBackpack_Gift_C", "BndEvt__BPMV_JHBackpack_Basic_NeoUIButtonBase_26_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_JHBackpack_Gift.BPMV_JHBackpack_Gift_C.EVT_RenderView
// (Event, Public, BlueprintEvent)

void UBPMV_JHBackpack_Gift_C::EVT_RenderView()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_JHBackpack_Gift_C", "EVT_RenderView");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_JHBackpack_Gift.BPMV_JHBackpack_Gift_C.EVT_SetupHierarchy
// (Event, Public, BlueprintEvent)

void UBPMV_JHBackpack_Gift_C::EVT_SetupHierarchy()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_JHBackpack_Gift_C", "EVT_SetupHierarchy");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_JHBackpack_Gift.BPMV_JHBackpack_Gift_C.FocusWidgetForScenario_Direct
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// ENeoUIFocusWidgetScenario               scenario                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FNeoUIFocusWidgetParam&    Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UBPMV_JHBackpack_Gift_C::FocusWidgetForScenario_Direct(ENeoUIFocusWidgetScenario scenario, const struct FNeoUIFocusWidgetParam& Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_JHBackpack_Gift_C", "FocusWidgetForScenario_Direct");

	Params::BPMV_JHBackpack_Gift_C_FocusWidgetForScenario_Direct Parms{};

	Parms.scenario = scenario;
	Parms.Param = std::move(Param);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


SDK_NAMESPACE_END
