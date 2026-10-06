#pragma once



// Package: NGPCD_EDBCell

#include "Basic.hpp"

#include "NGPCD_EDBCell_classes.hpp"
#include "NGPCD_EDBCell_parameters.hpp"


SDK_NAMESPACE_START

// Function NGPCD_EDBCell.NGPCD_EDBCell_C.ExecuteUbergraph_NGPCD_EDBCell
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNGPCD_EDBCell_C::ExecuteUbergraph_NGPCD_EDBCell(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NGPCD_EDBCell_C", "ExecuteUbergraph_NGPCD_EDBCell");

	Params::NGPCD_EDBCell_C_ExecuteUbergraph_NGPCD_EDBCell Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NGPCD_EDBCell.NGPCD_EDBCell_C.EVT_GamepadShowTips
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                                   intflag                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const class FString&                    strFlag                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UNGPCD_EDBCell_C::EVT_GamepadShowTips(int32 intflag, const class FString& strFlag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NGPCD_EDBCell_C", "EVT_GamepadShowTips");

	Params::NGPCD_EDBCell_C_EVT_GamepadShowTips Parms{};

	Parms.intflag = intflag;
	Parms.strFlag = std::move(strFlag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function NGPCD_EDBCell.NGPCD_EDBCell_C.BndEvt__NGPCD_EDBCell_BTN_EDBCell_K2Node_ComponentBoundEvent_1_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UJHNeoUIGamepadConfirmButton*     Btn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNGPCD_EDBCell_C::BndEvt__NGPCD_EDBCell_BTN_EDBCell_K2Node_ComponentBoundEvent_1_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature(class UJHNeoUIGamepadConfirmButton* Btn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NGPCD_EDBCell_C", "BndEvt__NGPCD_EDBCell_BTN_EDBCell_K2Node_ComponentBoundEvent_1_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature");

	Params::NGPCD_EDBCell_C_BndEvt__NGPCD_EDBCell_BTN_EDBCell_K2Node_ComponentBoundEvent_1_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature Parms{};

	Parms.Btn = Btn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NGPCD_EDBCell.NGPCD_EDBCell_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UNGPCD_EDBCell_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NGPCD_EDBCell_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NGPCD_EDBCell.NGPCD_EDBCell_C.GetToolTipWidget_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UNGPCD_EDBCell_C::GetToolTipWidget_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NGPCD_EDBCell_C", "GetToolTipWidget_0");

	Params::NGPCD_EDBCell_C_GetToolTipWidget_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


SDK_NAMESPACE_END
