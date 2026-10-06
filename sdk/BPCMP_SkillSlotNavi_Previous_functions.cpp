#pragma once



// Package: BPCMP_SkillSlotNavi_Previous

#include "Basic.hpp"

#include "BPCMP_SkillSlotNavi_Previous_classes.hpp"
#include "BPCMP_SkillSlotNavi_Previous_parameters.hpp"


SDK_NAMESPACE_START

// Function BPCMP_SkillSlotNavi_Previous.BPCMP_SkillSlotNavi_Previous_C.ExecuteUbergraph_BPCMP_SkillSlotNavi_Previous
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPCMP_SkillSlotNavi_Previous_C::ExecuteUbergraph_BPCMP_SkillSlotNavi_Previous(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPCMP_SkillSlotNavi_Previous_C", "ExecuteUbergraph_BPCMP_SkillSlotNavi_Previous");

	Params::BPCMP_SkillSlotNavi_Previous_C_ExecuteUbergraph_BPCMP_SkillSlotNavi_Previous Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPCMP_SkillSlotNavi_Previous.BPCMP_SkillSlotNavi_Previous_C.BndEvt__BPCMP_SkillSlotNavi_JHGPCBtn_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UJHNeoUIGamepadConfirmButton*     Btn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPCMP_SkillSlotNavi_Previous_C::BndEvt__BPCMP_SkillSlotNavi_JHGPCBtn_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature(class UJHNeoUIGamepadConfirmButton* Btn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPCMP_SkillSlotNavi_Previous_C", "BndEvt__BPCMP_SkillSlotNavi_JHGPCBtn_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature");

	Params::BPCMP_SkillSlotNavi_Previous_C_BndEvt__BPCMP_SkillSlotNavi_JHGPCBtn_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature Parms{};

	Parms.Btn = Btn;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
