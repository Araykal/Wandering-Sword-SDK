#pragma once



// Package: WBP_LevelName

#include "Basic.hpp"

#include "WBP_LevelName_classes.hpp"
#include "WBP_LevelName_parameters.hpp"


SDK_NAMESPACE_START

// Function WBP_LevelName.WBP_LevelName_C.SetName
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UWBP_LevelName_C::SetName()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_LevelName_C", "SetName");

	Params::WBP_LevelName_C_SetName Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


SDK_NAMESPACE_END
