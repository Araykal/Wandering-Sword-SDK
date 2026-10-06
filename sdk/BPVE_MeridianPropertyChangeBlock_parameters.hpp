#pragma once



// Package: BPVE_MeridianPropertyChangeBlock

#include "Basic.hpp"


SDK_NAMESPACE_START
SDK_PARAM_NAMESPACE_START

// Function BPVE_MeridianPropertyChangeBlock.BPVE_MeridianPropertyChangeBlock_C.ExecuteUbergraph_BPVE_MeridianPropertyChangeBlock
// 0x0038 (0x0038 - 0x0000)
struct BPVE_MeridianPropertyChangeBlock_C_ExecuteUbergraph_BPVE_MeridianPropertyChangeBlock final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_NextText_ReturnValue;                     // 0x0008(0x0018)()
	TArray<class UNeoUIContainerVisualBase*>      K2Node_MakeArray_Array;                            // 0x0020(0x0010)(ReferenceParm, ContainsInstancedReference)
	bool                                          CallFunc_GetValueSafe_Bool_ReturnValue;            // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_ShouldShowNext_ReturnValue;               // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
DUMPER7_ASSERTS_BPVE_MeridianPropertyChangeBlock_C_ExecuteUbergraph_BPVE_MeridianPropertyChangeBlock;

SDK_PARAM_NAMESPACE_END
SDK_NAMESPACE_END
