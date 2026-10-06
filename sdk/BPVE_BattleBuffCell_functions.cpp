#pragma once



// Package: BPVE_BattleBuffCell

#include "Basic.hpp"

#include "BPVE_BattleBuffCell_classes.hpp"
#include "BPVE_BattleBuffCell_parameters.hpp"


SDK_NAMESPACE_START

// Function BPVE_BattleBuffCell.BPVE_BattleBuffCell_C.ExecuteUbergraph_BPVE_BattleBuffCell
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_BattleBuffCell_C::ExecuteUbergraph_BPVE_BattleBuffCell(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_BattleBuffCell_C", "ExecuteUbergraph_BPVE_BattleBuffCell");

	Params::BPVE_BattleBuffCell_C_ExecuteUbergraph_BPVE_BattleBuffCell Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_BattleBuffCell.BPVE_BattleBuffCell_C.EVT_RenderView
// (Event, Public, BlueprintEvent)

void UBPVE_BattleBuffCell_C::EVT_RenderView()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_BattleBuffCell_C", "EVT_RenderView");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPVE_BattleBuffCell.BPVE_BattleBuffCell_C.GetToolTipWidget_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UBPVE_BattleBuffCell_C::GetToolTipWidget_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_BattleBuffCell_C", "GetToolTipWidget_0");

	Params::BPVE_BattleBuffCell_C_GetToolTipWidget_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


SDK_NAMESPACE_END
