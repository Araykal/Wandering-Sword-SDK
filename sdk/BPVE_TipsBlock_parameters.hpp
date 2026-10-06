#pragma once



// Package: BPVE_TipsBlock

#include "Basic.hpp"


SDK_NAMESPACE_START
SDK_PARAM_NAMESPACE_START

// Function BPVE_TipsBlock.BPVE_TipsBlock_C.ExecuteUbergraph_BPVE_TipsBlock
// 0x0010 (0x0010 - 0x0000)
struct BPVE_TipsBlock_C_ExecuteUbergraph_BPVE_TipsBlock final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BPVE_TipsBlock_C_ExecuteUbergraph_BPVE_TipsBlock;

SDK_PARAM_NAMESPACE_END
SDK_NAMESPACE_END
