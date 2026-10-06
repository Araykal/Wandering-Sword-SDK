#pragma once



// Package: BPVE_JHTips_Spell3_ForItem

#include "Basic.hpp"

#include "BPVE_JHTips_Spell3_ForItem_classes.hpp"
#include "BPVE_JHTips_Spell3_ForItem_parameters.hpp"


SDK_NAMESPACE_START

// Function BPVE_JHTips_Spell3_ForItem.BPVE_JHTips_Spell3_ForItem_C.ExecuteUbergraph_BPVE_JHTips_Spell3_ForItem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_JHTips_Spell3_ForItem_C::ExecuteUbergraph_BPVE_JHTips_Spell3_ForItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_JHTips_Spell3_ForItem_C", "ExecuteUbergraph_BPVE_JHTips_Spell3_ForItem");

	Params::BPVE_JHTips_Spell3_ForItem_C_ExecuteUbergraph_BPVE_JHTips_Spell3_ForItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_JHTips_Spell3_ForItem.BPVE_JHTips_Spell3_ForItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPVE_JHTips_Spell3_ForItem_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_JHTips_Spell3_ForItem_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPVE_JHTips_Spell3_ForItem.BPVE_JHTips_Spell3_ForItem_C.EVT_SetupHierarchy
// (Event, Public, BlueprintEvent)

void UBPVE_JHTips_Spell3_ForItem_C::EVT_SetupHierarchy()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_JHTips_Spell3_ForItem_C", "EVT_SetupHierarchy");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPVE_JHTips_Spell3_ForItem.BPVE_JHTips_Spell3_ForItem_C.EVT_RenderView
// (Event, Public, BlueprintEvent)

void UBPVE_JHTips_Spell3_ForItem_C::EVT_RenderView()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_JHTips_Spell3_ForItem_C", "EVT_RenderView");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
