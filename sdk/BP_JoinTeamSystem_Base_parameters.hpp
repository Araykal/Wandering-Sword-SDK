#pragma once



// Package: BP_JoinTeamSystem_Base

#include "Basic.hpp"

#include "JH_structs.hpp"


SDK_NAMESPACE_START
SDK_PARAM_NAMESPACE_START

// Function BP_JoinTeamSystem_Base.BP_JoinTeamSystem_Base_C.ExecuteUbergraph_BP_JoinTeamSystem_Base
// 0x0080 (0x0080 - 0x0000)
struct BP_JoinTeamSystem_Base_C_ExecuteUbergraph_BP_JoinTeamSystem_Base final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_NPCID_1;                        // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 NPCId)>                  K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         K2Node_CustomEvent_NPCID;                          // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 NPCId)>                  K2Node_CreateDelegate_OutputDelegate_1;            // 0x001C(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         ___int_Variable;                                   // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTeamManager*                           CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJHNeoUISubsystem*                      CallFunc_GetGameInstanceSubsystem_ReturnValue_1;   // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FDlgOptionSetting>              K2Node_MakeArray_Array;                            // 0x0040(0x0010)(ConstParm, ReferenceParm)
	int32                                         K2Node_Event_NPCID_2;                              // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_NPCID_1;                              // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FDlgContentSetting>             CallFunc_GetJoinTeamDlgs_ReturnValue;              // 0x0058(0x0010)(ReferenceParm)
	class UAsyncTaskOpenDlg*                      CallFunc_OpenDlg_ReturnValue;                      // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0074(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0075(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_76[0x2];                                       // 0x0076(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Event_NPCID;                                // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CheckRequirement_ReturnValue;             // 0x007C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
DUMPER7_ASSERTS_BP_JoinTeamSystem_Base_C_ExecuteUbergraph_BP_JoinTeamSystem_Base;

// Function BP_JoinTeamSystem_Base.BP_JoinTeamSystem_Base_C.Active
// 0x0004 (0x0004 - 0x0000)
struct BP_JoinTeamSystem_Base_C_Active final
{
public:
	int32                                         NPCId;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BP_JoinTeamSystem_Base_C_Active;

// Function BP_JoinTeamSystem_Base.BP_JoinTeamSystem_Base_C.OnJoinFail
// 0x0004 (0x0004 - 0x0000)
struct BP_JoinTeamSystem_Base_C_OnJoinFail final
{
public:
	int32                                         NPCId;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BP_JoinTeamSystem_Base_C_OnJoinFail;

// Function BP_JoinTeamSystem_Base.BP_JoinTeamSystem_Base_C.OnJoinSuss
// 0x0004 (0x0004 - 0x0000)
struct BP_JoinTeamSystem_Base_C_OnJoinSuss final
{
public:
	int32                                         NPCId;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BP_JoinTeamSystem_Base_C_OnJoinSuss;

// Function BP_JoinTeamSystem_Base.BP_JoinTeamSystem_Base_C.OnDlgClosed_23ABD56C45BEAD31CF0455BF514F7FB3
// 0x0004 (0x0004 - 0x0000)
struct BP_JoinTeamSystem_Base_C_OnDlgClosed_23ABD56C45BEAD31CF0455BF514F7FB3 final
{
public:
	int32                                         NPCId;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BP_JoinTeamSystem_Base_C_OnDlgClosed_23ABD56C45BEAD31CF0455BF514F7FB3;

// Function BP_JoinTeamSystem_Base.BP_JoinTeamSystem_Base_C.OnDlgSelectedOption_23ABD56C45BEAD31CF0455BF514F7FB3
// 0x0004 (0x0004 - 0x0000)
struct BP_JoinTeamSystem_Base_C_OnDlgSelectedOption_23ABD56C45BEAD31CF0455BF514F7FB3 final
{
public:
	int32                                         NPCId;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BP_JoinTeamSystem_Base_C_OnDlgSelectedOption_23ABD56C45BEAD31CF0455BF514F7FB3;

// Function BP_JoinTeamSystem_Base.BP_JoinTeamSystem_Base_C.CheckRequirement
// 0x0008 (0x0008 - 0x0000)
struct BP_JoinTeamSystem_Base_C_CheckRequirement final
{
public:
	int32                                         NPCId;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CheckRequirement_ReturnValue;             // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
DUMPER7_ASSERTS_BP_JoinTeamSystem_Base_C_CheckRequirement;

SDK_PARAM_NAMESPACE_END
SDK_NAMESPACE_END
