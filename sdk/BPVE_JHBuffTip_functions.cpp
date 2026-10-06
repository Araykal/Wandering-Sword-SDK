#pragma once



// Package: BPVE_JHBuffTip

#include "Basic.hpp"

#include "BPVE_JHBuffTip_classes.hpp"
#include "BPVE_JHBuffTip_parameters.hpp"


SDK_NAMESPACE_START

// Function BPVE_JHBuffTip.BPVE_JHBuffTip_C.ExecuteUbergraph_BPVE_JHBuffTip
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_JHBuffTip_C::ExecuteUbergraph_BPVE_JHBuffTip(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_JHBuffTip_C", "ExecuteUbergraph_BPVE_JHBuffTip");

	Params::BPVE_JHBuffTip_C_ExecuteUbergraph_BPVE_JHBuffTip Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_JHBuffTip.BPVE_JHBuffTip_C.EVT_SetupHierarchy
// (Event, Public, BlueprintEvent)

void UBPVE_JHBuffTip_C::EVT_SetupHierarchy()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_JHBuffTip_C", "EVT_SetupHierarchy");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPVE_JHBuffTip.BPVE_JHBuffTip_C.EVT_RenderView
// (Event, Public, BlueprintEvent)

void UBPVE_JHBuffTip_C::EVT_RenderView()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_JHBuffTip_C", "EVT_RenderView");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
