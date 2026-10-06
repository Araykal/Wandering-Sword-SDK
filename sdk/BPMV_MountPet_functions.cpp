#pragma once



// Package: BPMV_MountPet

#include "Basic.hpp"

#include "BPMV_MountPet_classes.hpp"
#include "BPMV_MountPet_parameters.hpp"


SDK_NAMESPACE_START

// Function BPMV_MountPet.BPMV_MountPet_C.ExecuteUbergraph_BPMV_MountPet
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPMV_MountPet_C::ExecuteUbergraph_BPMV_MountPet(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_MountPet_C", "ExecuteUbergraph_BPMV_MountPet");

	Params::BPMV_MountPet_C_ExecuteUbergraph_BPMV_MountPet Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_MountPet.BPMV_MountPet_C.EVT_SetupSubModuleSlots
// (Event, Public, BlueprintEvent)

void UBPMV_MountPet_C::EVT_SetupSubModuleSlots()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_MountPet_C", "EVT_SetupSubModuleSlots");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_MountPet.BPMV_MountPet_C.BndEvt__BPMV_MountPet_BTN_EXIT_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBPMV_MountPet_C::BndEvt__BPMV_MountPet_BTN_EXIT_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_MountPet_C", "BndEvt__BPMV_MountPet_BTN_EXIT_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_MountPet.BPMV_MountPet_C.EVT_VisualInit
// (Event, Public, BlueprintEvent)

void UBPMV_MountPet_C::EVT_VisualInit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_MountPet_C", "EVT_VisualInit");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_MountPet.BPMV_MountPet_C.NaviLeft
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EUINavigation                           Navigation_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UBPMV_MountPet_C::NaviLeft(EUINavigation Navigation_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_MountPet_C", "NaviLeft");

	Params::BPMV_MountPet_C_NaviLeft Parms{};

	Parms.Navigation_0 = Navigation_0;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


SDK_NAMESPACE_END
