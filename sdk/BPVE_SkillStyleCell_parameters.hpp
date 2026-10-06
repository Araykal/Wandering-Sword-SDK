#pragma once



// Package: BPVE_SkillStyleCell

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"


SDK_NAMESPACE_START
SDK_PARAM_NAMESPACE_START

// Function BPVE_SkillStyleCell.BPVE_SkillStyleCell_C.ExecuteUbergraph_BPVE_SkillStyleCell
// 0x0010 (0x0010 - 0x0000)
struct BPVE_SkillStyleCell_C_ExecuteUbergraph_BPVE_SkillStyleCell final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UJHNeoUIGamepadConfirmButton*           K2Node_ComponentBoundEvent_Btn;                    // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BPVE_SkillStyleCell_C_ExecuteUbergraph_BPVE_SkillStyleCell;

// Function BPVE_SkillStyleCell.BPVE_SkillStyleCell_C.BndEvt__BPVE_SkillStyleCell_BTN_SkillStyleCell_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct BPVE_SkillStyleCell_C_BndEvt__BPVE_SkillStyleCell_BTN_SkillStyleCell_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature final
{
public:
	class UJHNeoUIGamepadConfirmButton*           Btn;                                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BPVE_SkillStyleCell_C_BndEvt__BPVE_SkillStyleCell_BTN_SkillStyleCell_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature;

// Function BPVE_SkillStyleCell.BPVE_SkillStyleCell_C.OnMouseButtonDown_0
// 0x0240 (0x0240 - 0x0000)
struct BPVE_SkillStyleCell_C_OnMouseButtonDown_0 final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0038(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                            ReturnValue;                                       // 0x00A8(0x00B8)(Parm, OutParm, ReturnParm)
	bool                                          CallFunc_GetValueSafe_Bool_ReturnValue;            // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_161[0x7];                                      // 0x0161(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FEventReply                            K2Node_MakeStruct_EventReply;                      // 0x0168(0x00B8)()
	class UAnyTypeStaticPointer*                  CallFunc_GetData_ReturnValue;                      // 0x0220(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNeoUIBlueprintableVMBase*              CallFunc_GetOwnerVM_Unsafe_ReturnValue;            // 0x0228(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJHNeoUISkillVM*                        K2Node_DynamicCast_AsJHNeo_UISkill_VM;             // 0x0230(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0238(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
DUMPER7_ASSERTS_BPVE_SkillStyleCell_C_OnMouseButtonDown_0;

SDK_PARAM_NAMESPACE_END
SDK_NAMESPACE_END
