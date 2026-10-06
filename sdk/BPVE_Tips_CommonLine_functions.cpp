#pragma once



// Package: BPVE_Tips_CommonLine

#include "Basic.hpp"

#include "BPVE_Tips_CommonLine_classes.hpp"
#include "BPVE_Tips_CommonLine_parameters.hpp"


SDK_NAMESPACE_START

// Function BPVE_Tips_CommonLine.BPVE_Tips_CommonLine_C.ExecuteUbergraph_BPVE_Tips_CommonLine
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_Tips_CommonLine_C::ExecuteUbergraph_BPVE_Tips_CommonLine(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_Tips_CommonLine_C", "ExecuteUbergraph_BPVE_Tips_CommonLine");

	Params::BPVE_Tips_CommonLine_C_ExecuteUbergraph_BPVE_Tips_CommonLine Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_Tips_CommonLine.BPVE_Tips_CommonLine_C.EVT_RenderView
// (Event, Public, BlueprintEvent)

void UBPVE_Tips_CommonLine_C::EVT_RenderView()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_Tips_CommonLine_C", "EVT_RenderView");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
