#pragma once



// Package: BPCMP_CourierStationLayer

#include "Basic.hpp"

#include "BPCMP_CourierStationLayer_classes.hpp"
#include "BPCMP_CourierStationLayer_parameters.hpp"


SDK_NAMESPACE_START

// Function BPCMP_CourierStationLayer.BPCMP_CourierStationLayer_C.ExecuteUbergraph_BPCMP_CourierStationLayer
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPCMP_CourierStationLayer_C::ExecuteUbergraph_BPCMP_CourierStationLayer(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPCMP_CourierStationLayer_C", "ExecuteUbergraph_BPCMP_CourierStationLayer");

	Params::BPCMP_CourierStationLayer_C_ExecuteUbergraph_BPCMP_CourierStationLayer Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPCMP_CourierStationLayer.BPCMP_CourierStationLayer_C.EVT_VisualConstructOnce
// (Event, Public, BlueprintEvent)

void UBPCMP_CourierStationLayer_C::EVT_VisualConstructOnce()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPCMP_CourierStationLayer_C", "EVT_VisualConstructOnce");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
