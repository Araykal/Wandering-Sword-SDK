#pragma once



// Package: BPVE_HUD_QuestStep

#include "Basic.hpp"

#include "BPVE_HUD_QuestStep_classes.hpp"
#include "BPVE_HUD_QuestStep_parameters.hpp"


SDK_NAMESPACE_START

// Function BPVE_HUD_QuestStep.BPVE_HUD_QuestStep_C.ExecuteUbergraph_BPVE_HUD_QuestStep
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_HUD_QuestStep_C::ExecuteUbergraph_BPVE_HUD_QuestStep(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_HUD_QuestStep_C", "ExecuteUbergraph_BPVE_HUD_QuestStep");

	Params::BPVE_HUD_QuestStep_C_ExecuteUbergraph_BPVE_HUD_QuestStep Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_HUD_QuestStep.BPVE_HUD_QuestStep_C.EVT_RenderView
// (Event, Public, BlueprintEvent)

void UBPVE_HUD_QuestStep_C::EVT_RenderView()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_HUD_QuestStep_C", "EVT_RenderView");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
