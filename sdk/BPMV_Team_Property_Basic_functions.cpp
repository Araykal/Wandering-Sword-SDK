#pragma once



// Package: BPMV_Team_Property_Basic

#include "Basic.hpp"

#include "BPMV_Team_Property_Basic_classes.hpp"
#include "BPMV_Team_Property_Basic_parameters.hpp"


SDK_NAMESPACE_START

// Function BPMV_Team_Property_Basic.BPMV_Team_Property_Basic_C.ExecuteUbergraph_BPMV_Team_Property_Basic
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPMV_Team_Property_Basic_C::ExecuteUbergraph_BPMV_Team_Property_Basic(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_Team_Property_Basic_C", "ExecuteUbergraph_BPMV_Team_Property_Basic");

	Params::BPMV_Team_Property_Basic_C_ExecuteUbergraph_BPMV_Team_Property_Basic Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_Team_Property_Basic.BPMV_Team_Property_Basic_C.EVT_AppendActiveAreaArr
// (Event, Public, BlueprintEvent)

void UBPMV_Team_Property_Basic_C::EVT_AppendActiveAreaArr()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_Team_Property_Basic_C", "EVT_AppendActiveAreaArr");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_Team_Property_Basic.BPMV_Team_Property_Basic_C.EVT_RenderView
// (Event, Public, BlueprintEvent)

void UBPMV_Team_Property_Basic_C::EVT_RenderView()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_Team_Property_Basic_C", "EVT_RenderView");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_Team_Property_Basic.BPMV_Team_Property_Basic_C.FocusWidgetForScenario_Direct
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// ENeoUIFocusWidgetScenario               scenario                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FNeoUIFocusWidgetParam&    Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UBPMV_Team_Property_Basic_C::FocusWidgetForScenario_Direct(ENeoUIFocusWidgetScenario scenario, const struct FNeoUIFocusWidgetParam& Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_Team_Property_Basic_C", "FocusWidgetForScenario_Direct");

	Params::BPMV_Team_Property_Basic_C_FocusWidgetForScenario_Direct Parms{};

	Parms.scenario = scenario;
	Parms.Param = std::move(Param);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BPMV_Team_Property_Basic.BPMV_Team_Property_Basic_C.NaviGotoEquip
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EUINavigation                           Navigation_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UBPMV_Team_Property_Basic_C::NaviGotoEquip(EUINavigation Navigation_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_Team_Property_Basic_C", "NaviGotoEquip");

	Params::BPMV_Team_Property_Basic_C_NaviGotoEquip Parms{};

	Parms.Navigation_0 = Navigation_0;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BPMV_Team_Property_Basic.BPMV_Team_Property_Basic_C.NaviGotoSideBar
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EUINavigation                           Navigation_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UBPMV_Team_Property_Basic_C::NaviGotoSideBar(EUINavigation Navigation_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_Team_Property_Basic_C", "NaviGotoSideBar");

	Params::BPMV_Team_Property_Basic_C_NaviGotoSideBar Parms{};

	Parms.Navigation_0 = Navigation_0;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BPMV_Team_Property_Basic.BPMV_Team_Property_Basic_C.NaviGotoTop
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EUINavigation                           Navigation_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UBPMV_Team_Property_Basic_C::NaviGotoTop(EUINavigation Navigation_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_Team_Property_Basic_C", "NaviGotoTop");

	Params::BPMV_Team_Property_Basic_C_NaviGotoTop Parms{};

	Parms.Navigation_0 = Navigation_0;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


SDK_NAMESPACE_END
