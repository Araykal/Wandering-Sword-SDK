#pragma once



// Package: BPMV_Config_LanView2

#include "Basic.hpp"

#include "BPMV_Config_LanView2_classes.hpp"
#include "BPMV_Config_LanView2_parameters.hpp"


SDK_NAMESPACE_START

// Function BPMV_Config_LanView2.BPMV_Config_LanView2_C.ExecuteUbergraph_BPMV_Config_LanView2
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPMV_Config_LanView2_C::ExecuteUbergraph_BPMV_Config_LanView2(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_Config_LanView2_C", "ExecuteUbergraph_BPMV_Config_LanView2");

	Params::BPMV_Config_LanView2_C_ExecuteUbergraph_BPMV_Config_LanView2 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_Config_LanView2.BPMV_Config_LanView2_C.EVT_VisualInit
// (Event, Public, BlueprintEvent)

void UBPMV_Config_LanView2_C::EVT_VisualInit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_Config_LanView2_C", "EVT_VisualInit");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_Config_LanView2.BPMV_Config_LanView2_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FString&                    SelectedItem                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// ESelectInfo                             SelectionType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPMV_Config_LanView2_C::CustomEvent_0(const class FString& SelectedItem, ESelectInfo SelectionType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_Config_LanView2_C", "CustomEvent_0");

	Params::BPMV_Config_LanView2_C_CustomEvent_0 Parms{};

	Parms.SelectedItem = std::move(SelectedItem);
	Parms.SelectionType = SelectionType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_Config_LanView2.BPMV_Config_LanView2_C.EVT_SetupHierarchy
// (Event, Public, BlueprintEvent)

void UBPMV_Config_LanView2_C::EVT_SetupHierarchy()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_Config_LanView2_C", "EVT_SetupHierarchy");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_Config_LanView2.BPMV_Config_LanView2_C.EVT_AutoFocusForTabClick
// (Event, Public, BlueprintEvent)

void UBPMV_Config_LanView2_C::EVT_AutoFocusForTabClick()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_Config_LanView2_C", "EVT_AutoFocusForTabClick");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_Config_LanView2.BPMV_Config_LanView2_C.OnMouseButtonDown_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGeometry&                 MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// const struct FPointerEvent&             MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UBPMV_Config_LanView2_C::OnMouseButtonDown_0(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_Config_LanView2_C", "OnMouseButtonDown_0");

	Params::BPMV_Config_LanView2_C_OnMouseButtonDown_0 Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BPMV_Config_LanView2.BPMV_Config_LanView2_C.FocusWidgetForScenario_Direct
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// ENeoUIFocusWidgetScenario               scenario                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FNeoUIFocusWidgetParam&    Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UBPMV_Config_LanView2_C::FocusWidgetForScenario_Direct(ENeoUIFocusWidgetScenario scenario, const struct FNeoUIFocusWidgetParam& Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_Config_LanView2_C", "FocusWidgetForScenario_Direct");

	Params::BPMV_Config_LanView2_C_FocusWidgetForScenario_Direct Parms{};

	Parms.scenario = scenario;
	Parms.Param = std::move(Param);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


SDK_NAMESPACE_END
