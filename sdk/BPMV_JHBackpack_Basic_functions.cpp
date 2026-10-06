#pragma once



// Package: BPMV_JHBackpack_Basic

#include "Basic.hpp"

#include "BPMV_JHBackpack_Basic_classes.hpp"
#include "BPMV_JHBackpack_Basic_parameters.hpp"


SDK_NAMESPACE_START

// Function BPMV_JHBackpack_Basic.BPMV_JHBackpack_Basic_C.ExecuteUbergraph_BPMV_JHBackpack_Basic
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPMV_JHBackpack_Basic_C::ExecuteUbergraph_BPMV_JHBackpack_Basic(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_JHBackpack_Basic_C", "ExecuteUbergraph_BPMV_JHBackpack_Basic");

	Params::BPMV_JHBackpack_Basic_C_ExecuteUbergraph_BPMV_JHBackpack_Basic Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_JHBackpack_Basic.BPMV_JHBackpack_Basic_C.EVT_VisualHide
// (Event, Public, BlueprintEvent)

void UBPMV_JHBackpack_Basic_C::EVT_VisualHide()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_JHBackpack_Basic_C", "EVT_VisualHide");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_JHBackpack_Basic.BPMV_JHBackpack_Basic_C.EVT_CloseSortTypePanel
// (Event, Public, BlueprintEvent)

void UBPMV_JHBackpack_Basic_C::EVT_CloseSortTypePanel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_JHBackpack_Basic_C", "EVT_CloseSortTypePanel");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_JHBackpack_Basic.BPMV_JHBackpack_Basic_C.EVT_RenderView
// (Event, Public, BlueprintEvent)

void UBPMV_JHBackpack_Basic_C::EVT_RenderView()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_JHBackpack_Basic_C", "EVT_RenderView");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_JHBackpack_Basic.BPMV_JHBackpack_Basic_C.BndEvt__BPMV_JHBackpack_Basic_BTN_BackpackSort_K2Node_ComponentBoundEvent_2_BtnClick__DelegateSignature
// (BlueprintEvent)

void UBPMV_JHBackpack_Basic_C::BndEvt__BPMV_JHBackpack_Basic_BTN_BackpackSort_K2Node_ComponentBoundEvent_2_BtnClick__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_JHBackpack_Basic_C", "BndEvt__BPMV_JHBackpack_Basic_BTN_BackpackSort_K2Node_ComponentBoundEvent_2_BtnClick__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_JHBackpack_Basic.BPMV_JHBackpack_Basic_C.BndEvt__BPMV_JHBackpack_Basic_VE_SortType_Btn_K2Node_ComponentBoundEvent_1_BTN_Click__DelegateSignature
// (BlueprintEvent)

void UBPMV_JHBackpack_Basic_C::BndEvt__BPMV_JHBackpack_Basic_VE_SortType_Btn_K2Node_ComponentBoundEvent_1_BTN_Click__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_JHBackpack_Basic_C", "BndEvt__BPMV_JHBackpack_Basic_VE_SortType_Btn_K2Node_ComponentBoundEvent_1_BTN_Click__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_JHBackpack_Basic.BPMV_JHBackpack_Basic_C.EVT_Gamepad_FocusSortBtn
// (Event, Public, BlueprintEvent)

void UBPMV_JHBackpack_Basic_C::EVT_Gamepad_FocusSortBtn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_JHBackpack_Basic_C", "EVT_Gamepad_FocusSortBtn");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_JHBackpack_Basic.BPMV_JHBackpack_Basic_C.EVT_SetupHierarchy
// (Event, Public, BlueprintEvent)

void UBPMV_JHBackpack_Basic_C::EVT_SetupHierarchy()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_JHBackpack_Basic_C", "EVT_SetupHierarchy");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_JHBackpack_Basic.BPMV_JHBackpack_Basic_C.EVT_FocusWidgetForScenario
// (Event, Public, BlueprintEvent)
// Parameters:
// ENeoUIFocusWidgetScenario               scenario                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FNeoUIFocusWidgetParam&    Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm)

void UBPMV_JHBackpack_Basic_C::EVT_FocusWidgetForScenario(ENeoUIFocusWidgetScenario scenario, const struct FNeoUIFocusWidgetParam& Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_JHBackpack_Basic_C", "EVT_FocusWidgetForScenario");

	Params::BPMV_JHBackpack_Basic_C_EVT_FocusWidgetForScenario Parms{};

	Parms.scenario = scenario;
	Parms.Param = std::move(Param);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_JHBackpack_Basic.BPMV_JHBackpack_Basic_C.EVT_HideSortBtn
// (Event, Public, BlueprintEvent)

void UBPMV_JHBackpack_Basic_C::EVT_HideSortBtn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_JHBackpack_Basic_C", "EVT_HideSortBtn");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_JHBackpack_Basic.BPMV_JHBackpack_Basic_C.BndEvt__BPMV_JHBackpack_Basic_NeoUIButtonBase_26_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBPMV_JHBackpack_Basic_C::BndEvt__BPMV_JHBackpack_Basic_NeoUIButtonBase_26_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_JHBackpack_Basic_C", "BndEvt__BPMV_JHBackpack_Basic_NeoUIButtonBase_26_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_JHBackpack_Basic.BPMV_JHBackpack_Basic_C.Navi_GotoTop
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EUINavigation                           Navigation_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UBPMV_JHBackpack_Basic_C::Navi_GotoTop(EUINavigation Navigation_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_JHBackpack_Basic_C", "Navi_GotoTop");

	Params::BPMV_JHBackpack_Basic_C_Navi_GotoTop Parms{};

	Parms.Navigation_0 = Navigation_0;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BPMV_JHBackpack_Basic.BPMV_JHBackpack_Basic_C.Navi_GotoLeft
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EUINavigation                           Navigation_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UBPMV_JHBackpack_Basic_C::Navi_GotoLeft(EUINavigation Navigation_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_JHBackpack_Basic_C", "Navi_GotoLeft");

	Params::BPMV_JHBackpack_Basic_C_Navi_GotoLeft Parms{};

	Parms.Navigation_0 = Navigation_0;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BPMV_JHBackpack_Basic.BPMV_JHBackpack_Basic_C.FocusWidgetForScenario_Direct
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// ENeoUIFocusWidgetScenario               scenario                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FNeoUIFocusWidgetParam&    Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UBPMV_JHBackpack_Basic_C::FocusWidgetForScenario_Direct(ENeoUIFocusWidgetScenario scenario, const struct FNeoUIFocusWidgetParam& Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_JHBackpack_Basic_C", "FocusWidgetForScenario_Direct");

	Params::BPMV_JHBackpack_Basic_C_FocusWidgetForScenario_Direct Parms{};

	Parms.scenario = scenario;
	Parms.Param = std::move(Param);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


SDK_NAMESPACE_END
