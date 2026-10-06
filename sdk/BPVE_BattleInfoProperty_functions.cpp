#pragma once



// Package: BPVE_BattleInfoProperty

#include "Basic.hpp"

#include "BPVE_BattleInfoProperty_classes.hpp"
#include "BPVE_BattleInfoProperty_parameters.hpp"


SDK_NAMESPACE_START

// Function BPVE_BattleInfoProperty.BPVE_BattleInfoProperty_C.GetToolTipWidget_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UBPVE_BattleInfoProperty_C::GetToolTipWidget_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_BattleInfoProperty_C", "GetToolTipWidget_0");

	Params::BPVE_BattleInfoProperty_C_GetToolTipWidget_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


SDK_NAMESPACE_END
