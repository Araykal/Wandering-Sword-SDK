#pragma once



// Package: BPMV_JHUIHUD

#include "Basic.hpp"

#include "JH_structs.hpp"
#include "Engine_structs.hpp"
#include "NeoUI_structs.hpp"


SDK_NAMESPACE_START
SDK_PARAM_NAMESPACE_START

// Function BPMV_JHUIHUD.BPMV_JHUIHUD_C.ExecuteUbergraph_BPMV_JHUIHUD
// 0x0318 (0x0318 - 0x0000)
struct BPMV_JHUIHUD_C_ExecuteUbergraph_BPMV_JHUIHUD final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_MouseCursor_SkillUpgrading_C*       CallFunc_Create_ReturnValue;                       // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJHNeoUISubsystem*                      CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 NPCId, bool bNext, class FName NewAvatarName)> K2Node_CreateDelegate_OutputDelegate; // 0x0018(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsNPCLeaveButtonValid_ReturnValue;        // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_BoolToString_ReturnValue;            // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_Reason_1;                       // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44[0x4];                                       // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_MouseCursor_Decompo_C*              CallFunc_Create_ReturnValue_1;                     // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_Reason;                         // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54[0x4];                                       // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FJHNeoUINGP_InheritanceResult          K2Node_CustomEvent_DepartureConfig;                // 0x0058(0x0168)()
	class UBP_MouseCursor_Selling_C*              CallFunc_Create_ReturnValue_2;                     // 0x01C0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x01C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNeoUISubsystem*                        CallFunc_GetGameInstanceSubsystem_ReturnValue_1;   // 0x01D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNeoUIModuleVMBase*                     CallFunc_ShowModuleSingular_ReturnValue;           // 0x01D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJHNeoUINGP_SettlementVM*               K2Node_DynamicCast_AsJHNeo_UINGP_Settlement_VM;    // 0x01E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x01E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1E9[0x7];                                      // 0x01E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UJHNeoUISubsystem*                      CallFunc_GetGameInstanceSubsystem_ReturnValue_2;   // 0x01F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_ContentFlag;                    // 0x01F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1FC[0x4];                                      // 0x01FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0200(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0240(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0250(0x0018)()
	class FName                                   K2Node_Event_MessageHeader;                        // 0x0268(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnyTypeUniversalPointerBase*           K2Node_Event_MessageBody;                          // 0x0270(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0278(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;          // 0x0288(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue_1;        // 0x0289(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue_2;        // 0x028A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_28B[0x1];                                      // 0x028B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_Status;                         // 0x028C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_NPCID_1;                        // 0x0290(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0294(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ENeoUIGamepadButtonType                       K2Node_CustomEvent_ButtonType;                     // 0x0295(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_296[0x2];                                      // 0x0296(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x0298(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 K2Node_CustomEvent_GuidanceType_1;                 // 0x02A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UJHNeoUISubsystem*                      CallFunc_GetGameInstanceSubsystem_ReturnValue_3;   // 0x02B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_NPCID;                          // 0x02C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bNext;                          // 0x02C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2C5[0x3];                                      // 0x02C5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_CustomEvent_NewAvatarName;                  // 0x02C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsReleaseMode_UI_ReturnValue;             // 0x02D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2D1[0x7];                                      // 0x02D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UItemManager*                           CallFunc_GetGameInstanceSubsystem_ReturnValue_4;   // 0x02D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UNeoUIContainerVisualBase*>      K2Node_MakeArray_Array_1;                          // 0x02E0(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UItemInfoSpec*                          CallFunc_AddItem_ReturnValue;                      // 0x02F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_param;                          // 0x02F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2FC[0x4];                                      // 0x02FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_CustomEvent_GuidanceType;                   // 0x0300(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_StyleFlag;                      // 0x0310(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BPMV_JHUIHUD_C_ExecuteUbergraph_BPMV_JHUIHUD;

