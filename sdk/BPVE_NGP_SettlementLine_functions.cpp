#pragma once



// Package: BPVE_NGP_SettlementLine

#include "Basic.hpp"

#include "BPVE_NGP_SettlementLine_classes.hpp"
#include "BPVE_NGP_SettlementLine_parameters.hpp"


SDK_NAMESPACE_START

// Function BPVE_NGP_SettlementLine.BPVE_NGP_SettlementLine_C.ExecuteUbergraph_BPVE_NGP_SettlementLine
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_NGP_SettlementLine_C::ExecuteUbergraph_BPVE_NGP_SettlementLine(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_NGP_SettlementLine_C", "ExecuteUbergraph_BPVE_NGP_SettlementLine");

	Params::BPVE_NGP_SettlementLine_C_ExecuteUbergraph_BPVE_NGP_SettlementLine Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_NGP_SettlementLine.BPVE_NGP_SettlementLine_C.EVT_RenderView
// (Event, Public, BlueprintEvent)

void UBPVE_NGP_SettlementLine_C::EVT_RenderView()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_NGP_SettlementLine_C", "EVT_RenderView");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
