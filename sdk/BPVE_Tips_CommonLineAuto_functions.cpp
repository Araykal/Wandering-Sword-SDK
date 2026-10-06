#pragma once



// Package: BPVE_Tips_CommonLineAuto

#include "Basic.hpp"

#include "BPVE_Tips_CommonLineAuto_classes.hpp"
#include "BPVE_Tips_CommonLineAuto_parameters.hpp"


SDK_NAMESPACE_START

// Function BPVE_Tips_CommonLineAuto.BPVE_Tips_CommonLineAuto_C.ExecuteUbergraph_BPVE_Tips_CommonLineAuto
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_Tips_CommonLineAuto_C::ExecuteUbergraph_BPVE_Tips_CommonLineAuto(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_Tips_CommonLineAuto_C", "ExecuteUbergraph_BPVE_Tips_CommonLineAuto");

	Params::BPVE_Tips_CommonLineAuto_C_ExecuteUbergraph_BPVE_Tips_CommonLineAuto Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_Tips_CommonLineAuto.BPVE_Tips_CommonLineAuto_C.EVT_RenderView
// (Event, Public, BlueprintEvent)

void UBPVE_Tips_CommonLineAuto_C::EVT_RenderView()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_Tips_CommonLineAuto_C", "EVT_RenderView");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
