#pragma once



// Package: BPVE_MapName

#include "Basic.hpp"

#include "BPVE_MapName_classes.hpp"
#include "BPVE_MapName_parameters.hpp"


SDK_NAMESPACE_START

// Function BPVE_MapName.BPVE_MapName_C.ExecuteUbergraph_BPVE_MapName
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_MapName_C::ExecuteUbergraph_BPVE_MapName(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_MapName_C", "ExecuteUbergraph_BPVE_MapName");

	Params::BPVE_MapName_C_ExecuteUbergraph_BPVE_MapName Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_MapName.BPVE_MapName_C.EVT_HideName
// (Event, Protected, BlueprintEvent)

void UBPVE_MapName_C::EVT_HideName()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_MapName_C", "EVT_HideName");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPVE_MapName.BPVE_MapName_C.EVT_ShowMapName
// (Event, Protected, BlueprintEvent)

void UBPVE_MapName_C::EVT_ShowMapName()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_MapName_C", "EVT_ShowMapName");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPVE_MapName.BPVE_MapName_C.SequenceEvent_0
// (BlueprintCallable, BlueprintEvent)

void UBPVE_MapName_C::SequenceEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_MapName_C", "SequenceEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPVE_MapName.BPVE_MapName_C.SequenceEvent__ENTRYPOINTBPVE_MapName_0
// (Public, BlueprintCallable, BlueprintEvent)

void UBPVE_MapName_C::SequenceEvent__ENTRYPOINTBPVE_MapName_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_MapName_C", "SequenceEvent__ENTRYPOINTBPVE_MapName_0");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
