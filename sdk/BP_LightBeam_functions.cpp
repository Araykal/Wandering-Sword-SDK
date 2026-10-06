#pragma once



// Package: BP_LightBeam

#include "Basic.hpp"

#include "BP_LightBeam_classes.hpp"
#include "BP_LightBeam_parameters.hpp"


SDK_NAMESPACE_START

// Function BP_LightBeam.BP_LightBeam_C.SetLenght
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Lenght                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_LightBeam_C::SetLenght(float Lenght)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LightBeam_C", "SetLenght");

	Params::BP_LightBeam_C_SetLenght Parms{};

	Parms.Lenght = Lenght;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_LightBeam.BP_LightBeam_C.SetColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FLinearColor&              NewColor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_LightBeam_C::SetColor(const struct FLinearColor& NewColor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LightBeam_C", "SetColor");

	Params::BP_LightBeam_C_SetColor Parms{};

	Parms.NewColor = std::move(NewColor);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_LightBeam.BP_LightBeam_C.SetBrightness
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   NewBrightness                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_LightBeam_C::SetBrightness(float NewBrightness)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LightBeam_C", "SetBrightness");

	Params::BP_LightBeam_C_SetBrightness Parms{};

	Parms.NewBrightness = NewBrightness;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_LightBeam.BP_LightBeam_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_LightBeam_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LightBeam_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
