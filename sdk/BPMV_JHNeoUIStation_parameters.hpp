#pragma once



// Package: BPMV_JHNeoUIStation

#include "Basic.hpp"


SDK_NAMESPACE_START
SDK_PARAM_NAMESPACE_START

// Function BPMV_JHNeoUIStation.BPMV_JHNeoUIStation_C.ExecuteUbergraph_BPMV_JHNeoUIStation
// 0x0010 (0x0010 - 0x0000)
struct BPMV_JHNeoUIStation_C_ExecuteUbergraph_BPMV_JHNeoUIStation final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UNeoUIBlueprintableVMBase*              CallFunc_GetOwnerVM_Unsafe_ReturnValue;            // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BPMV_JHNeoUIStation_C_ExecuteUbergraph_BPMV_JHNeoUIStation;

SDK_PARAM_NAMESPACE_END
SDK_NAMESPACE_END
