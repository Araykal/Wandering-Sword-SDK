#pragma once



// Package: BPVE_JHTip_Common

#include "Basic.hpp"


SDK_NAMESPACE_START
SDK_PARAM_NAMESPACE_START

// Function BPVE_JHTip_Common.BPVE_JHTip_Common_C.ExecuteUbergraph_BPVE_JHTip_Common
// 0x0040 (0x0040 - 0x0000)
struct BPVE_JHTip_Common_C_ExecuteUbergraph_BPVE_JHTip_Common final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UNeoUIContainerVisualBase*>      K2Node_MakeArray_Array;                            // 0x0008(0x0010)(ReferenceParm, ContainsInstancedReference)
	class FText                                   CallFunc_GetValueSafe_Text_ReturnValue;            // 0x0018(0x0018)()
	class FString                                 CallFunc_GetValueSafe_String_ReturnValue;          // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BPVE_JHTip_Common_C_ExecuteUbergraph_BPVE_JHTip_Common;

SDK_PARAM_NAMESPACE_END
SDK_NAMESPACE_END
