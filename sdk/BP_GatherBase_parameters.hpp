#pragma once



// Package: BP_GatherBase

#include "Basic.hpp"

#include "JH_structs.hpp"
#include "CoreUObject_structs.hpp"


SDK_NAMESPACE_START
SDK_PARAM_NAMESPACE_START

// Function BP_GatherBase.BP_GatherBase_C.ExecuteUbergraph_BP_GatherBase
// 0x0018 (0x0018 - 0x0000)
struct BP_GatherBase_C_ExecuteUbergraph_BP_GatherBase final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bVisible;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EGatherType                                   K2Node_Event_GatherType_1;                         // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EGatherType                                   K2Node_Event_GatherType;                           // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7[0x1];                                        // 0x0007(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0008(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_bNewVisible;                          // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
DUMPER7_ASSERTS_BP_GatherBase_C_ExecuteUbergraph_BP_GatherBase;

// Function BP_GatherBase.BP_GatherBase_C.SetVisibleImp
// 0x0001 (0x0001 - 0x0000)
struct BP_GatherBase_C_SetVisibleImp final
{
public:
	bool                                          bNewVisible;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
DUMPER7_ASSERTS_BP_GatherBase_C_SetVisibleImp;

// Function BP_GatherBase.BP_GatherBase_C.HandlePostGather
// 0x0001 (0x0001 - 0x0000)
struct BP_GatherBase_C_HandlePostGather final
{
public:
	EGatherType                                   GatherType;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BP_GatherBase_C_HandlePostGather;

// Function BP_GatherBase.BP_GatherBase_C.HandleVisible
// 0x0002 (0x0002 - 0x0000)
struct BP_GatherBase_C_HandleVisible final
{
public:
	bool                                          bVisible;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	EGatherType                                   GatherType;                                        // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BP_GatherBase_C_HandleVisible;

SDK_PARAM_NAMESPACE_END
SDK_NAMESPACE_END
