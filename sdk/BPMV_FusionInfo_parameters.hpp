#pragma once



// Package: BPMV_FusionInfo

#include "Basic.hpp"


SDK_NAMESPACE_START
SDK_PARAM_NAMESPACE_START

// Function BPMV_FusionInfo.BPMV_FusionInfo_C.ExecuteUbergraph_BPMV_FusionInfo
// 0x0018 (0x0018 - 0x0000)
struct BPMV_FusionInfo_C_ExecuteUbergraph_BPMV_FusionInfo final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetValueSafe_Bool_ReturnValue;            // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UNeoUIContainerVisualBase*>      K2Node_MakeArray_Array;                            // 0x0008(0x0010)(ReferenceParm, ContainsInstancedReference)
};
DUMPER7_ASSERTS_BPMV_FusionInfo_C_ExecuteUbergraph_BPMV_FusionInfo;

SDK_PARAM_NAMESPACE_END
SDK_NAMESPACE_END
