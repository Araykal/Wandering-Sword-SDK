#pragma once



// Package: BPMV_Team_Formation

#include "Basic.hpp"

#include "BPMV_Team_Formation_classes.hpp"
#include "BPMV_Team_Formation_parameters.hpp"


SDK_NAMESPACE_START

// Function BPMV_Team_Formation.BPMV_Team_Formation_C.ExecuteUbergraph_BPMV_Team_Formation
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPMV_Team_Formation_C::ExecuteUbergraph_BPMV_Team_Formation(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_Team_Formation_C", "ExecuteUbergraph_BPMV_Team_Formation");

	Params::BPMV_Team_Formation_C_ExecuteUbergraph_BPMV_Team_Formation Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_Team_Formation.BPMV_Team_Formation_C.EVT_VisualShow
// (Event, Public, BlueprintEvent)

void UBPMV_Team_Formation_C::EVT_VisualShow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_Team_Formation_C", "EVT_VisualShow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_Team_Formation.BPMV_Team_Formation_C.EVT_SyncWithGlobalInputMode
// (Event, Public, BlueprintEvent)

void UBPMV_Team_Formation_C::EVT_SyncWithGlobalInputMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_Team_Formation_C", "EVT_SyncWithGlobalInputMode");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_Team_Formation.BPMV_Team_Formation_C.BndEvt__BPMV_Team_Formation_BTN_Cancel_G_K2Node_ComponentBoundEvent_5_BtnClick__DelegateSignature
// (BlueprintEvent)

void UBPMV_Team_Formation_C::BndEvt__BPMV_Team_Formation_BTN_Cancel_G_K2Node_ComponentBoundEvent_5_BtnClick__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_Team_Formation_C", "BndEvt__BPMV_Team_Formation_BTN_Cancel_G_K2Node_ComponentBoundEvent_5_BtnClick__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_Team_Formation.BPMV_Team_Formation_C.BndEvt__BPMV_Team_Formation_BTN_Confirm_G_K2Node_ComponentBoundEvent_4_BtnClick__DelegateSignature
// (BlueprintEvent)

void UBPMV_Team_Formation_C::BndEvt__BPMV_Team_Formation_BTN_Confirm_G_K2Node_ComponentBoundEvent_4_BtnClick__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_Team_Formation_C", "BndEvt__BPMV_Team_Formation_BTN_Confirm_G_K2Node_ComponentBoundEvent_4_BtnClick__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_Team_Formation.BPMV_Team_Formation_C.EVT_AppendActiveAreaArr
// (Event, Public, BlueprintEvent)

void UBPMV_Team_Formation_C::EVT_AppendActiveAreaArr()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_Team_Formation_C", "EVT_AppendActiveAreaArr");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_Team_Formation.BPMV_Team_Formation_C.EVT_FocusWidgetForScenario
// (Event, Public, BlueprintEvent)
// Parameters:
// ENeoUIFocusWidgetScenario               scenario                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FNeoUIFocusWidgetParam&    Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm)

void UBPMV_Team_Formation_C::EVT_FocusWidgetForScenario(ENeoUIFocusWidgetScenario scenario, const struct FNeoUIFocusWidgetParam& Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_Team_Formation_C", "EVT_FocusWidgetForScenario");

	Params::BPMV_Team_Formation_C_EVT_FocusWidgetForScenario Parms{};

	Parms.scenario = scenario;
	Parms.Param = std::move(Param);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_Team_Formation.BPMV_Team_Formation_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPMV_Team_Formation_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_Team_Formation_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_Team_Formation.BPMV_Team_Formation_C.EVT_SetupHierarchy
// (Event, Public, BlueprintEvent)

void UBPMV_Team_Formation_C::EVT_SetupHierarchy()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_Team_Formation_C", "EVT_SetupHierarchy");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_Team_Formation.BPMV_Team_Formation_C.EVT_RenderView
// (Event, Public, BlueprintEvent)

void UBPMV_Team_Formation_C::EVT_RenderView()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_Team_Formation_C", "EVT_RenderView");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_Team_Formation.BPMV_Team_Formation_C.BndEvt__BPMV_Team_Formation_BTN_Cancel_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBPMV_Team_Formation_C::BndEvt__BPMV_Team_Formation_BTN_Cancel_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_Team_Formation_C", "BndEvt__BPMV_Team_Formation_BTN_Cancel_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_Team_Formation.BPMV_Team_Formation_C.BndEvt__BPMV_Team_Formation_BTN_Confirm_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBPMV_Team_Formation_C::BndEvt__BPMV_Team_Formation_BTN_Confirm_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_Team_Formation_C", "BndEvt__BPMV_Team_Formation_BTN_Confirm_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_Team_Formation.BPMV_Team_Formation_C.GotoSideBar
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EUINavigation                           Navigation_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UBPMV_Team_Formation_C::GotoSideBar(EUINavigation Navigation_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_Team_Formation_C", "GotoSideBar");

	Params::BPMV_Team_Formation_C_GotoSideBar Parms{};

	Parms.Navigation_0 = Navigation_0;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BPMV_Team_Formation.BPMV_Team_Formation_C.FocusWidgetForScenario_Direct
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// ENeoUIFocusWidgetScenario               scenario                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FNeoUIFocusWidgetParam&    Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UBPMV_Team_Formation_C::FocusWidgetForScenario_Direct(ENeoUIFocusWidgetScenario scenario, const struct FNeoUIFocusWidgetParam& Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_Team_Formation_C", "FocusWidgetForScenario_Direct");

	Params::BPMV_Team_Formation_C_FocusWidgetForScenario_Direct Parms{};

	Parms.scenario = scenario;
	Parms.Param = std::move(Param);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BPMV_Team_Formation.BPMV_Team_Formation_C.GotoProperty
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EUINavigation                           Navigation_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UBPMV_Team_Formation_C::GotoProperty(EUINavigation Navigation_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_Team_Formation_C", "GotoProperty");

	Params::BPMV_Team_Formation_C_GotoProperty Parms{};

	Parms.Navigation_0 = Navigation_0;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


SDK_NAMESPACE_END
