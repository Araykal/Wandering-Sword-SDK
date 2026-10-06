#pragma once



// Package: BPCMP_BulkSelectionButton_Trading

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"


SDK_NAMESPACE_START
SDK_PARAM_NAMESPACE_START

// Function BPCMP_BulkSelectionButton_Trading.BPCMP_BulkSelectionButton_Trading_C.ExecuteUbergraph_BPCMP_BulkSelectionButton_Trading
// 0x0010 (0x0010 - 0x0000)
struct BPCMP_BulkSelectionButton_Trading_C_ExecuteUbergraph_BPCMP_BulkSelectionButton_Trading final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UJHNeoUIGamepadConfirmButton*           K2Node_ComponentBoundEvent_Btn;                    // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BPCMP_BulkSelectionButton_Trading_C_ExecuteUbergraph_BPCMP_BulkSelectionButton_Trading;

// Function BPCMP_BulkSelectionButton_Trading.BPCMP_BulkSelectionButton_Trading_C.BndEvt__BPCMP_BulkSelectionButton_Trading_Btn_TradingBulkBtn_K2Node_ComponentBoundEvent_1_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct BPCMP_BulkSelectionButton_Trading_C_BndEvt__BPCMP_BulkSelectionButton_Trading_Btn_TradingBulkBtn_K2Node_ComponentBoundEvent_1_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature final
{
public:
	class UJHNeoUIGamepadConfirmButton*           Btn_0;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BPCMP_BulkSelectionButton_Trading_C_BndEvt__BPCMP_BulkSelectionButton_Trading_Btn_TradingBulkBtn_K2Node_ComponentBoundEvent_1_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature;

// Function BPCMP_BulkSelectionButton_Trading.BPCMP_BulkSelectionButton_Trading_C.OnMouseButtonDown_0
// 0x0218 (0x0218 - 0x0000)
struct BPCMP_BulkSelectionButton_Trading_C_OnMouseButtonDown_0 final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0038(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                            ReturnValue;                                       // 0x00A8(0x00B8)(Parm, OutParm, ReturnParm)
	struct FEventReply                            CallFunc_Handled_ReturnValue;                      // 0x0160(0x00B8)()
};
DUMPER7_ASSERTS_BPCMP_BulkSelectionButton_Trading_C_OnMouseButtonDown_0;

SDK_PARAM_NAMESPACE_END
SDK_NAMESPACE_END
