#pragma once



// Package: BPI_SetState

#include "Basic.hpp"

#include "BPI_SetState_classes.hpp"
#include "BPI_SetState_parameters.hpp"


SDK_NAMESPACE_START

// Function BPI_SetState.BPI_SetState_C.ToggleState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bOn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_SetState_C::ToggleState(bool bOn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("BPI_SetState_C", "ToggleState");

	Params::BPI_SetState_C_ToggleState Parms{};

	Parms.bOn = bOn;

	AsUObject()->ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
