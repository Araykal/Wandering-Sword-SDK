#pragma once



// Package: BP_LessonQuestInfo

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START
SDK_PARAM_NAMESPACE_START

// Function BP_LessonQuestInfo.BP_LessonQuestInfo_C.ExecuteUbergraph_BP_LessonQuestInfo
// 0x0210 (0x0210 - 0x0000)
struct BP_LessonQuestInfo_C_ExecuteUbergraph_BP_LessonQuestInfo final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_NPCID;                                // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 NPCId)>                  K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         K2Node_CustomEvent_NPCID_4;                        // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ___int_Variable;                                   // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool bWinOrLose)>              K2Node_CreateDelegate_OutputDelegate_1;            // 0x0020(0x0010)(ZeroConstructor, NoDestructor)
	TArray<struct FDlgContentSetting>             CallFunc_GetProcessFaildDlgSettings_OutArray;      // 0x0030(0x0010)(ReferenceParm)
	TArray<struct FDlgContentSetting>             CallFunc_GetProcessedDlgSettings_OutArray;         // 0x0040(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5A[0x2];                                       // 0x005A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetProcessingNPCIndexById_ReturnValue;    // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_bWinOrLose;                     // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          ___bool_Variable;                                  // 0x0062(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_63[0x1];                                       // 0x0063(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(int32 NPCId)>                  K2Node_CreateDelegate_OutputDelegate_2;            // 0x0064(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         K2Node_CustomEvent_NPCID_3;                        // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_NPCID_2;                        // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 NPCId)>                  K2Node_CreateDelegate_OutputDelegate_3;            // 0x007C(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         ___int_Variable_1;                                 // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 NPCId)>                  K2Node_CreateDelegate_OutputDelegate_4;            // 0x0090(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         K2Node_CustomEvent_NPCID_1;                        // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_NPCID;                          // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 NPCId)>                  K2Node_CreateDelegate_OutputDelegate_5;            // 0x00A8(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         ___int_Variable_2;                                 // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ___int_Array_Index_Variable;                       // 0x00BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 NPCId)>                  K2Node_CreateDelegate_OutputDelegate_6;            // 0x00C0(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         ___int_Loop_Counter_Variable;                      // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ___int_Array_Index_Variable_1;                     // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_NPCID_5;                        // 0x00DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ___int_Loop_Counter_Variable_1;                    // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Get_Item;                           // 0x00E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x00EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FDlgOptionSetting>              K2Node_MakeArray_Array;                            // 0x00F0(0x0010)(ConstParm, ReferenceParm)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_101[0x3];                                      // 0x0101(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Event_NPCID_2;                              // 0x0104(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FDlgContentSetting>             CallFunc_GetProcessingDlgSettings_OutArray;        // 0x0108(0x0010)(ReferenceParm)
	class UAsyncTaskOpenDlg*                      CallFunc_OpenDlg_ReturnValue;                      // 0x0118(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFightLevelSetting*                     CallFunc_Array_Get_Item_1;                         // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAsyncTaskChangeFightMap*               CallFunc_ChangeFightMap_ReturnValue;               // 0x0128(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0131(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_132[0x6];                                      // 0x0132(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FDlgOptionSetting>              K2Node_MakeArray_Array_1;                          // 0x0138(0x0010)(ConstParm, ReferenceParm)
	TArray<struct FDlgOptionSetting>              K2Node_MakeArray_Array_2;                          // 0x0148(0x0010)(ConstParm, ReferenceParm)
	class UAsyncTaskOpenDlg*                      CallFunc_OpenDlg_ReturnValue_1;                    // 0x0158(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAsyncTaskOpenDlg*                      CallFunc_OpenDlg_ReturnValue_2;                    // 0x0160(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0169(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_16A[0x6];                                      // 0x016A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         K2Node_Event_ParamentString;                       // 0x0170(0x0010)(ConstParm, ReferenceParm)
	class FString                                 CallFunc_Array_Get_Item_2;                         // 0x0180(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_3;               // 0x0190(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Len_ReturnValue;                          // 0x0194(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0198(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_2;             // 0x0199(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19A[0x6];                                      // 0x019A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x01A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_NPCID_1;                              // 0x01B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1B4[0x4];                                      // 0x01B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSoftObjectPath                        CallFunc_MakeSoftObjectPath_ReturnValue;           // 0x01B8(0x0018)(ZeroConstructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UObject>                 CallFunc_Conv_SoftObjPathToSoftObjRef_ReturnValue; // 0x01D0(0x0028)(UObjectWrapper, HasGetValueTypeHash)
	class UObject*                                CallFunc_LoadAsset_Blocking_ReturnValue;           // 0x01F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFightLevelSetting*                     K2Node_DynamicCast_AsFight_Level_Setting;          // 0x0200(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0208(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_209[0x3];                                      // 0x0209(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x020C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BP_LessonQuestInfo_C_ExecuteUbergraph_BP_LessonQuestInfo;

