#pragma once



// Package: BPVE_JHTips_FCItem

#include "Basic.hpp"

#include "BPVE_JHTips_FCItem_classes.hpp"
#include "BPVE_JHTips_FCItem_parameters.hpp"


SDK_NAMESPACE_START

// Function BPVE_JHTips_FCItem.BPVE_JHTips_FCItem_C.ExecuteUbergraph_BPVE_JHTips_FCItem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_JHTips_FCItem_C::ExecuteUbergraph_BPVE_JHTips_FCItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_JHTips_FCItem_C", "ExecuteUbergraph_BPVE_JHTips_FCItem");

	Params::BPVE_JHTips_FCItem_C_ExecuteUbergraph_BPVE_JHTips_FCItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_JHTips_FCItem.BPVE_JHTips_FCItem_C.EVT_SetItemTitle
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// const class FText&                      TT                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBPVE_JHTips_FCItem_C::EVT_SetItemTitle(const class FText& TT)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_JHTips_FCItem_C", "EVT_SetItemTitle");

	Params::BPVE_JHTips_FCItem_C_EVT_SetItemTitle Parms{};

	Parms.TT = std::move(TT);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_JHTips_FCItem.BPVE_JHTips_FCItem_C.EVT_SetItemStatus
// (Event, Public, BlueprintEvent)
// Parameters:
// const bool                              IsActive                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPVE_JHTips_FCItem_C::EVT_SetItemStatus(const bool IsActive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_JHTips_FCItem_C", "EVT_SetItemStatus");

	Params::BPVE_JHTips_FCItem_C_EVT_SetItemStatus Parms{};

	Parms.IsActive = IsActive;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
