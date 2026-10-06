#pragma once



// Package: BPVE_SkillCoreCellDisplay_Equiped

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"


SDK_NAMESPACE_START
SDK_PARAM_NAMESPACE_START

// Function BPVE_SkillCoreCellDisplay_Equiped.BPVE_SkillCoreCellDisplay_Equiped_C.ExecuteUbergraph_BPVE_SkillCoreCellDisplay_Equiped
// 0x0138 (0x0138 - 0x0000)
struct BPVE_SkillCoreCellDisplay_Equiped_C_ExecuteUbergraph_BPVE_SkillCoreCellDisplay_Equiped final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0004(0x0038)(IsPlainOldData, NoDestructor)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerEvent                          K2Node_Event_MouseEvent_1;                         // 0x0040(0x0070)(ConstParm)
	struct FPointerEvent                          K2Node_Event_MouseEvent;                           // 0x00B0(0x0070)(ConstParm)
	class UAnyTypeStaticPointer*                  CallFunc_GetData_ReturnValue;                      // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJHNeoUIGamepadConfirmButton*           K2Node_ComponentBoundEvent_Btn;                    // 0x0128(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnyTypeStaticPointer*                  CallFunc_GetData_ReturnValue_1;                    // 0x0130(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BPVE_SkillCoreCellDisplay_Equiped_C_ExecuteUbergraph_BPVE_SkillCoreCellDisplay_Equiped;

// Function BPVE_SkillCoreCellDisplay_Equiped.BPVE_SkillCoreCellDisplay_Equiped_C.BndEvt__BPVE_SkillCoreCellDisplay_Equiped_BTN_SkillCoreCell_Equiped_K2Node_ComponentBoundEvent_1_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct BPVE_SkillCoreCellDisplay_Equiped_C_BndEvt__BPVE_SkillCoreCellDisplay_Equiped_BTN_SkillCoreCell_Equiped_K2Node_ComponentBoundEvent_1_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature final
{
public:
	class UJHNeoUIGamepadConfirmButton*           Btn;                                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BPVE_SkillCoreCellDisplay_Equiped_C_BndEvt__BPVE_SkillCoreCellDisplay_Equiped_BTN_SkillCoreCell_Equiped_K2Node_ComponentBoundEvent_1_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature;

// Function BPVE_SkillCoreCellDisplay_Equiped.BPVE_SkillCoreCellDisplay_Equiped_C.OnMouseLeave
// 0x0070 (0x0070 - 0x0000)
struct BPVE_SkillCoreCellDisplay_Equiped_C_OnMouseLeave final
{
public:
	struct FPointerEvent                          MouseEvent;                                        // 0x0000(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
DUMPER7_ASSERTS_BPVE_SkillCoreCellDisplay_Equiped_C_OnMouseLeave;

// Function BPVE_SkillCoreCellDisplay_Equiped.BPVE_SkillCoreCellDisplay_Equiped_C.OnMouseEnter
// 0x00A8 (0x00A8 - 0x0000)
struct BPVE_SkillCoreCellDisplay_Equiped_C_OnMouseEnter final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0038(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
DUMPER7_ASSERTS_BPVE_SkillCoreCellDisplay_Equiped_C_OnMouseEnter;

// Function BPVE_SkillCoreCellDisplay_Equiped.BPVE_SkillCoreCellDisplay_Equiped_C.On_BTN_MAIN_MouseButtonDown_0
// 0x0220 (0x0220 - 0x0000)
struct BPVE_SkillCoreCellDisplay_Equiped_C_On_BTN_MAIN_MouseButtonDown_0 final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0038(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                            ReturnValue;                                       // 0x00A8(0x00B8)(Parm, OutParm, ReturnParm)
	struct FEventReply                            CallFunc_Handled_ReturnValue;                      // 0x0160(0x00B8)()
	class UAnyTypeStaticPointer*                  CallFunc_GetData_ReturnValue;                      // 0x0218(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BPVE_SkillCoreCellDisplay_Equiped_C_On_BTN_MAIN_MouseButtonDown_0;

// Function BPVE_SkillCoreCellDisplay_Equiped.BPVE_SkillCoreCellDisplay_Equiped_C.On_BTN_MAIN_MouseDoubleClick_0
// 0x0220 (0x0220 - 0x0000)
struct BPVE_SkillCoreCellDisplay_Equiped_C_On_BTN_MAIN_MouseDoubleClick_0 final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0038(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                            ReturnValue;                                       // 0x00A8(0x00B8)(Parm, OutParm, ReturnParm)
	struct FEventReply                            CallFunc_Handled_ReturnValue;                      // 0x0160(0x00B8)()
	class UAnyTypeStaticPointer*                  CallFunc_GetData_ReturnValue;                      // 0x0218(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BPVE_SkillCoreCellDisplay_Equiped_C_On_BTN_MAIN_MouseDoubleClick_0;

SDK_PARAM_NAMESPACE_END
SDK_NAMESPACE_END
