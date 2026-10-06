#pragma once



// Package: BP_QuestInfoBase

#include "Basic.hpp"

#include "JH_structs.hpp"
#include "MovieScene_structs.hpp"


SDK_NAMESPACE_START
SDK_PARAM_NAMESPACE_START

// Function BP_QuestInfoBase.BP_QuestInfoBase_C.ExecuteUbergraph_BP_QuestInfoBase
// 0x0560 (0x0560 - 0x0000)
struct BP_QuestInfoBase_C_ExecuteUbergraph_BP_QuestInfoBase final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetFuncId_ReturnValue;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_NPCID_21;                       // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 NPCId)>                  K2Node_CreateDelegate_OutputDelegate;              // 0x000C(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         K2Node_CustomEvent_NPCID_20;                       // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 NPCId)>                  K2Node_CreateDelegate_OutputDelegate_1;            // 0x0020(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         ___int_Variable;                                   // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 NPCId)>                  K2Node_CreateDelegate_OutputDelegate_2;            // 0x0034(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         K2Node_CustomEvent_NPCID_19;                       // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_NPCID_18;                       // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 NPCId)>                  K2Node_CreateDelegate_OutputDelegate_3;            // 0x004C(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         ___int_Variable_1;                                 // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 NPCId)>                  K2Node_CreateDelegate_OutputDelegate_4;            // 0x0060(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         K2Node_CustomEvent_NPCID_17;                       // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_NPCID_16;                       // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 NPCId)>                  K2Node_CreateDelegate_OutputDelegate_5;            // 0x0078(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         ___int_Variable_2;                                 // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 NPCId)>                  K2Node_CreateDelegate_OutputDelegate_6;            // 0x008C(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         K2Node_CustomEvent_NPCID_15;                       // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_NPCID_14;                       // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 NPCId)>                  K2Node_CreateDelegate_OutputDelegate_7;            // 0x00A4(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         ___int_Variable_3;                                 // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 NPCId)>                  K2Node_CreateDelegate_OutputDelegate_8;            // 0x00B8(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         K2Node_CustomEvent_NPCID_13;                       // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_NPCID_12;                       // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 NPCId)>                  K2Node_CreateDelegate_OutputDelegate_9;            // 0x00D0(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         ___int_Variable_4;                                 // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 NPCId)>                  K2Node_CreateDelegate_OutputDelegate_10;           // 0x00E4(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         K2Node_CustomEvent_NPCID_11;                       // 0x00F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_NPCID_10;                       // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 NPCId)>                  K2Node_CreateDelegate_OutputDelegate_11;           // 0x00FC(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         ___int_Variable_5;                                 // 0x010C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_12;           // 0x0110(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_13;           // 0x0120(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_14;           // 0x0130(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_15;           // 0x0140(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         K2Node_CustomEvent_NPCID_9;                        // 0x0150(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 NPCId)>                  K2Node_CreateDelegate_OutputDelegate_16;           // 0x0154(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         K2Node_CustomEvent_NPCID_8;                        // 0x0164(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 NPCId)>                  K2Node_CreateDelegate_OutputDelegate_17;           // 0x0168(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         ___int_Variable_6;                                 // 0x0178(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 NPCId)>                  K2Node_CreateDelegate_OutputDelegate_18;           // 0x017C(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         K2Node_CustomEvent_NPCID_7;                        // 0x018C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_NPCID_6;                        // 0x0190(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 NPCId)>                  K2Node_CreateDelegate_OutputDelegate_19;           // 0x0194(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         ___int_Variable_7;                                 // 0x01A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_20;           // 0x01A8(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_21;           // 0x01B8(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         K2Node_CustomEvent_NPCID_5;                        // 0x01C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 NPCId)>                  K2Node_CreateDelegate_OutputDelegate_22;           // 0x01CC(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         K2Node_CustomEvent_NPCID_4;                        // 0x01DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 NPCId)>                  K2Node_CreateDelegate_OutputDelegate_23;           // 0x01E0(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         ___int_Variable_8;                                 // 0x01F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 NPCId)>                  K2Node_CreateDelegate_OutputDelegate_24;           // 0x01F4(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         K2Node_CustomEvent_NPCID_3;                        // 0x0204(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_NPCID_2;                        // 0x0208(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 NPCId)>                  K2Node_CreateDelegate_OutputDelegate_25;           // 0x020C(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         ___int_Variable_9;                                 // 0x021C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 NPCId)>                  K2Node_CreateDelegate_OutputDelegate_26;           // 0x0220(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         K2Node_CustomEvent_NPCID_1;                        // 0x0230(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_NPCID;                          // 0x0234(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 NPCId)>                  K2Node_CreateDelegate_OutputDelegate_27;           // 0x0238(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         ___int_Variable_10;                                // 0x0248(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24C[0x4];                                      // 0x024C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FDlgOptionSetting>              K2Node_MakeArray_Array;                            // 0x0250(0x0010)(ConstParm, ReferenceParm)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0260(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_261[0x3];                                      // 0x0261(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0264(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FDlgOptionSetting>              K2Node_MakeArray_Array_1;                          // 0x0268(0x0010)(ConstParm, ReferenceParm)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0278(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_279[0x7];                                      // 0x0279(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FDlgOptionSetting>              K2Node_MakeArray_Array_2;                          // 0x0280(0x0010)(ConstParm, ReferenceParm)
	int32                                         ___int_Variable_11;                                // 0x0290(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_294[0x4];                                      // 0x0294(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FDlgOptionSetting>              K2Node_MakeArray_Array_3;                          // 0x0298(0x0010)(ConstParm, ReferenceParm)
	int32                                         K2Node_Event_NPCID_8;                              // 0x02A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_NPCID_7;                              // 0x02AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_NPCID_6;                              // 0x02B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2B4[0x4];                                      // 0x02B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FDlgContentSetting>             CallFunc_GetProcessedDlgSettings_OutArray;         // 0x02B8(0x0010)(ReferenceParm)
	int32                                         K2Node_Event_NPCID_5;                              // 0x02C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x02CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x02D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2D1[0x7];                                      // 0x02D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FDlgContentSetting>             CallFunc_GetProcessFaildDlgSettings_OutArray;      // 0x02D8(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x02E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_NPCID_4;                              // 0x02EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_2;             // 0x02F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2F1[0x3];                                      // 0x02F1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Event_NPCID_3;                              // 0x02F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_NPCID_2;                              // 0x02F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_NPCID_1;                              // 0x02FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FDlgContentSetting>             CallFunc_GetNPCDefaultTalkDlg_OutContent;          // 0x0300(0x0010)(ReferenceParm)
	TArray<struct FDlgContentSetting>             CallFunc_GetNPCDefaultTalkDlg_OutContent_1;        // 0x0310(0x0010)(ReferenceParm)
	TArray<struct FDlgOptionSetting>              K2Node_MakeArray_Array_4;                          // 0x0320(0x0010)(ConstParm, ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue_3;               // 0x0330(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_3;             // 0x0334(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_335[0x3];                                      // 0x0335(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Event_NPCID;                                // 0x0338(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_33C[0x4];                                      // 0x033C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FDlgOptionSetting>              K2Node_MakeArray_Array_5;                          // 0x0340(0x0010)(ConstParm, ReferenceParm)
	int32                                         K2Node_CustomEvent_NPCID_22;                       // 0x0350(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_4;               // 0x0354(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_4;             // 0x0358(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_359[0x3];                                      // 0x0359(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(int32 NPCId)>                  K2Node_CreateDelegate_OutputDelegate_28;           // 0x035C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_36C[0x4];                                      // 0x036C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FDlgOptionSetting>              K2Node_MakeArray_Array_6;                          // 0x0370(0x0010)(ConstParm, ReferenceParm)
	TArray<struct FDlgOptionSetting>              K2Node_MakeArray_Array_7;                          // 0x0380(0x0010)(ConstParm, ReferenceParm)
	TArray<struct FDlgOptionSetting>              K2Node_MakeArray_Array_8;                          // 0x0390(0x0010)(ConstParm, ReferenceParm)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x03A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue_1; // 0x03A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3A2[0x2];                                      // 0x03A2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMovieSceneSequencePlaybackSettings    K2Node_MakeStruct_MovieSceneSequencePlaybackSettings; // 0x03A4(0x0014)(NoDestructor)
	struct FMovieSceneSequencePlaybackSettings    K2Node_MakeStruct_MovieSceneSequencePlaybackSettings_1; // 0x03B8(0x0014)(NoDestructor)
	uint8                                         Pad_3CC[0x4];                                      // 0x03CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAsyncTaskPlaySequence*                 CallFunc_PlaySequence_ReturnValue;                 // 0x03D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAsyncTaskPlaySequence*                 CallFunc_PlaySequence_ReturnValue_1;               // 0x03D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x03E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x03E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3E2[0x2];                                      // 0x03E2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_NPCID_23;                       // 0x03E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMovieSceneSequencePlaybackSettings    K2Node_MakeStruct_MovieSceneSequencePlaybackSettings_2; // 0x03E8(0x0014)(NoDestructor)
	TDelegate<void(int32 NPCId)>                  K2Node_CreateDelegate_OutputDelegate_29;           // 0x03FC(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         CallFunc_Array_Length_ReturnValue_5;               // 0x040C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAsyncTaskPlaySequence*                 CallFunc_PlaySequence_ReturnValue_2;               // 0x0410(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_5;             // 0x0418(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0419(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue_2; // 0x041A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41B[0x5];                                      // 0x041B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FDlgOptionSetting>              K2Node_MakeArray_Array_9;                          // 0x0420(0x0010)(ConstParm, ReferenceParm)
	TArray<struct FDlgOptionSetting>              K2Node_MakeArray_Array_10;                         // 0x0430(0x0010)(ConstParm, ReferenceParm)
	struct FDlgOptionSetting                      CallFunc_Array_Get_Item;                           // 0x0440(0x0050)()
	class UAsyncTaskOpenDlg*                      CallFunc_OpenDlg_ReturnValue;                      // 0x0490(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_6;               // 0x0498(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_6;             // 0x049C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x049D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49E[0x2];                                      // 0x049E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_7;               // 0x04A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_7;             // 0x04A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4A5[0x3];                                      // 0x04A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetFuncId_ReturnValue_1;                  // 0x04A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4AC[0x4];                                      // 0x04AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAsyncTaskOpenDlg*                      CallFunc_OpenDlg_ReturnValue_1;                    // 0x04B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetFuncId_ReturnValue_2;                  // 0x04B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4BC[0x4];                                      // 0x04BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAsyncTaskOpenDlg*                      CallFunc_OpenDlg_ReturnValue_2;                    // 0x04C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x04C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_5;                    // 0x04C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4CA[0x2];                                      // 0x04CA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetFuncId_ReturnValue_3;                  // 0x04CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAsyncTaskOpenDlg*                      CallFunc_OpenDlg_ReturnValue_3;                    // 0x04D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetFuncId_ReturnValue_4;                  // 0x04D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_6;                    // 0x04DC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4DD[0x3];                                      // 0x04DD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetFuncId_ReturnValue_5;                  // 0x04E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4E4[0x4];                                      // 0x04E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAsyncTaskOpenDlg*                      CallFunc_OpenDlg_ReturnValue_4;                    // 0x04E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_7;                    // 0x04F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4F1[0x3];                                      // 0x04F1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetFuncId_ReturnValue_6;                  // 0x04F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAsyncTaskOpenDlg*                      CallFunc_OpenDlg_ReturnValue_5;                    // 0x04F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAsyncTaskOpenDlg*                      CallFunc_OpenDlg_ReturnValue_6;                    // 0x0500(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_8;                    // 0x0508(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_9;                    // 0x0509(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_50A[0x2];                                      // 0x050A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetFuncId_ReturnValue_7;                  // 0x050C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAsyncTaskOpenDlg*                      CallFunc_OpenDlg_ReturnValue_7;                    // 0x0510(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetFuncId_ReturnValue_8;                  // 0x0518(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51C[0x4];                                      // 0x051C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAsyncTaskOpenDlg*                      CallFunc_OpenDlg_ReturnValue_8;                    // 0x0520(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_10;                   // 0x0528(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_11;                   // 0x0529(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_52A[0x2];                                      // 0x052A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetFuncId_ReturnValue_9;                  // 0x052C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAsyncTaskOpenDlg*                      CallFunc_OpenDlg_ReturnValue_9;                    // 0x0530(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetFuncId_ReturnValue_10;                 // 0x0538(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_53C[0x4];                                      // 0x053C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAsyncTaskOpenDlg*                      CallFunc_OpenDlg_ReturnValue_10;                   // 0x0540(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_12;                   // 0x0548(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_13;                   // 0x0549(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_54A[0x2];                                      // 0x054A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetFuncId_ReturnValue_11;                 // 0x054C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAsyncTaskOpenDlg*                      CallFunc_OpenDlg_ReturnValue_11;                   // 0x0550(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_14;                   // 0x0558(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
