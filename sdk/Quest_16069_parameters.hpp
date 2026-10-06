#pragma once



// Package: Quest_16069

#include "Basic.hpp"

#include "JH_structs.hpp"
#include "MovieScene_structs.hpp"


SDK_NAMESPACE_START
SDK_PARAM_NAMESPACE_START

// Function Quest_16069.Quest_16069_C.ExecuteUbergraph_Quest_16069
// 0x0150 (0x0150 - 0x0000)
struct Quest_16069_C_ExecuteUbergraph_Quest_16069 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_NPCID;                          // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ___int_Variable;                                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x000C(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x001C(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          K2Node_CustomEvent_bWinOrLose_3;                   // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2D[0x3];                                       // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool bWinOrLose)>              K2Node_CreateDelegate_OutputDelegate_2;            // 0x0030(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          ___bool_Variable;                                  // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAsyncTaskChangeFightMap*               CallFunc_ChangeFightMap_ReturnValue;               // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUIManager*                             CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFightMapLoadingWidget*                 CallFunc_GetFightMapLoadingWidget_ReturnValue;     // 0x0060(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USaveManager*                           CallFunc_GetGameInstanceSubsystem_ReturnValue_1;   // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EDifficultyMode                               CallFunc_GetDifficultyMode_ReturnValue;            // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_72[0x2];                                       // 0x0072(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool bWinOrLose)>              K2Node_CreateDelegate_OutputDelegate_3;            // 0x0074(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          K2Node_CustomEvent_bWinOrLose_2;                   // 0x0084(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          ___bool_Variable_1;                                // 0x0085(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_86[0x2];                                       // 0x0086(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UAsyncTaskChangeFightMap*               CallFunc_ChangeFightMap_ReturnValue_1;             // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_91[0x3];                                       // 0x0091(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool bWinOrLose)>              K2Node_CreateDelegate_OutputDelegate_4;            // 0x0094(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          K2Node_CustomEvent_bWinOrLose_1;                   // 0x00A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          ___bool_Variable_2;                                // 0x00A5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_A6[0x2];                                       // 0x00A6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UAsyncTaskChangeFightMap*               CallFunc_ChangeFightMap_ReturnValue_2;             // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_B1[0x3];                                       // 0x00B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool bWinOrLose)>              K2Node_CreateDelegate_OutputDelegate_5;            // 0x00B4(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          K2Node_CustomEvent_bWinOrLose;                     // 0x00C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          ___bool_Variable_3;                                // 0x00C5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C6[0x2];                                       // 0x00C6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UAsyncTaskChangeFightMap*               CallFunc_ChangeFightMap_ReturnValue_3;             // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D1[0x3];                                       // 0x00D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_NPCID_1;                        // 0x00D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x00DC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_DD[0x3];                                       // 0x00DD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMovieSceneSequencePlaybackSettings    K2Node_MakeStruct_MovieSceneSequencePlaybackSettings; // 0x00E0(0x0014)(NoDestructor)
	uint8                                         Pad_F4[0x4];                                       // 0x00F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FDlgOptionSetting>              K2Node_MakeArray_Array;                            // 0x00F8(0x0010)(ConstParm, ReferenceParm)
	class UAsyncTaskPlaySequence*                 CallFunc_PlaySequence_ReturnValue;                 // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x0111(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EQuestStep                                    CallFunc_GetQuestStep_ReturnValue;                 // 0x0112(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_113[0x1];                                      // 0x0113(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Event_NPCID;                                // 0x0114(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_119[0x7];                                      // 0x0119(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAsyncTaskOpenDlg*                      CallFunc_OpenDlg_ReturnValue;                      // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_5;                    // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EQuestStep                                    CallFunc_GetQuestStep_ReturnValue_1;               // 0x0129(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x012A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_12B[0x1];                                      // 0x012B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(int32 NPCId)>                  K2Node_CreateDelegate_OutputDelegate_6;            // 0x012C(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(int32 NPCId)>                  K2Node_CreateDelegate_OutputDelegate_7;            // 0x013C(0x0010)(ZeroConstructor, NoDestructor)
};
DUMPER7_ASSERTS_Quest_16069_C_ExecuteUbergraph_Quest_16069;

// Function Quest_16069.Quest_16069_C.HandleFinishing
// 0x0004 (0x0004 - 0x0000)
struct Quest_16069_C_HandleFinishing final
{
public:
	int32                                         NPCId;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_Quest_16069_C_HandleFinishing;

// Function Quest_16069.Quest_16069_C.OnSuccess_0BC317244FBA1E5EE86E7DA0E8637F68
// 0x0001 (0x0001 - 0x0000)
struct Quest_16069_C_OnSuccess_0BC317244FBA1E5EE86E7DA0E8637F68 final
{
public:
	bool                                          bWinOrLose;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
DUMPER7_ASSERTS_Quest_16069_C_OnSuccess_0BC317244FBA1E5EE86E7DA0E8637F68;

// Function Quest_16069.Quest_16069_C.OnSuccess_7C3E3C574646425FBA70CA99562C1AB7
// 0x0001 (0x0001 - 0x0000)
struct Quest_16069_C_OnSuccess_7C3E3C574646425FBA70CA99562C1AB7 final
{
public:
	bool                                          bWinOrLose;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
DUMPER7_ASSERTS_Quest_16069_C_OnSuccess_7C3E3C574646425FBA70CA99562C1AB7;

// Function Quest_16069.Quest_16069_C.OnSuccess_7911E3F348ECB8CC29BE7E8705939175
// 0x0001 (0x0001 - 0x0000)
struct Quest_16069_C_OnSuccess_7911E3F348ECB8CC29BE7E8705939175 final
{
public:
	bool                                          bWinOrLose;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
DUMPER7_ASSERTS_Quest_16069_C_OnSuccess_7911E3F348ECB8CC29BE7E8705939175;

// Function Quest_16069.Quest_16069_C.OnSuccess_2733AEBA4DBE0925D27A1FBE3DA531D1
// 0x0001 (0x0001 - 0x0000)
struct Quest_16069_C_OnSuccess_2733AEBA4DBE0925D27A1FBE3DA531D1 final
{
public:
	bool                                          bWinOrLose;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
DUMPER7_ASSERTS_Quest_16069_C_OnSuccess_2733AEBA4DBE0925D27A1FBE3DA531D1;

// Function Quest_16069.Quest_16069_C.OnDlgClosed_58098C684E444F512FAF08AF75E563D3
// 0x0004 (0x0004 - 0x0000)
struct Quest_16069_C_OnDlgClosed_58098C684E444F512FAF08AF75E563D3 final
{
public:
	int32                                         NPCId;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_Quest_16069_C_OnDlgClosed_58098C684E444F512FAF08AF75E563D3;

// Function Quest_16069.Quest_16069_C.OnDlgSelectedOption_58098C684E444F512FAF08AF75E563D3
// 0x0004 (0x0004 - 0x0000)
struct Quest_16069_C_OnDlgSelectedOption_58098C684E444F512FAF08AF75E563D3 final
{
public:
	int32                                         NPCId;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_Quest_16069_C_OnDlgSelectedOption_58098C684E444F512FAF08AF75E563D3;

SDK_PARAM_NAMESPACE_END
SDK_NAMESPACE_END
