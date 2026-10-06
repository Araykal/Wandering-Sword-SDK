#pragma once



// Package: BPVE_NGP_InheritanceItem

#include "Basic.hpp"


SDK_NAMESPACE_START
SDK_PARAM_NAMESPACE_START

// Function BPVE_NGP_InheritanceItem.BPVE_NGP_InheritanceItem_C.ExecuteUbergraph_BPVE_NGP_InheritanceItem
// 0x0060 (0x0060 - 0x0000)
struct BPVE_NGP_InheritanceItem_C_ExecuteUbergraph_BPVE_NGP_InheritanceItem final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UJHNeoUIGamepadConfirmButton*           K2Node_ComponentBoundEvent_Btn;                    // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNeoUIBlueprintableVMBase*              CallFunc_GetOwnerVM_Unsafe_ReturnValue;            // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnyTypeStaticPointer*                  CallFunc_GetData_ReturnValue;                      // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJHNeoUINGP_DepartureVM*                K2Node_DynamicCast_AsJHNeo_UINGP_Departure_VM;     // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x3];                                       // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Event_intFlag;                              // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 K2Node_Event_strFlag;                              // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UJHNeoUISubsystem*                      CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetValueSafe_Int32_ReturnValue;           // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C[0x4];                                       // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UJHNeoUITipsModuleVM_Gamepad*           CallFunc_Tips_Gamepad_ReturnValue;                 // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJHNeoUITipsInheritanceVE*              CallFunc_ShowNGPInheritance_ReturnValue;           // 0x0058(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BPVE_NGP_InheritanceItem_C_ExecuteUbergraph_BPVE_NGP_InheritanceItem;

// Function BPVE_NGP_InheritanceItem.BPVE_NGP_InheritanceItem_C.EVT_GamepadShowTips
// 0x0018 (0x0018 - 0x0000)
struct BPVE_NGP_InheritanceItem_C_EVT_GamepadShowTips final
{
public:
	int32                                         intflag;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 strFlag;                                           // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BPVE_NGP_InheritanceItem_C_EVT_GamepadShowTips;

// Function BPVE_NGP_InheritanceItem.BPVE_NGP_InheritanceItem_C.BndEvt__BPVE_NGP_InheritanceItem_BTN_NGP_InheritanceItem_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct BPVE_NGP_InheritanceItem_C_BndEvt__BPVE_NGP_InheritanceItem_BTN_NGP_InheritanceItem_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature final
{
public:
	class UJHNeoUIGamepadConfirmButton*           Btn;                                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BPVE_NGP_InheritanceItem_C_BndEvt__BPVE_NGP_InheritanceItem_BTN_NGP_InheritanceItem_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature;

// Function BPVE_NGP_InheritanceItem.BPVE_NGP_InheritanceItem_C.GetToolTipWidget_0
// 0x0028 (0x0028 - 0x0000)
struct BPVE_NGP_InheritanceItem_C_GetToolTipWidget_0 final
{
public:
	class UWidget*                                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetValueSafe_Int32_ReturnValue;           // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UJHNeoUISubsystem*                      CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJHNeoUITipsModuleVM*                   CallFunc_Tips_ReturnValue;                         // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJHNeoUITipsInheritanceVE*              CallFunc_ShowNGPInheritance_ReturnValue;           // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BPVE_NGP_InheritanceItem_C_GetToolTipWidget_0;

SDK_PARAM_NAMESPACE_END
SDK_NAMESPACE_END
