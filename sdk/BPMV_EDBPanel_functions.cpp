#pragma once



// Package: BPMV_EDBPanel

#include "Basic.hpp"

#include "BPMV_EDBPanel_classes.hpp"
#include "BPMV_EDBPanel_parameters.hpp"


SDK_NAMESPACE_START

// Function BPMV_EDBPanel.BPMV_EDBPanel_C.ExecuteUbergraph_BPMV_EDBPanel
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPMV_EDBPanel_C::ExecuteUbergraph_BPMV_EDBPanel(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_EDBPanel_C", "ExecuteUbergraph_BPMV_EDBPanel");

	Params::BPMV_EDBPanel_C_ExecuteUbergraph_BPMV_EDBPanel Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_EDBPanel.BPMV_EDBPanel_C.EVT_ShowAtArena
// (Event, Public, BlueprintEvent)

void UBPMV_EDBPanel_C::EVT_ShowAtArena()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_EDBPanel_C", "EVT_ShowAtArena");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_EDBPanel.BPMV_EDBPanel_C.EVT_ShowAtHUD
// (Event, Public, BlueprintEvent)

void UBPMV_EDBPanel_C::EVT_ShowAtHUD()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_EDBPanel_C", "EVT_ShowAtHUD");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_EDBPanel.BPMV_EDBPanel_C.OnMouseButtonDown_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGeometry&                 MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// const struct FPointerEvent&             MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UBPMV_EDBPanel_C::OnMouseButtonDown_0(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_EDBPanel_C", "OnMouseButtonDown_0");

	Params::BPMV_EDBPanel_C_OnMouseButtonDown_0 Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BPMV_EDBPanel.BPMV_EDBPanel_C.FocusWidgetForScenario_Direct
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// ENeoUIFocusWidgetScenario               scenario                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FNeoUIFocusWidgetParam&    Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UBPMV_EDBPanel_C::FocusWidgetForScenario_Direct(ENeoUIFocusWidgetScenario scenario, const struct FNeoUIFocusWidgetParam& Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_EDBPanel_C", "FocusWidgetForScenario_Direct");

	Params::BPMV_EDBPanel_C_FocusWidgetForScenario_Direct Parms{};

	Parms.scenario = scenario;
	Parms.Param = std::move(Param);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


SDK_NAMESPACE_END
