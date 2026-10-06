#pragma once



// Package: BP_TalkQuestInfo

#include "Basic.hpp"

#include "JH_structs.hpp"


SDK_NAMESPACE_START
SDK_PARAM_NAMESPACE_START

// Function BP_TalkQuestInfo.BP_TalkQuestInfo_C.ExecuteUbergraph_BP_TalkQuestInfo
// 0x0088 (0x0088 - 0x0000)
struct BP_TalkQuestInfo_C_ExecuteUbergraph_BP_TalkQuestInfo final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         K2Node_Event_ParamentString;                       // 0x0008(0x0010)(ConstParm, ReferenceParm)
	int32                                         K2Node_CustomEvent_NPCID_1;                        // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 NPCId)>                  K2Node_CreateDelegate_OutputDelegate;              // 0x001C(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         K2Node_CustomEvent_NPCID;                          // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 NPCId)>                  K2Node_CreateDelegate_OutputDelegate_1;            // 0x0030(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         ___int_Variable;                                   // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ___int_Array_Index_Variable;                       // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ___int_Loop_Counter_Variable;                      // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FDlgOptionSetting>              K2Node_MakeArray_Array;                            // 0x0050(0x0010)(ConstParm, ReferenceParm)
	int32                                         K2Node_Event_NPCID;                                // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Get_Item;                           // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FDlgContentSetting>             CallFunc_GetProcessingDlgSettings_OutArray;        // 0x0068(0x0010)(ReferenceParm)
	class UAsyncTaskOpenDlg*                      CallFunc_OpenDlg_ReturnValue;                      // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0084(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0085(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
DUMPER7_ASSERTS_BP_TalkQuestInfo_C_ExecuteUbergraph_BP_TalkQuestInfo;

// Function BP_TalkQuestInfo.BP_TalkQuestInfo_C.ParseParaments
// 0x0010 (0x0010 - 0x0000)
struct BP_TalkQuestInfo_C_ParseParaments final
{
public:
	TArray<class FString>                         ParamentString;                                    // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
DUMPER7_ASSERTS_BP_TalkQuestInfo_C_ParseParaments;

// Function BP_TalkQuestInfo.BP_TalkQuestInfo_C.HandleProcessing
// 0x0004 (0x0004 - 0x0000)
struct BP_TalkQuestInfo_C_HandleProcessing final
{
public:
	int32                                         NPCId;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BP_TalkQuestInfo_C_HandleProcessing;

// Function BP_TalkQuestInfo.BP_TalkQuestInfo_C.OnDlgClosed_852DBC404ECC542C9B61818F6181A259
// 0x0004 (0x0004 - 0x0000)
struct BP_TalkQuestInfo_C_OnDlgClosed_852DBC404ECC542C9B61818F6181A259 final
{
public:
	int32                                         NPCId;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BP_TalkQuestInfo_C_OnDlgClosed_852DBC404ECC542C9B61818F6181A259;

// Function BP_TalkQuestInfo.BP_TalkQuestInfo_C.OnDlgSelectedOption_852DBC404ECC542C9B61818F6181A259
// 0x0004 (0x0004 - 0x0000)
struct BP_TalkQuestInfo_C_OnDlgSelectedOption_852DBC404ECC542C9B61818F6181A259 final
{
public:
	int32                                         NPCId;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BP_TalkQuestInfo_C_OnDlgSelectedOption_852DBC404ECC542C9B61818F6181A259;

// Function BP_TalkQuestInfo.BP_TalkQuestInfo_C.IsProcessed
// 0x0008 (0x0008 - 0x0000)
struct BP_TalkQuestInfo_C_IsProcessed final
{
public:
	int32                                         NPCId;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CheckFinishState_ReturnValue;             // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
DUMPER7_ASSERTS_BP_TalkQuestInfo_C_IsProcessed;

SDK_PARAM_NAMESPACE_END
SDK_NAMESPACE_END
