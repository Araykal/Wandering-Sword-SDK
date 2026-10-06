#pragma once



// Package: Quest_5226

#include "Basic.hpp"

#include "JH_structs.hpp"
#include "MovieScene_structs.hpp"


SDK_NAMESPACE_START
SDK_PARAM_NAMESPACE_START

// Function Quest_5226.Quest_5226_C.ExecuteUbergraph_Quest_5226
// 0x0220 (0x0220 - 0x0000)
struct Quest_5226_C_ExecuteUbergraph_Quest_5226 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetSceneHero_ReturnValue;                 // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActionStateSetting                    K2Node_MakeStruct_ActionStateSetting;              // 0x0010(0x0010)(NoDestructor)
	TDelegate<void(int32 NPCId)>                  K2Node_CreateDelegate_OutputDelegate;              // 0x0020(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         K2Node_CustomEvent_NPCID_6;                        // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ___int_Variable;                                   // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 NPCId)>                  K2Node_CreateDelegate_OutputDelegate_1;            // 0x0038(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         K2Node_CustomEvent_NPCID_5;                        // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_NPCID_4;                        // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 NPCId)>                  K2Node_CreateDelegate_OutputDelegate_2;            // 0x0050(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         ___int_Variable_1;                                 // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 NPCId)>                  K2Node_CreateDelegate_OutputDelegate_3;            // 0x0064(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         K2Node_CustomEvent_NPCID_3;                        // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_NPCID_2;                        // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 NPCId)>                  K2Node_CreateDelegate_OutputDelegate_4;            // 0x007C(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         ___int_Variable_2;                                 // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_5;            // 0x0090(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_6;            // 0x00A0(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_7;            // 0x00B0(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_8;            // 0x00C0(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         K2Node_CustomEvent_NPCID_1;                        // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 NPCId)>                  K2Node_CreateDelegate_OutputDelegate_9;            // 0x00D4(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         K2Node_CustomEvent_NPCID;                          // 0x00E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 NPCId)>                  K2Node_CreateDelegate_OutputDelegate_10;           // 0x00E8(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         ___int_Variable_3;                                 // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_NPCID;                                // 0x00FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x0101(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_102[0x2];                                      // 0x0102(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_NPCID_7;                        // 0x0104(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FDlgOptionSetting>              K2Node_MakeArray_Array;                            // 0x0108(0x0010)(ConstParm, ReferenceParm)
	TDelegate<void(int32 NPCId)>                  K2Node_CreateDelegate_OutputDelegate_11;           // 0x0118(0x0010)(ZeroConstructor, NoDestructor)
	TArray<struct FDlgOptionSetting>              K2Node_MakeArray_Array_1;                          // 0x0128(0x0010)(ConstParm, ReferenceParm)
	TArray<struct FDlgOptionSetting>              K2Node_MakeArray_Array_2;                          // 0x0138(0x0010)(ConstParm, ReferenceParm)
	class UAsyncTaskOpenDlg*                      CallFunc_OpenDlg_ReturnValue;                      // 0x0148(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAsyncTaskOpenDlg*                      CallFunc_OpenDlg_ReturnValue_1;                    // 0x0150(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0159(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x015A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue_1; // 0x015B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FMovieSceneSequencePlaybackSettings    K2Node_MakeStruct_MovieSceneSequencePlaybackSettings; // 0x015C(0x0014)(NoDestructor)
	class UAsyncTaskPlaySequence*                 CallFunc_PlaySequence_ReturnValue;                 // 0x0170(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMovieSceneSequencePlaybackSettings    K2Node_MakeStruct_MovieSceneSequencePlaybackSettings_1; // 0x0178(0x0014)(NoDestructor)
	uint8                                         Pad_18C[0x4];                                      // 0x018C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAsyncTaskPlaySequence*                 CallFunc_PlaySequence_ReturnValue_1;               // 0x0190(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0198(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0199(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19A[0x6];                                      // 0x019A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDlgOptionSetting                      CallFunc_Array_Get_Item;                           // 0x01A0(0x0050)()
	class UAsyncTaskOpenDlg*                      CallFunc_OpenDlg_ReturnValue_2;                    // 0x01F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAsyncTaskOpenDlg*                      CallFunc_OpenDlg_ReturnValue_3;                    // 0x01F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0200(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0204(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x0205(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_5;                    // 0x0206(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_207[0x1];                                      // 0x0207(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0208(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x020C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_20D[0x3];                                      // 0x020D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FActionSetting                         K2Node_MakeStruct_ActionSetting;                   // 0x0210(0x000C)(NoDestructor)
	bool                                          CallFunc_ApplyAction_ReturnValue;                  // 0x021C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
