#pragma once



// Package: BPVE_DLCMark

#include "Basic.hpp"

#include "BPVE_DLCMark_classes.hpp"
#include "BPVE_DLCMark_parameters.hpp"


SDK_NAMESPACE_START

// Function BPVE_DLCMark.BPVE_DLCMark_C.UpdateActiveStatus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsActive                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPVE_DLCMark_C::UpdateActiveStatus(bool IsActive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_DLCMark_C", "UpdateActiveStatus");

	Params::BPVE_DLCMark_C_UpdateActiveStatus Parms{};

	Parms.IsActive = IsActive;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
