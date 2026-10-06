#pragma once



// Package: BP_FogSheet

#include "Basic.hpp"

#include "BP_FogSheet_classes.hpp"
#include "BP_FogSheet_parameters.hpp"


SDK_NAMESPACE_START

// Function BP_FogSheet.BP_FogSheet_C.SetBrightness
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   NewBrightness                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FogSheet_C::SetBrightness(float NewBrightness)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FogSheet_C", "SetBrightness");

	Params::BP_FogSheet_C_SetBrightness Parms{};

	Parms.NewBrightness = NewBrightness;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FogSheet.BP_FogSheet_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_FogSheet_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FogSheet_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
