#pragma once



// Package: BPVE_Prime_Team_Property_NaviBtn

#include "Basic.hpp"

#include "BPVE_Prime_Team_Property_NaviBtn_classes.hpp"
#include "BPVE_Prime_Team_Property_NaviBtn_parameters.hpp"


SDK_NAMESPACE_START

// Function BPVE_Prime_Team_Property_NaviBtn.BPVE_Prime_Team_Property_NaviBtn_C.ExecuteUbergraph_BPVE_Prime_Team_Property_NaviBtn
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_Prime_Team_Property_NaviBtn_C::ExecuteUbergraph_BPVE_Prime_Team_Property_NaviBtn(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_Prime_Team_Property_NaviBtn_C", "ExecuteUbergraph_BPVE_Prime_Team_Property_NaviBtn");

	Params::BPVE_Prime_Team_Property_NaviBtn_C_ExecuteUbergraph_BPVE_Prime_Team_Property_NaviBtn Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_Prime_Team_Property_NaviBtn.BPVE_Prime_Team_Property_NaviBtn_C.BndEvt__BPVE_Prime_Team_Property_NaviBtn_Btn_PrimeTeamPropertyNavi_K2Node_ComponentBoundEvent_1_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UJHNeoUIGamepadConfirmButton*     Btn_0                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_Prime_Team_Property_NaviBtn_C::BndEvt__BPVE_Prime_Team_Property_NaviBtn_Btn_PrimeTeamPropertyNavi_K2Node_ComponentBoundEvent_1_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature(class UJHNeoUIGamepadConfirmButton* Btn_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_Prime_Team_Property_NaviBtn_C", "BndEvt__BPVE_Prime_Team_Property_NaviBtn_Btn_PrimeTeamPropertyNavi_K2Node_ComponentBoundEvent_1_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature");

	Params::BPVE_Prime_Team_Property_NaviBtn_C_BndEvt__BPVE_Prime_Team_Property_NaviBtn_Btn_PrimeTeamPropertyNavi_K2Node_ComponentBoundEvent_1_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature Parms{};

	Parms.Btn_0 = Btn_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_Prime_Team_Property_NaviBtn.BPVE_Prime_Team_Property_NaviBtn_C.BndEvt__BPVE_Prime_Team_Property_NaviBtn_BTN_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBPVE_Prime_Team_Property_NaviBtn_C::BndEvt__BPVE_Prime_Team_Property_NaviBtn_BTN_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_Prime_Team_Property_NaviBtn_C", "BndEvt__BPVE_Prime_Team_Property_NaviBtn_BTN_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPVE_Prime_Team_Property_NaviBtn.BPVE_Prime_Team_Property_NaviBtn_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPVE_Prime_Team_Property_NaviBtn_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_Prime_Team_Property_NaviBtn_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
