#pragma once



// Package: Quest_5051

#include "Basic.hpp"

#include "JH_structs.hpp"


SDK_NAMESPACE_START
SDK_PARAM_NAMESPACE_START

// Function Quest_5051.Quest_5051_C.ExecuteUbergraph_Quest_5051
// 0x0008 (0x0008 - 0x0000)
struct Quest_5051_C_ExecuteUbergraph_Quest_5051 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_NPCID;                                // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_Quest_5051_C_ExecuteUbergraph_Quest_5051;

// Function Quest_5051.Quest_5051_C.HandleAcceptRequested
// 0x0004 (0x0004 - 0x0000)
struct Quest_5051_C_HandleAcceptRequested final
{
public:
	int32                                         NPCId;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_Quest_5051_C_HandleAcceptRequested;

// Function Quest_5051.Quest_5051_C.CanFinish
// 0x0080 (0x0080 - 0x0000)
struct Quest_5051_C_CanFinish final
{
public:
	int32                                         InQuestId;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRequirementSetting                    K2Node_MakeStruct_RequirementSetting;              // 0x0008(0x000C)(NoDestructor, UObjectWrapper)
	struct FRequirementSetting                    K2Node_MakeStruct_RequirementSetting_1;            // 0x0014(0x000C)(NoDestructor, UObjectWrapper)
	struct FRequirementSetting                    K2Node_MakeStruct_RequirementSetting_2;            // 0x0020(0x000C)(NoDestructor, UObjectWrapper)
	struct FRequirementSetting                    K2Node_MakeStruct_RequirementSetting_3;            // 0x002C(0x000C)(NoDestructor)
	struct FRequirementSetting                    K2Node_MakeStruct_RequirementSetting_4;            // 0x0038(0x000C)(NoDestructor, UObjectWrapper)
	uint8                                         Pad_44[0x4];                                       // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UTeamInfo*                              CallFunc_GetNPCInfoById_ReturnValue;               // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRequirementSetting                    K2Node_MakeStruct_RequirementSetting_5;            // 0x0050(0x000C)(NoDestructor)
	uint8                                         Pad_5C[0x4];                                       // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FActionStateSetting                    K2Node_MakeStruct_ActionStateSetting;              // 0x0060(0x0010)(NoDestructor)
	bool                                          CallFunc_CheckRequirement_ReturnValue;             // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CheckRequirement_ReturnValue_1;           // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CheckRequirement_ReturnValue_2;           // 0x0072(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CheckRequirement_ReturnValue_3;           // 0x0073(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CheckRequirement_ReturnValue_4;           // 0x0074(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CheckRequirement_ReturnValue_5;           // 0x0075(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0076(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x0077(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_2;                  // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_3;                  // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_4;                  // 0x007A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
DUMPER7_ASSERTS_Quest_5051_C_CanFinish;

SDK_PARAM_NAMESPACE_END
SDK_NAMESPACE_END
