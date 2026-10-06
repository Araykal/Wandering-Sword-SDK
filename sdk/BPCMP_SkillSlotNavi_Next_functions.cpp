#pragma once



// Package: BPCMP_SkillSlotNavi_Next

#include "Basic.hpp"

#include "BPCMP_SkillSlotNavi_Next_classes.hpp"
#include "BPCMP_SkillSlotNavi_Next_parameters.hpp"


SDK_NAMESPACE_START

// Function BPCMP_SkillSlotNavi_Next.BPCMP_SkillSlotNavi_Next_C.ExecuteUbergraph_BPCMP_SkillSlotNavi_Next
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPCMP_SkillSlotNavi_Next_C::ExecuteUbergraph_BPCMP_SkillSlotNavi_Next(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPCMP_SkillSlotNavi_Next_C", "ExecuteUbergraph_BPCMP_SkillSlotNavi_Next");

	Params::BPCMP_SkillSlotNavi_Next_C_ExecuteUbergraph_BPCMP_SkillSlotNavi_Next Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPCMP_SkillSlotNavi_Next.BPCMP_SkillSlotNavi_Next_C.BndEvt__BPCMP_SkillSlotNavi_JHGPCBtn_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UJHNeoUIGamepadConfirmButton*     Btn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPCMP_SkillSlotNavi_Next_C::BndEvt__BPCMP_SkillSlotNavi_JHGPCBtn_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature(class UJHNeoUIGamepadConfirmButton* Btn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPCMP_SkillSlotNavi_Next_C", "BndEvt__BPCMP_SkillSlotNavi_JHGPCBtn_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature");

	Params::BPCMP_SkillSlotNavi_Next_C_BndEvt__BPCMP_SkillSlotNavi_JHGPCBtn_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature Parms{};

	Parms.Btn = Btn;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
