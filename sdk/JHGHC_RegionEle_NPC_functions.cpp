#pragma once



// Package: JHGHC_RegionEle_NPC

#include "Basic.hpp"

#include "JHGHC_RegionEle_NPC_classes.hpp"
#include "JHGHC_RegionEle_NPC_parameters.hpp"


SDK_NAMESPACE_START

// Function JHGHC_RegionEle_NPC.JHGHC_RegionEle_NPC_C.ExecuteUbergraph_JHGHC_RegionEle_NPC
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UJHGHC_RegionEle_NPC_C::ExecuteUbergraph_JHGHC_RegionEle_NPC(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JHGHC_RegionEle_NPC_C", "ExecuteUbergraph_JHGHC_RegionEle_NPC");

	Params::JHGHC_RegionEle_NPC_C_ExecuteUbergraph_JHGHC_RegionEle_NPC Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function JHGHC_RegionEle_NPC.JHGHC_RegionEle_NPC_C.BndEvt__JHGHC_RegionEle_NPC_BTN_GHC_Prop_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UJHNeoUIGamepadConfirmButton*     Btn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UJHGHC_RegionEle_NPC_C::BndEvt__JHGHC_RegionEle_NPC_BTN_GHC_Prop_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature(class UJHNeoUIGamepadConfirmButton* Btn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JHGHC_RegionEle_NPC_C", "BndEvt__JHGHC_RegionEle_NPC_BTN_GHC_Prop_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature");

	Params::JHGHC_RegionEle_NPC_C_BndEvt__JHGHC_RegionEle_NPC_BTN_GHC_Prop_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature Parms{};

	Parms.Btn = Btn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function JHGHC_RegionEle_NPC.JHGHC_RegionEle_NPC_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UJHGHC_RegionEle_NPC_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JHGHC_RegionEle_NPC_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
