#pragma once



// Package: BPVE_TipsBlock

#include "Basic.hpp"

#include "BPVE_TipsBlock_classes.hpp"
#include "BPVE_TipsBlock_parameters.hpp"


SDK_NAMESPACE_START

// Function BPVE_TipsBlock.BPVE_TipsBlock_C.ExecuteUbergraph_BPVE_TipsBlock
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_TipsBlock_C::ExecuteUbergraph_BPVE_TipsBlock(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_TipsBlock_C", "ExecuteUbergraph_BPVE_TipsBlock");

	Params::BPVE_TipsBlock_C_ExecuteUbergraph_BPVE_TipsBlock Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_TipsBlock.BPVE_TipsBlock_C.EVT_HideHeader
// (Event, Public, BlueprintEvent)

void UBPVE_TipsBlock_C::EVT_HideHeader()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_TipsBlock_C", "EVT_HideHeader");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
