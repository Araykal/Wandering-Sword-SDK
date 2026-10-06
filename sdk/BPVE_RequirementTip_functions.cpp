#pragma once



// Package: BPVE_RequirementTip

#include "Basic.hpp"

#include "BPVE_RequirementTip_classes.hpp"
#include "BPVE_RequirementTip_parameters.hpp"


SDK_NAMESPACE_START

// Function BPVE_RequirementTip.BPVE_RequirementTip_C.ExecuteUbergraph_BPVE_RequirementTip
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_RequirementTip_C::ExecuteUbergraph_BPVE_RequirementTip(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_RequirementTip_C", "ExecuteUbergraph_BPVE_RequirementTip");

	Params::BPVE_RequirementTip_C_ExecuteUbergraph_BPVE_RequirementTip Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_RequirementTip.BPVE_RequirementTip_C.EVT_RenderView
// (Event, Public, BlueprintEvent)

void UBPVE_RequirementTip_C::EVT_RenderView()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_RequirementTip_C", "EVT_RenderView");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
