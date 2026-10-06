#pragma once



// Package: BPVE_BattleBuffListLeft

#include "Basic.hpp"

#include "BPVE_BattleBuffListLeft_classes.hpp"
#include "BPVE_BattleBuffListLeft_parameters.hpp"


SDK_NAMESPACE_START

// Function BPVE_BattleBuffListLeft.BPVE_BattleBuffListLeft_C.ExecuteUbergraph_BPVE_BattleBuffListLeft
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_BattleBuffListLeft_C::ExecuteUbergraph_BPVE_BattleBuffListLeft(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_BattleBuffListLeft_C", "ExecuteUbergraph_BPVE_BattleBuffListLeft");

	Params::BPVE_BattleBuffListLeft_C_ExecuteUbergraph_BPVE_BattleBuffListLeft Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_BattleBuffListLeft.BPVE_BattleBuffListLeft_C.EVT_SetupHierarchy
// (Event, Public, BlueprintEvent)

void UBPVE_BattleBuffListLeft_C::EVT_SetupHierarchy()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_BattleBuffListLeft_C", "EVT_SetupHierarchy");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
