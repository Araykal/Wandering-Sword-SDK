#pragma once



// Package: BPVE_Tips_SkillDesc_AA

#include "Basic.hpp"

#include "BPVE_Tips_SkillDesc_AA_classes.hpp"
#include "BPVE_Tips_SkillDesc_AA_parameters.hpp"


SDK_NAMESPACE_START

// Function BPVE_Tips_SkillDesc_AA.BPVE_Tips_SkillDesc_AA_C.ExecuteUbergraph_BPVE_Tips_SkillDesc_AA
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_Tips_SkillDesc_AA_C::ExecuteUbergraph_BPVE_Tips_SkillDesc_AA(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_Tips_SkillDesc_AA_C", "ExecuteUbergraph_BPVE_Tips_SkillDesc_AA");

	Params::BPVE_Tips_SkillDesc_AA_C_ExecuteUbergraph_BPVE_Tips_SkillDesc_AA Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_Tips_SkillDesc_AA.BPVE_Tips_SkillDesc_AA_C.EVT_RenderView
// (Event, Public, BlueprintEvent)

void UBPVE_Tips_SkillDesc_AA_C::EVT_RenderView()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_Tips_SkillDesc_AA_C", "EVT_RenderView");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
