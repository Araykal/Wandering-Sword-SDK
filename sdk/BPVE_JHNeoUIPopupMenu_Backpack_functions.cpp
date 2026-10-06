#pragma once



// Package: BPVE_JHNeoUIPopupMenu_Backpack

#include "Basic.hpp"

#include "BPVE_JHNeoUIPopupMenu_Backpack_classes.hpp"
#include "BPVE_JHNeoUIPopupMenu_Backpack_parameters.hpp"


SDK_NAMESPACE_START

// Function BPVE_JHNeoUIPopupMenu_Backpack.BPVE_JHNeoUIPopupMenu_Backpack_C.ExecuteUbergraph_BPVE_JHNeoUIPopupMenu_Backpack
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_JHNeoUIPopupMenu_Backpack_C::ExecuteUbergraph_BPVE_JHNeoUIPopupMenu_Backpack(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_JHNeoUIPopupMenu_Backpack_C", "ExecuteUbergraph_BPVE_JHNeoUIPopupMenu_Backpack");

	Params::BPVE_JHNeoUIPopupMenu_Backpack_C_ExecuteUbergraph_BPVE_JHNeoUIPopupMenu_Backpack Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_JHNeoUIPopupMenu_Backpack.BPVE_JHNeoUIPopupMenu_Backpack_C.EVT_SetupHierarchy
// (Event, Public, BlueprintEvent)

void UBPVE_JHNeoUIPopupMenu_Backpack_C::EVT_SetupHierarchy()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_JHNeoUIPopupMenu_Backpack_C", "EVT_SetupHierarchy");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
