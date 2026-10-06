#pragma once



// Package: BPMV_EstateArenaConfig

#include "Basic.hpp"

#include "BPMV_EstateArenaConfig_classes.hpp"
#include "BPMV_EstateArenaConfig_parameters.hpp"


SDK_NAMESPACE_START

// Function BPMV_EstateArenaConfig.BPMV_EstateArenaConfig_C.ExecuteUbergraph_BPMV_EstateArenaConfig
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPMV_EstateArenaConfig_C::ExecuteUbergraph_BPMV_EstateArenaConfig(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_EstateArenaConfig_C", "ExecuteUbergraph_BPMV_EstateArenaConfig");

	Params::BPMV_EstateArenaConfig_C_ExecuteUbergraph_BPMV_EstateArenaConfig Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_EstateArenaConfig.BPMV_EstateArenaConfig_C.EVT_FocusWidgetForScenario
// (Event, Public, BlueprintEvent)
// Parameters:
// ENeoUIFocusWidgetScenario               scenario                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FNeoUIFocusWidgetParam&    Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm)

void UBPMV_EstateArenaConfig_C::EVT_FocusWidgetForScenario(ENeoUIFocusWidgetScenario scenario, const struct FNeoUIFocusWidgetParam& Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_EstateArenaConfig_C", "EVT_FocusWidgetForScenario");

	Params::BPMV_EstateArenaConfig_C_EVT_FocusWidgetForScenario Parms{};

	Parms.scenario = scenario;
	Parms.Param = std::move(Param);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_EstateArenaConfig.BPMV_EstateArenaConfig_C.BndEvt__BPMV_EstateArenaConfig_BTN_NaviRight_K2Node_ComponentBoundEvent_7_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UBPMV_EstateArenaConfig_C::BndEvt__BPMV_EstateArenaConfig_BTN_NaviRight_K2Node_ComponentBoundEvent_7_OnButtonReleasedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_EstateArenaConfig_C", "BndEvt__BPMV_EstateArenaConfig_BTN_NaviRight_K2Node_ComponentBoundEvent_7_OnButtonReleasedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_EstateArenaConfig.BPMV_EstateArenaConfig_C.BndEvt__BPMV_EstateArenaConfig_BTN_NaviRight_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UBPMV_EstateArenaConfig_C::BndEvt__BPMV_EstateArenaConfig_BTN_NaviRight_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_EstateArenaConfig_C", "BndEvt__BPMV_EstateArenaConfig_BTN_NaviRight_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_EstateArenaConfig.BPMV_EstateArenaConfig_C.BndEvt__BPMV_EstateArenaConfig_BTN_NaviLeft_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UBPMV_EstateArenaConfig_C::BndEvt__BPMV_EstateArenaConfig_BTN_NaviLeft_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_EstateArenaConfig_C", "BndEvt__BPMV_EstateArenaConfig_BTN_NaviLeft_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_EstateArenaConfig.BPMV_EstateArenaConfig_C.BndEvt__BPMV_EstateArenaConfig_BTN_NaviLeft_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UBPMV_EstateArenaConfig_C::BndEvt__BPMV_EstateArenaConfig_BTN_NaviLeft_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_EstateArenaConfig_C", "BndEvt__BPMV_EstateArenaConfig_BTN_NaviLeft_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_EstateArenaConfig.BPMV_EstateArenaConfig_C.BndEvt__BPMV_EstateArenaConfig_BTN_EXIT_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBPMV_EstateArenaConfig_C::BndEvt__BPMV_EstateArenaConfig_BTN_EXIT_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_EstateArenaConfig_C", "BndEvt__BPMV_EstateArenaConfig_BTN_EXIT_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_EstateArenaConfig.BPMV_EstateArenaConfig_C.EVT_RenderView
// (Event, Public, BlueprintEvent)

void UBPMV_EstateArenaConfig_C::EVT_RenderView()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_EstateArenaConfig_C", "EVT_RenderView");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_EstateArenaConfig.BPMV_EstateArenaConfig_C.EVT_SetupHierarchy
// (Event, Public, BlueprintEvent)

void UBPMV_EstateArenaConfig_C::EVT_SetupHierarchy()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_EstateArenaConfig_C", "EVT_SetupHierarchy");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_EstateArenaConfig.BPMV_EstateArenaConfig_C.BndEvt__BPMV_EstateArenaConfig_JHCommon_Btn_K2Node_ComponentBoundEvent_0_BtnClick__DelegateSignature
// (BlueprintEvent)

void UBPMV_EstateArenaConfig_C::BndEvt__BPMV_EstateArenaConfig_JHCommon_Btn_K2Node_ComponentBoundEvent_0_BtnClick__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_EstateArenaConfig_C", "BndEvt__BPMV_EstateArenaConfig_JHCommon_Btn_K2Node_ComponentBoundEvent_0_BtnClick__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_EstateArenaConfig.BPMV_EstateArenaConfig_C.FocusWidgetForScenario_Direct
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// ENeoUIFocusWidgetScenario               scenario                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FNeoUIFocusWidgetParam&    Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UBPMV_EstateArenaConfig_C::FocusWidgetForScenario_Direct(ENeoUIFocusWidgetScenario scenario, const struct FNeoUIFocusWidgetParam& Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_EstateArenaConfig_C", "FocusWidgetForScenario_Direct");

	Params::BPMV_EstateArenaConfig_C_FocusWidgetForScenario_Direct Parms{};

	Parms.scenario = scenario;
	Parms.Param = std::move(Param);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


SDK_NAMESPACE_END
