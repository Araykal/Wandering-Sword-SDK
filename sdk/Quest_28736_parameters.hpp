#pragma once



// Package: Quest_28736

#include "Basic.hpp"

#include "JH_structs.hpp"
#include "DS_Skill_structs.hpp"
#include "MovieScene_structs.hpp"


SDK_NAMESPACE_START
SDK_PARAM_NAMESPACE_START

// Function Quest_28736.Quest_28736_C.ExecuteUbergraph_Quest_28736
// 0x0150 (0x0150 - 0x0000)
struct Quest_28736_C_ExecuteUbergraph_Quest_28736 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDS_Skill                              K2Node_MakeStruct_DS_Skill;                        // 0x0004(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_NPCID_1;                        // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_NPCID;                          // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 NPCId)>                  K2Node_CreateDelegate_OutputDelegate;              // 0x0014(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         ___int_Variable;                                   // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0028(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x0038(0x0010)(ZeroConstructor, NoDestructor)
	class UJHNeoUISubsystem*                      CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_NPCID;                                // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54[0x4];                                       // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UGlobalMessageModuleVM*                 CallFunc_Debug_GetGlobalMsgModule_ReturnValue;     // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FDlgOptionSetting>              K2Node_MakeArray_Array;                            // 0x0060(0x0010)(ConstParm, ReferenceParm)
	class UAsyncTaskOpenDlg*                      CallFunc_OpenDlg_ReturnValue;                      // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x007C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x007D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7E[0x2];                                       // 0x007E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMovieSceneSequencePlaybackSettings    K2Node_MakeStruct_MovieSceneSequencePlaybackSettings; // 0x0080(0x0014)(NoDestructor)
	uint8                                         Pad_94[0x4];                                       // 0x0094(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAsyncTaskPlaySequence*                 CallFunc_PlaySequence_ReturnValue;                 // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 NPCId)>                  K2Node_CreateDelegate_OutputDelegate_3;            // 0x00A0(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x00B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_B2[0x2];                                       // 0x00B2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDS_Skill                              K2Node_MakeStruct_DS_Skill_1;                      // 0x00B4(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_BC[0x4];                                       // 0x00BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FDS_Skill>                      K2Node_MakeArray_Array_1;                          // 0x00C0(0x0010)(ReferenceParm)
	TArray<int32>                                 K2Node_MakeArray_Array_2;                          // 0x00D0(0x0010)(ReferenceParm)
	struct FDS_Skill                              K2Node_MakeStruct_DS_Skill_2;                      // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDS_Skill                              K2Node_MakeStruct_DS_Skill_3;                      // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FDS_Skill                              K2Node_MakeStruct_DS_Skill_4;                      // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDS_Skill                              K2Node_MakeStruct_DS_Skill_5;                      // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FDS_Skill>                      K2Node_MakeArray_Array_3;                          // 0x0100(0x0010)(ReferenceParm)
	TArray<struct FDS_Skill>                      K2Node_MakeArray_Array_4;                          // 0x0110(0x0010)(ReferenceParm)
	TArray<int32>                                 K2Node_MakeArray_Array_5;                          // 0x0120(0x0010)(ReferenceParm)
	struct FDS_Skill                              K2Node_MakeStruct_DS_Skill_6;                      // 0x0130(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDS_Skill                              K2Node_MakeStruct_DS_Skill_7;                      // 0x0138(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FDS_Skill>                      K2Node_MakeArray_Array_6;                          // 0x0140(0x0010)(ReferenceParm)
};
DUMPER7_ASSERTS_Quest_28736_C_ExecuteUbergraph_Quest_28736;

// Function Quest_28736.Quest_28736_C.HandleFinishing
// 0x0004 (0x0004 - 0x0000)
struct Quest_28736_C_HandleFinishing final
{
public:
	int32                                         NPCId;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_Quest_28736_C_HandleFinishing;

// Function Quest_28736.Quest_28736_C.OnDlgClosed_B9ABBE8E48CA74CD0473DAB8DD48738E
// 0x0004 (0x0004 - 0x0000)
struct Quest_28736_C_OnDlgClosed_B9ABBE8E48CA74CD0473DAB8DD48738E final
{
public:
	int32                                         NPCId;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_Quest_28736_C_OnDlgClosed_B9ABBE8E48CA74CD0473DAB8DD48738E;

// Function Quest_28736.Quest_28736_C.OnDlgSelectedOption_B9ABBE8E48CA74CD0473DAB8DD48738E
// 0x0004 (0x0004 - 0x0000)
struct Quest_28736_C_OnDlgSelectedOption_B9ABBE8E48CA74CD0473DAB8DD48738E final
{
public:
	int32                                         NPCId;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_Quest_28736_C_OnDlgSelectedOption_B9ABBE8E48CA74CD0473DAB8DD48738E;

SDK_PARAM_NAMESPACE_END
SDK_NAMESPACE_END
