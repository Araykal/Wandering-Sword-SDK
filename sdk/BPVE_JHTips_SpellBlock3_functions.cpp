#pragma once



// Package: BPVE_JHTips_SpellBlock3

#include "Basic.hpp"

#include "BPVE_JHTips_SpellBlock3_classes.hpp"
#include "BPVE_JHTips_SpellBlock3_parameters.hpp"


SDK_NAMESPACE_START

// Function BPVE_JHTips_SpellBlock3.BPVE_JHTips_SpellBlock3_C.HideHeader
// (Public, BlueprintCallable, BlueprintEvent)

void UBPVE_JHTips_SpellBlock3_C::HideHeader()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_JHTips_SpellBlock3_C", "HideHeader");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
