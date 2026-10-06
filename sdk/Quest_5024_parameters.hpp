#pragma once



// Package: Quest_5024

#include "Basic.hpp"


SDK_NAMESPACE_START
SDK_PARAM_NAMESPACE_START

// Function Quest_5024.Quest_5024_C.ExecuteUbergraph_Quest_5024
// 0x0018 (0x0018 - 0x0000)
struct Quest_5024_C_ExecuteUbergraph_Quest_5024 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UNPCManager*                            CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_NPCID;                                // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_Quest_5024_C_ExecuteUbergraph_Quest_5024;

// Function Quest_5024.Quest_5024_C.HandleAcceptRequested
// 0x0004 (0x0004 - 0x0000)
struct Quest_5024_C_HandleAcceptRequested final
{
public:
	int32                                         NPCId;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_Quest_5024_C_HandleAcceptRequested;

// Function Quest_5024.Quest_5024_C.CanFinish
// 0x0008 (0x0008 - 0x0000)
struct Quest_5024_C_CanFinish final
{
public:
	int32                                         InQuestId;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasEquipByNPCId_ReturnValue;              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
DUMPER7_ASSERTS_Quest_5024_C_CanFinish;

SDK_PARAM_NAMESPACE_END
SDK_NAMESPACE_END
