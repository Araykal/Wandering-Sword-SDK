#pragma once



// Package: BPCMP_EDBHint

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


SDK_NAMESPACE_START
SDK_PARAM_NAMESPACE_START

// Function BPCMP_EDBHint.BPCMP_EDBHint_C.ExecuteUbergraph_BPCMP_EDBHint
// 0x01C8 (0x01C8 - 0x0000)
struct BPCMP_EDBHint_C_ExecuteUbergraph_BPCMP_EDBHint final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              K2Node_Event_InGeometry;                           // 0x0004(0x0038)(ConstParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerEvent                          K2Node_Event_InMouseEvent;                         // 0x0040(0x0070)(ConstParm)
	struct FGeometry                              K2Node_Event_InGeometry_1;                         // 0x00B0(0x0038)(ConstParm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          K2Node_Event_InMouseEvent_2;                       // 0x00E8(0x0070)(ConstParm)
	struct FPointerEvent                          K2Node_Event_InMouseEvent_1;                       // 0x0158(0x0070)(ConstParm)
};
DUMPER7_ASSERTS_BPCMP_EDBHint_C_ExecuteUbergraph_BPCMP_EDBHint;

// Function BPCMP_EDBHint.BPCMP_EDBHint_C.EVT_OnMouseLeftDown
// 0x00A8 (0x00A8 - 0x0000)
struct BPCMP_EDBHint_C_EVT_OnMouseLeftDown final
{
public:
	struct FGeometry                              InGeometry;                                        // 0x0000(0x0038)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          InMouseEvent;                                      // 0x0038(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
DUMPER7_ASSERTS_BPCMP_EDBHint_C_EVT_OnMouseLeftDown;

// Function BPCMP_EDBHint.BPCMP_EDBHint_C.EVT_OnMouseLeave
// 0x0070 (0x0070 - 0x0000)
struct BPCMP_EDBHint_C_EVT_OnMouseLeave final
{
public:
	struct FPointerEvent                          InMouseEvent;                                      // 0x0000(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
DUMPER7_ASSERTS_BPCMP_EDBHint_C_EVT_OnMouseLeave;

// Function BPCMP_EDBHint.BPCMP_EDBHint_C.EVT_OnMouseEnter
// 0x00A8 (0x00A8 - 0x0000)
struct BPCMP_EDBHint_C_EVT_OnMouseEnter final
{
public:
	struct FGeometry                              InGeometry;                                        // 0x0000(0x0038)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          InMouseEvent;                                      // 0x0038(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
DUMPER7_ASSERTS_BPCMP_EDBHint_C_EVT_OnMouseEnter;

SDK_PARAM_NAMESPACE_END
SDK_NAMESPACE_END
