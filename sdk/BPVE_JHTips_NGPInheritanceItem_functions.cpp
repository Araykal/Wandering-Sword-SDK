#pragma once



// Package: BPVE_JHTips_NGPInheritanceItem

#include "Basic.hpp"

#include "BPVE_JHTips_NGPInheritanceItem_classes.hpp"
#include "BPVE_JHTips_NGPInheritanceItem_parameters.hpp"


SDK_NAMESPACE_START

// Function BPVE_JHTips_NGPInheritanceItem.BPVE_JHTips_NGPInheritanceItem_C.ExecuteUbergraph_BPVE_JHTips_NGPInheritanceItem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_JHTips_NGPInheritanceItem_C::ExecuteUbergraph_BPVE_JHTips_NGPInheritanceItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_JHTips_NGPInheritanceItem_C", "ExecuteUbergraph_BPVE_JHTips_NGPInheritanceItem");

	Params::BPVE_JHTips_NGPInheritanceItem_C_ExecuteUbergraph_BPVE_JHTips_NGPInheritanceItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_JHTips_NGPInheritanceItem.BPVE_JHTips_NGPInheritanceItem_C.EVT_RenderView
// (Event, Public, BlueprintEvent)

void UBPVE_JHTips_NGPInheritanceItem_C::EVT_RenderView()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_JHTips_NGPInheritanceItem_C", "EVT_RenderView");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
