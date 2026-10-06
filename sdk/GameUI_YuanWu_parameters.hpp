#pragma once



// Package: GameUI_YuanWu

#include "Basic.hpp"


SDK_NAMESPACE_START
SDK_PARAM_NAMESPACE_START

// Function GameUI_YuanWu.GameUI_YuanWu_C.ExecuteUbergraph_GameUI_YuanWu
// 0x0018 (0x0018 - 0x0000)
struct GameUI_YuanWu_C_ExecuteUbergraph_GameUI_YuanWu final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_IsGamepadMode_ReturnValue;             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UJHGameUI_YuanWu_Ele*>           K2Node_MakeArray_Array;                            // 0x0008(0x0010)(ReferenceParm, ContainsInstancedReference)
};
DUMPER7_ASSERTS_GameUI_YuanWu_C_ExecuteUbergraph_GameUI_YuanWu;

SDK_PARAM_NAMESPACE_END
SDK_NAMESPACE_END
