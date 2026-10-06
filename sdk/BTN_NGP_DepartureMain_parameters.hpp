#pragma once



// Package: BTN_NGP_DepartureMain

#include "Basic.hpp"


SDK_NAMESPACE_START
SDK_PARAM_NAMESPACE_START

// Function BTN_NGP_DepartureMain.BTN_NGP_DepartureMain_C.ExecuteUbergraph_BTN_NGP_DepartureMain
// 0x0010 (0x0010 - 0x0000)
struct BTN_NGP_DepartureMain_C_ExecuteUbergraph_BTN_NGP_DepartureMain final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UJHNeoUIGamepadConfirmButton*           K2Node_ComponentBoundEvent_Btn;                    // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BTN_NGP_DepartureMain_C_ExecuteUbergraph_BTN_NGP_DepartureMain;

// Function BTN_NGP_DepartureMain.BTN_NGP_DepartureMain_C.BndEvt__JHCommon_Btn_JHGPCBtn_K2Node_ComponentBoundEvent_2_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct BTN_NGP_DepartureMain_C_BndEvt__JHCommon_Btn_JHGPCBtn_K2Node_ComponentBoundEvent_2_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature final
{
public:
	class UJHNeoUIGamepadConfirmButton*           Btn_0;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BTN_NGP_DepartureMain_C_BndEvt__JHCommon_Btn_JHGPCBtn_K2Node_ComponentBoundEvent_2_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature;

// Function BTN_NGP_DepartureMain.BTN_NGP_DepartureMain_C.ChangeIFAData
// 0x0010 (0x0010 - 0x0000)
struct BTN_NGP_DepartureMain_C_ChangeIFAData final
{
public:
	class FString                                 Str;                                               // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BTN_NGP_DepartureMain_C_ChangeIFAData;

SDK_PARAM_NAMESPACE_END
SDK_NAMESPACE_END
