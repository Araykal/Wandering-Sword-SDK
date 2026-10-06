#pragma once



// Package: VE_JHMessage

#include "Basic.hpp"


SDK_NAMESPACE_START
SDK_PARAM_NAMESPACE_START

// Function VE_JHMessage.VE_JHMessage_C.ExecuteUbergraph_VE_JHMessage
// 0x0028 (0x0028 - 0x0000)
struct VE_JHMessage_C_ExecuteUbergraph_VE_JHMessage final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   K2Node_Event_Msg;                                  // 0x0010(0x0018)(ConstParm)
};
DUMPER7_ASSERTS_VE_JHMessage_C_ExecuteUbergraph_VE_JHMessage;

// Function VE_JHMessage.VE_JHMessage_C.EVT_StartShow
// 0x0018 (0x0018 - 0x0000)
struct VE_JHMessage_C_EVT_StartShow final
{
public:
	class FText                                   Msg;                                               // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
DUMPER7_ASSERTS_VE_JHMessage_C_EVT_StartShow;

SDK_PARAM_NAMESPACE_END
SDK_NAMESPACE_END
