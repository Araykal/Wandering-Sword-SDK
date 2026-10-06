#pragma once



// Package: BPVE_JHTips_FCItem

#include "Basic.hpp"


SDK_NAMESPACE_START
SDK_PARAM_NAMESPACE_START

// Function BPVE_JHTips_FCItem.BPVE_JHTips_FCItem_C.ExecuteUbergraph_BPVE_JHTips_FCItem
// 0x0020 (0x0020 - 0x0000)
struct BPVE_JHTips_FCItem_C_ExecuteUbergraph_BPVE_JHTips_FCItem final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_isActive;                             // 0x0004(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Event_TT;                                   // 0x0008(0x0018)(ConstParm)
};
DUMPER7_ASSERTS_BPVE_JHTips_FCItem_C_ExecuteUbergraph_BPVE_JHTips_FCItem;

// Function BPVE_JHTips_FCItem.BPVE_JHTips_FCItem_C.EVT_SetItemTitle
// 0x0018 (0x0018 - 0x0000)
struct BPVE_JHTips_FCItem_C_EVT_SetItemTitle final
{
public:
	class FText                                   TT;                                                // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
DUMPER7_ASSERTS_BPVE_JHTips_FCItem_C_EVT_SetItemTitle;

// Function BPVE_JHTips_FCItem.BPVE_JHTips_FCItem_C.EVT_SetItemStatus
// 0x0001 (0x0001 - 0x0000)
struct BPVE_JHTips_FCItem_C_EVT_SetItemStatus final
{
public:
	bool                                          IsActive;                                          // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
DUMPER7_ASSERTS_BPVE_JHTips_FCItem_C_EVT_SetItemStatus;

SDK_PARAM_NAMESPACE_END
SDK_NAMESPACE_END
