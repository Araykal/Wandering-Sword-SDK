#pragma once



// Package: BPVE_Backpack_SortType_PopupItem

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"


SDK_NAMESPACE_START
SDK_PARAM_NAMESPACE_START

// Function BPVE_Backpack_SortType_PopupItem.BPVE_Backpack_SortType_PopupItem_C.ExecuteUbergraph_BPVE_Backpack_SortType_PopupItem
// 0x0038 (0x0038 - 0x0000)
struct BPVE_Backpack_SortType_PopupItem_C_ExecuteUbergraph_BPVE_Backpack_SortType_PopupItem final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnyTypeStaticPointer*                  CallFunc_GetData_ReturnValue;                      // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetValueSafe_Bool_ReturnValue;            // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UJHNeoUIGamepadConfirmButton*           K2Node_ComponentBoundEvent_Btn;                    // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNeoUIBlueprintableVMBase*              CallFunc_GetOwnerVM_Unsafe_ReturnValue;            // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJHNeoUIItemModuleVM_WDT*               K2Node_DynamicCast_AsJHNeo_UIItem_Module_VM_WDT;   // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
DUMPER7_ASSERTS_BPVE_Backpack_SortType_PopupItem_C_ExecuteUbergraph_BPVE_Backpack_SortType_PopupItem;

// Function BPVE_Backpack_SortType_PopupItem.BPVE_Backpack_SortType_PopupItem_C.BndEvt__BPVE_Backpack_SortType_PopupItem_Btn_SortBtnPopupItem_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct BPVE_Backpack_SortType_PopupItem_C_BndEvt__BPVE_Backpack_SortType_PopupItem_Btn_SortBtnPopupItem_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature final
{
public:
	class UJHNeoUIGamepadConfirmButton*           Btn;                                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BPVE_Backpack_SortType_PopupItem_C_BndEvt__BPVE_Backpack_SortType_PopupItem_Btn_SortBtnPopupItem_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature;

// Function BPVE_Backpack_SortType_PopupItem.BPVE_Backpack_SortType_PopupItem_C.OnMouseButtonDown_0
// 0x0238 (0x0238 - 0x0000)
struct BPVE_Backpack_SortType_PopupItem_C_OnMouseButtonDown_0 final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0038(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                            ReturnValue;                                       // 0x00A8(0x00B8)(Parm, OutParm, ReturnParm)
	class UAnyTypeStaticPointer*                  CallFunc_GetData_ReturnValue;                      // 0x0160(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FEventReply                            CallFunc_Handled_ReturnValue;                      // 0x0168(0x00B8)()
	class UNeoUIBlueprintableVMBase*              CallFunc_GetOwnerVM_Unsafe_ReturnValue;            // 0x0220(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJHNeoUIItemModuleVM_WDT*               K2Node_DynamicCast_AsJHNeo_UIItem_Module_VM_WDT;   // 0x0228(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0230(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
DUMPER7_ASSERTS_BPVE_Backpack_SortType_PopupItem_C_OnMouseButtonDown_0;

SDK_PARAM_NAMESPACE_END
SDK_NAMESPACE_END
