#pragma once



// Package: BPVE_MeridianPropertyChangeBlock

#include "Basic.hpp"

#include "BPVE_MeridianPropertyChangeBlock_classes.hpp"
#include "BPVE_MeridianPropertyChangeBlock_parameters.hpp"


SDK_NAMESPACE_START

// Function BPVE_MeridianPropertyChangeBlock.BPVE_MeridianPropertyChangeBlock_C.ExecuteUbergraph_BPVE_MeridianPropertyChangeBlock
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_MeridianPropertyChangeBlock_C::ExecuteUbergraph_BPVE_MeridianPropertyChangeBlock(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_MeridianPropertyChangeBlock_C", "ExecuteUbergraph_BPVE_MeridianPropertyChangeBlock");

	Params::BPVE_MeridianPropertyChangeBlock_C_ExecuteUbergraph_BPVE_MeridianPropertyChangeBlock Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_MeridianPropertyChangeBlock.BPVE_MeridianPropertyChangeBlock_C.EVT_RenderView
// (Event, Public, BlueprintEvent)

void UBPVE_MeridianPropertyChangeBlock_C::EVT_RenderView()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_MeridianPropertyChangeBlock_C", "EVT_RenderView");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPVE_MeridianPropertyChangeBlock.BPVE_MeridianPropertyChangeBlock_C.EVT_SetupHierarchy
// (Event, Public, BlueprintEvent)

void UBPVE_MeridianPropertyChangeBlock_C::EVT_SetupHierarchy()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_MeridianPropertyChangeBlock_C", "EVT_SetupHierarchy");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
