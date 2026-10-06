#pragma once



// Package: BTD_OutFollowRange

#include "Basic.hpp"

#include "BTD_OutFollowRange_classes.hpp"
#include "BTD_OutFollowRange_parameters.hpp"


SDK_NAMESPACE_START

// Function BTD_OutFollowRange.BTD_OutFollowRange_C.PerformConditionCheckAI
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAIController*                    OwnerController_PerformConditionCheckAI                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                            ControlledPawn_PerformConditionCheckAI                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue_PerformConditionCheckAI                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBTD_OutFollowRange_C::PerformConditionCheckAI(class AAIController* OwnerController_PerformConditionCheckAI, class APawn* ControlledPawn_PerformConditionCheckAI)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTD_OutFollowRange_C", "PerformConditionCheckAI");

	Params::BTD_OutFollowRange_C_PerformConditionCheckAI Parms{};

	Parms.OwnerController_PerformConditionCheckAI = OwnerController_PerformConditionCheckAI;
	Parms.ControlledPawn_PerformConditionCheckAI = ControlledPawn_PerformConditionCheckAI;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


SDK_NAMESPACE_END
