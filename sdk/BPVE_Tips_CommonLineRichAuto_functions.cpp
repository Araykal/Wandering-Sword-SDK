#pragma once



// Package: BPVE_Tips_CommonLineRichAuto

#include "Basic.hpp"

#include "BPVE_Tips_CommonLineRichAuto_classes.hpp"
#include "BPVE_Tips_CommonLineRichAuto_parameters.hpp"


SDK_NAMESPACE_START

// Function BPVE_Tips_CommonLineRichAuto.BPVE_Tips_CommonLineRichAuto_C.ExecuteUbergraph_BPVE_Tips_CommonLineRichAuto
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_Tips_CommonLineRichAuto_C::ExecuteUbergraph_BPVE_Tips_CommonLineRichAuto(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_Tips_CommonLineRichAuto_C", "ExecuteUbergraph_BPVE_Tips_CommonLineRichAuto");

	Params::BPVE_Tips_CommonLineRichAuto_C_ExecuteUbergraph_BPVE_Tips_CommonLineRichAuto Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_Tips_CommonLineRichAuto.BPVE_Tips_CommonLineRichAuto_C.EVT_RenderView
// (Event, Public, BlueprintEvent)

void UBPVE_Tips_CommonLineRichAuto_C::EVT_RenderView()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_Tips_CommonLineRichAuto_C", "EVT_RenderView");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
