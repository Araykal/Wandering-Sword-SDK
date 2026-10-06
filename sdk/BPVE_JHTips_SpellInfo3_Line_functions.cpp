#pragma once



// Package: BPVE_JHTips_SpellInfo3_Line

#include "Basic.hpp"

#include "BPVE_JHTips_SpellInfo3_Line_classes.hpp"
#include "BPVE_JHTips_SpellInfo3_Line_parameters.hpp"


SDK_NAMESPACE_START

// Function BPVE_JHTips_SpellInfo3_Line.BPVE_JHTips_SpellInfo3_Line_C.ExecuteUbergraph_BPVE_JHTips_SpellInfo3_Line
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_JHTips_SpellInfo3_Line_C::ExecuteUbergraph_BPVE_JHTips_SpellInfo3_Line(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_JHTips_SpellInfo3_Line_C", "ExecuteUbergraph_BPVE_JHTips_SpellInfo3_Line");

	Params::BPVE_JHTips_SpellInfo3_Line_C_ExecuteUbergraph_BPVE_JHTips_SpellInfo3_Line Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_JHTips_SpellInfo3_Line.BPVE_JHTips_SpellInfo3_Line_C.EVT_RenderView
// (Event, Public, BlueprintEvent)

void UBPVE_JHTips_SpellInfo3_Line_C::EVT_RenderView()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_JHTips_SpellInfo3_Line_C", "EVT_RenderView");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
