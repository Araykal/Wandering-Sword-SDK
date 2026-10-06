#pragma once



// Package: Quest_28279

#include "Basic.hpp"

#include "JH_structs.hpp"
#include "MovieScene_structs.hpp"


SDK_NAMESPACE_START
SDK_PARAM_NAMESPACE_START

// Function Quest_28279.Quest_28279_C.ExecuteUbergraph_Quest_28279
// 0x0180 (0x0180 - 0x0000)
struct Quest_28279_C_ExecuteUbergraph_Quest_28279 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ___int_Variable;                                   // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 NPCId)>                  K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0018(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x0028(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          K2Node_CustomEvent_bWinOrLose_3;                   // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_39[0x3];                                       // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool bWinOrLose)>              K2Node_CreateDelegate_OutputDelegate_3;            // 0x003C(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          ___bool_Variable;                                  // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D[0x3];                                       // 0x004D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UAsyncTaskChangeFightMap*               CallFunc_ChangeFightMap_ReturnValue;               // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_bWinOrLose_2;                   // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5A[0x2];                                       // 0x005A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool bWinOrLose)>              K2Node_CreateDelegate_OutputDelegate_4;            // 0x005C(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          ___bool_Variable_1;                                // 0x006C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6D[0x3];                                       // 0x006D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UAsyncTaskChangeFightMap*               CallFunc_ChangeFightMap_ReturnValue_1;             // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_bWinOrLose_1;                   // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7A[0x2];                                       // 0x007A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool bWinOrLose)>              K2Node_CreateDelegate_OutputDelegate_5;            // 0x007C(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          ___bool_Variable_2;                                // 0x008C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8D[0x3];                                       // 0x008D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UAsyncTaskChangeFightMap*               CallFunc_ChangeFightMap_ReturnValue_2;             // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_bWinOrLose;                     // 0x0099(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9A[0x2];                                       // 0x009A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool bWinOrLose)>              K2Node_CreateDelegate_OutputDelegate_6;            // 0x009C(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          ___bool_Variable_3;                                // 0x00AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_AD[0x3];                                       // 0x00AD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UAsyncTaskChangeFightMap*               CallFunc_ChangeFightMap_ReturnValue_3;             // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_B9[0x7];                                       // 0x00B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUIManager*                             CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUIManager*                             CallFunc_GetGameInstanceSubsystem_ReturnValue_1;   // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFightMapLoadingWidget*                 CallFunc_GetFightMapLoadingWidget_ReturnValue;     // 0x00D0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFightMapLoadingWidget*                 CallFunc_GetFightMapLoadingWidget_ReturnValue_1;   // 0x00D8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUIManager*                             CallFunc_GetGameInstanceSubsystem_ReturnValue_2;   // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUIManager*                             CallFunc_GetGameInstanceSubsystem_ReturnValue_3;   // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFightMapLoadingWidget*                 CallFunc_GetFightMapLoadingWidget_ReturnValue_2;   // 0x00F0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFightMapLoadingWidget*                 CallFunc_GetFightMapLoadingWidget_ReturnValue_3;   // 0x00F8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_NPCID;                                // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_104[0x4];                                      // 0x0104(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FDlgOptionSetting>              K2Node_MakeArray_Array;                            // 0x0108(0x0010)(ConstParm, ReferenceParm)
	int32                                         K2Node_CustomEvent_NPCID_1;                        // 0x0118(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11C[0x4];                                      // 0x011C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAsyncTaskOpenDlg*                      CallFunc_OpenDlg_ReturnValue;                      // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0128(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x012C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x012D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_12E[0x2];                                      // 0x012E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMovieSceneSequencePlaybackSettings    K2Node_MakeStruct_MovieSceneSequencePlaybackSettings; // 0x0130(0x0014)(NoDestructor)
	uint8                                         Pad_144[0x4];                                      // 0x0144(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAsyncTaskPlaySequence*                 CallFunc_PlaySequence_ReturnValue;                 // 0x0148(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 NPCId)>                  K2Node_CreateDelegate_OutputDelegate_7;            // 0x0150(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_5;                    // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x0161(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EQuestStep                                    CallFunc_GetQuestStep_ReturnValue;                 // 0x0162(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0163(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_164[0x4];                                      // 0x0164(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UTeamManager*                           CallFunc_GetTeamManager_ReturnValue;               // 0x0168(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsInTeam_ReturnValue;                     // 0x0170(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EQuestStep                                    CallFunc_GetQuestStep_ReturnValue_1;               // 0x0171(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_172[0x2];                                      // 0x0172(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_NPCID;                          // 0x0174(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0178(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
