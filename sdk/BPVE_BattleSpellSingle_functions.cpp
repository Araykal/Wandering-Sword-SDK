#pragma once



// Package: BPVE_BattleSpellSingle

#include "Basic.hpp"

#include "BPVE_BattleSpellSingle_classes.hpp"
#include "BPVE_BattleSpellSingle_parameters.hpp"


SDK_NAMESPACE_START

// Function BPVE_BattleSpellSingle.BPVE_BattleSpellSingle_C.ExecuteUbergraph_BPVE_BattleSpellSingle
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_BattleSpellSingle_C::ExecuteUbergraph_BPVE_BattleSpellSingle(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_BattleSpellSingle_C", "ExecuteUbergraph_BPVE_BattleSpellSingle");

	Params::BPVE_BattleSpellSingle_C_ExecuteUbergraph_BPVE_BattleSpellSingle Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_BattleSpellSingle.BPVE_BattleSpellSingle_C.EVT_UpdateIsCurrentStatus
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    is_current                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPVE_BattleSpellSingle_C::EVT_UpdateIsCurrentStatus(bool is_current)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_BattleSpellSingle_C", "EVT_UpdateIsCurrentStatus");

	Params::BPVE_BattleSpellSingle_C_EVT_UpdateIsCurrentStatus Parms{};

	Parms.is_current = is_current;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_BattleSpellSingle.BPVE_BattleSpellSingle_C.EVT_GamepadShowTips
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                                   intflag                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const class FString&                    strFlag                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UBPVE_BattleSpellSingle_C::EVT_GamepadShowTips(int32 intflag, const class FString& strFlag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_BattleSpellSingle_C", "EVT_GamepadShowTips");

	Params::BPVE_BattleSpellSingle_C_EVT_GamepadShowTips Parms{};

	Parms.intflag = intflag;
	Parms.strFlag = std::move(strFlag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_BattleSpellSingle.BPVE_BattleSpellSingle_C.OnAddedToFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// const struct FFocusEvent&               InFocusEvent                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UBPVE_BattleSpellSingle_C::OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_BattleSpellSingle_C", "OnAddedToFocusPath");

	Params::BPVE_BattleSpellSingle_C_OnAddedToFocusPath Parms{};

	Parms.InFocusEvent = std::move(InFocusEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_BattleSpellSingle.BPVE_BattleSpellSingle_C.BndEvt__BPVE_BattleSpellSingle_BTN_BattleSkillCell_K2Node_ComponentBoundEvent_2_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UJHNeoUIGamepadConfirmButton*     Btn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_BattleSpellSingle_C::BndEvt__BPVE_BattleSpellSingle_BTN_BattleSkillCell_K2Node_ComponentBoundEvent_2_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature(class UJHNeoUIGamepadConfirmButton* Btn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_BattleSpellSingle_C", "BndEvt__BPVE_BattleSpellSingle_BTN_BattleSkillCell_K2Node_ComponentBoundEvent_2_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature");

	Params::BPVE_BattleSpellSingle_C_BndEvt__BPVE_BattleSpellSingle_BTN_BattleSkillCell_K2Node_ComponentBoundEvent_2_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature Parms{};

	Parms.Btn = Btn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_BattleSpellSingle.BPVE_BattleSpellSingle_C.BndEvt__BPVE_BattleSpellSingle_BTN_Main_K2Node_ComponentBoundEvent_1_NeoUICommonButtonMouseEnter__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UNeoUICommonButton*               SrcWidget                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_BattleSpellSingle_C::BndEvt__BPVE_BattleSpellSingle_BTN_Main_K2Node_ComponentBoundEvent_1_NeoUICommonButtonMouseEnter__DelegateSignature(class UNeoUICommonButton* SrcWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_BattleSpellSingle_C", "BndEvt__BPVE_BattleSpellSingle_BTN_Main_K2Node_ComponentBoundEvent_1_NeoUICommonButtonMouseEnter__DelegateSignature");

	Params::BPVE_BattleSpellSingle_C_BndEvt__BPVE_BattleSpellSingle_BTN_Main_K2Node_ComponentBoundEvent_1_NeoUICommonButtonMouseEnter__DelegateSignature Parms{};

	Parms.SrcWidget = SrcWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_BattleSpellSingle.BPVE_BattleSpellSingle_C.BndEvt__BPVE_BattleSpellSingle_BTN_Main_K2Node_ComponentBoundEvent_0_NeoUICommonButtonSingleClick__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UNeoUICommonButton*               SrcWidget                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_BattleSpellSingle_C::BndEvt__BPVE_BattleSpellSingle_BTN_Main_K2Node_ComponentBoundEvent_0_NeoUICommonButtonSingleClick__DelegateSignature(class UNeoUICommonButton* SrcWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_BattleSpellSingle_C", "BndEvt__BPVE_BattleSpellSingle_BTN_Main_K2Node_ComponentBoundEvent_0_NeoUICommonButtonSingleClick__DelegateSignature");

	Params::BPVE_BattleSpellSingle_C_BndEvt__BPVE_BattleSpellSingle_BTN_Main_K2Node_ComponentBoundEvent_0_NeoUICommonButtonSingleClick__DelegateSignature Parms{};

	Parms.SrcWidget = SrcWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_BattleSpellSingle.BPVE_BattleSpellSingle_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPVE_BattleSpellSingle_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_BattleSpellSingle_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPVE_BattleSpellSingle.BPVE_BattleSpellSingle_C.GetToolTipWidget_1
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UBPVE_BattleSpellSingle_C::GetToolTipWidget_1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_BattleSpellSingle_C", "GetToolTipWidget_1");

	Params::BPVE_BattleSpellSingle_C_GetToolTipWidget_1 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


SDK_NAMESPACE_END
