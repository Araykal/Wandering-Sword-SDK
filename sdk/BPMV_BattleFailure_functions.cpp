#pragma once



// Package: BPMV_BattleFailure

#include "Basic.hpp"

#include "BPMV_BattleFailure_classes.hpp"
#include "BPMV_BattleFailure_parameters.hpp"


SDK_NAMESPACE_START

// Function BPMV_BattleFailure.BPMV_BattleFailure_C.ExecuteUbergraph_BPMV_BattleFailure
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPMV_BattleFailure_C::ExecuteUbergraph_BPMV_BattleFailure(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_BattleFailure_C", "ExecuteUbergraph_BPMV_BattleFailure");

	Params::BPMV_BattleFailure_C_ExecuteUbergraph_BPMV_BattleFailure Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_BattleFailure.BPMV_BattleFailure_C.EVT_SyncWithGlobalInputMode
// (Event, Public, BlueprintEvent)

void UBPMV_BattleFailure_C::EVT_SyncWithGlobalInputMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_BattleFailure_C", "EVT_SyncWithGlobalInputMode");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_BattleFailure.BPMV_BattleFailure_C.EVT_VisualShow
// (Event, Public, BlueprintEvent)

void UBPMV_BattleFailure_C::EVT_VisualShow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_BattleFailure_C", "EVT_VisualShow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_BattleFailure.BPMV_BattleFailure_C.EVT_ChangeFailureMode
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                                   flag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPMV_BattleFailure_C::EVT_ChangeFailureMode(int32 flag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_BattleFailure_C", "EVT_ChangeFailureMode");

	Params::BPMV_BattleFailure_C_EVT_ChangeFailureMode Parms{};

	Parms.flag = flag;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_BattleFailure.BPMV_BattleFailure_C.EVT_FocusWidgetForScenario
// (Event, Public, BlueprintEvent)
// Parameters:
// ENeoUIFocusWidgetScenario               scenario                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FNeoUIFocusWidgetParam&    Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm)

void UBPMV_BattleFailure_C::EVT_FocusWidgetForScenario(ENeoUIFocusWidgetScenario scenario, const struct FNeoUIFocusWidgetParam& Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_BattleFailure_C", "EVT_FocusWidgetForScenario");

	Params::BPMV_BattleFailure_C_EVT_FocusWidgetForScenario Parms{};

	Parms.scenario = scenario;
	Parms.Param = std::move(Param);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_BattleFailure.BPMV_BattleFailure_C.BndEvt__BPMV_BattleFailure_NeoUIButtonBase_76_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBPMV_BattleFailure_C::BndEvt__BPMV_BattleFailure_NeoUIButtonBase_76_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_BattleFailure_C", "BndEvt__BPMV_BattleFailure_NeoUIButtonBase_76_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_BattleFailure.BPMV_BattleFailure_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGeometry&                 MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// const struct FPointerEvent&             MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UBPMV_BattleFailure_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_BattleFailure_C", "OnMouseButtonDown");

	Params::BPMV_BattleFailure_C_OnMouseButtonDown Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


SDK_NAMESPACE_END
