#pragma once



// Package: Quest_5621

#include "Basic.hpp"

#include "JH_structs.hpp"
#include "MovieScene_structs.hpp"


SDK_NAMESPACE_START
SDK_PARAM_NAMESPACE_START

// Function Quest_5621.Quest_5621_C.ExecuteUbergraph_Quest_5621
// 0x00E0 (0x00E0 - 0x0000)
struct Quest_5621_C_ExecuteUbergraph_Quest_5621 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_NPCID;                          // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ___int_Variable;                                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x000C(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x001C(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          K2Node_CustomEvent_bWinOrLose;                     // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2D[0x3];                                       // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool bWinOrLose)>              K2Node_CreateDelegate_OutputDelegate_2;            // 0x0030(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          ___bool_Variable;                                  // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAsyncTaskChangeFightMap*               CallFunc_ChangeFightMap_ReturnValue;               // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FDlgOptionSetting>              K2Node_MakeArray_Array;                            // 0x0058(0x0010)(ConstParm, ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x006C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6D[0x3];                                       // 0x006D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMovieSceneSequencePlaybackSettings    K2Node_MakeStruct_MovieSceneSequencePlaybackSettings; // 0x0070(0x0014)(NoDestructor)
	EQuestStep                                    CallFunc_GetQuestStep_ReturnValue;                 // 0x0084(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_85[0x3];                                       // 0x0085(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UAsyncTaskPlaySequence*                 CallFunc_PlaySequence_ReturnValue;                 // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0091(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x0092(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EQuestStep                                    CallFunc_GetQuestStep_ReturnValue_1;               // 0x0093(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EQuestStep                                    CallFunc_GetQuestStep_ReturnValue_2;               // 0x0094(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0095(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x0096(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0097(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_99[0x3];                                       // 0x0099(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(int32 NPCId)>                  K2Node_CreateDelegate_OutputDelegate_3;            // 0x009C(0x0010)(ZeroConstructor, NoDestructor)
	EQuestStep                                    CallFunc_GetQuestStep_ReturnValue_3;               // 0x00AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EQuestStep                                    CallFunc_GetQuestStep_ReturnValue_4;               // 0x00AD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_3;        // 0x00AE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_4;        // 0x00AF(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_B1[0x3];                                       // 0x00B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_NPCID_1;                        // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_3;                 // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EQuestStep                                    CallFunc_GetQuestStep_ReturnValue_5;               // 0x00B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_5;        // 0x00BA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_BB[0x1];                                       // 0x00BB(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(int32 NPCId)>                  K2Node_CreateDelegate_OutputDelegate_4;            // 0x00BC(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         K2Node_Event_NPCID;                                // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAsyncTaskOpenDlg*                      CallFunc_OpenDlg_ReturnValue;                      // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
DUMPER7_ASSERTS_Quest_5621_C_ExecuteUbergraph_Quest_5621;

// Function Quest_5621.Quest_5621_C.HandleFinishing
// 0x0004 (0x0004 - 0x0000)
struct Quest_5621_C_HandleFinishing final
{
public:
	int32                                         NPCId;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_Quest_5621_C_HandleFinishing;

// Function Quest_5621.Quest_5621_C.OnSuccess_FB16B60D4BB6CE096CC521B1344D5D48
// 0x0001 (0x0001 - 0x0000)
struct Quest_5621_C_OnSuccess_FB16B60D4BB6CE096CC521B1344D5D48 final
{
public:
	bool                                          bWinOrLose;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
DUMPER7_ASSERTS_Quest_5621_C_OnSuccess_FB16B60D4BB6CE096CC521B1344D5D48;

// Function Quest_5621.Quest_5621_C.OnDlgClosed_56DE03D745548F592048E09FE2FF0D37
// 0x0004 (0x0004 - 0x0000)
struct Quest_5621_C_OnDlgClosed_56DE03D745548F592048E09FE2FF0D37 final
{
public:
	int32                                         NPCId;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_Quest_5621_C_OnDlgClosed_56DE03D745548F592048E09FE2FF0D37;

// Function Quest_5621.Quest_5621_C.OnDlgSelectedOption_56DE03D745548F592048E09FE2FF0D37
// 0x0004 (0x0004 - 0x0000)
struct Quest_5621_C_OnDlgSelectedOption_56DE03D745548F592048E09FE2FF0D37 final
{
public:
	int32                                         NPCId;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_Quest_5621_C_OnDlgSelectedOption_56DE03D745548F592048E09FE2FF0D37;

SDK_PARAM_NAMESPACE_END
SDK_NAMESPACE_END
