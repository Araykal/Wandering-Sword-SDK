#pragma once



// Package: BPCMP_JHBtn_T1

#include "Basic.hpp"


SDK_NAMESPACE_START
SDK_PARAM_NAMESPACE_START

// Function BPCMP_JHBtn_T1.BPCMP_JHBtn_T1_C.ExecuteUbergraph_BPCMP_JHBtn_T1
// 0x0010 (0x0010 - 0x0000)
struct BPCMP_JHBtn_T1_C_ExecuteUbergraph_BPCMP_JHBtn_T1 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UJHNeoUIGamepadConfirmButton*           K2Node_ComponentBoundEvent_Btn;                    // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BPCMP_JHBtn_T1_C_ExecuteUbergraph_BPCMP_JHBtn_T1;

// Function BPCMP_JHBtn_T1.BPCMP_JHBtn_T1_C.BndEvt__BPCMP_JHBtn_T1_BTN_1BTN1TXT_K2Node_ComponentBoundEvent_1_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct BPCMP_JHBtn_T1_C_BndEvt__BPCMP_JHBtn_T1_BTN_1BTN1TXT_K2Node_ComponentBoundEvent_1_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature final
{
public:
	class UJHNeoUIGamepadConfirmButton*           Btn_0;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BPCMP_JHBtn_T1_C_BndEvt__BPCMP_JHBtn_T1_BTN_1BTN1TXT_K2Node_ComponentBoundEvent_1_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature;

// Function BPCMP_JHBtn_T1.BPCMP_JHBtn_T1_C.SetEanbleButton
// 0x0002 (0x0002 - 0x0000)
struct BPCMP_JHBtn_T1_C_SetEanbleButton final
{
public:
	bool                                          InEnable;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
DUMPER7_ASSERTS_BPCMP_JHBtn_T1_C_SetEanbleButton;

SDK_PARAM_NAMESPACE_END
SDK_NAMESPACE_END
