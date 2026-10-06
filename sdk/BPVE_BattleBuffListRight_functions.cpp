#pragma once



// Package: BPVE_BattleBuffListRight

#include "Basic.hpp"

#include "BPVE_BattleBuffListRight_classes.hpp"
#include "BPVE_BattleBuffListRight_parameters.hpp"


SDK_NAMESPACE_START

// Function BPVE_BattleBuffListRight.BPVE_BattleBuffListRight_C.ExecuteUbergraph_BPVE_BattleBuffListRight
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_BattleBuffListRight_C::ExecuteUbergraph_BPVE_BattleBuffListRight(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_BattleBuffListRight_C", "ExecuteUbergraph_BPVE_BattleBuffListRight");

	Params::BPVE_BattleBuffListRight_C_ExecuteUbergraph_BPVE_BattleBuffListRight Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_BattleBuffListRight.BPVE_BattleBuffListRight_C.EVT_SetupHierarchy
// (Event, Public, BlueprintEvent)

void UBPVE_BattleBuffListRight_C::EVT_SetupHierarchy()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_BattleBuffListRight_C", "EVT_SetupHierarchy");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
