#pragma once



// Package: BPVE_ArenaDetailListItem

#include "Basic.hpp"


SDK_NAMESPACE_START
SDK_PARAM_NAMESPACE_START

// Function BPVE_ArenaDetailListItem.BPVE_ArenaDetailListItem_C.ExecuteUbergraph_BPVE_ArenaDetailListItem
// 0x0058 (0x0058 - 0x0000)
struct BPVE_ArenaDetailListItem_C_ExecuteUbergraph_BPVE_ArenaDetailListItem final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetValueSafe_Bool_ReturnValue;            // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetValueSafe_String_ReturnValue;          // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetValueSafe_Text_ReturnValue;            // 0x0018(0x0018)()
	class UJHNeoUIGamepadConfirmButton*           K2Node_ComponentBoundEvent_Btn;                    // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNeoUIBlueprintableVMBase*              CallFunc_GetOwnerVM_Unsafe_ReturnValue;            // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnyTypeStaticPointer*                  CallFunc_GetData_ReturnValue;                      // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJHNeoUIArenaDetail_NPCListVMBase*      K2Node_DynamicCast_AsJHNeo_UIArena_Detail_NPCList_VMBase; // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
DUMPER7_ASSERTS_BPVE_ArenaDetailListItem_C_ExecuteUbergraph_BPVE_ArenaDetailListItem;

// Function BPVE_ArenaDetailListItem.BPVE_ArenaDetailListItem_C.BndEvt__BPVE_ArenaDetailListItem_BTN_ArenaDetailListItem_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct BPVE_ArenaDetailListItem_C_BndEvt__BPVE_ArenaDetailListItem_BTN_ArenaDetailListItem_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature final
{
public:
	class UJHNeoUIGamepadConfirmButton*           Btn;                                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BPVE_ArenaDetailListItem_C_BndEvt__BPVE_ArenaDetailListItem_BTN_ArenaDetailListItem_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature;

SDK_PARAM_NAMESPACE_END
SDK_NAMESPACE_END