// Function BP_LessonQuestInfo.BP_LessonQuestInfo_C.HandleProcessedFail
// 0x0004 (0x0004 - 0x0000)
struct BP_LessonQuestInfo_C_HandleProcessedFail final
{
public:
	int32                                         NPCId;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BP_LessonQuestInfo_C_HandleProcessedFail;

// Function BP_LessonQuestInfo.BP_LessonQuestInfo_C.HandleProcessed
// 0x0004 (0x0004 - 0x0000)
struct BP_LessonQuestInfo_C_HandleProcessed final
{
public:
	int32                                         NPCId;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BP_LessonQuestInfo_C_HandleProcessed;

// Function BP_LessonQuestInfo.BP_LessonQuestInfo_C.ParseParaments
// 0x0010 (0x0010 - 0x0000)
struct BP_LessonQuestInfo_C_ParseParaments final
{
public:
	TArray<class FString>                         ParamentString;                                    // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
DUMPER7_ASSERTS_BP_LessonQuestInfo_C_ParseParaments;

// Function BP_LessonQuestInfo.BP_LessonQuestInfo_C.HandleProcessing
// 0x0004 (0x0004 - 0x0000)
struct BP_LessonQuestInfo_C_HandleProcessing final
{
public:
	int32                                         NPCId;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BP_LessonQuestInfo_C_HandleProcessing;

// Function BP_LessonQuestInfo.BP_LessonQuestInfo_C.OnDlgClosed_7AE36F8F4DC1CFACAF4F548AFD3BD870
// 0x0004 (0x0004 - 0x0000)
struct BP_LessonQuestInfo_C_OnDlgClosed_7AE36F8F4DC1CFACAF4F548AFD3BD870 final
{
public:
	int32                                         NPCId;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BP_LessonQuestInfo_C_OnDlgClosed_7AE36F8F4DC1CFACAF4F548AFD3BD870;

// Function BP_LessonQuestInfo.BP_LessonQuestInfo_C.OnDlgSelectedOption_7AE36F8F4DC1CFACAF4F548AFD3BD870
// 0x0004 (0x0004 - 0x0000)
struct BP_LessonQuestInfo_C_OnDlgSelectedOption_7AE36F8F4DC1CFACAF4F548AFD3BD870 final
{
public:
	int32                                         NPCId;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BP_LessonQuestInfo_C_OnDlgSelectedOption_7AE36F8F4DC1CFACAF4F548AFD3BD870;

// Function BP_LessonQuestInfo.BP_LessonQuestInfo_C.OnDlgClosed_CF8BBF934B3F668300C9B98541623C88
// 0x0004 (0x0004 - 0x0000)
struct BP_LessonQuestInfo_C_OnDlgClosed_CF8BBF934B3F668300C9B98541623C88 final
{
public:
	int32                                         NPCId;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BP_LessonQuestInfo_C_OnDlgClosed_CF8BBF934B3F668300C9B98541623C88;

// Function BP_LessonQuestInfo.BP_LessonQuestInfo_C.OnDlgSelectedOption_CF8BBF934B3F668300C9B98541623C88
// 0x0004 (0x0004 - 0x0000)
struct BP_LessonQuestInfo_C_OnDlgSelectedOption_CF8BBF934B3F668300C9B98541623C88 final
{
public:
	int32                                         NPCId;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BP_LessonQuestInfo_C_OnDlgSelectedOption_CF8BBF934B3F668300C9B98541623C88;

// Function BP_LessonQuestInfo.BP_LessonQuestInfo_C.OnSuccess_312C1AF6432F3AB366B271865EDD234C
// 0x0001 (0x0001 - 0x0000)
struct BP_LessonQuestInfo_C_OnSuccess_312C1AF6432F3AB366B271865EDD234C final
{
public:
	bool                                          bWinOrLose;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
DUMPER7_ASSERTS_BP_LessonQuestInfo_C_OnSuccess_312C1AF6432F3AB366B271865EDD234C;

// Function BP_LessonQuestInfo.BP_LessonQuestInfo_C.OnDlgClosed_607D4657431280E79B61DF97FAC27207
// 0x0004 (0x0004 - 0x0000)
struct BP_LessonQuestInfo_C_OnDlgClosed_607D4657431280E79B61DF97FAC27207 final
{
public:
	int32                                         NPCId;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BP_LessonQuestInfo_C_OnDlgClosed_607D4657431280E79B61DF97FAC27207;

// Function BP_LessonQuestInfo.BP_LessonQuestInfo_C.OnDlgSelectedOption_607D4657431280E79B61DF97FAC27207
// 0x0004 (0x0004 - 0x0000)
struct BP_LessonQuestInfo_C_OnDlgSelectedOption_607D4657431280E79B61DF97FAC27207 final
{
public:
	int32                                         NPCId;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BP_LessonQuestInfo_C_OnDlgSelectedOption_607D4657431280E79B61DF97FAC27207;

// Function BP_LessonQuestInfo.BP_LessonQuestInfo_C.IsProcessed
// 0x0008 (0x0008 - 0x0000)
struct BP_LessonQuestInfo_C_IsProcessed final
{
public:
	int32                                         NPCId;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CheckFinishState_ReturnValue;             // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
DUMPER7_ASSERTS_BP_LessonQuestInfo_C_IsProcessed;

SDK_PARAM_NAMESPACE_END
SDK_NAMESPACE_END
