#pragma once



// Package: GameUI_LuoShu

#include "Basic.hpp"


SDK_NAMESPACE_START
SDK_PARAM_NAMESPACE_START

// Function GameUI_LuoShu.GameUI_LuoShu_C.ExecuteUbergraph_GameUI_LuoShu
// 0x0018 (0x0018 - 0x0000)
struct GameUI_LuoShu_C_ExecuteUbergraph_GameUI_LuoShu final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_IsGamepadMode_ReturnValue;             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UJHNeoUIGamepadConfirmButton*           K2Node_ComponentBoundEvent_Btn;                    // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SwitchTutorialContent_ReturnValue;        // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_bHighlight;                           // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
DUMPER7_ASSERTS_GameUI_LuoShu_C_ExecuteUbergraph_GameUI_LuoShu;

// Function GameUI_LuoShu.GameUI_LuoShu_C.EVT_UpdateTutorialBtnHighlight
// 0x0001 (0x0001 - 0x0000)
struct GameUI_LuoShu_C_EVT_UpdateTutorialBtnHighlight final
{
public:
	bool                                          bHighlight;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
DUMPER7_ASSERTS_GameUI_LuoShu_C_EVT_UpdateTutorialBtnHighlight;

// Function GameUI_LuoShu.GameUI_LuoShu_C.BndEvt__GameUI_LuoShu_JHGPCBtn_K2Node_ComponentBoundEvent_1_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct GameUI_LuoShu_C_BndEvt__GameUI_LuoShu_JHGPCBtn_K2Node_ComponentBoundEvent_1_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature final
{
public:
	class UJHNeoUIGamepadConfirmButton*           Btn;                                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_GameUI_LuoShu_C_BndEvt__GameUI_LuoShu_JHGPCBtn_K2Node_ComponentBoundEvent_1_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature;

SDK_PARAM_NAMESPACE_END
SDK_NAMESPACE_END
