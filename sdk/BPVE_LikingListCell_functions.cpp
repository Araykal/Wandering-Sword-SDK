#pragma once



// Package: BPVE_LikingListCell

#include "Basic.hpp"

#include "BPVE_LikingListCell_classes.hpp"
#include "BPVE_LikingListCell_parameters.hpp"


SDK_NAMESPACE_START

// Function BPVE_LikingListCell.BPVE_LikingListCell_C.ExecuteUbergraph_BPVE_LikingListCell
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_LikingListCell_C::ExecuteUbergraph_BPVE_LikingListCell(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_LikingListCell_C", "ExecuteUbergraph_BPVE_LikingListCell");

	Params::BPVE_LikingListCell_C_ExecuteUbergraph_BPVE_LikingListCell Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_LikingListCell.BPVE_LikingListCell_C.EVT_RenderView
// (Event, Public, BlueprintEvent)

void UBPVE_LikingListCell_C::EVT_RenderView()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_LikingListCell_C", "EVT_RenderView");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPVE_LikingListCell.BPVE_LikingListCell_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPVE_LikingListCell_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_LikingListCell_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
