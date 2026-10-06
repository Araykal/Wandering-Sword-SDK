#pragma once



// Package: BPMV_Alchemy_Detail

#include "Basic.hpp"

#include "BPMV_Alchemy_Detail_classes.hpp"
#include "BPMV_Alchemy_Detail_parameters.hpp"


SDK_NAMESPACE_START

// Function BPMV_Alchemy_Detail.BPMV_Alchemy_Detail_C.ExecuteUbergraph_BPMV_Alchemy_Detail
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPMV_Alchemy_Detail_C::ExecuteUbergraph_BPMV_Alchemy_Detail(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_Alchemy_Detail_C", "ExecuteUbergraph_BPMV_Alchemy_Detail");

	Params::BPMV_Alchemy_Detail_C_ExecuteUbergraph_BPMV_Alchemy_Detail Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_Alchemy_Detail.BPMV_Alchemy_Detail_C.EVT_UpdateMainBtnVisibility
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsVisible_0                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPMV_Alchemy_Detail_C::EVT_UpdateMainBtnVisibility(bool IsVisible_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_Alchemy_Detail_C", "EVT_UpdateMainBtnVisibility");

	Params::BPMV_Alchemy_Detail_C_EVT_UpdateMainBtnVisibility Parms{};

	Parms.IsVisible_0 = IsVisible_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_Alchemy_Detail.BPMV_Alchemy_Detail_C.BndEvt__BPMV_Alchemy_Detail_BTN_Alchemy_Confirm_K2Node_ComponentBoundEvent_1_BtnClick__DelegateSignature
// (BlueprintEvent)

void UBPMV_Alchemy_Detail_C::BndEvt__BPMV_Alchemy_Detail_BTN_Alchemy_Confirm_K2Node_ComponentBoundEvent_1_BtnClick__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_Alchemy_Detail_C", "BndEvt__BPMV_Alchemy_Detail_BTN_Alchemy_Confirm_K2Node_ComponentBoundEvent_1_BtnClick__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_Alchemy_Detail.BPMV_Alchemy_Detail_C.EVT_AppendActiveAreaArr
// (Event, Public, BlueprintEvent)

void UBPMV_Alchemy_Detail_C::EVT_AppendActiveAreaArr()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_Alchemy_Detail_C", "EVT_AppendActiveAreaArr");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_Alchemy_Detail.BPMV_Alchemy_Detail_C.BndEvt__BPMV_Cooking_Detail_BTN_Main_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBPMV_Alchemy_Detail_C::BndEvt__BPMV_Cooking_Detail_BTN_Main_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_Alchemy_Detail_C", "BndEvt__BPMV_Cooking_Detail_BTN_Main_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_Alchemy_Detail.BPMV_Alchemy_Detail_C.EVT_SetupHierarchy
// (Event, Public, BlueprintEvent)

void UBPMV_Alchemy_Detail_C::EVT_SetupHierarchy()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_Alchemy_Detail_C", "EVT_SetupHierarchy");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_Alchemy_Detail.BPMV_Alchemy_Detail_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPMV_Alchemy_Detail_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_Alchemy_Detail_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_Alchemy_Detail.BPMV_Alchemy_Detail_C.FocusWidgetForScenario_Direct
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// ENeoUIFocusWidgetScenario               scenario                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FNeoUIFocusWidgetParam&    Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UBPMV_Alchemy_Detail_C::FocusWidgetForScenario_Direct(ENeoUIFocusWidgetScenario scenario, const struct FNeoUIFocusWidgetParam& Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_Alchemy_Detail_C", "FocusWidgetForScenario_Direct");

	Params::BPMV_Alchemy_Detail_C_FocusWidgetForScenario_Direct Parms{};

	Parms.scenario = scenario;
	Parms.Param = std::move(Param);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BPMV_Alchemy_Detail.BPMV_Alchemy_Detail_C.Navi_GotoLeft
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EUINavigation                           Navigation_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UBPMV_Alchemy_Detail_C::Navi_GotoLeft(EUINavigation Navigation_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_Alchemy_Detail_C", "Navi_GotoLeft");

	Params::BPMV_Alchemy_Detail_C_Navi_GotoLeft Parms{};

	Parms.Navigation_0 = Navigation_0;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BPMV_Alchemy_Detail.BPMV_Alchemy_Detail_C.Navi_GotoConfirm
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EUINavigation                           Navigation_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UBPMV_Alchemy_Detail_C::Navi_GotoConfirm(EUINavigation Navigation_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_Alchemy_Detail_C", "Navi_GotoConfirm");

	Params::BPMV_Alchemy_Detail_C_Navi_GotoConfirm Parms{};

	Parms.Navigation_0 = Navigation_0;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BPMV_Alchemy_Detail.BPMV_Alchemy_Detail_C.Navi_GotoMaterial
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EUINavigation                           Navigation_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UBPMV_Alchemy_Detail_C::Navi_GotoMaterial(EUINavigation Navigation_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_Alchemy_Detail_C", "Navi_GotoMaterial");

	Params::BPMV_Alchemy_Detail_C_Navi_GotoMaterial Parms{};

	Parms.Navigation_0 = Navigation_0;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


SDK_NAMESPACE_END