DUMPER7_ASSERTS_Quest_28279_C_ExecuteUbergraph_Quest_28279;

// Function Quest_28279.Quest_28279_C.HandleFinishing
// 0x0004 (0x0004 - 0x0000)
struct Quest_28279_C_HandleFinishing final
{
public:
	int32                                         NPCId;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_Quest_28279_C_HandleFinishing;

// Function Quest_28279.Quest_28279_C.OnSuccess_320C73E24498457231B715A529B93C4A
// 0x0001 (0x0001 - 0x0000)
struct Quest_28279_C_OnSuccess_320C73E24498457231B715A529B93C4A final
{
public:
	bool                                          bWinOrLose;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
DUMPER7_ASSERTS_Quest_28279_C_OnSuccess_320C73E24498457231B715A529B93C4A;

// Function Quest_28279.Quest_28279_C.OnSuccess_B6A9F4674251B7B2EDDE5B964394AC76
// 0x0001 (0x0001 - 0x0000)
struct Quest_28279_C_OnSuccess_B6A9F4674251B7B2EDDE5B964394AC76 final
{
public:
	bool                                          bWinOrLose;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
DUMPER7_ASSERTS_Quest_28279_C_OnSuccess_B6A9F4674251B7B2EDDE5B964394AC76;

// Function Quest_28279.Quest_28279_C.OnSuccess_CABEA02F49B4C86E3E76BF95C7D02302
// 0x0001 (0x0001 - 0x0000)
struct Quest_28279_C_OnSuccess_CABEA02F49B4C86E3E76BF95C7D02302 final
{
public:
	bool                                          bWinOrLose;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
DUMPER7_ASSERTS_Quest_28279_C_OnSuccess_CABEA02F49B4C86E3E76BF95C7D02302;

// Function Quest_28279.Quest_28279_C.OnSuccess_C95706E54EC5EA7774895EAEF2C4BB03
// 0x0001 (0x0001 - 0x0000)
struct Quest_28279_C_OnSuccess_C95706E54EC5EA7774895EAEF2C4BB03 final
{
public:
	bool                                          bWinOrLose;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
DUMPER7_ASSERTS_Quest_28279_C_OnSuccess_C95706E54EC5EA7774895EAEF2C4BB03;

// Function Quest_28279.Quest_28279_C.OnDlgClosed_95A0143E408FE9EAD65FA0875E9B3EC7
// 0x0004 (0x0004 - 0x0000)
struct Quest_28279_C_OnDlgClosed_95A0143E408FE9EAD65FA0875E9B3EC7 final
{
public:
	int32                                         NPCId;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_Quest_28279_C_OnDlgClosed_95A0143E408FE9EAD65FA0875E9B3EC7;

// Function Quest_28279.Quest_28279_C.OnDlgSelectedOption_95A0143E408FE9EAD65FA0875E9B3EC7
// 0x0004 (0x0004 - 0x0000)
struct Quest_28279_C_OnDlgSelectedOption_95A0143E408FE9EAD65FA0875E9B3EC7 final
{
public:
	int32                                         NPCId;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_Quest_28279_C_OnDlgSelectedOption_95A0143E408FE9EAD65FA0875E9B3EC7;

SDK_PARAM_NAMESPACE_END
SDK_NAMESPACE_END
