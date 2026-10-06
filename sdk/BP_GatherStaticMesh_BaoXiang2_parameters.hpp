#pragma once



// Package: BP_GatherStaticMesh_BaoXiang2

#include "Basic.hpp"

#include "JH_structs.hpp"


SDK_NAMESPACE_START
SDK_PARAM_NAMESPACE_START

// Function BP_GatherStaticMesh_BaoXiang2.BP_GatherStaticMesh_BaoXiang2_C.ExecuteUbergraph_BP_GatherStaticMesh_BaoXiang2
// 0x0008 (0x0008 - 0x0000)
struct BP_GatherStaticMesh_BaoXiang2_C_ExecuteUbergraph_BP_GatherStaticMesh_BaoXiang2 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EGatherType                                   K2Node_Event_GatherType;                           // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EQuestStep                                    CallFunc_GetQuestStep_ReturnValue;                 // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
DUMPER7_ASSERTS_BP_GatherStaticMesh_BaoXiang2_C_ExecuteUbergraph_BP_GatherStaticMesh_BaoXiang2;

// Function BP_GatherStaticMesh_BaoXiang2.BP_GatherStaticMesh_BaoXiang2_C.HandlePostGather
// 0x0001 (0x0001 - 0x0000)
struct BP_GatherStaticMesh_BaoXiang2_C_HandlePostGather final
{
public:
	EGatherType                                   GatherType;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BP_GatherStaticMesh_BaoXiang2_C_HandlePostGather;

SDK_PARAM_NAMESPACE_END
SDK_NAMESPACE_END
