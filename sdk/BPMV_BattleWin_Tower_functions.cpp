#pragma once



// Package: BPMV_BattleWin_Tower

#include "Basic.hpp"

#include "BPMV_BattleWin_Tower_classes.hpp"
#include "BPMV_BattleWin_Tower_parameters.hpp"


SDK_NAMESPACE_START

// Function BPMV_BattleWin_Tower.BPMV_BattleWin_Tower_C.ExecuteUbergraph_BPMV_BattleWin_Tower
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPMV_BattleWin_Tower_C::ExecuteUbergraph_BPMV_BattleWin_Tower(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_BattleWin_Tower_C", "ExecuteUbergraph_BPMV_BattleWin_Tower");

	Params::BPMV_BattleWin_Tower_C_ExecuteUbergraph_BPMV_BattleWin_Tower Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_BattleWin_Tower.BPMV_BattleWin_Tower_C.EVT_UpdateNextBtnStatus
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    showNext                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPMV_BattleWin_Tower_C::EVT_UpdateNextBtnStatus(bool showNext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_BattleWin_Tower_C", "EVT_UpdateNextBtnStatus");

	Params::BPMV_BattleWin_Tower_C_EVT_UpdateNextBtnStatus Parms{};

	Parms.showNext = showNext;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_BattleWin_Tower.BPMV_BattleWin_Tower_C.EVT_LaunchAnim
// (Event, Public, BlueprintEvent)

void UBPMV_BattleWin_Tower_C::EVT_LaunchAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_BattleWin_Tower_C", "EVT_LaunchAnim");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_BattleWin_Tower.BPMV_BattleWin_Tower_C.BndEvt__BPMV_BattleWin_Tower_BTN_01_K2Node_ComponentBoundEvent_1_BtnClick__DelegateSignature
// (BlueprintEvent)

void UBPMV_BattleWin_Tower_C::BndEvt__BPMV_BattleWin_Tower_BTN_01_K2Node_ComponentBoundEvent_1_BtnClick__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_BattleWin_Tower_C", "BndEvt__BPMV_BattleWin_Tower_BTN_01_K2Node_ComponentBoundEvent_1_BtnClick__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_BattleWin_Tower.BPMV_BattleWin_Tower_C.BndEvt__BPMV_BattleWin_Tower_BTN_00_K2Node_ComponentBoundEvent_0_BtnClick__DelegateSignature
// (BlueprintEvent)

void UBPMV_BattleWin_Tower_C::BndEvt__BPMV_BattleWin_Tower_BTN_00_K2Node_ComponentBoundEvent_0_BtnClick__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_BattleWin_Tower_C", "BndEvt__BPMV_BattleWin_Tower_BTN_00_K2Node_ComponentBoundEvent_0_BtnClick__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_BattleWin_Tower.BPMV_BattleWin_Tower_C.EVT_SyncWithGlobalInputMode
// (Event, Public, BlueprintEvent)

void UBPMV_BattleWin_Tower_C::EVT_SyncWithGlobalInputMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_BattleWin_Tower_C", "EVT_SyncWithGlobalInputMode");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_BattleWin_Tower.BPMV_BattleWin_Tower_C.EVT_VisualShow
// (Event, Public, BlueprintEvent)

void UBPMV_BattleWin_Tower_C::EVT_VisualShow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_BattleWin_Tower_C", "EVT_VisualShow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_BattleWin_Tower.BPMV_BattleWin_Tower_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPMV_BattleWin_Tower_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_BattleWin_Tower_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_BattleWin_Tower.BPMV_BattleWin_Tower_C.EVT_FocusWidgetForScenario
// (Event, Public, BlueprintEvent)
// Parameters:
// ENeoUIFocusWidgetScenario               scenario                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FNeoUIFocusWidgetParam&    Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm)

void UBPMV_BattleWin_Tower_C::EVT_FocusWidgetForScenario(ENeoUIFocusWidgetScenario scenario, const struct FNeoUIFocusWidgetParam& Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_BattleWin_Tower_C", "EVT_FocusWidgetForScenario");

	Params::BPMV_BattleWin_Tower_C_EVT_FocusWidgetForScenario Parms{};

	Parms.scenario = scenario;
	Parms.Param = std::move(Param);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_BattleWin_Tower.BPMV_BattleWin_Tower_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGeometry&                 MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// const struct FPointerEvent&             MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UBPMV_BattleWin_Tower_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_BattleWin_Tower_C", "OnMouseButtonDown");

	Params::BPMV_BattleWin_Tower_C_OnMouseButtonDown Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


SDK_NAMESPACE_END
