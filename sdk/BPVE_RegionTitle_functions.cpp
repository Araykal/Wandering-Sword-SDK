#pragma once



// Package: BPVE_RegionTitle

#include "Basic.hpp"

#include "BPVE_RegionTitle_classes.hpp"
#include "BPVE_RegionTitle_parameters.hpp"


SDK_NAMESPACE_START

// Function BPVE_RegionTitle.BPVE_RegionTitle_C.ExecuteUbergraph_BPVE_RegionTitle
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_RegionTitle_C::ExecuteUbergraph_BPVE_RegionTitle(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_RegionTitle_C", "ExecuteUbergraph_BPVE_RegionTitle");

	Params::BPVE_RegionTitle_C_ExecuteUbergraph_BPVE_RegionTitle Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_RegionTitle.BPVE_RegionTitle_C.EVT_UpdateRegionExpandingStatus
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    isHidden                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPVE_RegionTitle_C::EVT_UpdateRegionExpandingStatus(bool isHidden)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_RegionTitle_C", "EVT_UpdateRegionExpandingStatus");

	Params::BPVE_RegionTitle_C_EVT_UpdateRegionExpandingStatus Parms{};

	Parms.isHidden = isHidden;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_RegionTitle.BPVE_RegionTitle_C.BndEvt__BPVE_RegionTitle_BTN_GHC_Region_NPC_K2Node_ComponentBoundEvent_1_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UJHNeoUIGamepadConfirmButton*     Btn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_RegionTitle_C::BndEvt__BPVE_RegionTitle_BTN_GHC_Region_NPC_K2Node_ComponentBoundEvent_1_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature(class UJHNeoUIGamepadConfirmButton* Btn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_RegionTitle_C", "BndEvt__BPVE_RegionTitle_BTN_GHC_Region_NPC_K2Node_ComponentBoundEvent_1_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature");

	Params::BPVE_RegionTitle_C_BndEvt__BPVE_RegionTitle_BTN_GHC_Region_NPC_K2Node_ComponentBoundEvent_1_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature Parms{};

	Parms.Btn = Btn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_RegionTitle.BPVE_RegionTitle_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPVE_RegionTitle_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_RegionTitle_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPVE_RegionTitle.BPVE_RegionTitle_C.DoCustomNavigation_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EUINavigation                           Navigation_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UBPVE_RegionTitle_C::DoCustomNavigation_0(EUINavigation Navigation_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_RegionTitle_C", "DoCustomNavigation_0");

	Params::BPVE_RegionTitle_C_DoCustomNavigation_0 Parms{};

	Parms.Navigation_0 = Navigation_0;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


SDK_NAMESPACE_END
