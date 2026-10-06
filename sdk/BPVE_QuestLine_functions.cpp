#pragma once



// Package: BPVE_QuestLine

#include "Basic.hpp"

#include "BPVE_QuestLine_classes.hpp"
#include "BPVE_QuestLine_parameters.hpp"


SDK_NAMESPACE_START

// Function BPVE_QuestLine.BPVE_QuestLine_C.ExecuteUbergraph_BPVE_QuestLine
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_QuestLine_C::ExecuteUbergraph_BPVE_QuestLine(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_QuestLine_C", "ExecuteUbergraph_BPVE_QuestLine");

	Params::BPVE_QuestLine_C_ExecuteUbergraph_BPVE_QuestLine Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_QuestLine.BPVE_QuestLine_C.BndEvt__BPVE_QuestLine_BTN_Main_K2Node_ComponentBoundEvent_1_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UJHNeoUIGamepadConfirmButton*     Btn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_QuestLine_C::BndEvt__BPVE_QuestLine_BTN_Main_K2Node_ComponentBoundEvent_1_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature(class UJHNeoUIGamepadConfirmButton* Btn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_QuestLine_C", "BndEvt__BPVE_QuestLine_BTN_Main_K2Node_ComponentBoundEvent_1_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature");

	Params::BPVE_QuestLine_C_BndEvt__BPVE_QuestLine_BTN_Main_K2Node_ComponentBoundEvent_1_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature Parms{};

	Parms.Btn = Btn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_QuestLine.BPVE_QuestLine_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPVE_QuestLine_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_QuestLine_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPVE_QuestLine.BPVE_QuestLine_C.EVT_RenderView
// (Event, Public, BlueprintEvent)

void UBPVE_QuestLine_C::EVT_RenderView()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_QuestLine_C", "EVT_RenderView");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
