#pragma once



// Package: BPMV_SkillCore

#include "Basic.hpp"

#include "BPMV_SkillCore_classes.hpp"
#include "BPMV_SkillCore_parameters.hpp"


SDK_NAMESPACE_START

// Function BPMV_SkillCore.BPMV_SkillCore_C.ExecuteUbergraph_BPMV_SkillCore
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPMV_SkillCore_C::ExecuteUbergraph_BPMV_SkillCore(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_SkillCore_C", "ExecuteUbergraph_BPMV_SkillCore");

	Params::BPMV_SkillCore_C_ExecuteUbergraph_BPMV_SkillCore Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_SkillCore.BPMV_SkillCore_C.BndEvt__BPMV_SkillCore_Btn_SlotPrevious_K2Node_ComponentBoundEvent_3_BtnClick__DelegateSignature
// (BlueprintEvent)

void UBPMV_SkillCore_C::BndEvt__BPMV_SkillCore_Btn_SlotPrevious_K2Node_ComponentBoundEvent_3_BtnClick__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_SkillCore_C", "BndEvt__BPMV_SkillCore_Btn_SlotPrevious_K2Node_ComponentBoundEvent_3_BtnClick__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_SkillCore.BPMV_SkillCore_C.BndEvt__BPMV_SkillCore_Btn_SlotNext_K2Node_ComponentBoundEvent_2_BtnClick__DelegateSignature
// (BlueprintEvent)

void UBPMV_SkillCore_C::BndEvt__BPMV_SkillCore_Btn_SlotNext_K2Node_ComponentBoundEvent_2_BtnClick__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_SkillCore_C", "BndEvt__BPMV_SkillCore_Btn_SlotNext_K2Node_ComponentBoundEvent_2_BtnClick__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_SkillCore.BPMV_SkillCore_C.EVT_VisualShow
// (Event, Public, BlueprintEvent)

void UBPMV_SkillCore_C::EVT_VisualShow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_SkillCore_C", "EVT_VisualShow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_SkillCore.BPMV_SkillCore_C.EVT_SyncWithGlobalInputMode
// (Event, Public, BlueprintEvent)

void UBPMV_SkillCore_C::EVT_SyncWithGlobalInputMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_SkillCore_C", "EVT_SyncWithGlobalInputMode");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_SkillCore.BPMV_SkillCore_C.BndEvt__BPMV_SkillCore_BTN_MaxUpgrading_K2Node_ComponentBoundEvent_1_BtnClick__DelegateSignature
// (BlueprintEvent)

void UBPMV_SkillCore_C::BndEvt__BPMV_SkillCore_BTN_MaxUpgrading_K2Node_ComponentBoundEvent_1_BtnClick__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_SkillCore_C", "BndEvt__BPMV_SkillCore_BTN_MaxUpgrading_K2Node_ComponentBoundEvent_1_BtnClick__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_SkillCore.BPMV_SkillCore_C.EVT_FocusSPNoteBtn
// (Event, Public, BlueprintEvent)

void UBPMV_SkillCore_C::EVT_FocusSPNoteBtn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_SkillCore_C", "EVT_FocusSPNoteBtn");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_SkillCore.BPMV_SkillCore_C.BndEvt__BPMV_SkillCore_BTN_WriteSkillBook_K2Node_ComponentBoundEvent_0_BtnClick__DelegateSignature
// (BlueprintEvent)

void UBPMV_SkillCore_C::BndEvt__BPMV_SkillCore_BTN_WriteSkillBook_K2Node_ComponentBoundEvent_0_BtnClick__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_SkillCore_C", "BndEvt__BPMV_SkillCore_BTN_WriteSkillBook_K2Node_ComponentBoundEvent_0_BtnClick__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_SkillCore.BPMV_SkillCore_C.EVT_FocusWidgetForScenario
// (Event, Public, BlueprintEvent)
// Parameters:
// ENeoUIFocusWidgetScenario               scenario                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FNeoUIFocusWidgetParam&    Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm)

void UBPMV_SkillCore_C::EVT_FocusWidgetForScenario(ENeoUIFocusWidgetScenario scenario, const struct FNeoUIFocusWidgetParam& Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_SkillCore_C", "EVT_FocusWidgetForScenario");

	Params::BPMV_SkillCore_C_EVT_FocusWidgetForScenario Parms{};

	Parms.scenario = scenario;
	Parms.Param = std::move(Param);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_SkillCore.BPMV_SkillCore_C.EVT_AppendActiveAreaArr
// (Event, Public, BlueprintEvent)

void UBPMV_SkillCore_C::EVT_AppendActiveAreaArr()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_SkillCore_C", "EVT_AppendActiveAreaArr");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_SkillCore.BPMV_SkillCore_C.EVT_RenderView
// (Event, Public, BlueprintEvent)

void UBPMV_SkillCore_C::EVT_RenderView()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_SkillCore_C", "EVT_RenderView");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_SkillCore.BPMV_SkillCore_C.EVT_SetupHierarchy
// (Event, Public, BlueprintEvent)

void UBPMV_SkillCore_C::EVT_SetupHierarchy()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_SkillCore_C", "EVT_SetupHierarchy");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_SkillCore.BPMV_SkillCore_C.FocusWidgetForScenario_Direct
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// ENeoUIFocusWidgetScenario               scenario                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FNeoUIFocusWidgetParam&    Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UBPMV_SkillCore_C::FocusWidgetForScenario_Direct(ENeoUIFocusWidgetScenario scenario, const struct FNeoUIFocusWidgetParam& Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_SkillCore_C", "FocusWidgetForScenario_Direct");

	Params::BPMV_SkillCore_C_FocusWidgetForScenario_Direct Parms{};

	Parms.scenario = scenario;
	Parms.Param = std::move(Param);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BPMV_SkillCore.BPMV_SkillCore_C.FindFirstVisibleEquiped
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBPVE_SkillCoreCell_Equiped_C**   Ele                                                    (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPMV_SkillCore_C::FindFirstVisibleEquiped(class UBPVE_SkillCoreCell_Equiped_C** Ele)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_SkillCore_C", "FindFirstVisibleEquiped");

	Params::BPMV_SkillCore_C_FindFirstVisibleEquiped Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Ele != nullptr)
		*Ele = Parms.Ele;
}


// Function BPMV_SkillCore.BPMV_SkillCore_C.Navi_GridFirst
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EUINavigation                           Navigation_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UBPMV_SkillCore_C::Navi_GridFirst(EUINavigation Navigation_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_SkillCore_C", "Navi_GridFirst");

	Params::BPMV_SkillCore_C_Navi_GridFirst Parms{};

	Parms.Navigation_0 = Navigation_0;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BPMV_SkillCore.BPMV_SkillCore_C.Navi_GridSecond
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EUINavigation                           Navigation_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UBPMV_SkillCore_C::Navi_GridSecond(EUINavigation Navigation_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_SkillCore_C", "Navi_GridSecond");

	Params::BPMV_SkillCore_C_Navi_GridSecond Parms{};

	Parms.Navigation_0 = Navigation_0;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BPMV_SkillCore.BPMV_SkillCore_C.Navi_GridThird
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EUINavigation                           Navigation_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UBPMV_SkillCore_C::Navi_GridThird(EUINavigation Navigation_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_SkillCore_C", "Navi_GridThird");

	Params::BPMV_SkillCore_C_Navi_GridThird Parms{};

	Parms.Navigation_0 = Navigation_0;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BPMV_SkillCore.BPMV_SkillCore_C.Navi_Gridfourth
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EUINavigation                           Navigation_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UBPMV_SkillCore_C::Navi_Gridfourth(EUINavigation Navigation_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_SkillCore_C", "Navi_Gridfourth");

	Params::BPMV_SkillCore_C_Navi_Gridfourth Parms{};

	Parms.Navigation_0 = Navigation_0;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BPMV_SkillCore.BPMV_SkillCore_C.EdgeAscending
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EUINavigation                           Navigation_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UBPMV_SkillCore_C::EdgeAscending(EUINavigation Navigation_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_SkillCore_C", "EdgeAscending");

	Params::BPMV_SkillCore_C_EdgeAscending Parms{};

	Parms.Navigation_0 = Navigation_0;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BPMV_SkillCore.BPMV_SkillCore_C.EdgeDescending
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EUINavigation                           Navigation_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UBPMV_SkillCore_C::EdgeDescending(EUINavigation Navigation_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_SkillCore_C", "EdgeDescending");

	Params::BPMV_SkillCore_C_EdgeDescending Parms{};

	Parms.Navigation_0 = Navigation_0;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


SDK_NAMESPACE_END
