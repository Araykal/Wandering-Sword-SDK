#pragma once



// Package: BPVE_HUD_QuestStepProg

#include "Basic.hpp"

#include "BPVE_HUD_QuestStepProg_classes.hpp"
#include "BPVE_HUD_QuestStepProg_parameters.hpp"


SDK_NAMESPACE_START

// Function BPVE_HUD_QuestStepProg.BPVE_HUD_QuestStepProg_C.ExecuteUbergraph_BPVE_HUD_QuestStepProg
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_HUD_QuestStepProg_C::ExecuteUbergraph_BPVE_HUD_QuestStepProg(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_HUD_QuestStepProg_C", "ExecuteUbergraph_BPVE_HUD_QuestStepProg");

	Params::BPVE_HUD_QuestStepProg_C_ExecuteUbergraph_BPVE_HUD_QuestStepProg Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_HUD_QuestStepProg.BPVE_HUD_QuestStepProg_C.EVT_RenderView
// (Event, Public, BlueprintEvent)

void UBPVE_HUD_QuestStepProg_C::EVT_RenderView()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_HUD_QuestStepProg_C", "EVT_RenderView");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
