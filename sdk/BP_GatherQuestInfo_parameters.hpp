#pragma once



// Package: BP_GatherQuestInfo

#include "Basic.hpp"

#include "JH_structs.hpp"


SDK_NAMESPACE_START
SDK_PARAM_NAMESPACE_START

// Function BP_GatherQuestInfo.BP_GatherQuestInfo_C.ExecuteUbergraph_BP_GatherQuestInfo
// 0x00C8 (0x00C8 - 0x0000)
struct BP_GatherQuestInfo_C_ExecuteUbergraph_BP_GatherQuestInfo final
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
	TDelegate<void(class UProgressBarWidget* ProgressBar)> K2Node_CreateDelegate_OutputDelegate_2;   // 0x0044(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_54[0x4];                                       // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UProgressBarWidget*                     K2Node_CustomEvent_ProgressBar;                    // 0x0058(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UProgressBarWidget*                     ___object_Variable;                                // 0x0060(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAsyncTaskOpenProgressBar*              CallFunc_OpenProgressBar_ReturnValue;              // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_71[0x3];                                       // 0x0071(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ___int_Array_Index_Variable;                       // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ___int_Loop_Counter_Variable;                      // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_NPCID;                                // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_84[0x4];                                       // 0x0084(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FDlgOptionSetting>              K2Node_MakeArray_Array;                            // 0x0088(0x0010)(ConstParm, ReferenceParm)
	TArray<struct FDlgContentSetting>             CallFunc_GetProcessingDlgSettings_OutArray;        // 0x0098(0x0010)(ReferenceParm)
	class UAsyncTaskOpenDlg*                      CallFunc_OpenDlg_ReturnValue;                      // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Get_Item;                           // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_B5[0x3];                                       // 0x00B5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00BC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_BD[0x3];                                       // 0x00BD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x00C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
DUMPER7_ASSERTS_BP_GatherQuestInfo_C_ExecuteUbergraph_BP_GatherQuestInfo;

// Function BP_GatherQuestInfo.BP_GatherQuestInfo_C.ParseParaments
// 0x0010 (0x0010 - 0x0000)
struct BP_GatherQuestInfo_C_ParseParaments final
{
public:
	TArray<class FString>                         ParamentString;                                    // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
DUMPER7_ASSERTS_BP_GatherQuestInfo_C_ParseParaments;

// Function BP_GatherQuestInfo.BP_GatherQuestInfo_C.HandleProcessing
// 0x0004 (0x0004 - 0x0000)
struct BP_GatherQuestInfo_C_HandleProcessing final
{
public:
	int32                                         NPCId;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BP_GatherQuestInfo_C_HandleProcessing;

// Function BP_GatherQuestInfo.BP_GatherQuestInfo_C.OnProgressEnd_FFDCEA5A454ED4E9B2FCB9BF5F34AD92
// 0x0008 (0x0008 - 0x0000)
struct BP_GatherQuestInfo_C_OnProgressEnd_FFDCEA5A454ED4E9B2FCB9BF5F34AD92 final
{
public:
	class UProgressBarWidget*                     ProgressBar;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BP_GatherQuestInfo_C_OnProgressEnd_FFDCEA5A454ED4E9B2FCB9BF5F34AD92;

// Function BP_GatherQuestInfo.BP_GatherQuestInfo_C.OnDlgClosed_067409BF4F3D0CB707566ABA6DC88E85
// 0x0004 (0x0004 - 0x0000)
struct BP_GatherQuestInfo_C_OnDlgClosed_067409BF4F3D0CB707566ABA6DC88E85 final
{
public:
	int32                                         NPCId;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BP_GatherQuestInfo_C_OnDlgClosed_067409BF4F3D0CB707566ABA6DC88E85;

// Function BP_GatherQuestInfo.BP_GatherQuestInfo_C.OnDlgSelectedOption_067409BF4F3D0CB707566ABA6DC88E85
// 0x0004 (0x0004 - 0x0000)
struct BP_GatherQuestInfo_C_OnDlgSelectedOption_067409BF4F3D0CB707566ABA6DC88E85 final
{
public:
	int32                                         NPCId;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BP_GatherQuestInfo_C_OnDlgSelectedOption_067409BF4F3D0CB707566ABA6DC88E85;

// Function BP_GatherQuestInfo.BP_GatherQuestInfo_C.IsProcessed
// 0x0008 (0x0008 - 0x0000)
struct BP_GatherQuestInfo_C_IsProcessed final
{
public:
	int32                                         NPCId;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CheckFinishState_ReturnValue;             // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
DUMPER7_ASSERTS_BP_GatherQuestInfo_C_IsProcessed;

SDK_PARAM_NAMESPACE_END
SDK_NAMESPACE_END
