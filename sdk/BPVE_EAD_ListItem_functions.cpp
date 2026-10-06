#pragma once



// Package: BPVE_EAD_ListItem

#include "Basic.hpp"

#include "BPVE_EAD_ListItem_classes.hpp"
#include "BPVE_EAD_ListItem_parameters.hpp"


SDK_NAMESPACE_START

// Function BPVE_EAD_ListItem.BPVE_EAD_ListItem_C.ExecuteUbergraph_BPVE_EAD_ListItem
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_EAD_ListItem_C::ExecuteUbergraph_BPVE_EAD_ListItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_EAD_ListItem_C", "ExecuteUbergraph_BPVE_EAD_ListItem");

	Params::BPVE_EAD_ListItem_C_ExecuteUbergraph_BPVE_EAD_ListItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_EAD_ListItem.BPVE_EAD_ListItem_C.BndEvt__BPVE_EAD_ListItem_BTN_EDB_ListItem_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UJHNeoUIGamepadConfirmButton*     Btn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_EAD_ListItem_C::BndEvt__BPVE_EAD_ListItem_BTN_EDB_ListItem_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature(class UJHNeoUIGamepadConfirmButton* Btn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_EAD_ListItem_C", "BndEvt__BPVE_EAD_ListItem_BTN_EDB_ListItem_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature");

	Params::BPVE_EAD_ListItem_C_BndEvt__BPVE_EAD_ListItem_BTN_EDB_ListItem_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature Parms{};

	Parms.Btn = Btn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_EAD_ListItem.BPVE_EAD_ListItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPVE_EAD_ListItem_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_EAD_ListItem_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPVE_EAD_ListItem.BPVE_EAD_ListItem_C.GotoDetail
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EUINavigation                           Navigation_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UBPVE_EAD_ListItem_C::GotoDetail(EUINavigation Navigation_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_EAD_ListItem_C", "GotoDetail");

	Params::BPVE_EAD_ListItem_C_GotoDetail Parms{};

	Parms.Navigation_0 = Navigation_0;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


SDK_NAMESPACE_END
