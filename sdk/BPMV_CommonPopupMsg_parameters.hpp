#pragma once



// Package: BPMV_CommonPopupMsg

#include "Basic.hpp"


SDK_NAMESPACE_START
SDK_PARAM_NAMESPACE_START

// Function BPMV_CommonPopupMsg.BPMV_CommonPopupMsg_C.ExecuteUbergraph_BPMV_CommonPopupMsg
// 0x0058 (0x0058 - 0x0000)
struct BPMV_CommonPopupMsg_C_ExecuteUbergraph_BPMV_CommonPopupMsg final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<class FName, class UNeoUINamedSlot*>     K2Node_MakeMap_Map;                                // 0x0008(0x0050)(ContainsInstancedReference)
};
DUMPER7_ASSERTS_BPMV_CommonPopupMsg_C_ExecuteUbergraph_BPMV_CommonPopupMsg;

SDK_PARAM_NAMESPACE_END
SDK_NAMESPACE_END
