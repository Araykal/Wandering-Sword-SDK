#pragma once



// Package: BPVE_EAC_Ele

#include "Basic.hpp"


SDK_NAMESPACE_START
SDK_PARAM_NAMESPACE_START

// Function BPVE_EAC_Ele.BPVE_EAC_Ele_C.ExecuteUbergraph_BPVE_EAC_Ele
// 0x0058 (0x0058 - 0x0000)
struct BPVE_EAC_Ele_C_ExecuteUbergraph_BPVE_EAC_Ele final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UJHNeoUIGamepadConfirmButton*           K2Node_ComponentBoundEvent_Btn;                    // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJHNeoUIGamepadConfirmButton*           K2Node_ComponentBoundEvent_Btn_1;                  // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNeoUIBlueprintableVMBase*              CallFunc_GetOwnerVM_Unsafe_ReturnValue;            // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnyTypeStaticPointer*                  CallFunc_GetData_ReturnValue;                      // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJHNeoUIEstateArenaConfigVM*            K2Node_DynamicCast_AsJHNeo_UIEstate_Arena_Config_VM; // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UNeoUIBlueprintableVMBase*              CallFunc_GetOwnerVM_Unsafe_ReturnValue_1;          // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJHNeoUIEstateArenaConfigVM*            K2Node_DynamicCast_AsJHNeo_UIEstate_Arena_Config_VM_1; // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnyTypeStaticPointer*                  CallFunc_GetData_ReturnValue_1;                    // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BPVE_EAC_Ele_C_ExecuteUbergraph_BPVE_EAC_Ele;

// Function BPVE_EAC_Ele.BPVE_EAC_Ele_C.BndEvt__BPVE_EAC_Ele_BTN_EAC_Ele_K2Node_ComponentBoundEvent_1_JHNeoUIGamepadConfirmButtonDoubleClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct BPVE_EAC_Ele_C_BndEvt__BPVE_EAC_Ele_BTN_EAC_Ele_K2Node_ComponentBoundEvent_1_JHNeoUIGamepadConfirmButtonDoubleClicked__DelegateSignature final
{
public:
	class UJHNeoUIGamepadConfirmButton*           Btn;                                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BPVE_EAC_Ele_C_BndEvt__BPVE_EAC_Ele_BTN_EAC_Ele_K2Node_ComponentBoundEvent_1_JHNeoUIGamepadConfirmButtonDoubleClicked__DelegateSignature;

// Function BPVE_EAC_Ele.BPVE_EAC_Ele_C.BndEvt__BPVE_EAC_Ele_JHGPCBtn_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct BPVE_EAC_Ele_C_BndEvt__BPVE_EAC_Ele_JHGPCBtn_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature final
{
public:
	class UJHNeoUIGamepadConfirmButton*           Btn;                                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BPVE_EAC_Ele_C_BndEvt__BPVE_EAC_Ele_JHGPCBtn_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature;

SDK_PARAM_NAMESPACE_END
SDK_NAMESPACE_END
