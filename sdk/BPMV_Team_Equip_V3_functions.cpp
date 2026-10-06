#pragma once



// Package: BPMV_Team_Equip_V3

#include "Basic.hpp"

#include "BPMV_Team_Equip_V3_classes.hpp"
#include "BPMV_Team_Equip_V3_parameters.hpp"


SDK_NAMESPACE_START

// Function BPMV_Team_Equip_V3.BPMV_Team_Equip_V3_C.ExecuteUbergraph_BPMV_Team_Equip_V3
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPMV_Team_Equip_V3_C::ExecuteUbergraph_BPMV_Team_Equip_V3(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_Team_Equip_V3_C", "ExecuteUbergraph_BPMV_Team_Equip_V3");

	Params::BPMV_Team_Equip_V3_C_ExecuteUbergraph_BPMV_Team_Equip_V3 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_Team_Equip_V3.BPMV_Team_Equip_V3_C.BndEvt__BPMV_Team_Equip_V3_BTN_Uniform_Next_K2Node_ComponentBoundEvent_1_BtnClick__DelegateSignature
// (BlueprintEvent)

void UBPMV_Team_Equip_V3_C::BndEvt__BPMV_Team_Equip_V3_BTN_Uniform_Next_K2Node_ComponentBoundEvent_1_BtnClick__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_Team_Equip_V3_C", "BndEvt__BPMV_Team_Equip_V3_BTN_Uniform_Next_K2Node_ComponentBoundEvent_1_BtnClick__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_Team_Equip_V3.BPMV_Team_Equip_V3_C.BndEvt__BPMV_Team_Equip_V3_BTN_Uniform_Previous_K2Node_ComponentBoundEvent_0_BtnClick__DelegateSignature
// (BlueprintEvent)

void UBPMV_Team_Equip_V3_C::BndEvt__BPMV_Team_Equip_V3_BTN_Uniform_Previous_K2Node_ComponentBoundEvent_0_BtnClick__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_Team_Equip_V3_C", "BndEvt__BPMV_Team_Equip_V3_BTN_Uniform_Previous_K2Node_ComponentBoundEvent_0_BtnClick__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_Team_Equip_V3.BPMV_Team_Equip_V3_C.EVT_VisualInit
// (Event, Public, BlueprintEvent)

void UBPMV_Team_Equip_V3_C::EVT_VisualInit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_Team_Equip_V3_C", "EVT_VisualInit");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_Team_Equip_V3.BPMV_Team_Equip_V3_C.EVT_SetupHierarchy
// (Event, Public, BlueprintEvent)

void UBPMV_Team_Equip_V3_C::EVT_SetupHierarchy()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_Team_Equip_V3_C", "EVT_SetupHierarchy");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_Team_Equip_V3.BPMV_Team_Equip_V3_C.EVT_AppendActiveAreaArr
// (Event, Public, BlueprintEvent)

void UBPMV_Team_Equip_V3_C::EVT_AppendActiveAreaArr()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_Team_Equip_V3_C", "EVT_AppendActiveAreaArr");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_Team_Equip_V3.BPMV_Team_Equip_V3_C.EVT_FocusWidgetForScenario
// (Event, Public, BlueprintEvent)
// Parameters:
// ENeoUIFocusWidgetScenario               scenario                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FNeoUIFocusWidgetParam&    Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm)

void UBPMV_Team_Equip_V3_C::EVT_FocusWidgetForScenario(ENeoUIFocusWidgetScenario scenario, const struct FNeoUIFocusWidgetParam& Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_Team_Equip_V3_C", "EVT_FocusWidgetForScenario");

	Params::BPMV_Team_Equip_V3_C_EVT_FocusWidgetForScenario Parms{};

	Parms.scenario = scenario;
	Parms.Param = std::move(Param);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_Team_Equip_V3.BPMV_Team_Equip_V3_C.ReceiveModuleMessage
// (Event, Public, BlueprintEvent)
// Parameters:
// class FName                             MessageHeader                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnyTypeUniversalPointerBase*     MessageBody                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPMV_Team_Equip_V3_C::ReceiveModuleMessage(class FName MessageHeader, class UAnyTypeUniversalPointerBase* MessageBody)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_Team_Equip_V3_C", "ReceiveModuleMessage");

	Params::BPMV_Team_Equip_V3_C_ReceiveModuleMessage Parms{};

	Parms.MessageHeader = MessageHeader;
	Parms.MessageBody = MessageBody;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_Team_Equip_V3.BPMV_Team_Equip_V3_C.EVT_RenderView
// (Event, Public, BlueprintEvent)

void UBPMV_Team_Equip_V3_C::EVT_RenderView()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_Team_Equip_V3_C", "EVT_RenderView");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_Team_Equip_V3.BPMV_Team_Equip_V3_C.FocusWidgetForScenario_Direct
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// ENeoUIFocusWidgetScenario               scenario                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FNeoUIFocusWidgetParam&    Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UBPMV_Team_Equip_V3_C::FocusWidgetForScenario_Direct(ENeoUIFocusWidgetScenario scenario, const struct FNeoUIFocusWidgetParam& Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_Team_Equip_V3_C", "FocusWidgetForScenario_Direct");

	Params::BPMV_Team_Equip_V3_C_FocusWidgetForScenario_Direct Parms{};

	Parms.scenario = scenario;
	Parms.Param = std::move(Param);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BPMV_Team_Equip_V3.BPMV_Team_Equip_V3_C.GotoProperty
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EUINavigation                           Navigation_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UBPMV_Team_Equip_V3_C::GotoProperty(EUINavigation Navigation_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_Team_Equip_V3_C", "GotoProperty");

	Params::BPMV_Team_Equip_V3_C_GotoProperty Parms{};

	Parms.Navigation_0 = Navigation_0;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BPMV_Team_Equip_V3.BPMV_Team_Equip_V3_C.GotoBackpack
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EUINavigation                           Navigation_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UBPMV_Team_Equip_V3_C::GotoBackpack(EUINavigation Navigation_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_Team_Equip_V3_C", "GotoBackpack");

	Params::BPMV_Team_Equip_V3_C_GotoBackpack Parms{};

	Parms.Navigation_0 = Navigation_0;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


SDK_NAMESPACE_END