// Function BPMV_JHUIHUD.BPMV_JHUIHUD_C.HandleFSModuleHide
// 0x0004 (0x0004 - 0x0000)
struct BPMV_JHUIHUD_C_HandleFSModuleHide final
{
public:
	int32                                         StyleFlag;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BPMV_JHUIHUD_C_HandleFSModuleHide;

// Function BPMV_JHUIHUD.BPMV_JHUIHUD_C.OnClusterFinished_Event_0
// 0x0010 (0x0010 - 0x0000)
struct BPMV_JHUIHUD_C_OnClusterFinished_Event_0 final
{
public:
	class FString                                 GuidanceType;                                      // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BPMV_JHUIHUD_C_OnClusterFinished_Event_0;

// Function BPMV_JHUIHUD.BPMV_JHUIHUD_C.OnProgressEnd_Event_0
// 0x0004 (0x0004 - 0x0000)
struct BPMV_JHUIHUD_C_OnProgressEnd_Event_0 final
{
public:
	int32                                         Param;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BPMV_JHUIHUD_C_OnProgressEnd_Event_0;

// Function BPMV_JHUIHUD.BPMV_JHUIHUD_C.OnPortraitChanged_Event_0
// 0x0010 (0x0010 - 0x0000)
struct BPMV_JHUIHUD_C_OnPortraitChanged_Event_0 final
{
public:
	int32                                         NPCId;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bNext;                                             // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   NewAvatarName;                                     // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BPMV_JHUIHUD_C_OnPortraitChanged_Event_0;

// Function BPMV_JHUIHUD.BPMV_JHUIHUD_C.GuidanceEnd
// 0x0010 (0x0010 - 0x0000)
struct BPMV_JHUIHUD_C_GuidanceEnd final
{
public:
	class FString                                 GuidanceType;                                      // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BPMV_JHUIHUD_C_GuidanceEnd;

// Function BPMV_JHUIHUD.BPMV_JHUIHUD_C.OnGamepadKeyPressed_Event_0
// 0x0001 (0x0001 - 0x0000)
struct BPMV_JHUIHUD_C_OnGamepadKeyPressed_Event_0 final
{
public:
	ENeoUIGamepadButtonType                       ButtonType;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BPMV_JHUIHUD_C_OnGamepadKeyPressed_Event_0;

// Function BPMV_JHUIHUD.BPMV_JHUIHUD_C.OnDialogueVisibilityChanged_Event_0
// 0x0008 (0x0008 - 0x0000)
struct BPMV_JHUIHUD_C_OnDialogueVisibilityChanged_Event_0 final
{
public:
	int32                                         Status;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         NPCId;                                             // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BPMV_JHUIHUD_C_OnDialogueVisibilityChanged_Event_0;

// Function BPMV_JHUIHUD.BPMV_JHUIHUD_C.ReceiveModuleMessage
// 0x0010 (0x0010 - 0x0000)
struct BPMV_JHUIHUD_C_ReceiveModuleMessage final
{
public:
	class FName                                   MessageHeader;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnyTypeUniversalPointerBase*           MessageBody;                                       // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BPMV_JHUIHUD_C_ReceiveModuleMessage;

// Function BPMV_JHUIHUD.BPMV_JHUIHUD_C.FullscreenScrollHideEvent
// 0x0004 (0x0004 - 0x0000)
struct BPMV_JHUIHUD_C_FullscreenScrollHideEvent final
{
public:
	int32                                         ContentFlag;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BPMV_JHUIHUD_C_FullscreenScrollHideEvent;

// Function BPMV_JHUIHUD.BPMV_JHUIHUD_C.OnNGPDeparture_Event_0
// 0x0168 (0x0168 - 0x0000)
struct BPMV_JHUIHUD_C_OnNGPDeparture_Event_0 final
{
public:
	struct FJHNeoUINGP_InheritanceResult          DepartureConfig;                                   // 0x0000(0x0168)(BlueprintVisible, BlueprintReadOnly, Parm)
};
DUMPER7_ASSERTS_BPMV_JHUIHUD_C_OnNGPDeparture_Event_0;

// Function BPMV_JHUIHUD.BPMV_JHUIHUD_C.OnNGPModuleClosing_Event_0
// 0x0004 (0x0004 - 0x0000)
struct BPMV_JHUIHUD_C_OnNGPModuleClosing_Event_0 final
{
public:
	int32                                         Reason;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BPMV_JHUIHUD_C_OnNGPModuleClosing_Event_0;

// Function BPMV_JHUIHUD.BPMV_JHUIHUD_C.OnNGPSettlementModuleClosing_Event_0
// 0x0004 (0x0004 - 0x0000)
struct BPMV_JHUIHUD_C_OnNGPSettlementModuleClosing_Event_0 final
{
public:
	int32                                         Reason;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BPMV_JHUIHUD_C_OnNGPSettlementModuleClosing_Event_0;

SDK_PARAM_NAMESPACE_END
SDK_NAMESPACE_END
