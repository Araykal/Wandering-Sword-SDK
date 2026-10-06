#pragma once



// Package: BPMV_Alchemy

#include "Basic.hpp"


SDK_NAMESPACE_START
SDK_PARAM_NAMESPACE_START

// Function BPMV_Alchemy.BPMV_Alchemy_C.ExecuteUbergraph_BPMV_Alchemy
// 0x0070 (0x0070 - 0x0000)
struct BPMV_Alchemy_C_ExecuteUbergraph_BPMV_Alchemy final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UGamepadActiveAreaDisplay*>      K2Node_MakeArray_Array;                            // 0x0008(0x0010)(ReferenceParm, ContainsInstancedReference)
	bool                                          CallFunc_BP_IsGamepadMode_ReturnValue;             // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<class FName, class UNeoUINamedSlot*>     K2Node_MakeMap_Map;                                // 0x0020(0x0050)(ContainsInstancedReference)
};
DUMPER7_ASSERTS_BPMV_Alchemy_C_ExecuteUbergraph_BPMV_Alchemy;

SDK_PARAM_NAMESPACE_END
SDK_NAMESPACE_END
