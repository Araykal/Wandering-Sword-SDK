#pragma once



// Package: Quest_12642

#include "Basic.hpp"

#include "JH_structs.hpp"
#include "MovieScene_structs.hpp"


SDK_NAMESPACE_START
SDK_PARAM_NAMESPACE_START

// Function Quest_12642.Quest_12642_C.ExecuteUbergraph_Quest_12642
// 0x00D0 (0x00D0 - 0x0000)
struct Quest_12642_C_ExecuteUbergraph_Quest_12642 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAsyncTaskChangeSceneMap*               CallFunc_ChangeSceneMap_ReturnValue;               // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 NPCId)>                  K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x3];                                       // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_NPCID_1;                        // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_NPCID;                          // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 NPCId)>                  K2Node_CreateDelegate_OutputDelegate_1;            // 0x002C(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         ___int_Variable;                                   // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x0040(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;            // 0x0050(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_4;            // 0x0060(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         K2Node_Event_NPCID;                                // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_74[0x4];                                       // 0x0074(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FDlgOptionSetting>              K2Node_MakeArray_Array;                            // 0x0078(0x0010)(ConstParm, ReferenceParm)
	class UAsyncTaskOpenDlg*                      CallFunc_OpenDlg_ReturnValue;                      // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0094(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0095(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_96[0x2];                                       // 0x0096(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMovieSceneSequencePlaybackSettings    K2Node_MakeStruct_MovieSceneSequencePlaybackSettings; // 0x0098(0x0014)(NoDestructor)
	uint8                                         Pad_AC[0x4];                                       // 0x00AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAsyncTaskPlaySequence*                 CallFunc_PlaySequence_ReturnValue;                 // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x00B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_BA[0x6];                                       // 0x00BA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UTeamManager*                           CallFunc_GetTeamManager_ReturnValue;               // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsInTeam_ReturnValue;                     // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
DUMPER7_ASSERTS_Quest_12642_C_ExecuteUbergraph_Quest_12642;

// Function Quest_12642.Quest_12642_C.HandleFinishing
// 0x0004 (0x0004 - 0x0000)
struct Quest_12642_C_HandleFinishing final
{
public:
	int32                                         NPCId;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_Quest_12642_C_HandleFinishing;

// Function Quest_12642.Quest_12642_C.OnDlgClosed_41F211784DFD4D20F1F1AB9506053B4B
// 0x0004 (0x0004 - 0x0000)
struct Quest_12642_C_OnDlgClosed_41F211784DFD4D20F1F1AB9506053B4B final
{
public:
	int32                                         NPCId;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_Quest_12642_C_OnDlgClosed_41F211784DFD4D20F1F1AB9506053B4B;

// Function Quest_12642.Quest_12642_C.OnDlgSelectedOption_41F211784DFD4D20F1F1AB9506053B4B
// 0x0004 (0x0004 - 0x0000)
struct Quest_12642_C_OnDlgSelectedOption_41F211784DFD4D20F1F1AB9506053B4B final
{
public:
	int32                                         NPCId;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_Quest_12642_C_OnDlgSelectedOption_41F211784DFD4D20F1F1AB9506053B4B;

SDK_PARAM_NAMESPACE_END
SDK_NAMESPACE_END
