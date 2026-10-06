#pragma once



// Package: BP_JHConfigTabBtn

#include "Basic.hpp"


SDK_NAMESPACE_START
SDK_PARAM_NAMESPACE_START

// Function BP_JHConfigTabBtn.BP_JHConfigTabBtn_C.ExecuteUbergraph_BP_JHConfigTabBtn
// 0x0018 (0x0018 - 0x0000)
struct BP_JHConfigTabBtn_C_ExecuteUbergraph_BP_JHConfigTabBtn final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_isActive;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UJHNeoUIGamepadConfirmButton*           K2Node_ComponentBoundEvent_Btn;                    // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_IsGamepadMode_ReturnValue;             // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
DUMPER7_ASSERTS_BP_JHConfigTabBtn_C_ExecuteUbergraph_BP_JHConfigTabBtn;

// Function BP_JHConfigTabBtn.BP_JHConfigTabBtn_C.BndEvt__BP_JHConfigTabBtn_BTN_ConfigTabBtn_K2Node_ComponentBoundEvent_1_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct BP_JHConfigTabBtn_C_BndEvt__BP_JHConfigTabBtn_BTN_ConfigTabBtn_K2Node_ComponentBoundEvent_1_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature final
{
public:
	class UJHNeoUIGamepadConfirmButton*           Btn;                                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BP_JHConfigTabBtn_C_BndEvt__BP_JHConfigTabBtn_BTN_ConfigTabBtn_K2Node_ComponentBoundEvent_1_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature;

// Function BP_JHConfigTabBtn.BP_JHConfigTabBtn_C.EVT_UpdateActiveStatus
// 0x0001 (0x0001 - 0x0000)
struct BP_JHConfigTabBtn_C_EVT_UpdateActiveStatus final
{
public:
	bool                                          IsActive;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
DUMPER7_ASSERTS_BP_JHConfigTabBtn_C_EVT_UpdateActiveStatus;

SDK_PARAM_NAMESPACE_END
SDK_NAMESPACE_END
