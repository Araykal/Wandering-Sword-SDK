#pragma once



// Package: BPVE_SimpleTip

#include "Basic.hpp"


SDK_NAMESPACE_START
SDK_PARAM_NAMESPACE_START

// Function BPVE_SimpleTip.BPVE_SimpleTip_C.ExecuteUbergraph_BPVE_SimpleTip
// 0x0020 (0x0020 - 0x0000)
struct BPVE_SimpleTip_C_ExecuteUbergraph_BPVE_SimpleTip final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetValueSafe_Text_ReturnValue;            // 0x0008(0x0018)()
};
DUMPER7_ASSERTS_BPVE_SimpleTip_C_ExecuteUbergraph_BPVE_SimpleTip;

SDK_PARAM_NAMESPACE_END
SDK_NAMESPACE_END
