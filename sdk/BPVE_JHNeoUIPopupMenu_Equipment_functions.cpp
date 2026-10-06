#pragma once



// Package: BPVE_JHNeoUIPopupMenu_Equipment

#include "Basic.hpp"

#include "BPVE_JHNeoUIPopupMenu_Equipment_classes.hpp"
#include "BPVE_JHNeoUIPopupMenu_Equipment_parameters.hpp"


SDK_NAMESPACE_START

// Function BPVE_JHNeoUIPopupMenu_Equipment.BPVE_JHNeoUIPopupMenu_Equipment_C.ExecuteUbergraph_BPVE_JHNeoUIPopupMenu_Equipment
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_JHNeoUIPopupMenu_Equipment_C::ExecuteUbergraph_BPVE_JHNeoUIPopupMenu_Equipment(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_JHNeoUIPopupMenu_Equipment_C", "ExecuteUbergraph_BPVE_JHNeoUIPopupMenu_Equipment");

	Params::BPVE_JHNeoUIPopupMenu_Equipment_C_ExecuteUbergraph_BPVE_JHNeoUIPopupMenu_Equipment Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_JHNeoUIPopupMenu_Equipment.BPVE_JHNeoUIPopupMenu_Equipment_C.EVT_SetupHierarchy
// (Event, Public, BlueprintEvent)

void UBPVE_JHNeoUIPopupMenu_Equipment_C::EVT_SetupHierarchy()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_JHNeoUIPopupMenu_Equipment_C", "EVT_SetupHierarchy");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
