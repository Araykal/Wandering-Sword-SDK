#pragma once



// Package: BPMV_JHNeoUISkill

#include "Basic.hpp"

#include "BPMV_JHNeoUISkill_classes.hpp"
#include "BPMV_JHNeoUISkill_parameters.hpp"


SDK_NAMESPACE_START

// Function BPMV_JHNeoUISkill.BPMV_JHNeoUISkill_C.ExecuteUbergraph_BPMV_JHNeoUISkill
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPMV_JHNeoUISkill_C::ExecuteUbergraph_BPMV_JHNeoUISkill(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_JHNeoUISkill_C", "ExecuteUbergraph_BPMV_JHNeoUISkill");

	Params::BPMV_JHNeoUISkill_C_ExecuteUbergraph_BPMV_JHNeoUISkill Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_JHNeoUISkill.BPMV_JHNeoUISkill_C.EVT_UpdateGamepadActiveBGStatus
// (Event, Public, BlueprintEvent)

void UBPMV_JHNeoUISkill_C::EVT_UpdateGamepadActiveBGStatus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_JHNeoUISkill_C", "EVT_UpdateGamepadActiveBGStatus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_JHNeoUISkill.BPMV_JHNeoUISkill_C.EVT_VisualShow
// (Event, Public, BlueprintEvent)

void UBPMV_JHNeoUISkill_C::EVT_VisualShow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_JHNeoUISkill_C", "EVT_VisualShow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_JHNeoUISkill.BPMV_JHNeoUISkill_C.EVT_AppendActiveAreaArr
// (Event, Public, BlueprintEvent)

void UBPMV_JHNeoUISkill_C::EVT_AppendActiveAreaArr()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_JHNeoUISkill_C", "EVT_AppendActiveAreaArr");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_JHNeoUISkill.BPMV_JHNeoUISkill_C.BndEvt__BPMV_JHNeoUISkill_BTN_Next_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBPMV_JHNeoUISkill_C::BndEvt__BPMV_JHNeoUISkill_BTN_Next_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_JHNeoUISkill_C", "BndEvt__BPMV_JHNeoUISkill_BTN_Next_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_JHNeoUISkill.BPMV_JHNeoUISkill_C.EVT_SetupHierarchy
// (Event, Public, BlueprintEvent)

void UBPMV_JHNeoUISkill_C::EVT_SetupHierarchy()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_JHNeoUISkill_C", "EVT_SetupHierarchy");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_JHNeoUISkill.BPMV_JHNeoUISkill_C.EVT_SetupSubModuleSlots
// (Event, Public, BlueprintEvent)

void UBPMV_JHNeoUISkill_C::EVT_SetupSubModuleSlots()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_JHNeoUISkill_C", "EVT_SetupSubModuleSlots");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_JHNeoUISkill.BPMV_JHNeoUISkill_C.FocusWidgetForScenario_Direct
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// ENeoUIFocusWidgetScenario               scenario                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FNeoUIFocusWidgetParam&    Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UBPMV_JHNeoUISkill_C::FocusWidgetForScenario_Direct(ENeoUIFocusWidgetScenario scenario, const struct FNeoUIFocusWidgetParam& Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_JHNeoUISkill_C", "FocusWidgetForScenario_Direct");

	Params::BPMV_JHNeoUISkill_C_FocusWidgetForScenario_Direct Parms{};

	Parms.scenario = scenario;
	Parms.Param = std::move(Param);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BPMV_JHNeoUISkill.BPMV_JHNeoUISkill_C.GotoSideBar
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EUINavigation                           Navigation_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UBPMV_JHNeoUISkill_C::GotoSideBar(EUINavigation Navigation_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_JHNeoUISkill_C", "GotoSideBar");

	Params::BPMV_JHNeoUISkill_C_GotoSideBar Parms{};

	Parms.Navigation_0 = Navigation_0;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BPMV_JHNeoUISkill.BPMV_JHNeoUISkill_C.GotoFirstSkillCore
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EUINavigation                           Navigation_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UBPMV_JHNeoUISkill_C::GotoFirstSkillCore(EUINavigation Navigation_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_JHNeoUISkill_C", "GotoFirstSkillCore");

	Params::BPMV_JHNeoUISkill_C_GotoFirstSkillCore Parms{};

	Parms.Navigation_0 = Navigation_0;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


SDK_NAMESPACE_END