DUMPER7_ASSERTS_Quest_5226_C_ExecuteUbergraph_Quest_5226;

// Function Quest_5226.Quest_5226_C.HandleRequesting
// 0x0004 (0x0004 - 0x0000)
struct Quest_5226_C_HandleRequesting final
{
public:
	int32                                         NPCId;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_Quest_5226_C_HandleRequesting;

// Function Quest_5226.Quest_5226_C.OnDlgClosed_A367B9E644E09A51669022959D7BA4C6
// 0x0004 (0x0004 - 0x0000)
struct Quest_5226_C_OnDlgClosed_A367B9E644E09A51669022959D7BA4C6 final
{
public:
	int32                                         NPCId;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_Quest_5226_C_OnDlgClosed_A367B9E644E09A51669022959D7BA4C6;

// Function Quest_5226.Quest_5226_C.OnDlgSelectedOption_A367B9E644E09A51669022959D7BA4C6
// 0x0004 (0x0004 - 0x0000)
struct Quest_5226_C_OnDlgSelectedOption_A367B9E644E09A51669022959D7BA4C6 final
{
public:
	int32                                         NPCId;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_Quest_5226_C_OnDlgSelectedOption_A367B9E644E09A51669022959D7BA4C6;

// Function Quest_5226.Quest_5226_C.OnDlgClosed_6735CFE9469FC044E98492897F51E798
// 0x0004 (0x0004 - 0x0000)
struct Quest_5226_C_OnDlgClosed_6735CFE9469FC044E98492897F51E798 final
{
public:
	int32                                         NPCId;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_Quest_5226_C_OnDlgClosed_6735CFE9469FC044E98492897F51E798;

// Function Quest_5226.Quest_5226_C.OnDlgSelectedOption_6735CFE9469FC044E98492897F51E798
// 0x0004 (0x0004 - 0x0000)
struct Quest_5226_C_OnDlgSelectedOption_6735CFE9469FC044E98492897F51E798 final
{
public:
	int32                                         NPCId;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_Quest_5226_C_OnDlgSelectedOption_6735CFE9469FC044E98492897F51E798;

// Function Quest_5226.Quest_5226_C.OnDlgClosed_9D773A8340101E7A750CBDBA0E90BE8E
// 0x0004 (0x0004 - 0x0000)
struct Quest_5226_C_OnDlgClosed_9D773A8340101E7A750CBDBA0E90BE8E final
{
public:
	int32                                         NPCId;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_Quest_5226_C_OnDlgClosed_9D773A8340101E7A750CBDBA0E90BE8E;

// Function Quest_5226.Quest_5226_C.OnDlgSelectedOption_9D773A8340101E7A750CBDBA0E90BE8E
// 0x0004 (0x0004 - 0x0000)
struct Quest_5226_C_OnDlgSelectedOption_9D773A8340101E7A750CBDBA0E90BE8E final
{
public:
	int32                                         NPCId;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_Quest_5226_C_OnDlgSelectedOption_9D773A8340101E7A750CBDBA0E90BE8E;

// Function Quest_5226.Quest_5226_C.OnDlgClosed_5E28D2A14516ACA3BE3F2CBE86AF7F25
// 0x0004 (0x0004 - 0x0000)
struct Quest_5226_C_OnDlgClosed_5E28D2A14516ACA3BE3F2CBE86AF7F25 final
{
public:
	int32                                         NPCId;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_Quest_5226_C_OnDlgClosed_5E28D2A14516ACA3BE3F2CBE86AF7F25;

// Function Quest_5226.Quest_5226_C.OnDlgSelectedOption_5E28D2A14516ACA3BE3F2CBE86AF7F25
// 0x0004 (0x0004 - 0x0000)
struct Quest_5226_C_OnDlgSelectedOption_5E28D2A14516ACA3BE3F2CBE86AF7F25 final
{
public:
	int32                                         NPCId;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_Quest_5226_C_OnDlgSelectedOption_5E28D2A14516ACA3BE3F2CBE86AF7F25;

SDK_PARAM_NAMESPACE_END
SDK_NAMESPACE_END
