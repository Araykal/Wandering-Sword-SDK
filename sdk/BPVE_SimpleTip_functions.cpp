#pragma once



// Package: BPVE_SimpleTip

#include "Basic.hpp"

#include "BPVE_SimpleTip_classes.hpp"
#include "BPVE_SimpleTip_parameters.hpp"


SDK_NAMESPACE_START

// Function BPVE_SimpleTip.BPVE_SimpleTip_C.ExecuteUbergraph_BPVE_SimpleTip
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_SimpleTip_C::ExecuteUbergraph_BPVE_SimpleTip(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_SimpleTip_C", "ExecuteUbergraph_BPVE_SimpleTip");

	Params::BPVE_SimpleTip_C_ExecuteUbergraph_BPVE_SimpleTip Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_SimpleTip.BPVE_SimpleTip_C.EVT_RenderView
// (Event, Public, BlueprintEvent)

void UBPVE_SimpleTip_C::EVT_RenderView()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_SimpleTip_C", "EVT_RenderView");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
