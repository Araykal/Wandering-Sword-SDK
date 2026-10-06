#pragma once



// Package: BPVE_JHGHC_ScenarioItem

#include "Basic.hpp"

#include "BPVE_JHGHC_ScenarioItem_classes.hpp"
#include "BPVE_JHGHC_ScenarioItem_parameters.hpp"


SDK_NAMESPACE_START

// Function BPVE_JHGHC_ScenarioItem.BPVE_JHGHC_ScenarioItem_C.ExecuteUbergraph_BPVE_JHGHC_ScenarioItem
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_JHGHC_ScenarioItem_C::ExecuteUbergraph_BPVE_JHGHC_ScenarioItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_JHGHC_ScenarioItem_C", "ExecuteUbergraph_BPVE_JHGHC_ScenarioItem");

	Params::BPVE_JHGHC_ScenarioItem_C_ExecuteUbergraph_BPVE_JHGHC_ScenarioItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_JHGHC_ScenarioItem.BPVE_JHGHC_ScenarioItem_C.BndEvt__BPVE_JHGHC_ScenarioItem_BTN_GHC_Scenario_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UJHNeoUIGamepadConfirmButton*     Btn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_JHGHC_ScenarioItem_C::BndEvt__BPVE_JHGHC_ScenarioItem_BTN_GHC_Scenario_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature(class UJHNeoUIGamepadConfirmButton* Btn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_JHGHC_ScenarioItem_C", "BndEvt__BPVE_JHGHC_ScenarioItem_BTN_GHC_Scenario_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature");

	Params::BPVE_JHGHC_ScenarioItem_C_BndEvt__BPVE_JHGHC_ScenarioItem_BTN_GHC_Scenario_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature Parms{};

	Parms.Btn = Btn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_JHGHC_ScenarioItem.BPVE_JHGHC_ScenarioItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPVE_JHGHC_ScenarioItem_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_JHGHC_ScenarioItem_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
