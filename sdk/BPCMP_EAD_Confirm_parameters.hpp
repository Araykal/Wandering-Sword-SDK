#pragma once



// Package: BPCMP_EAD_Confirm

#include "Basic.hpp"


SDK_NAMESPACE_START
SDK_PARAM_NAMESPACE_START

// Function BPCMP_EAD_Confirm.BPCMP_EAD_Confirm_C.ExecuteUbergraph_BPCMP_EAD_Confirm
// 0x0010 (0x0010 - 0x0000)
struct BPCMP_EAD_Confirm_C_ExecuteUbergraph_BPCMP_EAD_Confirm final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UJHNeoUIGamepadConfirmButton*           K2Node_ComponentBoundEvent_Btn;                    // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BPCMP_EAD_Confirm_C_ExecuteUbergraph_BPCMP_EAD_Confirm;

// Function BPCMP_EAD_Confirm.BPCMP_EAD_Confirm_C.BndEvt__BPCMP_EAD_Confirm_JHGPCBtn_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct BPCMP_EAD_Confirm_C_BndEvt__BPCMP_EAD_Confirm_JHGPCBtn_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature final
{
public:
	class UJHNeoUIGamepadConfirmButton*           Btn_0;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BPCMP_EAD_Confirm_C_BndEvt__BPCMP_EAD_Confirm_JHGPCBtn_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature;

SDK_PARAM_NAMESPACE_END
SDK_NAMESPACE_END
