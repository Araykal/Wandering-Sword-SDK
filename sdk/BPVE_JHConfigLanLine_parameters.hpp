#pragma once



// Package: BPVE_JHConfigLanLine

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"


SDK_NAMESPACE_START
SDK_PARAM_NAMESPACE_START

// Function BPVE_JHConfigLanLine.BPVE_JHConfigLanLine_C.ExecuteUbergraph_BPVE_JHConfigLanLine
// 0x0008 (0x0008 - 0x0000)
struct BPVE_JHConfigLanLine_C_ExecuteUbergraph_BPVE_JHConfigLanLine final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_ComponentBoundEvent_Value;                  // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BPVE_JHConfigLanLine_C_ExecuteUbergraph_BPVE_JHConfigLanLine;

// Function BPVE_JHConfigLanLine.BPVE_JHConfigLanLine_C.BndEvt__BPMV_JHConfigVolumeItem_Slider_126_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct BPVE_JHConfigLanLine_C_BndEvt__BPMV_JHConfigVolumeItem_Slider_126_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature final
{
public:
	float                                         Value;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BPVE_JHConfigLanLine_C_BndEvt__BPMV_JHConfigVolumeItem_Slider_126_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature;

// Function BPVE_JHConfigLanLine.BPVE_JHConfigLanLine_C.OnFocusReceived
// 0x01B0 (0x01B0 - 0x0000)
struct BPVE_JHConfigLanLine_C_OnFocusReceived final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FFocusEvent                            InFocusEvent;                                      // 0x0038(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FEventReply                            ReturnValue;                                       // 0x0040(0x00B8)(Parm, OutParm, ReturnParm)
	struct FEventReply                            CallFunc_Handled_ReturnValue;                      // 0x00F8(0x00B8)()
};
DUMPER7_ASSERTS_BPVE_JHConfigLanLine_C_OnFocusReceived;

SDK_PARAM_NAMESPACE_END
SDK_NAMESPACE_END
