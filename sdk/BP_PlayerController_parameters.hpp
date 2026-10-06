#pragma once



// Package: BP_PlayerController

#include "Basic.hpp"

#include "InputCore_structs.hpp"
#include "JH_structs.hpp"
#include "GameplayTags_structs.hpp"


SDK_NAMESPACE_START
SDK_PARAM_NAMESPACE_START

// Function BP_PlayerController.BP_PlayerController_C.ExecuteUbergraph_BP_PlayerController
// 0x01E0 (0x01E0 - 0x0000)
struct BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetSceneHero_ReturnValue;                 // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJHGameInstance*                        K2Node_DynamicCast_AsJHGame_Instance;              // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_SceneHero_C*                        K2Node_DynamicCast_AsBP_Scene_Hero;                // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  K2Node_Event_InPawn;                               // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_MiniMap_C*>                  CallFunc_GetAllActorsOfClass_OutActors;            // 0x0040(0x0010)(ReferenceParm)
	class ABP_MiniMap_C*                          CallFunc_Array_Get_Item;                           // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5A[0x2];                                       // 0x005A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61[0x7];                                       // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKey                                   K2Node_InputActionEvent_Key;                       // 0x0068(0x0018)(HasGetValueTypeHash)
	struct FKey                                   K2Node_InputActionEvent_Key_1;                     // 0x0080(0x0018)(HasGetValueTypeHash)
	struct FKey                                   K2Node_InputActionEvent_Key_2;                     // 0x0098(0x0018)(HasGetValueTypeHash)
	struct FKey                                   K2Node_InputActionEvent_Key_3;                     // 0x00B0(0x0018)(HasGetValueTypeHash)
	bool                                          CallFunc_IsReleaseMode_Game_ReturnValue;           // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsReleaseMode_Game_ReturnValue_1;         // 0x00C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsReleaseMode_Game_ReturnValue_2;         // 0x00CA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_CB[0x1];                                       // 0x00CB(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTag                           CallFunc_GetTagByCDType_ReturnValue;               // 0x00CC(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           CallFunc_GetTagByCDType_ReturnValue_1;             // 0x00D4(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           CallFunc_GetTagByCDType_ReturnValue_2;             // 0x00DC(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           CallFunc_GetTagByCDType_ReturnValue_3;             // 0x00E4(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           CallFunc_GetTagByCDType_ReturnValue_4;             // 0x00EC(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           CallFunc_GetTagByCDType_ReturnValue_5;             // 0x00F4(0x0008)(NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_FC[0x4];                                       // 0x00FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKey                                   K2Node_InputActionEvent_Key_4;                     // 0x0100(0x0018)(HasGetValueTypeHash)
	EControllerMode                               CallFunc_GetControllerMode_ReturnValue;            // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0119(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EControllerMode                               CallFunc_GetControllerMode_ReturnValue_1;          // 0x011A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x011B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11C[0x4];                                      // 0x011C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class ABP_MiniMap_C*>                  CallFunc_GetAllActorsOfClass_OutActors_1;          // 0x0120(0x0010)(ReferenceParm)
	class ABP_MiniMap_C*                          CallFunc_Array_Get_Item_1;                         // 0x0130(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EControllerMode                               CallFunc_GetControllerMode_ReturnValue_2;          // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0139(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x013A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EControllerMode                               CallFunc_GetControllerMode_ReturnValue_3;          // 0x013B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x013C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_3;        // 0x013D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_13E[0x2];                                      // 0x013E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKey                                   K2Node_InputActionEvent_Key_5;                     // 0x0140(0x0018)(HasGetValueTypeHash)
	struct FKey                                   K2Node_InputKeyEvent_Key;                          // 0x0158(0x0018)(HasGetValueTypeHash)
	struct FKey                                   K2Node_InputKeyEvent_Key_1;                        // 0x0170(0x0018)(HasGetValueTypeHash)
	struct FKey                                   K2Node_InputKeyEvent_Key_2;                        // 0x0188(0x0018)(HasGetValueTypeHash)
	EControllerMode                               CallFunc_GetControllerMode_ReturnValue_4;          // 0x01A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1A1[0x7];                                      // 0x01A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UNeoUISubsystem*                        CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x01A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_4;        // 0x01B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1B1[0x7];                                      // 0x01B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UNeoUIModuleVMBase*                     CallFunc_ShowModuleSingular_ReturnValue;           // 0x01B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EControllerMode                               CallFunc_GetControllerMode_ReturnValue_5;          // 0x01C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C1[0x7];                                      // 0x01C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UNeoUISubsystem*                        CallFunc_GetGameInstanceSubsystem_ReturnValue_1;   // 0x01C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_5;        // 0x01D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D1[0x7];                                      // 0x01D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UNeoUIModuleVMBase*                     CallFunc_ShowModuleSingular_ReturnValue_1;         // 0x01D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController;

