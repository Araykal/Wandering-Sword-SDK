#pragma once



// Package: BPVE_Backpack_SortType_Btn

#include "Basic.hpp"


SDK_NAMESPACE_START
SDK_PARAM_NAMESPACE_START

// Function BPVE_Backpack_SortType_Btn.BPVE_Backpack_SortType_Btn_C.ExecuteUbergraph_BPVE_Backpack_SortType_Btn
// 0x0020 (0x0020 - 0x0000)
struct BPVE_Backpack_SortType_Btn_C_ExecuteUbergraph_BPVE_Backpack_SortType_Btn final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UJHNeoUIGamepadConfirmButton*           K2Node_ComponentBoundEvent_Btn;                    // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UNeoUIContainerVisualBase*>      K2Node_MakeArray_Array;                            // 0x0010(0x0010)(ReferenceParm, ContainsInstancedReference)
};
DUMPER7_ASSERTS_BPVE_Backpack_SortType_Btn_C_ExecuteUbergraph_BPVE_Backpack_SortType_Btn;

// Function BPVE_Backpack_SortType_Btn.BPVE_Backpack_SortType_Btn_C.BndEvt__BPVE_Backpack_SortType_Btn_BTN_SortTypeBtn_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct BPVE_Backpack_SortType_Btn_C_BndEvt__BPVE_Backpack_SortType_Btn_BTN_SortTypeBtn_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature final
{
public:
	class UJHNeoUIGamepadConfirmButton*           Btn;                                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BPVE_Backpack_SortType_Btn_C_BndEvt__BPVE_Backpack_SortType_Btn_BTN_SortTypeBtn_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature;

SDK_PARAM_NAMESPACE_END
SDK_NAMESPACE_END