DUMPER7_ASSERTS_BP_QuestInfoBase_C_ExecuteUbergraph_BP_QuestInfoBase;

// Function BP_QuestInfoBase.BP_QuestInfoBase_C.HandleFailing
// 0x0004 (0x0004 - 0x0000)
struct BP_QuestInfoBase_C_HandleFailing final
{
public:
	int32                                         NPCId;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BP_QuestInfoBase_C_HandleFailing;

// Function BP_QuestInfoBase.BP_QuestInfoBase_C.HandleUnFinishForRequestNPC
// 0x0004 (0x0004 - 0x0000)
struct BP_QuestInfoBase_C_HandleUnFinishForRequestNPC final
{
public:
	int32                                         NPCId;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BP_QuestInfoBase_C_HandleUnFinishForRequestNPC;

// Function BP_QuestInfoBase.BP_QuestInfoBase_C.HandleUnFinishForFinishNPC
// 0x0004 (0x0004 - 0x0000)
struct BP_QuestInfoBase_C_HandleUnFinishForFinishNPC final
{
public:
	int32                                         NPCId;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BP_QuestInfoBase_C_HandleUnFinishForFinishNPC;

// Function BP_QuestInfoBase.BP_QuestInfoBase_C.HandleRequesting
// 0x0004 (0x0004 - 0x0000)
struct BP_QuestInfoBase_C_HandleRequesting final
{
public:
	int32                                         NPCId;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BP_QuestInfoBase_C_HandleRequesting;

// Function BP_QuestInfoBase.BP_QuestInfoBase_C.HandleRefuseRequested
// 0x0004 (0x0004 - 0x0000)
struct BP_QuestInfoBase_C_HandleRefuseRequested final
{
public:
	int32                                         NPCId;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BP_QuestInfoBase_C_HandleRefuseRequested;

// Function BP_QuestInfoBase.BP_QuestInfoBase_C.HandleProcessedFail
// 0x0004 (0x0004 - 0x0000)
struct BP_QuestInfoBase_C_HandleProcessedFail final
{
public:
	int32                                         NPCId;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BP_QuestInfoBase_C_HandleProcessedFail;

// Function BP_QuestInfoBase.BP_QuestInfoBase_C.HandleProcessed
// 0x0004 (0x0004 - 0x0000)
struct BP_QuestInfoBase_C_HandleProcessed final
{
public:
	int32                                         NPCId;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BP_QuestInfoBase_C_HandleProcessed;

// Function BP_QuestInfoBase.BP_QuestInfoBase_C.HandleAcceptRequested
// 0x0004 (0x0004 - 0x0000)
struct BP_QuestInfoBase_C_HandleAcceptRequested final
{
public:
	int32                                         NPCId;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BP_QuestInfoBase_C_HandleAcceptRequested;

// Function BP_QuestInfoBase.BP_QuestInfoBase_C.HandleFinishing
// 0x0004 (0x0004 - 0x0000)
struct BP_QuestInfoBase_C_HandleFinishing final
{
public:
	int32                                         NPCId;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BP_QuestInfoBase_C_HandleFinishing;

// Function BP_QuestInfoBase.BP_QuestInfoBase_C.OnDlgClosed_2A43ED6F45C5B7633D1200AEC8F9A6D0
// 0x0004 (0x0004 - 0x0000)
struct BP_QuestInfoBase_C_OnDlgClosed_2A43ED6F45C5B7633D1200AEC8F9A6D0 final
{
public:
	int32                                         NPCId;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BP_QuestInfoBase_C_OnDlgClosed_2A43ED6F45C5B7633D1200AEC8F9A6D0;

// Function BP_QuestInfoBase.BP_QuestInfoBase_C.OnDlgSelectedOption_2A43ED6F45C5B7633D1200AEC8F9A6D0
// 0x0004 (0x0004 - 0x0000)
struct BP_QuestInfoBase_C_OnDlgSelectedOption_2A43ED6F45C5B7633D1200AEC8F9A6D0 final
{
public:
	int32                                         NPCId;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BP_QuestInfoBase_C_OnDlgSelectedOption_2A43ED6F45C5B7633D1200AEC8F9A6D0;

// Function BP_QuestInfoBase.BP_QuestInfoBase_C.OnDlgClosed_23734BDA4EC10DC33CBE0DA6F03BC1FA
// 0x0004 (0x0004 - 0x0000)
struct BP_QuestInfoBase_C_OnDlgClosed_23734BDA4EC10DC33CBE0DA6F03BC1FA final
{
public:
	int32                                         NPCId;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BP_QuestInfoBase_C_OnDlgClosed_23734BDA4EC10DC33CBE0DA6F03BC1FA;

// Function BP_QuestInfoBase.BP_QuestInfoBase_C.OnDlgSelectedOption_23734BDA4EC10DC33CBE0DA6F03BC1FA
// 0x0004 (0x0004 - 0x0000)
struct BP_QuestInfoBase_C_OnDlgSelectedOption_23734BDA4EC10DC33CBE0DA6F03BC1FA final
{
public:
	int32                                         NPCId;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BP_QuestInfoBase_C_OnDlgSelectedOption_23734BDA4EC10DC33CBE0DA6F03BC1FA;

// Function BP_QuestInfoBase.BP_QuestInfoBase_C.OnDlgClosed_4C859CAE4CFFBF2B2982D9919A2295FD
// 0x0004 (0x0004 - 0x0000)
struct BP_QuestInfoBase_C_OnDlgClosed_4C859CAE4CFFBF2B2982D9919A2295FD final
{
public:
	int32                                         NPCId;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BP_QuestInfoBase_C_OnDlgClosed_4C859CAE4CFFBF2B2982D9919A2295FD;

// Function BP_QuestInfoBase.BP_QuestInfoBase_C.OnDlgSelectedOption_4C859CAE4CFFBF2B2982D9919A2295FD
// 0x0004 (0x0004 - 0x0000)
struct BP_QuestInfoBase_C_OnDlgSelectedOption_4C859CAE4CFFBF2B2982D9919A2295FD final
{
public:
	int32                                         NPCId;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BP_QuestInfoBase_C_OnDlgSelectedOption_4C859CAE4CFFBF2B2982D9919A2295FD;

// Function BP_QuestInfoBase.BP_QuestInfoBase_C.OnDlgClosed_9F52F59E48ECF39BBE5A8CB6814A58D7
// 0x0004 (0x0004 - 0x0000)
struct BP_QuestInfoBase_C_OnDlgClosed_9F52F59E48ECF39BBE5A8CB6814A58D7 final
{
public:
	int32                                         NPCId;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BP_QuestInfoBase_C_OnDlgClosed_9F52F59E48ECF39BBE5A8CB6814A58D7;

// Function BP_QuestInfoBase.BP_QuestInfoBase_C.OnDlgSelectedOption_9F52F59E48ECF39BBE5A8CB6814A58D7
// 0x0004 (0x0004 - 0x0000)
struct BP_QuestInfoBase_C_OnDlgSelectedOption_9F52F59E48ECF39BBE5A8CB6814A58D7 final
{
public:
	int32                                         NPCId;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BP_QuestInfoBase_C_OnDlgSelectedOption_9F52F59E48ECF39BBE5A8CB6814A58D7;

// Function BP_QuestInfoBase.BP_QuestInfoBase_C.OnDlgClosed_EF19A635482FC5150A8D22AC3A71AF60
// 0x0004 (0x0004 - 0x0000)
struct BP_QuestInfoBase_C_OnDlgClosed_EF19A635482FC5150A8D22AC3A71AF60 final
{
public:
	int32                                         NPCId;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BP_QuestInfoBase_C_OnDlgClosed_EF19A635482FC5150A8D22AC3A71AF60;

// Function BP_QuestInfoBase.BP_QuestInfoBase_C.OnDlgSelectedOption_EF19A635482FC5150A8D22AC3A71AF60
// 0x0004 (0x0004 - 0x0000)
struct BP_QuestInfoBase_C_OnDlgSelectedOption_EF19A635482FC5150A8D22AC3A71AF60 final
{
public:
	int32                                         NPCId;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BP_QuestInfoBase_C_OnDlgSelectedOption_EF19A635482FC5150A8D22AC3A71AF60;

// Function BP_QuestInfoBase.BP_QuestInfoBase_C.OnDlgClosed_15034C0C4C67E1A0C577B7B1BD403E77
// 0x0004 (0x0004 - 0x0000)
struct BP_QuestInfoBase_C_OnDlgClosed_15034C0C4C67E1A0C577B7B1BD403E77 final
{
public:
	int32                                         NPCId;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BP_QuestInfoBase_C_OnDlgClosed_15034C0C4C67E1A0C577B7B1BD403E77;

// Function BP_QuestInfoBase.BP_QuestInfoBase_C.OnDlgSelectedOption_15034C0C4C67E1A0C577B7B1BD403E77
// 0x0004 (0x0004 - 0x0000)
struct BP_QuestInfoBase_C_OnDlgSelectedOption_15034C0C4C67E1A0C577B7B1BD403E77 final
{
public:
	int32                                         NPCId;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BP_QuestInfoBase_C_OnDlgSelectedOption_15034C0C4C67E1A0C577B7B1BD403E77;

// Function BP_QuestInfoBase.BP_QuestInfoBase_C.OnDlgClosed_36E78E7E43FAE39A5A94EA90D0EE06A2
// 0x0004 (0x0004 - 0x0000)
struct BP_QuestInfoBase_C_OnDlgClosed_36E78E7E43FAE39A5A94EA90D0EE06A2 final
{
public:
	int32                                         NPCId;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BP_QuestInfoBase_C_OnDlgClosed_36E78E7E43FAE39A5A94EA90D0EE06A2;

// Function BP_QuestInfoBase.BP_QuestInfoBase_C.OnDlgSelectedOption_36E78E7E43FAE39A5A94EA90D0EE06A2
// 0x0004 (0x0004 - 0x0000)
struct BP_QuestInfoBase_C_OnDlgSelectedOption_36E78E7E43FAE39A5A94EA90D0EE06A2 final
{
public:
	int32                                         NPCId;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BP_QuestInfoBase_C_OnDlgSelectedOption_36E78E7E43FAE39A5A94EA90D0EE06A2;

// Function BP_QuestInfoBase.BP_QuestInfoBase_C.OnDlgClosed_CECA94894A98EE13C03F01B8A23CB0E2
// 0x0004 (0x0004 - 0x0000)
struct BP_QuestInfoBase_C_OnDlgClosed_CECA94894A98EE13C03F01B8A23CB0E2 final
{
public:
	int32                                         NPCId;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BP_QuestInfoBase_C_OnDlgClosed_CECA94894A98EE13C03F01B8A23CB0E2;

// Function BP_QuestInfoBase.BP_QuestInfoBase_C.OnDlgSelectedOption_CECA94894A98EE13C03F01B8A23CB0E2
// 0x0004 (0x0004 - 0x0000)
struct BP_QuestInfoBase_C_OnDlgSelectedOption_CECA94894A98EE13C03F01B8A23CB0E2 final
{
public:
	int32                                         NPCId;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BP_QuestInfoBase_C_OnDlgSelectedOption_CECA94894A98EE13C03F01B8A23CB0E2;

// Function BP_QuestInfoBase.BP_QuestInfoBase_C.OnDlgClosed_1D5C0E444EA853DC82EDD0938109C547
// 0x0004 (0x0004 - 0x0000)
struct BP_QuestInfoBase_C_OnDlgClosed_1D5C0E444EA853DC82EDD0938109C547 final
{
public:
	int32                                         NPCId;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BP_QuestInfoBase_C_OnDlgClosed_1D5C0E444EA853DC82EDD0938109C547;

// Function BP_QuestInfoBase.BP_QuestInfoBase_C.OnDlgSelectedOption_1D5C0E444EA853DC82EDD0938109C547
// 0x0004 (0x0004 - 0x0000)
struct BP_QuestInfoBase_C_OnDlgSelectedOption_1D5C0E444EA853DC82EDD0938109C547 final
{
public:
	int32                                         NPCId;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BP_QuestInfoBase_C_OnDlgSelectedOption_1D5C0E444EA853DC82EDD0938109C547;

// Function BP_QuestInfoBase.BP_QuestInfoBase_C.OnDlgClosed_7CC9790C4E3197FD4176558C2452A86E
// 0x0004 (0x0004 - 0x0000)
struct BP_QuestInfoBase_C_OnDlgClosed_7CC9790C4E3197FD4176558C2452A86E final
{
public:
	int32                                         NPCId;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BP_QuestInfoBase_C_OnDlgClosed_7CC9790C4E3197FD4176558C2452A86E;

// Function BP_QuestInfoBase.BP_QuestInfoBase_C.OnDlgSelectedOption_7CC9790C4E3197FD4176558C2452A86E
// 0x0004 (0x0004 - 0x0000)
struct BP_QuestInfoBase_C_OnDlgSelectedOption_7CC9790C4E3197FD4176558C2452A86E final
{
public:
	int32                                         NPCId;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BP_QuestInfoBase_C_OnDlgSelectedOption_7CC9790C4E3197FD4176558C2452A86E;

// Function BP_QuestInfoBase.BP_QuestInfoBase_C.OnDlgClosed_386CC3E241B30D007F23BE91158B202F
// 0x0004 (0x0004 - 0x0000)
struct BP_QuestInfoBase_C_OnDlgClosed_386CC3E241B30D007F23BE91158B202F final
{
public:
	int32                                         NPCId;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BP_QuestInfoBase_C_OnDlgClosed_386CC3E241B30D007F23BE91158B202F;

// Function BP_QuestInfoBase.BP_QuestInfoBase_C.OnDlgSelectedOption_386CC3E241B30D007F23BE91158B202F
// 0x0004 (0x0004 - 0x0000)
struct BP_QuestInfoBase_C_OnDlgSelectedOption_386CC3E241B30D007F23BE91158B202F final
{
public:
	int32                                         NPCId;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BP_QuestInfoBase_C_OnDlgSelectedOption_386CC3E241B30D007F23BE91158B202F;

// Function BP_QuestInfoBase.BP_QuestInfoBase_C.OnDlgClosed_229189604100CD879F284B8E7CAC7ECE
// 0x0004 (0x0004 - 0x0000)
struct BP_QuestInfoBase_C_OnDlgClosed_229189604100CD879F284B8E7CAC7ECE final
{
public:
	int32                                         NPCId;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BP_QuestInfoBase_C_OnDlgClosed_229189604100CD879F284B8E7CAC7ECE;

// Function BP_QuestInfoBase.BP_QuestInfoBase_C.OnDlgSelectedOption_229189604100CD879F284B8E7CAC7ECE
// 0x0004 (0x0004 - 0x0000)
struct BP_QuestInfoBase_C_OnDlgSelectedOption_229189604100CD879F284B8E7CAC7ECE final
{
public:
	int32                                         NPCId;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BP_QuestInfoBase_C_OnDlgSelectedOption_229189604100CD879F284B8E7CAC7ECE;

// Function BP_QuestInfoBase.BP_QuestInfoBase_C.IsProcessed
// 0x0008 (0x0008 - 0x0000)
struct BP_QuestInfoBase_C_IsProcessed final
{
public:
	int32                                         NPCId;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};
DUMPER7_ASSERTS_BP_QuestInfoBase_C_IsProcessed;

SDK_PARAM_NAMESPACE_END
SDK_NAMESPACE_END
