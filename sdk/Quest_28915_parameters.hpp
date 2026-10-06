#pragma once



// Package: Quest_28915

#include "Basic.hpp"

#include "JH_structs.hpp"
#include "MovieScene_structs.hpp"


SDK_NAMESPACE_START
SDK_PARAM_NAMESPACE_START

// Function Quest_28915.Quest_28915_C.ExecuteUbergraph_Quest_28915
// 0x00A0 (0x00A0 - 0x0000)
struct Quest_28915_C_ExecuteUbergraph_Quest_28915 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_NPCID_1;                        // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_NPCID;                          // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 NPCId)>                  K2Node_CreateDelegate_OutputDelegate;              // 0x000C(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         ___int_Variable;                                   // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0020(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x0030(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         K2Node_Event_NPCID;                                // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44[0x4];                                       // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FDlgOptionSetting>              K2Node_MakeArray_Array;                            // 0x0048(0x0010)(ConstParm, ReferenceParm)
	class UAsyncTaskOpenDlg*                      CallFunc_OpenDlg_ReturnValue;                      // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0065(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_66[0x2];                                       // 0x0066(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMovieSceneSequencePlaybackSettings    K2Node_MakeStruct_MovieSceneSequencePlaybackSettings; // 0x0068(0x0014)(NoDestructor)
	uint8                                         Pad_7C[0x4];                                       // 0x007C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAsyncTaskPlaySequence*                 CallFunc_PlaySequence_ReturnValue;                 // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0089(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EQuestStep                                    CallFunc_GetQuestStep_ReturnValue;                 // 0x008A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x008B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TDelegate<void(int32 NPCId)>                  K2Node_CreateDelegate_OutputDelegate_3;            // 0x008C(0x0010)(ZeroConstructor, NoDestructor)
	EQuestStep                                    CallFunc_GetQuestStep_ReturnValue_1;               // 0x009C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x009D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
DUMPER7_ASSERTS_Quest_28915_C_ExecuteUbergraph_Quest_28915;

// Function Quest_28915.Quest_28915_C.HandleFinishing
// 0x0004 (0x0004 - 0x0000)
struct Quest_28915_C_HandleFinishing final
{
public:
	int32                                         NPCId;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_Quest_28915_C_HandleFinishing;

// Function Quest_28915.Quest_28915_C.OnDlgClosed_DE1858E44B9A21BBB70B5A982CDA1C3A
// 0x0004 (0x0004 - 0x0000)
struct Quest_28915_C_OnDlgClosed_DE1858E44B9A21BBB70B5A982CDA1C3A final
{
public:
	int32                                         NPCId;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_Quest_28915_C_OnDlgClosed_DE1858E44B9A21BBB70B5A982CDA1C3A;

// Function Quest_28915.Quest_28915_C.OnDlgSelectedOption_DE1858E44B9A21BBB70B5A982CDA1C3A
// 0x0004 (0x0004 - 0x0000)
struct Quest_28915_C_OnDlgSelectedOption_DE1858E44B9A21BBB70B5A982CDA1C3A final
{
public:
	int32                                         NPCId;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_Quest_28915_C_OnDlgSelectedOption_DE1858E44B9A21BBB70B5A982CDA1C3A;

SDK_PARAM_NAMESPACE_END
SDK_NAMESPACE_END
