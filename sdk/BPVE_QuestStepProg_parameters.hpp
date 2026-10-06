#pragma once



// Package: BPVE_QuestStepProg

#include "Basic.hpp"


SDK_NAMESPACE_START
SDK_PARAM_NAMESPACE_START

// Function BPVE_QuestStepProg.BPVE_QuestStepProg_C.ExecuteUbergraph_BPVE_QuestStepProg
// 0x0058 (0x0058 - 0x0000)
struct BPVE_QuestStepProg_C_ExecuteUbergraph_BPVE_QuestStepProg final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetValueSafe_Int32_ReturnValue;           // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0008(0x0018)()
	class FText                                   CallFunc_GetValueSafe_Text_ReturnValue;            // 0x0020(0x0018)()
	int32                                         CallFunc_GetValueSafe_Int32_ReturnValue_1;         // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x0040(0x0018)()
};
DUMPER7_ASSERTS_BPVE_QuestStepProg_C_ExecuteUbergraph_BPVE_QuestStepProg;

SDK_PARAM_NAMESPACE_END
SDK_NAMESPACE_END
