#pragma once



// Package: BPMV_DialogModuleView

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"
#include "InputCore_structs.hpp"


SDK_NAMESPACE_START
SDK_PARAM_NAMESPACE_START

// Function BPMV_DialogModuleView.BPMV_DialogModuleView_C.ExecuteUbergraph_BPMV_DialogModuleView
// 0x0038 (0x0038 - 0x0000)
struct BPMV_DialogModuleView_C_ExecuteUbergraph_BPMV_DialogModuleView final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UNeoUIBlueprintableVMBase*              CallFunc_GetOwnerVM_Unsafe_ReturnValue;            // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDialogModuleVM*                        K2Node_DynamicCast_AsDialog_Module_VM;             // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BP_IsGamepadMode_ReturnValue;             // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1A[0x6];                                       // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UNeoUIBlueprintableVMBase*              CallFunc_GetOwnerVM_Unsafe_ReturnValue_1;          // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDialogModuleVM*                        K2Node_DynamicCast_AsDialog_Module_VM_1;           // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetOptionIsVisual_ReturnValue;            // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
DUMPER7_ASSERTS_BPMV_DialogModuleView_C_ExecuteUbergraph_BPMV_DialogModuleView;

// Function BPMV_DialogModuleView.BPMV_DialogModuleView_C.OnMouseButtonDown
// 0x0300 (0x0300 - 0x0000)
struct BPMV_DialogModuleView_C_OnMouseButtonDown final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0038(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                            ReturnValue;                                       // 0x00A8(0x00B8)(Parm, OutParm, ReturnParm)
	class UNeoUIBlueprintableVMBase*              CallFunc_GetOwnerVM_Unsafe_ReturnValue;            // 0x0160(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKey                                   CallFunc_PointerEvent_GetEffectingButton_ReturnValue; // 0x0168(0x0018)(HasGetValueTypeHash)
	class UDialogModuleVM*                        K2Node_DynamicCast_AsDialog_Module_VM;             // 0x0180(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x0189(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_18A[0x6];                                      // 0x018A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FEventReply                            CallFunc_Unhandled_ReturnValue;                    // 0x0190(0x00B8)()
	struct FEventReply                            CallFunc_Handled_ReturnValue;                      // 0x0248(0x00B8)()
};
DUMPER7_ASSERTS_BPMV_DialogModuleView_C_OnMouseButtonDown;

SDK_PARAM_NAMESPACE_END
SDK_NAMESPACE_END
