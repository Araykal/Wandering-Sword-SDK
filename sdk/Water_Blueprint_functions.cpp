#pragma once



// Package: Water_Blueprint

#include "Basic.hpp"

#include "Water_Blueprint_classes.hpp"
#include "Water_Blueprint_parameters.hpp"


SDK_NAMESPACE_START

// Function Water_Blueprint.Water_Blueprint_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AWater_Blueprint_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Water_Blueprint_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
