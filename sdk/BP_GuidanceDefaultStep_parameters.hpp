#pragma once



// Package: BP_GuidanceDefaultStep

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"


SDK_NAMESPACE_START
SDK_PARAM_NAMESPACE_START

// Function BP_GuidanceDefaultStep.BP_GuidanceDefaultStep_C.ExecuteUbergraph_BP_GuidanceDefaultStep
// 0x0030 (0x0030 - 0x0000)
struct BP_GuidanceDefaultStep_C_ExecuteUbergraph_BP_GuidanceDefaultStep final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UJHNeoUISubsystem*                      CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_CurStepIndex_ReturnValue;                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0018(0x0018)()
};
DUMPER7_ASSERTS_BP_GuidanceDefaultStep_C_ExecuteUbergraph_BP_GuidanceDefaultStep;

// Function BP_GuidanceDefaultStep.BP_GuidanceDefaultStep_C.OnMouseButtonDown_0
// 0x0218 (0x0218 - 0x0000)
struct BP_GuidanceDefaultStep_C_OnMouseButtonDown_0 final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0038(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                            ReturnValue;                                       // 0x00A8(0x00B8)(Parm, OutParm, ReturnParm)
	struct FEventReply                            CallFunc_Handled_ReturnValue;                      // 0x0160(0x00B8)()
};
DUMPER7_ASSERTS_BP_GuidanceDefaultStep_C_OnMouseButtonDown_0;

SDK_PARAM_NAMESPACE_END
SDK_NAMESPACE_END
