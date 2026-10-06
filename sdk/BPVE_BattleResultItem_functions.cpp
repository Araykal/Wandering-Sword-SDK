#pragma once



// Package: BPVE_BattleResultItem

#include "Basic.hpp"

#include "BPVE_BattleResultItem_classes.hpp"
#include "BPVE_BattleResultItem_parameters.hpp"


SDK_NAMESPACE_START

// Function BPVE_BattleResultItem.BPVE_BattleResultItem_C.ExecuteUbergraph_BPVE_BattleResultItem
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_BattleResultItem_C::ExecuteUbergraph_BPVE_BattleResultItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_BattleResultItem_C", "ExecuteUbergraph_BPVE_BattleResultItem");

	Params::BPVE_BattleResultItem_C_ExecuteUbergraph_BPVE_BattleResultItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_BattleResultItem.BPVE_BattleResultItem_C.BndEvt__BPVE_BattleResultItem_BTN_BattleWinItem_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UJHNeoUIGamepadConfirmButton*     Btn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_BattleResultItem_C::BndEvt__BPVE_BattleResultItem_BTN_BattleWinItem_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature(class UJHNeoUIGamepadConfirmButton* Btn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_BattleResultItem_C", "BndEvt__BPVE_BattleResultItem_BTN_BattleWinItem_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature");

	Params::BPVE_BattleResultItem_C_BndEvt__BPVE_BattleResultItem_BTN_BattleWinItem_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature Parms{};

	Parms.Btn = Btn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_BattleResultItem.BPVE_BattleResultItem_C.EVT_GamepadShowTips
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                                   intflag                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const class FString&                    strFlag                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UBPVE_BattleResultItem_C::EVT_GamepadShowTips(int32 intflag, const class FString& strFlag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_BattleResultItem_C", "EVT_GamepadShowTips");

	Params::BPVE_BattleResultItem_C_EVT_GamepadShowTips Parms{};

	Parms.intflag = intflag;
	Parms.strFlag = std::move(strFlag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_BattleResultItem.BPVE_BattleResultItem_C.EVT_FadeAnim
// (Event, Public, BlueprintEvent)

void UBPVE_BattleResultItem_C::EVT_FadeAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_BattleResultItem_C", "EVT_FadeAnim");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPVE_BattleResultItem.BPVE_BattleResultItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPVE_BattleResultItem_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_BattleResultItem_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPVE_BattleResultItem.BPVE_BattleResultItem_C.Display_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBPCMP_JHItem_C*                  Display_0                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_BattleResultItem_C::Display_Event_0(class UBPCMP_JHItem_C* Display_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_BattleResultItem_C", "Display_Event_0");

	Params::BPVE_BattleResultItem_C_Display_Event_0 Parms{};

	Parms.Display_0 = Display_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_BattleResultItem.BPVE_BattleResultItem_C.GetToolTipWidget_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UBPVE_BattleResultItem_C::GetToolTipWidget_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_BattleResultItem_C", "GetToolTipWidget_0");

	Params::BPVE_BattleResultItem_C_GetToolTipWidget_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BPVE_BattleResultItem.BPVE_BattleResultItem_C.SequenceEvent__ENTRYPOINTBPVE_BattleResultItem_0
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBPCMP_JHItem_C*                  Display_0                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_BattleResultItem_C::SequenceEvent__ENTRYPOINTBPVE_BattleResultItem_0(class UBPCMP_JHItem_C* Display_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_BattleResultItem_C", "SequenceEvent__ENTRYPOINTBPVE_BattleResultItem_0");

	Params::BPVE_BattleResultItem_C_SequenceEvent__ENTRYPOINTBPVE_BattleResultItem_0 Parms{};

	Parms.Display_0 = Display_0;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
