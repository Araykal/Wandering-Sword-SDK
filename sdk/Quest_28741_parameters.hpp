#pragma once



// Package: Quest_28741

#include "Basic.hpp"

#include "DS_Skill_structs.hpp"
#include "JH_structs.hpp"
#include "MovieScene_structs.hpp"


SDK_NAMESPACE_START
SDK_PARAM_NAMESPACE_START

// Function Quest_28741.Quest_28741_C.ExecuteUbergraph_Quest_28741
// 0x0110 (0x0110 - 0x0000)
struct Quest_28741_C_ExecuteUbergraph_Quest_28741 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 K2Node_MakeArray_Array;                            // 0x0008(0x0010)(ReferenceParm)
	int32                                         K2Node_CustomEvent_NPCID_1;                        // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 NPCId)>                  K2Node_CreateDelegate_OutputDelegate;              // 0x001C(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         K2Node_CustomEvent_NPCID;                          // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 NPCId)>                  K2Node_CreateDelegate_OutputDelegate_1;            // 0x0030(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         ___int_Variable;                                   // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x0044(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;            // 0x0054(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         K2Node_Event_NPCID;                                // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FDlgOptionSetting>              K2Node_MakeArray_Array_1;                          // 0x0068(0x0010)(ConstParm, ReferenceParm)
	class UAsyncTaskOpenDlg*                      CallFunc_OpenDlg_ReturnValue;                      // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0084(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0085(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_86[0x2];                                       // 0x0086(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMovieSceneSequencePlaybackSettings    K2Node_MakeStruct_MovieSceneSequencePlaybackSettings; // 0x0088(0x0014)(NoDestructor)
	struct FDS_Skill                              K2Node_MakeStruct_DS_Skill;                        // 0x009C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A4[0x4];                                       // 0x00A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAsyncTaskPlaySequence*                 CallFunc_PlaySequence_ReturnValue;                 // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FDS_Skill>                      K2Node_MakeArray_Array_2;                          // 0x00B0(0x0010)(ReferenceParm)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C2[0x6];                                       // 0x00C2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FDS_Skill>                      K2Node_MakeArray_Array_3;                          // 0x00C8(0x0010)(ReferenceParm)
	TArray<int32>                                 K2Node_MakeArray_Array_4;                          // 0x00D8(0x0010)(ReferenceParm)
	struct FDS_Skill                              K2Node_MakeStruct_DS_Skill_1;                      // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TArray<struct FDS_Skill>                      K2Node_MakeArray_Array_5;                          // 0x00F0(0x0010)(ReferenceParm)
	TArray<struct FDS_Skill>                      K2Node_MakeArray_Array_6;                          // 0x0100(0x0010)(ReferenceParm)
};
DUMPER7_ASSERTS_Quest_28741_C_ExecuteUbergraph_Quest_28741;

// Function Quest_28741.Quest_28741_C.HandleFinishing
// 0x0004 (0x0004 - 0x0000)
struct Quest_28741_C_HandleFinishing final
{
public:
	int32                                         NPCId;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_Quest_28741_C_HandleFinishing;

// Function Quest_28741.Quest_28741_C.OnDlgClosed_7944D4994C978AC7E380B3B1A3FE62BC
// 0x0004 (0x0004 - 0x0000)
struct Quest_28741_C_OnDlgClosed_7944D4994C978AC7E380B3B1A3FE62BC final
{
public:
	int32                                         NPCId;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_Quest_28741_C_OnDlgClosed_7944D4994C978AC7E380B3B1A3FE62BC;

// Function Quest_28741.Quest_28741_C.OnDlgSelectedOption_7944D4994C978AC7E380B3B1A3FE62BC
// 0x0004 (0x0004 - 0x0000)
struct Quest_28741_C_OnDlgSelectedOption_7944D4994C978AC7E380B3B1A3FE62BC final
{
public:
	int32                                         NPCId;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_Quest_28741_C_OnDlgSelectedOption_7944D4994C978AC7E380B3B1A3FE62BC;

SDK_PARAM_NAMESPACE_END
SDK_NAMESPACE_END
