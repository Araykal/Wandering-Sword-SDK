#pragma once



// Package: BPVE_SectLikingListCell

#include "Basic.hpp"

#include "BPVE_SectLikingListCell_classes.hpp"
#include "BPVE_SectLikingListCell_parameters.hpp"


SDK_NAMESPACE_START

// Function BPVE_SectLikingListCell.BPVE_SectLikingListCell_C.ExecuteUbergraph_BPVE_SectLikingListCell
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_SectLikingListCell_C::ExecuteUbergraph_BPVE_SectLikingListCell(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_SectLikingListCell_C", "ExecuteUbergraph_BPVE_SectLikingListCell");

	Params::BPVE_SectLikingListCell_C_ExecuteUbergraph_BPVE_SectLikingListCell Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_SectLikingListCell.BPVE_SectLikingListCell_C.EVT_RenderView
// (Event, Public, BlueprintEvent)

void UBPVE_SectLikingListCell_C::EVT_RenderView()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_SectLikingListCell_C", "EVT_RenderView");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
