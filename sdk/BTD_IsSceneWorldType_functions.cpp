#pragma once



// Package: BTD_IsSceneWorldType

#include "Basic.hpp"

#include "BTD_IsSceneWorldType_classes.hpp"
#include "BTD_IsSceneWorldType_parameters.hpp"


SDK_NAMESPACE_START

// Function BTD_IsSceneWorldType.BTD_IsSceneWorldType_C.PerformConditionCheckAI
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAIController*                    OwnerController_PerformConditionCheckAI                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                            ControlledPawn_PerformConditionCheckAI                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue_PerformConditionCheckAI                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBTD_IsSceneWorldType_C::PerformConditionCheckAI(class AAIController* OwnerController_PerformConditionCheckAI, class APawn* ControlledPawn_PerformConditionCheckAI)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTD_IsSceneWorldType_C", "PerformConditionCheckAI");

	Params::BTD_IsSceneWorldType_C_PerformConditionCheckAI Parms{};

	Parms.OwnerController_PerformConditionCheckAI = OwnerController_PerformConditionCheckAI;
	Parms.ControlledPawn_PerformConditionCheckAI = ControlledPawn_PerformConditionCheckAI;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


SDK_NAMESPACE_END
