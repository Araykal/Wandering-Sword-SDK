#pragma once



// Package: BTN_SwapUniform

#include "Basic.hpp"

#include "BTN_SwapUniform_classes.hpp"
#include "BTN_SwapUniform_parameters.hpp"


SDK_NAMESPACE_START

// Function BTN_SwapUniform.BTN_SwapUniform_C.ExecuteUbergraph_BTN_SwapUniform
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTN_SwapUniform_C::ExecuteUbergraph_BTN_SwapUniform(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTN_SwapUniform_C", "ExecuteUbergraph_BTN_SwapUniform");

	Params::BTN_SwapUniform_C_ExecuteUbergraph_BTN_SwapUniform Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BTN_SwapUniform.BTN_SwapUniform_C.BndEvt__BPCMP_SkillSlotNavi_JHGPCBtn_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UJHNeoUIGamepadConfirmButton*     Btn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTN_SwapUniform_C::BndEvt__BPCMP_SkillSlotNavi_JHGPCBtn_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature(class UJHNeoUIGamepadConfirmButton* Btn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTN_SwapUniform_C", "BndEvt__BPCMP_SkillSlotNavi_JHGPCBtn_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature");

	Params::BTN_SwapUniform_C_BndEvt__BPCMP_SkillSlotNavi_JHGPCBtn_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature Parms{};

	Parms.Btn = Btn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BTN_SwapUniform.BTN_SwapUniform_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBTN_SwapUniform_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTN_SwapUniform_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
