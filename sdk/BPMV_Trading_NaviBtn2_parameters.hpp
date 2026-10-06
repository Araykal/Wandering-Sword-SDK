#pragma once



// Package: BPMV_Trading_NaviBtn2

#include "Basic.hpp"


SDK_NAMESPACE_START
SDK_PARAM_NAMESPACE_START

// Function BPMV_Trading_NaviBtn2.BPMV_Trading_NaviBtn2_C.ExecuteUbergraph_BPMV_Trading_NaviBtn2
// 0x0010 (0x0010 - 0x0000)
struct BPMV_Trading_NaviBtn2_C_ExecuteUbergraph_BPMV_Trading_NaviBtn2 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UJHNeoUIGamepadConfirmButton*           K2Node_ComponentBoundEvent_Btn;                    // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BPMV_Trading_NaviBtn2_C_ExecuteUbergraph_BPMV_Trading_NaviBtn2;

// Function BPMV_Trading_NaviBtn2.BPMV_Trading_NaviBtn2_C.BndEvt__BPMV_Trading_NaviBtn2_Btn_TradingNavi_K2Node_ComponentBoundEvent_1_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct BPMV_Trading_NaviBtn2_C_BndEvt__BPMV_Trading_NaviBtn2_Btn_TradingNavi_K2Node_ComponentBoundEvent_1_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature final
{
public:
	class UJHNeoUIGamepadConfirmButton*           Btn_0;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BPMV_Trading_NaviBtn2_C_BndEvt__BPMV_Trading_NaviBtn2_Btn_TradingNavi_K2Node_ComponentBoundEvent_1_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature;

// Function BPMV_Trading_NaviBtn2.BPMV_Trading_NaviBtn2_C.ChangeIFAData
// 0x0010 (0x0010 - 0x0000)
struct BPMV_Trading_NaviBtn2_C_ChangeIFAData final
{
public:
	class FString                                 AreaTag;                                           // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BPMV_Trading_NaviBtn2_C_ChangeIFAData;

SDK_PARAM_NAMESPACE_END
SDK_NAMESPACE_END
