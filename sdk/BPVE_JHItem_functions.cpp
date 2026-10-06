#pragma once



// Package: BPVE_JHItem

#include "Basic.hpp"

#include "BPVE_JHItem_classes.hpp"
#include "BPVE_JHItem_parameters.hpp"


SDK_NAMESPACE_START

// Function BPVE_JHItem.BPVE_JHItem_C.ExecuteUbergraph_BPVE_JHItem
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_JHItem_C::ExecuteUbergraph_BPVE_JHItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_JHItem_C", "ExecuteUbergraph_BPVE_JHItem");

	Params::BPVE_JHItem_C_ExecuteUbergraph_BPVE_JHItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_JHItem.BPVE_JHItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPVE_JHItem_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_JHItem_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
