#pragma once



// Package: BPVE_DialogModuleOption

#include "Basic.hpp"

#include "BPVE_DialogModuleOption_classes.hpp"
#include "BPVE_DialogModuleOption_parameters.hpp"


SDK_NAMESPACE_START

// Function BPVE_DialogModuleOption.BPVE_DialogModuleOption_C.ExecuteUbergraph_BPVE_DialogModuleOption
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_DialogModuleOption_C::ExecuteUbergraph_BPVE_DialogModuleOption(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_DialogModuleOption_C", "ExecuteUbergraph_BPVE_DialogModuleOption");

	Params::BPVE_DialogModuleOption_C_ExecuteUbergraph_BPVE_DialogModuleOption Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_DialogModuleOption.BPVE_DialogModuleOption_C.EVT_FocusDefaultOption
// (Event, Public, BlueprintEvent)

void UBPVE_DialogModuleOption_C::EVT_FocusDefaultOption()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_DialogModuleOption_C", "EVT_FocusDefaultOption");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPVE_DialogModuleOption.BPVE_DialogModuleOption_C.EVT_ShowOption
// (Event, Public, BlueprintEvent)

void UBPVE_DialogModuleOption_C::EVT_ShowOption()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_DialogModuleOption_C", "EVT_ShowOption");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPVE_DialogModuleOption.BPVE_DialogModuleOption_C.EVT_RenderView
// (Event, Public, BlueprintEvent)

void UBPVE_DialogModuleOption_C::EVT_RenderView()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_DialogModuleOption_C", "EVT_RenderView");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPVE_DialogModuleOption.BPVE_DialogModuleOption_C.EVT_SetupHierarchy
// (Event, Public, BlueprintEvent)

void UBPVE_DialogModuleOption_C::EVT_SetupHierarchy()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_DialogModuleOption_C", "EVT_SetupHierarchy");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
