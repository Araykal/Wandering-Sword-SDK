#pragma once



// Package: BP_Laser

#include "Basic.hpp"

#include "BP_Laser_classes.hpp"
#include "BP_Laser_parameters.hpp"


SDK_NAMESPACE_START

// Function BP_Laser.BP_Laser_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Laser_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Laser_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Laser.BP_Laser_C.SetEnds
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FVector&                   Begin                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FVector&                   End                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Laser_C::SetEnds(const struct FVector& Begin, const struct FVector& End)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Laser_C", "SetEnds");

	Params::BP_Laser_C_SetEnds Parms{};

	Parms.Begin = std::move(Begin);
	Parms.End = std::move(End);

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
