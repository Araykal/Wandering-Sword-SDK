#pragma once



// Package: BPMV_Trading_NaviBtn2

#include "Basic.hpp"

#include "BPMV_Trading_NaviBtn2_classes.hpp"
#include "BPMV_Trading_NaviBtn2_parameters.hpp"


SDK_NAMESPACE_START

// Function BPMV_Trading_NaviBtn2.BPMV_Trading_NaviBtn2_C.ExecuteUbergraph_BPMV_Trading_NaviBtn2
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPMV_Trading_NaviBtn2_C::ExecuteUbergraph_BPMV_Trading_NaviBtn2(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_Trading_NaviBtn2_C", "ExecuteUbergraph_BPMV_Trading_NaviBtn2");

	Params::BPMV_Trading_NaviBtn2_C_ExecuteUbergraph_BPMV_Trading_NaviBtn2 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_Trading_NaviBtn2.BPMV_Trading_NaviBtn2_C.BndEvt__BPMV_Trading_NaviBtn2_Btn_TradingNavi_K2Node_ComponentBoundEvent_1_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UJHNeoUIGamepadConfirmButton*     Btn_0                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPMV_Trading_NaviBtn2_C::BndEvt__BPMV_Trading_NaviBtn2_Btn_TradingNavi_K2Node_ComponentBoundEvent_1_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature(class UJHNeoUIGamepadConfirmButton* Btn_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_Trading_NaviBtn2_C", "BndEvt__BPMV_Trading_NaviBtn2_Btn_TradingNavi_K2Node_ComponentBoundEvent_1_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature");

	Params::BPMV_Trading_NaviBtn2_C_BndEvt__BPMV_Trading_NaviBtn2_Btn_TradingNavi_K2Node_ComponentBoundEvent_1_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature Parms{};

	Parms.Btn_0 = Btn_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_Trading_NaviBtn2.BPMV_Trading_NaviBtn2_C.BndEvt__BPVE_Prime_Team_Property_NaviBtn_BTN_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBPMV_Trading_NaviBtn2_C::BndEvt__BPVE_Prime_Team_Property_NaviBtn_BTN_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_Trading_NaviBtn2_C", "BndEvt__BPVE_Prime_Team_Property_NaviBtn_BTN_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_Trading_NaviBtn2.BPMV_Trading_NaviBtn2_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPMV_Trading_NaviBtn2_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_Trading_NaviBtn2_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_Trading_NaviBtn2.BPMV_Trading_NaviBtn2_C.ChangeIFAData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FString&                    AreaTag                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UBPMV_Trading_NaviBtn2_C::ChangeIFAData(const class FString& AreaTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_Trading_NaviBtn2_C", "ChangeIFAData");

	Params::BPMV_Trading_NaviBtn2_C_ChangeIFAData Parms{};

	Parms.AreaTag = std::move(AreaTag);

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
