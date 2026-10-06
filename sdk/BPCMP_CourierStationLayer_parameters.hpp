#pragma once



// Package: BPCMP_CourierStationLayer

#include "Basic.hpp"


SDK_NAMESPACE_START
SDK_PARAM_NAMESPACE_START

// Function BPCMP_CourierStationLayer.BPCMP_CourierStationLayer_C.ExecuteUbergraph_BPCMP_CourierStationLayer
// 0x0018 (0x0018 - 0x0000)
struct BPCMP_CourierStationLayer_C_ExecuteUbergraph_BPCMP_CourierStationLayer final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UJHNeoUIWorldMapLayer_CourierStationItem*> K2Node_MakeArray_Array;                  // 0x0008(0x0010)(ReferenceParm, ContainsInstancedReference)
};
DUMPER7_ASSERTS_BPCMP_CourierStationLayer_C_ExecuteUbergraph_BPCMP_CourierStationLayer;

SDK_PARAM_NAMESPACE_END
SDK_NAMESPACE_END
