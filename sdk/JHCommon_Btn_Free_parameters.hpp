#pragma once



// Package: JHCommon_Btn_Free

#include "Basic.hpp"


SDK_NAMESPACE_START
SDK_PARAM_NAMESPACE_START

// Function JHCommon_Btn_Free.JHCommon_Btn_Free_C.ExecuteUbergraph_JHCommon_Btn_Free
// 0x0010 (0x0010 - 0x0000)
struct JHCommon_Btn_Free_C_ExecuteUbergraph_JHCommon_Btn_Free final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UJHNeoUIGamepadConfirmButton*           K2Node_ComponentBoundEvent_Btn;                    // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_JHCommon_Btn_Free_C_ExecuteUbergraph_JHCommon_Btn_Free;

// Function JHCommon_Btn_Free.JHCommon_Btn_Free_C.BndEvt__JHCommon_Btn_JHGPCBtn_K2Node_ComponentBoundEvent_2_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct JHCommon_Btn_Free_C_BndEvt__JHCommon_Btn_JHGPCBtn_K2Node_ComponentBoundEvent_2_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature final
{
public:
	class UJHNeoUIGamepadConfirmButton*           Btn_0;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_JHCommon_Btn_Free_C_BndEvt__JHCommon_Btn_JHGPCBtn_K2Node_ComponentBoundEvent_2_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature;

// Function JHCommon_Btn_Free.JHCommon_Btn_Free_C.ChangeIFAData
// 0x0010 (0x0010 - 0x0000)
struct JHCommon_Btn_Free_C_ChangeIFAData final
{
public:
	class FString                                 Str;                                               // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_JHCommon_Btn_Free_C_ChangeIFAData;

SDK_PARAM_NAMESPACE_END
SDK_NAMESPACE_END
