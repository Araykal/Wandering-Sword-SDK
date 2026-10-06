#pragma once



// Package: BPMV_Cooking_List

#include "Basic.hpp"

#include "BPMV_Cooking_List_classes.hpp"
#include "BPMV_Cooking_List_parameters.hpp"


SDK_NAMESPACE_START

// Function BPMV_Cooking_List.BPMV_Cooking_List_C.ExecuteUbergraph_BPMV_Cooking_List
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPMV_Cooking_List_C::ExecuteUbergraph_BPMV_Cooking_List(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_Cooking_List_C", "ExecuteUbergraph_BPMV_Cooking_List");

	Params::BPMV_Cooking_List_C_ExecuteUbergraph_BPMV_Cooking_List Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_Cooking_List.BPMV_Cooking_List_C.BndEvt__BPMV_Cooking_List_LIST_K2Node_ComponentBoundEvent_1_OnListEntryInitializedDynamic__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UObject*                          Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                      Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPMV_Cooking_List_C::BndEvt__BPMV_Cooking_List_LIST_K2Node_ComponentBoundEvent_1_OnListEntryInitializedDynamic__DelegateSignature(class UObject* Item, class UUserWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_Cooking_List_C", "BndEvt__BPMV_Cooking_List_LIST_K2Node_ComponentBoundEvent_1_OnListEntryInitializedDynamic__DelegateSignature");

	Params::BPMV_Cooking_List_C_BndEvt__BPMV_Cooking_List_LIST_K2Node_ComponentBoundEvent_1_OnListEntryInitializedDynamic__DelegateSignature Parms{};

	Parms.Item = Item;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_Cooking_List.BPMV_Cooking_List_C.EVT_FocusWidgetForScenario
// (Event, Public, BlueprintEvent)
// Parameters:
// ENeoUIFocusWidgetScenario               scenario                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FNeoUIFocusWidgetParam&    Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm)

void UBPMV_Cooking_List_C::EVT_FocusWidgetForScenario(ENeoUIFocusWidgetScenario scenario, const struct FNeoUIFocusWidgetParam& Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_Cooking_List_C", "EVT_FocusWidgetForScenario");

	Params::BPMV_Cooking_List_C_EVT_FocusWidgetForScenario Parms{};

	Parms.scenario = scenario;
	Parms.Param = std::move(Param);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_Cooking_List.BPMV_Cooking_List_C.EVT_SetupHierarchy
// (Event, Public, BlueprintEvent)

void UBPMV_Cooking_List_C::EVT_SetupHierarchy()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_Cooking_List_C", "EVT_SetupHierarchy");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_Cooking_List.BPMV_Cooking_List_C.BndEvt__BPMV_Cooking_List_LIST_K2Node_ComponentBoundEvent_0_SimpleListItemEventDynamic__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UObject*                          Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPMV_Cooking_List_C::BndEvt__BPMV_Cooking_List_LIST_K2Node_ComponentBoundEvent_0_SimpleListItemEventDynamic__DelegateSignature(class UObject* Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_Cooking_List_C", "BndEvt__BPMV_Cooking_List_LIST_K2Node_ComponentBoundEvent_0_SimpleListItemEventDynamic__DelegateSignature");

	Params::BPMV_Cooking_List_C_BndEvt__BPMV_Cooking_List_LIST_K2Node_ComponentBoundEvent_0_SimpleListItemEventDynamic__DelegateSignature Parms{};

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_Cooking_List.BPMV_Cooking_List_C.Goto_Recipe
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EUINavigation                           Navigation_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UBPMV_Cooking_List_C::Goto_Recipe(EUINavigation Navigation_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_Cooking_List_C", "Goto_Recipe");

	Params::BPMV_Cooking_List_C_Goto_Recipe Parms{};

	Parms.Navigation_0 = Navigation_0;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


SDK_NAMESPACE_END
