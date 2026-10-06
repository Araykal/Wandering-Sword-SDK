#pragma once



// Package: BPVE_JHPropertyTip

#include "Basic.hpp"

#include "BPVE_JHPropertyTip_classes.hpp"
#include "BPVE_JHPropertyTip_parameters.hpp"


SDK_NAMESPACE_START

// Function BPVE_JHPropertyTip.BPVE_JHPropertyTip_C.ExecuteUbergraph_BPVE_JHPropertyTip
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_JHPropertyTip_C::ExecuteUbergraph_BPVE_JHPropertyTip(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_JHPropertyTip_C", "ExecuteUbergraph_BPVE_JHPropertyTip");

	Params::BPVE_JHPropertyTip_C_ExecuteUbergraph_BPVE_JHPropertyTip Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_JHPropertyTip.BPVE_JHPropertyTip_C.EVT_SetupHierarchy
// (Event, Public, BlueprintEvent)

void UBPVE_JHPropertyTip_C::EVT_SetupHierarchy()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_JHPropertyTip_C", "EVT_SetupHierarchy");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPVE_JHPropertyTip.BPVE_JHPropertyTip_C.EVT_RenderView
// (Event, Public, BlueprintEvent)

void UBPVE_JHPropertyTip_C::EVT_RenderView()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_JHPropertyTip_C", "EVT_RenderView");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
