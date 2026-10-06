#pragma once



// Package: BPVE_JHTip_Common

#include "Basic.hpp"

#include "BPVE_JHTip_Common_classes.hpp"
#include "BPVE_JHTip_Common_parameters.hpp"


SDK_NAMESPACE_START

// Function BPVE_JHTip_Common.BPVE_JHTip_Common_C.ExecuteUbergraph_BPVE_JHTip_Common
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_JHTip_Common_C::ExecuteUbergraph_BPVE_JHTip_Common(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_JHTip_Common_C", "ExecuteUbergraph_BPVE_JHTip_Common");

	Params::BPVE_JHTip_Common_C_ExecuteUbergraph_BPVE_JHTip_Common Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_JHTip_Common.BPVE_JHTip_Common_C.EVT_SetupHierarchy
// (Event, Public, BlueprintEvent)

void UBPVE_JHTip_Common_C::EVT_SetupHierarchy()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_JHTip_Common_C", "EVT_SetupHierarchy");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPVE_JHTip_Common.BPVE_JHTip_Common_C.EVT_RenderView
// (Event, Public, BlueprintEvent)

void UBPVE_JHTip_Common_C::EVT_RenderView()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_JHTip_Common_C", "EVT_RenderView");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
