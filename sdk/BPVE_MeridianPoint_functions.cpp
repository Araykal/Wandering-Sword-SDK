#pragma once



// Package: BPVE_MeridianPoint

#include "Basic.hpp"

#include "BPVE_MeridianPoint_classes.hpp"
#include "BPVE_MeridianPoint_parameters.hpp"


SDK_NAMESPACE_START

// Function BPVE_MeridianPoint.BPVE_MeridianPoint_C.UpdateNumber
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Count                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_MeridianPoint_C::UpdateNumber(int32 Count)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_MeridianPoint_C", "UpdateNumber");

	Params::BPVE_MeridianPoint_C_UpdateNumber Parms{};

	Parms.Count = Count;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_MeridianPoint.BPVE_MeridianPoint_C.GetToolTipWidget_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UBPVE_MeridianPoint_C::GetToolTipWidget_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_MeridianPoint_C", "GetToolTipWidget_0");

	Params::BPVE_MeridianPoint_C_GetToolTipWidget_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


SDK_NAMESPACE_END
