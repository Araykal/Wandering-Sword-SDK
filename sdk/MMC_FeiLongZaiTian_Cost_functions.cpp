#pragma once



// Package: MMC_FeiLongZaiTian_Cost

#include "Basic.hpp"

#include "MMC_FeiLongZaiTian_Cost_classes.hpp"
#include "MMC_FeiLongZaiTian_Cost_parameters.hpp"


SDK_NAMESPACE_START

// Function MMC_FeiLongZaiTian_Cost.MMC_FeiLongZaiTian_Cost_C.CalculateBaseMagnitude
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// const struct FGameplayEffectSpec&       Spec                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UMMC_FeiLongZaiTian_Cost_C::CalculateBaseMagnitude(const struct FGameplayEffectSpec& Spec) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MMC_FeiLongZaiTian_Cost_C", "CalculateBaseMagnitude");

	Params::MMC_FeiLongZaiTian_Cost_C_CalculateBaseMagnitude Parms{};

	Parms.Spec = std::move(Spec);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


SDK_NAMESPACE_END
