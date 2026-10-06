#pragma once



// Package: BPVE_BattleBuffCellPopup

#include "Basic.hpp"

#include "BPVE_BattleBuffCellPopup_classes.hpp"
#include "BPVE_BattleBuffCellPopup_parameters.hpp"


SDK_NAMESPACE_START

// Function BPVE_BattleBuffCellPopup.BPVE_BattleBuffCellPopup_C.GetToolTipWidget_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UBPVE_BattleBuffCellPopup_C::GetToolTipWidget_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_BattleBuffCellPopup_C", "GetToolTipWidget_0");

	Params::BPVE_BattleBuffCellPopup_C_GetToolTipWidget_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


SDK_NAMESPACE_END
