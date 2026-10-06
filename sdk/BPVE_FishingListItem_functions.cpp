#pragma once



// Package: BPVE_FishingListItem

#include "Basic.hpp"

#include "BPVE_FishingListItem_classes.hpp"
#include "BPVE_FishingListItem_parameters.hpp"


SDK_NAMESPACE_START

// Function BPVE_FishingListItem.BPVE_FishingListItem_C.ExecuteUbergraph_BPVE_FishingListItem
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void BPVE_FishingListItem::UBPVE_FishingListItem_C::ExecuteUbergraph_BPVE_FishingListItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_FishingListItem_C", "ExecuteUbergraph_BPVE_FishingListItem");

	Params::BPVE_FishingListItem_C_ExecuteUbergraph_BPVE_FishingListItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_FishingListItem.BPVE_FishingListItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void BPVE_FishingListItem::UBPVE_FishingListItem_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_FishingListItem_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
