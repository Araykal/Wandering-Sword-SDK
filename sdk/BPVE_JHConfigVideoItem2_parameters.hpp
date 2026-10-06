#pragma once



// Package: BPVE_JHConfigVideoItem2

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"


SDK_NAMESPACE_START
SDK_PARAM_NAMESPACE_START

// Function BPVE_JHConfigVideoItem2.BPVE_JHConfigVideoItem2_C.ExecuteUbergraph_BPVE_JHConfigVideoItem2
// 0x0020 (0x0020 - 0x0000)
struct BPVE_JHConfigVideoItem2_C_ExecuteUbergraph_BPVE_JHConfigVideoItem2 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_ComponentBoundEvent_SelectedItem;           // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	ESelectInfo                                   K2Node_ComponentBoundEvent_SelectionType;          // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BPVE_JHConfigVideoItem2_C_ExecuteUbergraph_BPVE_JHConfigVideoItem2;

// Function BPVE_JHConfigVideoItem2.BPVE_JHConfigVideoItem2_C.BndEvt__BPVE_JHConfigVideoItem2_CB_Main_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct BPVE_JHConfigVideoItem2_C_BndEvt__BPVE_JHConfigVideoItem2_CB_Main_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature final
{
public:
	class FString                                 SelectedItem;                                      // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	ESelectInfo                                   SelectionType;                                     // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BPVE_JHConfigVideoItem2_C_BndEvt__BPVE_JHConfigVideoItem2_CB_Main_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature;

// Function BPVE_JHConfigVideoItem2.BPVE_JHConfigVideoItem2_C.OnFocusReceived
// 0x01B0 (0x01B0 - 0x0000)
struct BPVE_JHConfigVideoItem2_C_OnFocusReceived final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FFocusEvent                            InFocusEvent;                                      // 0x0038(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FEventReply                            ReturnValue;                                       // 0x0040(0x00B8)(Parm, OutParm, ReturnParm)
	struct FEventReply                            CallFunc_Handled_ReturnValue;                      // 0x00F8(0x00B8)()
};
DUMPER7_ASSERTS_BPVE_JHConfigVideoItem2_C_OnFocusReceived;

SDK_PARAM_NAMESPACE_END
SDK_NAMESPACE_END
