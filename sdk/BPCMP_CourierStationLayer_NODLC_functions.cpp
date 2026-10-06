#pragma once



// Package: BPCMP_CourierStationLayer_NODLC

#include "Basic.hpp"

#include "BPCMP_CourierStationLayer_NODLC_classes.hpp"
#include "BPCMP_CourierStationLayer_NODLC_parameters.hpp"


SDK_NAMESPACE_START

// Function BPCMP_CourierStationLayer_NODLC.BPCMP_CourierStationLayer_NODLC_C.ExecuteUbergraph_BPCMP_CourierStationLayer_NODLC
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPCMP_CourierStationLayer_NODLC_C::ExecuteUbergraph_BPCMP_CourierStationLayer_NODLC(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPCMP_CourierStationLayer_NODLC_C", "ExecuteUbergraph_BPCMP_CourierStationLayer_NODLC");

	Params::BPCMP_CourierStationLayer_NODLC_C_ExecuteUbergraph_BPCMP_CourierStationLayer_NODLC Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPCMP_CourierStationLayer_NODLC.BPCMP_CourierStationLayer_NODLC_C.EVT_VisualConstructOnce
// (Event, Public, BlueprintEvent)

void UBPCMP_CourierStationLayer_NODLC_C::EVT_VisualConstructOnce()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPCMP_CourierStationLayer_NODLC_C", "EVT_VisualConstructOnce");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
