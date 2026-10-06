#pragma once



// Package: BPMV_TeamSideBar2

#include "Basic.hpp"

#include "BPMV_TeamSideBar2_classes.hpp"
#include "BPMV_TeamSideBar2_parameters.hpp"


SDK_NAMESPACE_START

// Function BPMV_TeamSideBar2.BPMV_TeamSideBar2_C.ExecuteUbergraph_BPMV_TeamSideBar2
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPMV_TeamSideBar2_C::ExecuteUbergraph_BPMV_TeamSideBar2(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_TeamSideBar2_C", "ExecuteUbergraph_BPMV_TeamSideBar2");

	Params::BPMV_TeamSideBar2_C_ExecuteUbergraph_BPMV_TeamSideBar2 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_TeamSideBar2.BPMV_TeamSideBar2_C.BndEvt__BPMV_TeamSideBar2_IMG_Sort_Down_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBPMV_TeamSideBar2_C::BndEvt__BPMV_TeamSideBar2_IMG_Sort_Down_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_TeamSideBar2_C", "BndEvt__BPMV_TeamSideBar2_IMG_Sort_Down_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_TeamSideBar2.BPMV_TeamSideBar2_C.BndEvt__BPMV_TeamSideBar2_IMG_Sort_UP_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBPMV_TeamSideBar2_C::BndEvt__BPMV_TeamSideBar2_IMG_Sort_UP_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_TeamSideBar2_C", "BndEvt__BPMV_TeamSideBar2_IMG_Sort_UP_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_TeamSideBar2.BPMV_TeamSideBar2_C.EVT_SyncWithGlobalInputMode
// (Event, Public, BlueprintEvent)

void UBPMV_TeamSideBar2_C::EVT_SyncWithGlobalInputMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_TeamSideBar2_C", "EVT_SyncWithGlobalInputMode");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_TeamSideBar2.BPMV_TeamSideBar2_C.EVT_VisualShow
// (Event, Public, BlueprintEvent)

void UBPMV_TeamSideBar2_C::EVT_VisualShow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_TeamSideBar2_C", "EVT_VisualShow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_TeamSideBar2.BPMV_TeamSideBar2_C.EVT_AppendActiveAreaArr
// (Event, Public, BlueprintEvent)

void UBPMV_TeamSideBar2_C::EVT_AppendActiveAreaArr()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_TeamSideBar2_C", "EVT_AppendActiveAreaArr");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_TeamSideBar2.BPMV_TeamSideBar2_C.EVT_FocusWidgetForScenario
// (Event, Public, BlueprintEvent)
// Parameters:
// ENeoUIFocusWidgetScenario               scenario                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FNeoUIFocusWidgetParam&    Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm)

void UBPMV_TeamSideBar2_C::EVT_FocusWidgetForScenario(ENeoUIFocusWidgetScenario scenario, const struct FNeoUIFocusWidgetParam& Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_TeamSideBar2_C", "EVT_FocusWidgetForScenario");

	Params::BPMV_TeamSideBar2_C_EVT_FocusWidgetForScenario Parms{};

	Parms.scenario = scenario;
	Parms.Param = std::move(Param);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_TeamSideBar2.BPMV_TeamSideBar2_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPMV_TeamSideBar2_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_TeamSideBar2_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_TeamSideBar2.BPMV_TeamSideBar2_C.DoCustomNavigation_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EUINavigation                           Navigation_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UBPMV_TeamSideBar2_C::DoCustomNavigation_0(EUINavigation Navigation_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_TeamSideBar2_C", "DoCustomNavigation_0");

	Params::BPMV_TeamSideBar2_C_DoCustomNavigation_0 Parms{};

	Parms.Navigation_0 = Navigation_0;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BPMV_TeamSideBar2.BPMV_TeamSideBar2_C.FocusWidgetForScenario_Direct
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// ENeoUIFocusWidgetScenario               scenario                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FNeoUIFocusWidgetParam&    Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UBPMV_TeamSideBar2_C::FocusWidgetForScenario_Direct(ENeoUIFocusWidgetScenario scenario, const struct FNeoUIFocusWidgetParam& Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_TeamSideBar2_C", "FocusWidgetForScenario_Direct");

	Params::BPMV_TeamSideBar2_C_FocusWidgetForScenario_Direct Parms{};

	Parms.scenario = scenario;
	Parms.Param = std::move(Param);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BPMV_TeamSideBar2.BPMV_TeamSideBar2_C.On_IMG_Sort_UP_MouseButtonDown_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGeometry&                 MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// const struct FPointerEvent&             MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UBPMV_TeamSideBar2_C::On_IMG_Sort_UP_MouseButtonDown_0(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_TeamSideBar2_C", "On_IMG_Sort_UP_MouseButtonDown_0");

	Params::BPMV_TeamSideBar2_C_On_IMG_Sort_UP_MouseButtonDown_0 Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BPMV_TeamSideBar2.BPMV_TeamSideBar2_C.On_IMG_Sort_Down_MouseButtonDown_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGeometry&                 MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// const struct FPointerEvent&             MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UBPMV_TeamSideBar2_C::On_IMG_Sort_Down_MouseButtonDown_0(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_TeamSideBar2_C", "On_IMG_Sort_Down_MouseButtonDown_0");

	Params::BPMV_TeamSideBar2_C_On_IMG_Sort_Down_MouseButtonDown_0 Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


SDK_NAMESPACE_END
