#pragma once



// Package: BPVE_HUD_QuestStep

#include "Basic.hpp"


SDK_NAMESPACE_START
SDK_PARAM_NAMESPACE_START

// Function BPVE_HUD_QuestStep.BPVE_HUD_QuestStep_C.ExecuteUbergraph_BPVE_HUD_QuestStep
// 0x0020 (0x0020 - 0x0000)
struct BPVE_HUD_QuestStep_C_ExecuteUbergraph_BPVE_HUD_QuestStep final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetValueSafe_Bool_ReturnValue;            // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetValueSafe_Text_ReturnValue;            // 0x0008(0x0018)()
};
DUMPER7_ASSERTS_BPVE_HUD_QuestStep_C_ExecuteUbergraph_BPVE_HUD_QuestStep;

SDK_PARAM_NAMESPACE_END
SDK_NAMESPACE_END
