#pragma once



// Package: BPMV_Fishing

#include "Basic.hpp"

#include "BPMV_Fishing_classes.hpp"
#include "BPMV_Fishing_parameters.hpp"


SDK_NAMESPACE_START

// Function BPMV_Fishing.BPMV_Fishing_C.ExecuteUbergraph_BPMV_Fishing
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPMV_Fishing_C::ExecuteUbergraph_BPMV_Fishing(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_Fishing_C", "ExecuteUbergraph_BPMV_Fishing");

	Params::BPMV_Fishing_C_ExecuteUbergraph_BPMV_Fishing Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_Fishing.BPMV_Fishing_C.EVT_SyncWithGlobalInputMode
// (Event, Public, BlueprintEvent)

void UBPMV_Fishing_C::EVT_SyncWithGlobalInputMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_Fishing_C", "EVT_SyncWithGlobalInputMode");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_Fishing.BPMV_Fishing_C.EVT_VisualShow
// (Event, Public, BlueprintEvent)

void UBPMV_Fishing_C::EVT_VisualShow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_Fishing_C", "EVT_VisualShow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_Fishing.BPMV_Fishing_C.BndEvt__BPMV_Fishing_Btn_Close_K2Node_ComponentBoundEvent_0_BtnClick__DelegateSignature
// (BlueprintEvent)

void UBPMV_Fishing_C::BndEvt__BPMV_Fishing_Btn_Close_K2Node_ComponentBoundEvent_0_BtnClick__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_Fishing_C", "BndEvt__BPMV_Fishing_Btn_Close_K2Node_ComponentBoundEvent_0_BtnClick__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_Fishing.BPMV_Fishing_C.BndEvt__BPMV_Fishing_Btn_ShuaiGan_K2Node_ComponentBoundEvent_5_BtnClick__DelegateSignature
// (BlueprintEvent)

void UBPMV_Fishing_C::BndEvt__BPMV_Fishing_Btn_ShuaiGan_K2Node_ComponentBoundEvent_5_BtnClick__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_Fishing_C", "BndEvt__BPMV_Fishing_Btn_ShuaiGan_K2Node_ComponentBoundEvent_5_BtnClick__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_Fishing.BPMV_Fishing_C.BndEvt__BPMV_Fishing_Btn_ShouGan_K2Node_ComponentBoundEvent_4_BtnClick__DelegateSignature
// (BlueprintEvent)

void UBPMV_Fishing_C::BndEvt__BPMV_Fishing_Btn_ShouGan_K2Node_ComponentBoundEvent_4_BtnClick__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_Fishing_C", "BndEvt__BPMV_Fishing_Btn_ShouGan_K2Node_ComponentBoundEvent_4_BtnClick__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_Fishing.BPMV_Fishing_C.EVT_RenderView
// (Event, Public, BlueprintEvent)

void UBPMV_Fishing_C::EVT_RenderView()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_Fishing_C", "EVT_RenderView");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_Fishing.BPMV_Fishing_C.EVT_SetupHierarchy
// (Event, Public, BlueprintEvent)

void UBPMV_Fishing_C::EVT_SetupHierarchy()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_Fishing_C", "EVT_SetupHierarchy");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_Fishing.BPMV_Fishing_C.OnMouseButtonDown_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGeometry&                 MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// const struct FPointerEvent&             MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UBPMV_Fishing_C::OnMouseButtonDown_0(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_Fishing_C", "OnMouseButtonDown_0");

	Params::BPMV_Fishing_C_OnMouseButtonDown_0 Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BPMV_Fishing.BPMV_Fishing_C.FocusWidgetForScenario_Direct
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// ENeoUIFocusWidgetScenario               scenario                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FNeoUIFocusWidgetParam&    Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UBPMV_Fishing_C::FocusWidgetForScenario_Direct(ENeoUIFocusWidgetScenario scenario, const struct FNeoUIFocusWidgetParam& Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_Fishing_C", "FocusWidgetForScenario_Direct");

	Params::BPMV_Fishing_C_FocusWidgetForScenario_Direct Parms{};

	Parms.scenario = scenario;
	Parms.Param = std::move(Param);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BPMV_Fishing.BPMV_Fishing_C.Goto_Left
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EUINavigation                           Navigation_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UBPMV_Fishing_C::Goto_Left(EUINavigation Navigation_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_Fishing_C", "Goto_Left");

	Params::BPMV_Fishing_C_Goto_Left Parms{};

	Parms.Navigation_0 = Navigation_0;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BPMV_Fishing.BPMV_Fishing_C.Goto_BtnClose
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EUINavigation                           Navigation_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UBPMV_Fishing_C::Goto_BtnClose(EUINavigation Navigation_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_Fishing_C", "Goto_BtnClose");

	Params::BPMV_Fishing_C_Goto_BtnClose Parms{};

	Parms.Navigation_0 = Navigation_0;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BPMV_Fishing.BPMV_Fishing_C.Navi_TopList
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EUINavigation                           Navigation_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UBPMV_Fishing_C::Navi_TopList(EUINavigation Navigation_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_Fishing_C", "Navi_TopList");

	Params::BPMV_Fishing_C_Navi_TopList Parms{};

	Parms.Navigation_0 = Navigation_0;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BPMV_Fishing.BPMV_Fishing_C.Navi_BottomList
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EUINavigation                           Navigation_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UBPMV_Fishing_C::Navi_BottomList(EUINavigation Navigation_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_Fishing_C", "Navi_BottomList");

	Params::BPMV_Fishing_C_Navi_BottomList Parms{};

	Parms.Navigation_0 = Navigation_0;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


SDK_NAMESPACE_END
