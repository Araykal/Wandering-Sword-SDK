#pragma once



// Package: BPVE_HUD_Portrait

#include "Basic.hpp"

#include "BPVE_HUD_Portrait_classes.hpp"
#include "BPVE_HUD_Portrait_parameters.hpp"


SDK_NAMESPACE_START

// Function BPVE_HUD_Portrait.BPVE_HUD_Portrait_C.ExecuteUbergraph_BPVE_HUD_Portrait
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_HUD_Portrait_C::ExecuteUbergraph_BPVE_HUD_Portrait(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_HUD_Portrait_C", "ExecuteUbergraph_BPVE_HUD_Portrait");

	Params::BPVE_HUD_Portrait_C_ExecuteUbergraph_BPVE_HUD_Portrait Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_HUD_Portrait.BPVE_HUD_Portrait_C.EVT_SetupHierarchy
// (Event, Public, BlueprintEvent)

void UBPVE_HUD_Portrait_C::EVT_SetupHierarchy()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_HUD_Portrait_C", "EVT_SetupHierarchy");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPVE_HUD_Portrait.BPVE_HUD_Portrait_C.EVT_SyncWithGlobalInputMode
// (Event, Public, BlueprintEvent)

void UBPVE_HUD_Portrait_C::EVT_SyncWithGlobalInputMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_HUD_Portrait_C", "EVT_SyncWithGlobalInputMode");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPVE_HUD_Portrait.BPVE_HUD_Portrait_C.EVT_RenderView
// (Event, Public, BlueprintEvent)

void UBPVE_HUD_Portrait_C::EVT_RenderView()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_HUD_Portrait_C", "EVT_RenderView");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPVE_HUD_Portrait.BPVE_HUD_Portrait_C.HideCT_Portrait
// (Public, BlueprintCallable, BlueprintEvent)

void UBPVE_HUD_Portrait_C::HideCT_Portrait()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_HUD_Portrait_C", "HideCT_Portrait");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPVE_HUD_Portrait.BPVE_HUD_Portrait_C.ShowCT_Portrait
// (Public, BlueprintCallable, BlueprintEvent)

void UBPVE_HUD_Portrait_C::ShowCT_Portrait()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_HUD_Portrait_C", "ShowCT_Portrait");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
