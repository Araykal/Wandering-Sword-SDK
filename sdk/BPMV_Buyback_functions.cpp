#pragma once



// Package: BPMV_Buyback

#include "Basic.hpp"

#include "BPMV_Buyback_classes.hpp"
#include "BPMV_Buyback_parameters.hpp"


SDK_NAMESPACE_START

// Function BPMV_Buyback.BPMV_Buyback_C.ExecuteUbergraph_BPMV_Buyback
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPMV_Buyback_C::ExecuteUbergraph_BPMV_Buyback(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_Buyback_C", "ExecuteUbergraph_BPMV_Buyback");

	Params::BPMV_Buyback_C_ExecuteUbergraph_BPMV_Buyback Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_Buyback.BPMV_Buyback_C.BndEvt__BPMV_JHBackpack_Basic_NeoUIButtonBase_26_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBPMV_Buyback_C::BndEvt__BPMV_JHBackpack_Basic_NeoUIButtonBase_26_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_Buyback_C", "BndEvt__BPMV_JHBackpack_Basic_NeoUIButtonBase_26_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_Buyback.BPMV_Buyback_C.EVT_SetupHierarchy
// (Event, Public, BlueprintEvent)

void UBPMV_Buyback_C::EVT_SetupHierarchy()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_Buyback_C", "EVT_SetupHierarchy");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_Buyback.BPMV_Buyback_C.EVT_RenderView
// (Event, Public, BlueprintEvent)

void UBPMV_Buyback_C::EVT_RenderView()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_Buyback_C", "EVT_RenderView");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_Buyback.BPMV_Buyback_C.Navi_GotoBackpack
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EUINavigation                           Navigation_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UBPMV_Buyback_C::Navi_GotoBackpack(EUINavigation Navigation_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_Buyback_C", "Navi_GotoBackpack");

	Params::BPMV_Buyback_C_Navi_GotoBackpack Parms{};

	Parms.Navigation_0 = Navigation_0;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


SDK_NAMESPACE_END
