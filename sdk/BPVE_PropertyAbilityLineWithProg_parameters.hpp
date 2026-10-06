#pragma once



// Package: BPVE_PropertyAbilityLineWithProg

#include "Basic.hpp"


SDK_NAMESPACE_START
SDK_PARAM_NAMESPACE_START

// Function BPVE_PropertyAbilityLineWithProg.BPVE_PropertyAbilityLineWithProg_C.ExecuteUbergraph_BPVE_PropertyAbilityLineWithProg
// 0x0058 (0x0058 - 0x0000)
struct BPVE_PropertyAbilityLineWithProg_C_ExecuteUbergraph_BPVE_PropertyAbilityLineWithProg final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_intFlag;                              // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 K2Node_Event_strFlag;                              // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UJHNeoUISubsystem*                      CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJHNeoUITipsModuleVM_Gamepad*           CallFunc_Tips_Gamepad_ReturnValue;                 // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetAttributeTipsText_ReturnValue;         // 0x0028(0x0018)()
	class UJHNeoUIGamepadConfirmButton*           K2Node_ComponentBoundEvent_Btn;                    // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJHSimpleTip*                           CallFunc_ShowSimple_ReturnValue;                   // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
DUMPER7_ASSERTS_BPVE_PropertyAbilityLineWithProg_C_ExecuteUbergraph_BPVE_PropertyAbilityLineWithProg;

// Function BPVE_PropertyAbilityLineWithProg.BPVE_PropertyAbilityLineWithProg_C.BndEvt__BPVE_PropertyAbilityLineWithProg_BTN_PropertyAbilityLineWithProg_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct BPVE_PropertyAbilityLineWithProg_C_BndEvt__BPVE_PropertyAbilityLineWithProg_BTN_PropertyAbilityLineWithProg_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature final
{
public:
	class UJHNeoUIGamepadConfirmButton*           Btn;                                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BPVE_PropertyAbilityLineWithProg_C_BndEvt__BPVE_PropertyAbilityLineWithProg_BTN_PropertyAbilityLineWithProg_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature;

// Function BPVE_PropertyAbilityLineWithProg.BPVE_PropertyAbilityLineWithProg_C.EVT_GamepadShowTips
// 0x0018 (0x0018 - 0x0000)
struct BPVE_PropertyAbilityLineWithProg_C_EVT_GamepadShowTips final
{
public:
	int32                                         intflag;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 strFlag;                                           // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BPVE_PropertyAbilityLineWithProg_C_EVT_GamepadShowTips;

// Function BPVE_PropertyAbilityLineWithProg.BPVE_PropertyAbilityLineWithProg_C.Get Tool Tip Widget 0
// 0x0038 (0x0038 - 0x0000)
struct BPVE_PropertyAbilityLineWithProg_C_Get_Tool_Tip_Widget_0 final
{
public:
	class UWidget*                                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJHNeoUISubsystem*                      CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetAttributeTipsText_ReturnValue;         // 0x0010(0x0018)()
	class UJHNeoUITipsModuleVM*                   CallFunc_Tips_ReturnValue;                         // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJHSimpleTip*                           CallFunc_ShowSimple_ReturnValue;                   // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BPVE_PropertyAbilityLineWithProg_C_Get_Tool_Tip_Widget_0;

SDK_PARAM_NAMESPACE_END
SDK_NAMESPACE_END
