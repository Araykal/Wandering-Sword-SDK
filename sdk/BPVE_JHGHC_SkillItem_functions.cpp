#pragma once



// Package: BPVE_JHGHC_SkillItem

#include "Basic.hpp"

#include "BPVE_JHGHC_SkillItem_classes.hpp"
#include "BPVE_JHGHC_SkillItem_parameters.hpp"


SDK_NAMESPACE_START

// Function BPVE_JHGHC_SkillItem.BPVE_JHGHC_SkillItem_C.ExecuteUbergraph_BPVE_JHGHC_SkillItem
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_JHGHC_SkillItem_C::ExecuteUbergraph_BPVE_JHGHC_SkillItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_JHGHC_SkillItem_C", "ExecuteUbergraph_BPVE_JHGHC_SkillItem");

	Params::BPVE_JHGHC_SkillItem_C_ExecuteUbergraph_BPVE_JHGHC_SkillItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_JHGHC_SkillItem.BPVE_JHGHC_SkillItem_C.EVT_GamepadHideTips
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                                   intflag                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const class FString&                    strFlag                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UBPVE_JHGHC_SkillItem_C::EVT_GamepadHideTips(int32 intflag, const class FString& strFlag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_JHGHC_SkillItem_C", "EVT_GamepadHideTips");

	Params::BPVE_JHGHC_SkillItem_C_EVT_GamepadHideTips Parms{};

	Parms.intflag = intflag;
	Parms.strFlag = std::move(strFlag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_JHGHC_SkillItem.BPVE_JHGHC_SkillItem_C.EVT_GamepadShowTips
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                                   intflag                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const class FString&                    strFlag                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UBPVE_JHGHC_SkillItem_C::EVT_GamepadShowTips(int32 intflag, const class FString& strFlag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_JHGHC_SkillItem_C", "EVT_GamepadShowTips");

	Params::BPVE_JHGHC_SkillItem_C_EVT_GamepadShowTips Parms{};

	Parms.intflag = intflag;
	Parms.strFlag = std::move(strFlag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_JHGHC_SkillItem.BPVE_JHGHC_SkillItem_C.BndEvt__BPVE_JHGHC_SkillItem_BTN_GHC_Skill_K2Node_ComponentBoundEvent_2_JHNeoUIGamepadConfirmButtonMouseEvt__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UJHNeoUIGamepadConfirmButton*     Btn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_JHGHC_SkillItem_C::BndEvt__BPVE_JHGHC_SkillItem_BTN_GHC_Skill_K2Node_ComponentBoundEvent_2_JHNeoUIGamepadConfirmButtonMouseEvt__DelegateSignature(class UJHNeoUIGamepadConfirmButton* Btn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_JHGHC_SkillItem_C", "BndEvt__BPVE_JHGHC_SkillItem_BTN_GHC_Skill_K2Node_ComponentBoundEvent_2_JHNeoUIGamepadConfirmButtonMouseEvt__DelegateSignature");

	Params::BPVE_JHGHC_SkillItem_C_BndEvt__BPVE_JHGHC_SkillItem_BTN_GHC_Skill_K2Node_ComponentBoundEvent_2_JHNeoUIGamepadConfirmButtonMouseEvt__DelegateSignature Parms{};

	Parms.Btn = Btn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_JHGHC_SkillItem.BPVE_JHGHC_SkillItem_C.BndEvt__BPVE_JHGHC_SkillItem_BTN_GHC_Skill_K2Node_ComponentBoundEvent_1_JHNeoUIGamepadConfirmButtonMouseEvt__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UJHNeoUIGamepadConfirmButton*     Btn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_JHGHC_SkillItem_C::BndEvt__BPVE_JHGHC_SkillItem_BTN_GHC_Skill_K2Node_ComponentBoundEvent_1_JHNeoUIGamepadConfirmButtonMouseEvt__DelegateSignature(class UJHNeoUIGamepadConfirmButton* Btn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_JHGHC_SkillItem_C", "BndEvt__BPVE_JHGHC_SkillItem_BTN_GHC_Skill_K2Node_ComponentBoundEvent_1_JHNeoUIGamepadConfirmButtonMouseEvt__DelegateSignature");

	Params::BPVE_JHGHC_SkillItem_C_BndEvt__BPVE_JHGHC_SkillItem_BTN_GHC_Skill_K2Node_ComponentBoundEvent_1_JHNeoUIGamepadConfirmButtonMouseEvt__DelegateSignature Parms{};

	Parms.Btn = Btn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_JHGHC_SkillItem.BPVE_JHGHC_SkillItem_C.BndEvt__BPVE_JHGHC_ScenarioItem_BTN_GHC_Scenario_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UJHNeoUIGamepadConfirmButton*     Btn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_JHGHC_SkillItem_C::BndEvt__BPVE_JHGHC_ScenarioItem_BTN_GHC_Scenario_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature(class UJHNeoUIGamepadConfirmButton* Btn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_JHGHC_SkillItem_C", "BndEvt__BPVE_JHGHC_ScenarioItem_BTN_GHC_Scenario_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature");

	Params::BPVE_JHGHC_SkillItem_C_BndEvt__BPVE_JHGHC_ScenarioItem_BTN_GHC_Scenario_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature Parms{};

	Parms.Btn = Btn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_JHGHC_SkillItem.BPVE_JHGHC_SkillItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPVE_JHGHC_SkillItem_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_JHGHC_SkillItem_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
