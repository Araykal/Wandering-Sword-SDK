#pragma once



// Package: Quest_5037

#include "Basic.hpp"

#include "JH_structs.hpp"
#include "MovieScene_structs.hpp"


SDK_NAMESPACE_START
SDK_PARAM_NAMESPACE_START

// Function Quest_5037.Quest_5037_C.ExecuteUbergraph_Quest_5037
// 0x00F0 (0x00F0 - 0x0000)
struct Quest_5037_C_ExecuteUbergraph_Quest_5037 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ___bool_Variable;                                  // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UAsyncTaskChangeFightMap*               CallFunc_ChangeFightMap_ReturnValue;               // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(int32 NPCId)>                  K2Node_CreateDelegate_OutputDelegate;              // 0x0014(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         K2Node_CustomEvent_NPCID_1;                        // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_NPCID;                          // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 NPCId)>                  K2Node_CreateDelegate_OutputDelegate_1;            // 0x002C(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         ___int_Variable;                                   // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x0040(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;            // 0x0050(0x0010)(ZeroConstructor, NoDestructor)
	class UNPCManager*                            CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USaveManager*                           CallFunc_GetGameInstanceSubsystem_ReturnValue_1;   // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EDifficultyMode                               CallFunc_GetDifficultyMode_ReturnValue;            // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_72[0x2];                                       // 0x0072(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool bWinOrLose)>              K2Node_CreateDelegate_OutputDelegate_4;            // 0x0074(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          K2Node_CustomEvent_bWinOrLose;                     // 0x0084(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          ___bool_Variable_1;                                // 0x0085(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_86[0x2];                                       // 0x0086(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UAsyncTaskChangeFightMap*               CallFunc_ChangeFightMap_ReturnValue_1;             // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_91[0x3];                                       // 0x0091(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Event_NPCID_1;                              // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FDlgOptionSetting>              K2Node_MakeArray_Array;                            // 0x0098(0x0010)(ConstParm, ReferenceParm)
	TDelegate<void(bool bWinOrLose)>              K2Node_CreateDelegate_OutputDelegate_5;            // 0x00A8(0x0010)(ZeroConstructor, NoDestructor)
	class UAsyncTaskOpenDlg*                      CallFunc_OpenDlg_ReturnValue;                      // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x00C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x00C5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C6[0x2];                                       // 0x00C6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMovieSceneSequencePlaybackSettings    K2Node_MakeStruct_MovieSceneSequencePlaybackSettings; // 0x00C8(0x0014)(NoDestructor)
	uint8                                         Pad_DC[0x4];                                       // 0x00DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAsyncTaskPlaySequence*                 CallFunc_PlaySequence_ReturnValue;                 // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x00E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_bWinOrLose_1;                   // 0x00EA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_EB[0x1];                                       // 0x00EB(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Event_NPCID;                                // 0x00EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_Quest_5037_C_ExecuteUbergraph_Quest_5037;

// Function Quest_5037.Quest_5037_C.HandleRequesting
// 0x0004 (0x0004 - 0x0000)
struct Quest_5037_C_HandleRequesting final
{
public:
	int32                                         NPCId;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_Quest_5037_C_HandleRequesting;

// Function Quest_5037.Quest_5037_C.HandleFinishing
// 0x0004 (0x0004 - 0x0000)
struct Quest_5037_C_HandleFinishing final
{
public:
	int32                                         NPCId;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_Quest_5037_C_HandleFinishing;

// Function Quest_5037.Quest_5037_C.OnSuccess_33FE9F26402A365CB42F5C95382E50F8
// 0x0001 (0x0001 - 0x0000)
struct Quest_5037_C_OnSuccess_33FE9F26402A365CB42F5C95382E50F8 final
{
public:
	bool                                          bWinOrLose;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
DUMPER7_ASSERTS_Quest_5037_C_OnSuccess_33FE9F26402A365CB42F5C95382E50F8;

// Function Quest_5037.Quest_5037_C.OnDlgClosed_FD6487F44C16C072EBC34CA9A1B21395
// 0x0004 (0x0004 - 0x0000)
struct Quest_5037_C_OnDlgClosed_FD6487F44C16C072EBC34CA9A1B21395 final
{
public:
	int32                                         NPCId;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_Quest_5037_C_OnDlgClosed_FD6487F44C16C072EBC34CA9A1B21395;

// Function Quest_5037.Quest_5037_C.OnDlgSelectedOption_FD6487F44C16C072EBC34CA9A1B21395
// 0x0004 (0x0004 - 0x0000)
struct Quest_5037_C_OnDlgSelectedOption_FD6487F44C16C072EBC34CA9A1B21395 final
{
public:
	int32                                         NPCId;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_Quest_5037_C_OnDlgSelectedOption_FD6487F44C16C072EBC34CA9A1B21395;

// Function Quest_5037.Quest_5037_C.OnSuccess_492F312D41E50BB626ADDE9F9078E428
// 0x0001 (0x0001 - 0x0000)
struct Quest_5037_C_OnSuccess_492F312D41E50BB626ADDE9F9078E428 final
{
public:
	bool                                          bWinOrLose;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
DUMPER7_ASSERTS_Quest_5037_C_OnSuccess_492F312D41E50BB626ADDE9F9078E428;

SDK_PARAM_NAMESPACE_END
SDK_NAMESPACE_END
