#pragma once



// Package: BPVE_JHTips_SpellInfo3

#include "Basic.hpp"

#include "BPVE_JHTips_SpellInfo3_classes.hpp"
#include "BPVE_JHTips_SpellInfo3_parameters.hpp"


SDK_NAMESPACE_START

// Function BPVE_JHTips_SpellInfo3.BPVE_JHTips_SpellInfo3_C.ExecuteUbergraph_BPVE_JHTips_SpellInfo3
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_JHTips_SpellInfo3_C::ExecuteUbergraph_BPVE_JHTips_SpellInfo3(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_JHTips_SpellInfo3_C", "ExecuteUbergraph_BPVE_JHTips_SpellInfo3");

	Params::BPVE_JHTips_SpellInfo3_C_ExecuteUbergraph_BPVE_JHTips_SpellInfo3 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_JHTips_SpellInfo3.BPVE_JHTips_SpellInfo3_C.EVT_SetupHierarchy
// (Event, Public, BlueprintEvent)

void UBPVE_JHTips_SpellInfo3_C::EVT_SetupHierarchy()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_JHTips_SpellInfo3_C", "EVT_SetupHierarchy");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
