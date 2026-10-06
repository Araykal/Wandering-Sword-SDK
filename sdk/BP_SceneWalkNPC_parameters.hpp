#pragma once



// Package: BP_SceneWalkNPC

#include "Basic.hpp"


SDK_NAMESPACE_START
SDK_PARAM_NAMESPACE_START

// Function BP_SceneWalkNPC.BP_SceneWalkNPC_C.ExecuteUbergraph_BP_SceneWalkNPC
// 0x0008 (0x0008 - 0x0000)
struct BP_SceneWalkNPC_C_ExecuteUbergraph_BP_SceneWalkNPC final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BP_SceneWalkNPC_C_ExecuteUbergraph_BP_SceneWalkNPC;

// Function BP_SceneWalkNPC.BP_SceneWalkNPC_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_SceneWalkNPC_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BP_SceneWalkNPC_C_ReceiveTick;

SDK_PARAM_NAMESPACE_END
SDK_NAMESPACE_END
