#pragma once



// Package: BP_AutosaveTip

#include "Basic.hpp"


SDK_NAMESPACE_START
SDK_PARAM_NAMESPACE_START

// Function BP_AutosaveTip.BP_AutosaveTip_C.ExecuteUbergraph_BP_AutosaveTip
// 0x0010 (0x0010 - 0x0000)
struct BP_AutosaveTip_C_ExecuteUbergraph_BP_AutosaveTip final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BP_AutosaveTip_C_ExecuteUbergraph_BP_AutosaveTip;

SDK_PARAM_NAMESPACE_END
SDK_NAMESPACE_END
