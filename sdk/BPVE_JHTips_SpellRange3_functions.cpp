#pragma once



// Package: BPVE_JHTips_SpellRange3

#include "Basic.hpp"

#include "BPVE_JHTips_SpellRange3_classes.hpp"
#include "BPVE_JHTips_SpellRange3_parameters.hpp"


SDK_NAMESPACE_START

// Function BPVE_JHTips_SpellRange3.BPVE_JHTips_SpellRange3_C.ExecuteUbergraph_BPVE_JHTips_SpellRange3
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_JHTips_SpellRange3_C::ExecuteUbergraph_BPVE_JHTips_SpellRange3(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_JHTips_SpellRange3_C", "ExecuteUbergraph_BPVE_JHTips_SpellRange3");

	Params::BPVE_JHTips_SpellRange3_C_ExecuteUbergraph_BPVE_JHTips_SpellRange3 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_JHTips_SpellRange3.BPVE_JHTips_SpellRange3_C.EVT_RenderView
// (Event, Public, BlueprintEvent)

void UBPVE_JHTips_SpellRange3_C::EVT_RenderView()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_JHTips_SpellRange3_C", "EVT_RenderView");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
