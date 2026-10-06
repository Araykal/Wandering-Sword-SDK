#pragma once



// Package: BPVE_JHConfigVideoItem2

#include "Basic.hpp"

#include "BPVE_JHConfigVideoItem2_classes.hpp"
#include "BPVE_JHConfigVideoItem2_parameters.hpp"


SDK_NAMESPACE_START

// Function BPVE_JHConfigVideoItem2.BPVE_JHConfigVideoItem2_C.ExecuteUbergraph_BPVE_JHConfigVideoItem2
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_JHConfigVideoItem2_C::ExecuteUbergraph_BPVE_JHConfigVideoItem2(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_JHConfigVideoItem2_C", "ExecuteUbergraph_BPVE_JHConfigVideoItem2");

	Params::BPVE_JHConfigVideoItem2_C_ExecuteUbergraph_BPVE_JHConfigVideoItem2 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_JHConfigVideoItem2.BPVE_JHConfigVideoItem2_C.BndEvt__BPVE_JHConfigVideoItem2_CB_Main_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// const class FString&                    SelectedItem                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// ESelectInfo                             SelectionType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_JHConfigVideoItem2_C::BndEvt__BPVE_JHConfigVideoItem2_CB_Main_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_JHConfigVideoItem2_C", "BndEvt__BPVE_JHConfigVideoItem2_CB_Main_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature");

	Params::BPVE_JHConfigVideoItem2_C_BndEvt__BPVE_JHConfigVideoItem2_CB_Main_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature Parms{};

	Parms.SelectedItem = std::move(SelectedItem);
	Parms.SelectionType = SelectionType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_JHConfigVideoItem2.BPVE_JHConfigVideoItem2_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPVE_JHConfigVideoItem2_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_JHConfigVideoItem2_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPVE_JHConfigVideoItem2.BPVE_JHConfigVideoItem2_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGeometry&                 MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// const struct FFocusEvent&               InFocusEvent                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UBPVE_JHConfigVideoItem2_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_JHConfigVideoItem2_C", "OnFocusReceived");

	Params::BPVE_JHConfigVideoItem2_C_OnFocusReceived Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InFocusEvent = std::move(InFocusEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


SDK_NAMESPACE_END
