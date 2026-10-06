#pragma once



// Package: BPMV_ConfigView2

#include "Basic.hpp"

#include "BPMV_ConfigView2_classes.hpp"
#include "BPMV_ConfigView2_parameters.hpp"


SDK_NAMESPACE_START

// Function BPMV_ConfigView2.BPMV_ConfigView2_C.ExecuteUbergraph_BPMV_ConfigView2
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPMV_ConfigView2_C::ExecuteUbergraph_BPMV_ConfigView2(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_ConfigView2_C", "ExecuteUbergraph_BPMV_ConfigView2");

	Params::BPMV_ConfigView2_C_ExecuteUbergraph_BPMV_ConfigView2 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_ConfigView2.BPMV_ConfigView2_C.EVT_SyncWithGlobalInputMode
// (Event, Public, BlueprintEvent)

void UBPMV_ConfigView2_C::EVT_SyncWithGlobalInputMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_ConfigView2_C", "EVT_SyncWithGlobalInputMode");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_ConfigView2.BPMV_ConfigView2_C.EVT_VisualShow
// (Event, Public, BlueprintEvent)

void UBPMV_ConfigView2_C::EVT_VisualShow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_ConfigView2_C", "EVT_VisualShow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_ConfigView2.BPMV_ConfigView2_C.BndEvt__BPMV_ConfigView2_Btn_Revert2_K2Node_ComponentBoundEvent_4_BtnClick__DelegateSignature
// (BlueprintEvent)

void UBPMV_ConfigView2_C::BndEvt__BPMV_ConfigView2_Btn_Revert2_K2Node_ComponentBoundEvent_4_BtnClick__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_ConfigView2_C", "BndEvt__BPMV_ConfigView2_Btn_Revert2_K2Node_ComponentBoundEvent_4_BtnClick__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_ConfigView2.BPMV_ConfigView2_C.BndEvt__BPMV_ConfigView2_BTN_EXIT_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBPMV_ConfigView2_C::BndEvt__BPMV_ConfigView2_BTN_EXIT_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_ConfigView2_C", "BndEvt__BPMV_ConfigView2_BTN_EXIT_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_ConfigView2.BPMV_ConfigView2_C.EVT_SetupSubModuleSlots
// (Event, Public, BlueprintEvent)

void UBPMV_ConfigView2_C::EVT_SetupSubModuleSlots()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_ConfigView2_C", "EVT_SetupSubModuleSlots");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_ConfigView2.BPMV_ConfigView2_C.EVT_SyncTabIndex
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                                   TabIndex                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPMV_ConfigView2_C::EVT_SyncTabIndex(int32 TabIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_ConfigView2_C", "EVT_SyncTabIndex");

	Params::BPMV_ConfigView2_C_EVT_SyncTabIndex Parms{};

	Parms.TabIndex = TabIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_ConfigView2.BPMV_ConfigView2_C.EVT_FocusWidgetForScenario
// (Event, Public, BlueprintEvent)
// Parameters:
// ENeoUIFocusWidgetScenario               scenario                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FNeoUIFocusWidgetParam&    Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm)

void UBPMV_ConfigView2_C::EVT_FocusWidgetForScenario(ENeoUIFocusWidgetScenario scenario, const struct FNeoUIFocusWidgetParam& Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_ConfigView2_C", "EVT_FocusWidgetForScenario");

	Params::BPMV_ConfigView2_C_EVT_FocusWidgetForScenario Parms{};

	Parms.scenario = scenario;
	Parms.Param = std::move(Param);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_ConfigView2.BPMV_ConfigView2_C.EVT_VisualConstructOnce
// (Event, Public, BlueprintEvent)

void UBPMV_ConfigView2_C::EVT_VisualConstructOnce()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_ConfigView2_C", "EVT_VisualConstructOnce");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_ConfigView2.BPMV_ConfigView2_C.FocusWidgetForScenario_Direct
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// ENeoUIFocusWidgetScenario               scenario                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FNeoUIFocusWidgetParam&    Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UBPMV_ConfigView2_C::FocusWidgetForScenario_Direct(ENeoUIFocusWidgetScenario scenario, const struct FNeoUIFocusWidgetParam& Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_ConfigView2_C", "FocusWidgetForScenario_Direct");

	Params::BPMV_ConfigView2_C_FocusWidgetForScenario_Direct Parms{};

	Parms.scenario = scenario;
	Parms.Param = std::move(Param);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BPMV_ConfigView2.BPMV_ConfigView2_C.DoCustomNavigation_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EUINavigation                           Navigation_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UBPMV_ConfigView2_C::DoCustomNavigation_0(EUINavigation Navigation_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_ConfigView2_C", "DoCustomNavigation_0");

	Params::BPMV_ConfigView2_C_DoCustomNavigation_0 Parms{};

	Parms.Navigation_0 = Navigation_0;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


SDK_NAMESPACE_END
