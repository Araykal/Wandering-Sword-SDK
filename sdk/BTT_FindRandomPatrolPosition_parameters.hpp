#pragma once



// Package: BTT_FindRandomPatrolPosition

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


SDK_NAMESPACE_START
SDK_PARAM_NAMESPACE_START

// Function BTT_FindRandomPatrolPosition.BTT_FindRandomPatrolPosition_C.ReceiveExecuteAI
// 0x0010 (0x0010 - 0x0000)
struct BTT_FindRandomPatrolPosition_C_ReceiveExecuteAI final
{
public:
	class AAIController*                          OwnerController_ReceiveExecuteAI;                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  ControlledPawn_ReceiveExecuteAI;                   // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BTT_FindRandomPatrolPosition_C_ReceiveExecuteAI;

// Function BTT_FindRandomPatrolPosition.BTT_FindRandomPatrolPosition_C.ExecuteUbergraph_BTT_FindRandomPatrolPosition
// 0x0038 (0x0038 - 0x0000)
struct BTT_FindRandomPatrolPosition_C_ExecuteUbergraph_BTT_FindRandomPatrolPosition final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AAIController*                          K2Node_Event_OwnerController;                      // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn;                       // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetBlackboardValueAsVector_ReturnValue;   // 0x0018(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetBlackboardValueAsFloat_ReturnValue;    // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetRandomReachablePointInRadius_RandomLocation; // 0x0028(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_GetRandomReachablePointInRadius_ReturnValue; // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
DUMPER7_ASSERTS_BTT_FindRandomPatrolPosition_C_ExecuteUbergraph_BTT_FindRandomPatrolPosition;

SDK_PARAM_NAMESPACE_END
SDK_NAMESPACE_END
