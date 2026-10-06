#pragma once



// Package: BP_Guidance_MountPet_1

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "JH_structs.hpp"
#include "UMG_structs.hpp"


SDK_NAMESPACE_START
SDK_PARAM_NAMESPACE_START

// Function BP_Guidance_MountPet_1.BP_Guidance_MountPet_1_C.ExecuteUbergraph_BP_Guidance_MountPet_1
// 0x0018 (0x0018 - 0x0000)
struct BP_Guidance_MountPet_1_C_ExecuteUbergraph_BP_Guidance_MountPet_1 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_Event_MsgName;                              // 0x0004(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FJHNeoUI_GuidanceStepViewMessageParam  K2Node_Event_MsgParam;                             // 0x000C(0x000C)(NoDestructor)
};
DUMPER7_ASSERTS_BP_Guidance_MountPet_1_C_ExecuteUbergraph_BP_Guidance_MountPet_1;

// Function BP_Guidance_MountPet_1.BP_Guidance_MountPet_1_C.EVT_ReceiveStepMessage
// 0x0014 (0x0014 - 0x0000)
struct BP_Guidance_MountPet_1_C_EVT_ReceiveStepMessage final
{
public:
	class FName                                   MsgName;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FJHNeoUI_GuidanceStepViewMessageParam  MsgParam;                                          // 0x0008(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};
DUMPER7_ASSERTS_BP_Guidance_MountPet_1_C_EVT_ReceiveStepMessage;

// Function BP_Guidance_MountPet_1.BP_Guidance_MountPet_1_C.OnMouseButtonDown_0
// 0x0218 (0x0218 - 0x0000)
struct BP_Guidance_MountPet_1_C_OnMouseButtonDown_0 final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0038(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                            ReturnValue;                                       // 0x00A8(0x00B8)(Parm, OutParm, ReturnParm)
	struct FEventReply                            CallFunc_Handled_ReturnValue;                      // 0x0160(0x00B8)()
};
DUMPER7_ASSERTS_BP_Guidance_MountPet_1_C_OnMouseButtonDown_0;

SDK_PARAM_NAMESPACE_END
SDK_NAMESPACE_END
