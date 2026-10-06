#pragma once



// Package: BPVE_BattleSpellBottomItem

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


SDK_NAMESPACE_START
SDK_PARAM_NAMESPACE_START

// Function BPVE_BattleSpellBottomItem.BPVE_BattleSpellBottomItem_C.ExecuteUbergraph_BPVE_BattleSpellBottomItem
// 0x0068 (0x0068 - 0x0000)
struct BPVE_BattleSpellBottomItem_C_ExecuteUbergraph_BPVE_BattleSpellBottomItem final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UNeoUICommonButton*                     K2Node_ComponentBoundEvent_SrcWidget_1;            // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNeoUICommonButton*                     K2Node_ComponentBoundEvent_SrcWidget;              // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJHNeoUIGamepadConfirmButton*           K2Node_ComponentBoundEvent_Btn;                    // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFocusEvent                            K2Node_Event_InFocusEvent;                         // 0x0020(0x0008)(NoDestructor)
	class UJHNeoUISubsystem*                      CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetValueSafe_Int32_ReturnValue;           // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UJHNeoUITipsModuleVM_Gamepad*           CallFunc_Tips_Gamepad_ReturnValue;                 // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetValueSafe_Int32_ReturnValue_1;         // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_intFlag;                              // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 K2Node_Event_strFlag;                              // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UJHNeoUITipsSpellVE3*                   CallFunc_ShowSpell_ReturnValue;                    // 0x0058(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_is_current;                           // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsGamepadConfirmOrCancelValid_ReturnValue; // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
DUMPER7_ASSERTS_BPVE_BattleSpellBottomItem_C_ExecuteUbergraph_BPVE_BattleSpellBottomItem;

// Function BPVE_BattleSpellBottomItem.BPVE_BattleSpellBottomItem_C.EVT_UpdateIsCurrentStatus
// 0x0001 (0x0001 - 0x0000)
struct BPVE_BattleSpellBottomItem_C_EVT_UpdateIsCurrentStatus final
{
public:
	bool                                          is_current;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
DUMPER7_ASSERTS_BPVE_BattleSpellBottomItem_C_EVT_UpdateIsCurrentStatus;

// Function BPVE_BattleSpellBottomItem.BPVE_BattleSpellBottomItem_C.EVT_GamepadShowTips
// 0x0018 (0x0018 - 0x0000)
struct BPVE_BattleSpellBottomItem_C_EVT_GamepadShowTips final
{
public:
	int32                                         intflag;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 strFlag;                                           // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BPVE_BattleSpellBottomItem_C_EVT_GamepadShowTips;

// Function BPVE_BattleSpellBottomItem.BPVE_BattleSpellBottomItem_C.OnAddedToFocusPath
// 0x0008 (0x0008 - 0x0000)
struct BPVE_BattleSpellBottomItem_C_OnAddedToFocusPath final
{
public:
	struct FFocusEvent                            InFocusEvent;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};
DUMPER7_ASSERTS_BPVE_BattleSpellBottomItem_C_OnAddedToFocusPath;

// Function BPVE_BattleSpellBottomItem.BPVE_BattleSpellBottomItem_C.BndEvt__BPVE_BattleSpellSingle_BTN_BattleSkillCell_K2Node_ComponentBoundEvent_2_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct BPVE_BattleSpellBottomItem_C_BndEvt__BPVE_BattleSpellSingle_BTN_BattleSkillCell_K2Node_ComponentBoundEvent_2_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature final
{
public:
	class UJHNeoUIGamepadConfirmButton*           Btn;                                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BPVE_BattleSpellBottomItem_C_BndEvt__BPVE_BattleSpellSingle_BTN_BattleSkillCell_K2Node_ComponentBoundEvent_2_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature;

// Function BPVE_BattleSpellBottomItem.BPVE_BattleSpellBottomItem_C.BndEvt__BPVE_BattleSpellSingle_BTN_Main_K2Node_ComponentBoundEvent_1_NeoUICommonButtonMouseEnter__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct BPVE_BattleSpellBottomItem_C_BndEvt__BPVE_BattleSpellSingle_BTN_Main_K2Node_ComponentBoundEvent_1_NeoUICommonButtonMouseEnter__DelegateSignature final
{
public:
	class UNeoUICommonButton*                     SrcWidget;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BPVE_BattleSpellBottomItem_C_BndEvt__BPVE_BattleSpellSingle_BTN_Main_K2Node_ComponentBoundEvent_1_NeoUICommonButtonMouseEnter__DelegateSignature;

// Function BPVE_BattleSpellBottomItem.BPVE_BattleSpellBottomItem_C.BndEvt__BPVE_BattleSpellSingle_BTN_Main_K2Node_ComponentBoundEvent_0_NeoUICommonButtonSingleClick__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct BPVE_BattleSpellBottomItem_C_BndEvt__BPVE_BattleSpellSingle_BTN_Main_K2Node_ComponentBoundEvent_0_NeoUICommonButtonSingleClick__DelegateSignature final
{
public:
	class UNeoUICommonButton*                     SrcWidget;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BPVE_BattleSpellBottomItem_C_BndEvt__BPVE_BattleSpellSingle_BTN_Main_K2Node_ComponentBoundEvent_0_NeoUICommonButtonSingleClick__DelegateSignature;

// Function BPVE_BattleSpellBottomItem.BPVE_BattleSpellBottomItem_C.GetToolTipWidget_1
// 0x0028 (0x0028 - 0x0000)
struct BPVE_BattleSpellBottomItem_C_GetToolTipWidget_1 final
{
public:
	class UWidget*                                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetValueSafe_Int32_ReturnValue;           // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetValueSafe_Int32_ReturnValue_1;         // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJHNeoUISubsystem*                      CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJHNeoUITipsModuleVM*                   CallFunc_Tips_ReturnValue;                         // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJHNeoUITipsSpellVE3*                   CallFunc_ShowSpell_ReturnValue;                    // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BPVE_BattleSpellBottomItem_C_GetToolTipWidget_1;

SDK_PARAM_NAMESPACE_END
SDK_NAMESPACE_END
