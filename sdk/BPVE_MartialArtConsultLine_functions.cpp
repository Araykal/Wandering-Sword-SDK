#pragma once



// Package: BPVE_MartialArtConsultLine

#include "Basic.hpp"

#include "BPVE_MartialArtConsultLine_classes.hpp"
#include "BPVE_MartialArtConsultLine_parameters.hpp"


SDK_NAMESPACE_START

// Function BPVE_MartialArtConsultLine.BPVE_MartialArtConsultLine_C.ExecuteUbergraph_BPVE_MartialArtConsultLine
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_MartialArtConsultLine_C::ExecuteUbergraph_BPVE_MartialArtConsultLine(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_MartialArtConsultLine_C", "ExecuteUbergraph_BPVE_MartialArtConsultLine");

	Params::BPVE_MartialArtConsultLine_C_ExecuteUbergraph_BPVE_MartialArtConsultLine Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_MartialArtConsultLine.BPVE_MartialArtConsultLine_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPVE_MartialArtConsultLine_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_MartialArtConsultLine_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPVE_MartialArtConsultLine.BPVE_MartialArtConsultLine_C.EVT_GamepadShowTips
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                                   intflag                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const class FString&                    strFlag                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UBPVE_MartialArtConsultLine_C::EVT_GamepadShowTips(int32 intflag, const class FString& strFlag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_MartialArtConsultLine_C", "EVT_GamepadShowTips");

	Params::BPVE_MartialArtConsultLine_C_EVT_GamepadShowTips Parms{};

	Parms.intflag = intflag;
	Parms.strFlag = std::move(strFlag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_MartialArtConsultLine.BPVE_MartialArtConsultLine_C.BndEvt__BPVE_MartialArtConsultLine_BTN_Consult_MartialArt_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UJHNeoUIGamepadConfirmButton*     Btn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_MartialArtConsultLine_C::BndEvt__BPVE_MartialArtConsultLine_BTN_Consult_MartialArt_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature(class UJHNeoUIGamepadConfirmButton* Btn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_MartialArtConsultLine_C", "BndEvt__BPVE_MartialArtConsultLine_BTN_Consult_MartialArt_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature");

	Params::BPVE_MartialArtConsultLine_C_BndEvt__BPVE_MartialArtConsultLine_BTN_Consult_MartialArt_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature Parms{};

	Parms.Btn = Btn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_MartialArtConsultLine.BPVE_MartialArtConsultLine_C.Get CT Icon Tool Tip Widget 0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UBPVE_MartialArtConsultLine_C::Get_CT_Icon_Tool_Tip_Widget_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_MartialArtConsultLine_C", "Get CT Icon Tool Tip Widget 0");

	Params::BPVE_MartialArtConsultLine_C_Get_CT_Icon_Tool_Tip_Widget_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


SDK_NAMESPACE_END
