#pragma once



// Package: BTT_FindRandomPatrolPosition

#include "Basic.hpp"

#include "BTT_FindRandomPatrolPosition_classes.hpp"
#include "BTT_FindRandomPatrolPosition_parameters.hpp"


SDK_NAMESPACE_START

// Function BTT_FindRandomPatrolPosition.BTT_FindRandomPatrolPosition_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*                    OwnerController_ReceiveExecuteAI                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                            ControlledPawn_ReceiveExecuteAI                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTT_FindRandomPatrolPosition_C::ReceiveExecuteAI(class AAIController* OwnerController_ReceiveExecuteAI, class APawn* ControlledPawn_ReceiveExecuteAI)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTT_FindRandomPatrolPosition_C", "ReceiveExecuteAI");

	Params::BTT_FindRandomPatrolPosition_C_ReceiveExecuteAI Parms{};

	Parms.OwnerController_ReceiveExecuteAI = OwnerController_ReceiveExecuteAI;
	Parms.ControlledPawn_ReceiveExecuteAI = ControlledPawn_ReceiveExecuteAI;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BTT_FindRandomPatrolPosition.BTT_FindRandomPatrolPosition_C.ExecuteUbergraph_BTT_FindRandomPatrolPosition
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTT_FindRandomPatrolPosition_C::ExecuteUbergraph_BTT_FindRandomPatrolPosition(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTT_FindRandomPatrolPosition_C", "ExecuteUbergraph_BTT_FindRandomPatrolPosition");

	Params::BTT_FindRandomPatrolPosition_C_ExecuteUbergraph_BTT_FindRandomPatrolPosition Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
