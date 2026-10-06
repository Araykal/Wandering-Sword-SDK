#pragma once



// Package: Quest_11873

#include "Basic.hpp"

#include "JH_structs.hpp"
#include "DS_Skill_structs.hpp"
#include "MovieScene_structs.hpp"


SDK_NAMESPACE_START
SDK_PARAM_NAMESPACE_START

// Function Quest_11873.Quest_11873_C.ExecuteUbergraph_Quest_11873
// 0x00D0 (0x00D0 - 0x0000)
struct Quest_11873_C_ExecuteUbergraph_Quest_11873 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 NPCId)>                  K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         K2Node_CustomEvent_NPCID_1;                        // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_NPCID;                          // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 NPCId)>                  K2Node_CreateDelegate_OutputDelegate_1;            // 0x001C(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         ___int_Variable;                                   // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x0030(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;            // 0x0040(0x0010)(ZeroConstructor, NoDestructor)
	TArray<struct FDS_Skill>                      K2Node_MakeArray_Array;                            // 0x0050(0x0010)(ReferenceParm)
	TArray<struct FDS_Skill>                      K2Node_MakeArray_Array_1;                          // 0x0060(0x0010)(ReferenceParm)
	TArray<int32>                                 K2Node_MakeArray_Array_2;                          // 0x0070(0x0010)(ReferenceParm)
	int32                                         K2Node_Event_NPCID;                                // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_84[0x4];                                       // 0x0084(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FDlgOptionSetting>              K2Node_MakeArray_Array_3;                          // 0x0088(0x0010)(ConstParm, ReferenceParm)
	struct FMovieSceneSequencePlaybackSettings    K2Node_MakeStruct_MovieSceneSequencePlaybackSettings; // 0x0098(0x0014)(NoDestructor)
	uint8                                         Pad_AC[0x4];                                       // 0x00AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAsyncTaskOpenDlg*                      CallFunc_OpenDlg_ReturnValue;                      // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x00BC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00BD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_BE[0x2];                                       // 0x00BE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UAsyncTaskPlaySequence*                 CallFunc_PlaySequence_ReturnValue;                 // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
DUMPER7_ASSERTS_Quest_11873_C_ExecuteUbergraph_Quest_11873;

// Function Quest_11873.Quest_11873_C.HandleFinishing
// 0x0004 (0x0004 - 0x0000)
struct Quest_11873_C_HandleFinishing final
{
public:
	int32                                         NPCId;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_Quest_11873_C_HandleFinishing;

// Function Quest_11873.Quest_11873_C.OnDlgClosed_1CFA122640E0D221DB4F359186D09E23
// 0x0004 (0x0004 - 0x0000)
struct Quest_11873_C_OnDlgClosed_1CFA122640E0D221DB4F359186D09E23 final
{
public:
	int32                                         NPCId;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_Quest_11873_C_OnDlgClosed_1CFA122640E0D221DB4F359186D09E23;

// Function Quest_11873.Quest_11873_C.OnDlgSelectedOption_1CFA122640E0D221DB4F359186D09E23
// 0x0004 (0x0004 - 0x0000)
struct Quest_11873_C_OnDlgSelectedOption_1CFA122640E0D221DB4F359186D09E23 final
{
public:
	int32                                         NPCId;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_Quest_11873_C_OnDlgSelectedOption_1CFA122640E0D221DB4F359186D09E23;

SDK_PARAM_NAMESPACE_END
SDK_NAMESPACE_END
