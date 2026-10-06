#pragma once



// Package: Quest_5046

#include "Basic.hpp"


SDK_NAMESPACE_START
SDK_PARAM_NAMESPACE_START

// Function Quest_5046.Quest_5046_C.ExecuteUbergraph_Quest_5046
// 0x0008 (0x0008 - 0x0000)
struct Quest_5046_C_ExecuteUbergraph_Quest_5046 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_NPCID;                                // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_Quest_5046_C_ExecuteUbergraph_Quest_5046;

// Function Quest_5046.Quest_5046_C.HandleAcceptRequested
// 0x0004 (0x0004 - 0x0000)
struct Quest_5046_C_HandleAcceptRequested final
{
public:
	int32                                         NPCId;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_Quest_5046_C_HandleAcceptRequested;

// Function Quest_5046.Quest_5046_C.CanFinish
// 0x0008 (0x0008 - 0x0000)
struct Quest_5046_C_CanFinish final
{
public:
	int32                                         InQuestId;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CheckSkillAbilityLv_ReturnValue;          // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
DUMPER7_ASSERTS_Quest_5046_C_CanFinish;

SDK_PARAM_NAMESPACE_END
SDK_NAMESPACE_END