// Function BP_PlayerController.BP_PlayerController_C.OnPossesMoved
// 0x0008 (0x0008 - 0x0000)
struct BP_PlayerController_C_OnPossesMoved final
{
public:
	class APawn*                                  InPawn;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BP_PlayerController_C_OnPossesMoved;

// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Battle_Skill_6_K2Node_InputActionEvent_0
// 0x0018 (0x0018 - 0x0000)
struct BP_PlayerController_C_InpActEvt_Battle_Skill_6_K2Node_InputActionEvent_0 final
{
public:
	struct FKey                                   Key;                                               // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BP_PlayerController_C_InpActEvt_Battle_Skill_6_K2Node_InputActionEvent_0;

// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Battle_Skill_5_K2Node_InputActionEvent_1
// 0x0018 (0x0018 - 0x0000)
struct BP_PlayerController_C_InpActEvt_Battle_Skill_5_K2Node_InputActionEvent_1 final
{
public:
	struct FKey                                   Key;                                               // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BP_PlayerController_C_InpActEvt_Battle_Skill_5_K2Node_InputActionEvent_1;

// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Battle_Skill_4_K2Node_InputActionEvent_2
// 0x0018 (0x0018 - 0x0000)
struct BP_PlayerController_C_InpActEvt_Battle_Skill_4_K2Node_InputActionEvent_2 final
{
public:
	struct FKey                                   Key;                                               // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BP_PlayerController_C_InpActEvt_Battle_Skill_4_K2Node_InputActionEvent_2;

// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Battle_Skill_3_K2Node_InputActionEvent_3
// 0x0018 (0x0018 - 0x0000)
struct BP_PlayerController_C_InpActEvt_Battle_Skill_3_K2Node_InputActionEvent_3 final
{
public:
	struct FKey                                   Key;                                               // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BP_PlayerController_C_InpActEvt_Battle_Skill_3_K2Node_InputActionEvent_3;

// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Battle_Skill_2_K2Node_InputActionEvent_4
// 0x0018 (0x0018 - 0x0000)
struct BP_PlayerController_C_InpActEvt_Battle_Skill_2_K2Node_InputActionEvent_4 final
{
public:
	struct FKey                                   Key;                                               // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BP_PlayerController_C_InpActEvt_Battle_Skill_2_K2Node_InputActionEvent_4;

// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Battle_Skill_1_K2Node_InputActionEvent_5
// 0x0018 (0x0018 - 0x0000)
struct BP_PlayerController_C_InpActEvt_Battle_Skill_1_K2Node_InputActionEvent_5 final
{
public:
	struct FKey                                   Key;                                               // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BP_PlayerController_C_InpActEvt_Battle_Skill_1_K2Node_InputActionEvent_5;

// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_LeftControl_K2Node_InputKeyEvent_0
// 0x0018 (0x0018 - 0x0000)
struct BP_PlayerController_C_InpActEvt_LeftControl_K2Node_InputKeyEvent_0 final
{
public:
	struct FKey                                   Key;                                               // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BP_PlayerController_C_InpActEvt_LeftControl_K2Node_InputKeyEvent_0;

// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Nine_K2Node_InputKeyEvent_1
// 0x0018 (0x0018 - 0x0000)
struct BP_PlayerController_C_InpActEvt_Nine_K2Node_InputKeyEvent_1 final
{
public:
	struct FKey                                   Key;                                               // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BP_PlayerController_C_InpActEvt_Nine_K2Node_InputKeyEvent_1;

// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Zero_K2Node_InputKeyEvent_2
// 0x0018 (0x0018 - 0x0000)
struct BP_PlayerController_C_InpActEvt_Zero_K2Node_InputKeyEvent_2 final
{
public:
	struct FKey                                   Key;                                               // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BP_PlayerController_C_InpActEvt_Zero_K2Node_InputKeyEvent_2;

SDK_PARAM_NAMESPACE_END
SDK_NAMESPACE_END
