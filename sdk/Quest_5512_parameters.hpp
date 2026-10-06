#pragma once



// Package: Quest_5512

#include "Basic.hpp"

#include "JH_structs.hpp"
#include "MovieScene_structs.hpp"


SDK_NAMESPACE_START
SDK_PARAM_NAMESPACE_START

// Function Quest_5512.Quest_5512_C.ExecuteUbergraph_Quest_5512
// 0x00C0 (0x00C0 - 0x0000)
struct Quest_5512_C_ExecuteUbergraph_Quest_5512 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UTeamManager*                           CallFunc_GetTeamManager_ReturnValue;               // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 NPCId)>                  K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         K2Node_CustomEvent_NPCID_1;                        // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_NPCID;                          // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 NPCId)>                  K2Node_CreateDelegate_OutputDelegate_1;            // 0x0028(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         ___int_Variable;                                   // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x003C(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;            // 0x004C(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_4;            // 0x005C(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         K2Node_Event_NPCID;                                // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FDlgOptionSetting>              K2Node_MakeArray_Array;                            // 0x0070(0x0010)(ConstParm, ReferenceParm)
	class UAsyncTaskOpenDlg*                      CallFunc_OpenDlg_ReturnValue;                      // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x008C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x008D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8E[0x2];                                       // 0x008E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMovieSceneSequencePlaybackSettings    K2Node_MakeStruct_MovieSceneSequencePlaybackSettings; // 0x0090(0x0014)(NoDestructor)
	uint8                                         Pad_A4[0x4];                                       // 0x00A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAsyncTaskPlaySequence*                 CallFunc_PlaySequence_ReturnValue;                 // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAsyncTaskChangeSceneMap*               CallFunc_ChangeSceneMap_ReturnValue;               // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x00B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x00BA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
DUMPER7_ASSERTS_Quest_5512_C_ExecuteUbergraph_Quest_5512;

// Function Quest_5512.Quest_5512_C.HandleFinishing
// 0x0004 (0x0004 - 0x0000)
struct Quest_5512_C_HandleFinishing final
{
public:
	int32                                         NPCId;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_Quest_5512_C_HandleFinishing;

// Function Quest_5512.Quest_5512_C.OnDlgClosed_66038459457E4104D1BBBCBDB1B9FB0A
// 0x0004 (0x0004 - 0x0000)
struct Quest_5512_C_OnDlgClosed_66038459457E4104D1BBBCBDB1B9FB0A final
{
public:
	int32                                         NPCId;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_Quest_5512_C_OnDlgClosed_66038459457E4104D1BBBCBDB1B9FB0A;

// Function Quest_5512.Quest_5512_C.OnDlgSelectedOption_66038459457E4104D1BBBCBDB1B9FB0A
// 0x0004 (0x0004 - 0x0000)
struct Quest_5512_C_OnDlgSelectedOption_66038459457E4104D1BBBCBDB1B9FB0A final
{
public:
	int32                                         NPCId;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_Quest_5512_C_OnDlgSelectedOption_66038459457E4104D1BBBCBDB1B9FB0A;

SDK_PARAM_NAMESPACE_END
SDK_NAMESPACE_END
