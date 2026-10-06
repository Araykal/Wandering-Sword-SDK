#pragma once



// Package: BPVE_CBLine

#include "Basic.hpp"

#include "BPVE_CBLine_classes.hpp"
#include "BPVE_CBLine_parameters.hpp"


SDK_NAMESPACE_START

// Function BPVE_CBLine.BPVE_CBLine_C.ExecuteUbergraph_BPVE_CBLine
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_CBLine_C::ExecuteUbergraph_BPVE_CBLine(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_CBLine_C", "ExecuteUbergraph_BPVE_CBLine");

	Params::BPVE_CBLine_C_ExecuteUbergraph_BPVE_CBLine Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_CBLine.BPVE_CBLine_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPVE_CBLine_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_CBLine_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
