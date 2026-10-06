#pragma once



// Package: BPVE_QuestStepProg

#include "Basic.hpp"

#include "BPVE_QuestStepProg_classes.hpp"
#include "BPVE_QuestStepProg_parameters.hpp"


SDK_NAMESPACE_START

// Function BPVE_QuestStepProg.BPVE_QuestStepProg_C.ExecuteUbergraph_BPVE_QuestStepProg
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_QuestStepProg_C::ExecuteUbergraph_BPVE_QuestStepProg(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_QuestStepProg_C", "ExecuteUbergraph_BPVE_QuestStepProg");

	Params::BPVE_QuestStepProg_C_ExecuteUbergraph_BPVE_QuestStepProg Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_QuestStepProg.BPVE_QuestStepProg_C.EVT_RenderView
// (Event, Public, BlueprintEvent)

void UBPVE_QuestStepProg_C::EVT_RenderView()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_QuestStepProg_C", "EVT_RenderView");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
