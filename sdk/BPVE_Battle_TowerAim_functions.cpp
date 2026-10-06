#pragma once



// Package: BPVE_Battle_TowerAim

#include "Basic.hpp"

#include "BPVE_Battle_TowerAim_classes.hpp"
#include "BPVE_Battle_TowerAim_parameters.hpp"


SDK_NAMESPACE_START

// Function BPVE_Battle_TowerAim.BPVE_Battle_TowerAim_C.ExecuteUbergraph_BPVE_Battle_TowerAim
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_Battle_TowerAim_C::ExecuteUbergraph_BPVE_Battle_TowerAim(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_Battle_TowerAim_C", "ExecuteUbergraph_BPVE_Battle_TowerAim");

	Params::BPVE_Battle_TowerAim_C_ExecuteUbergraph_BPVE_Battle_TowerAim Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_Battle_TowerAim.BPVE_Battle_TowerAim_C.EVT_RenderView
// (Event, Public, BlueprintEvent)

void UBPVE_Battle_TowerAim_C::EVT_RenderView()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_Battle_TowerAim_C", "EVT_RenderView");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPVE_Battle_TowerAim.BPVE_Battle_TowerAim_C.UpdateFlagStatus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    successful                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPVE_Battle_TowerAim_C::UpdateFlagStatus(bool successful)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_Battle_TowerAim_C", "UpdateFlagStatus");

	Params::BPVE_Battle_TowerAim_C_UpdateFlagStatus Parms{};

	Parms.successful = successful;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_Battle_TowerAim.BPVE_Battle_TowerAim_C.ResetFlagStatus
// (Public, BlueprintCallable, BlueprintEvent)

void UBPVE_Battle_TowerAim_C::ResetFlagStatus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_Battle_TowerAim_C", "ResetFlagStatus");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
