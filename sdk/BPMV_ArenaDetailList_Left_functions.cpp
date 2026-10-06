#pragma once



// Package: BPMV_ArenaDetailList_Left

#include "Basic.hpp"

#include "BPMV_ArenaDetailList_Left_classes.hpp"
#include "BPMV_ArenaDetailList_Left_parameters.hpp"


SDK_NAMESPACE_START

// Function BPMV_ArenaDetailList_Left.BPMV_ArenaDetailList_Left_C.ExecuteUbergraph_BPMV_ArenaDetailList_Left
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPMV_ArenaDetailList_Left_C::ExecuteUbergraph_BPMV_ArenaDetailList_Left(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_ArenaDetailList_Left_C", "ExecuteUbergraph_BPMV_ArenaDetailList_Left");

	Params::BPMV_ArenaDetailList_Left_C_ExecuteUbergraph_BPMV_ArenaDetailList_Left Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_ArenaDetailList_Left.BPMV_ArenaDetailList_Left_C.EVT_VisualShow
// (Event, Public, BlueprintEvent)

void UBPMV_ArenaDetailList_Left_C::EVT_VisualShow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_ArenaDetailList_Left_C", "EVT_VisualShow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_ArenaDetailList_Left.BPMV_ArenaDetailList_Left_C.EVT_FocusWidgetForScenario
// (Event, Public, BlueprintEvent)
// Parameters:
// ENeoUIFocusWidgetScenario               scenario                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FNeoUIFocusWidgetParam&    Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm)

void UBPMV_ArenaDetailList_Left_C::EVT_FocusWidgetForScenario(ENeoUIFocusWidgetScenario scenario, const struct FNeoUIFocusWidgetParam& Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_ArenaDetailList_Left_C", "EVT_FocusWidgetForScenario");

	Params::BPMV_ArenaDetailList_Left_C_EVT_FocusWidgetForScenario Parms{};

	Parms.scenario = scenario;
	Parms.Param = std::move(Param);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_ArenaDetailList_Left.BPMV_ArenaDetailList_Left_C.BndEvt__BPMV_ArenaDetailList_Common_ItemList_K2Node_ComponentBoundEvent_0_OnListEntryInitializedDynamic__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UObject*                          Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                      Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPMV_ArenaDetailList_Left_C::BndEvt__BPMV_ArenaDetailList_Common_ItemList_K2Node_ComponentBoundEvent_0_OnListEntryInitializedDynamic__DelegateSignature(class UObject* Item, class UUserWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_ArenaDetailList_Left_C", "BndEvt__BPMV_ArenaDetailList_Common_ItemList_K2Node_ComponentBoundEvent_0_OnListEntryInitializedDynamic__DelegateSignature");

	Params::BPMV_ArenaDetailList_Left_C_BndEvt__BPMV_ArenaDetailList_Common_ItemList_K2Node_ComponentBoundEvent_0_OnListEntryInitializedDynamic__DelegateSignature Parms{};

	Parms.Item = Item;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_ArenaDetailList_Left.BPMV_ArenaDetailList_Left_C.FocusWidgetForScenario_Direct
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// ENeoUIFocusWidgetScenario               scenario                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FNeoUIFocusWidgetParam&    Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UBPMV_ArenaDetailList_Left_C::FocusWidgetForScenario_Direct(ENeoUIFocusWidgetScenario scenario, const struct FNeoUIFocusWidgetParam& Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_ArenaDetailList_Left_C", "FocusWidgetForScenario_Direct");

	Params::BPMV_ArenaDetailList_Left_C_FocusWidgetForScenario_Direct Parms{};

	Parms.scenario = scenario;
	Parms.Param = std::move(Param);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BPMV_ArenaDetailList_Left.BPMV_ArenaDetailList_Left_C.Navi_GotoDetail
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EUINavigation                           Navigation_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UBPMV_ArenaDetailList_Left_C::Navi_GotoDetail(EUINavigation Navigation_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_ArenaDetailList_Left_C", "Navi_GotoDetail");

	Params::BPMV_ArenaDetailList_Left_C_Navi_GotoDetail Parms{};

	Parms.Navigation_0 = Navigation_0;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


SDK_NAMESPACE_END
