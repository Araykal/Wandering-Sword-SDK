#pragma once



// Package: BPVE_SkillViewGenre

#include "Basic.hpp"

#include "BPVE_SkillViewGenre_classes.hpp"
#include "BPVE_SkillViewGenre_parameters.hpp"


SDK_NAMESPACE_START

// Function BPVE_SkillViewGenre.BPVE_SkillViewGenre_C.ExecuteUbergraph_BPVE_SkillViewGenre
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_SkillViewGenre_C::ExecuteUbergraph_BPVE_SkillViewGenre(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_SkillViewGenre_C", "ExecuteUbergraph_BPVE_SkillViewGenre");

	Params::BPVE_SkillViewGenre_C_ExecuteUbergraph_BPVE_SkillViewGenre Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_SkillViewGenre.BPVE_SkillViewGenre_C.EVT_SetupHierarchy
// (Event, Public, BlueprintEvent)

void UBPVE_SkillViewGenre_C::EVT_SetupHierarchy()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_SkillViewGenre_C", "EVT_SetupHierarchy");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
