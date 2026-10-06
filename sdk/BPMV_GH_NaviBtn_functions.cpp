#pragma once



// Package: BPMV_GH_NaviBtn

#include "Basic.hpp"

#include "BPMV_GH_NaviBtn_classes.hpp"
#include "BPMV_GH_NaviBtn_parameters.hpp"


SDK_NAMESPACE_START

// Function BPMV_GH_NaviBtn.BPMV_GH_NaviBtn_C.ExecuteUbergraph_BPMV_GH_NaviBtn
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPMV_GH_NaviBtn_C::ExecuteUbergraph_BPMV_GH_NaviBtn(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_GH_NaviBtn_C", "ExecuteUbergraph_BPMV_GH_NaviBtn");

	Params::BPMV_GH_NaviBtn_C_ExecuteUbergraph_BPMV_GH_NaviBtn Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_GH_NaviBtn.BPMV_GH_NaviBtn_C.BndEvt__BPMV_GH_NaviBtn_JHGPCBtn_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UJHNeoUIGamepadConfirmButton*     Btn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPMV_GH_NaviBtn_C::BndEvt__BPMV_GH_NaviBtn_JHGPCBtn_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature(class UJHNeoUIGamepadConfirmButton* Btn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_GH_NaviBtn_C", "BndEvt__BPMV_GH_NaviBtn_JHGPCBtn_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature");

	Params::BPMV_GH_NaviBtn_C_BndEvt__BPMV_GH_NaviBtn_JHGPCBtn_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature Parms{};

	Parms.Btn = Btn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_GH_NaviBtn.BPMV_GH_NaviBtn_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPMV_GH_NaviBtn_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_GH_NaviBtn_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
