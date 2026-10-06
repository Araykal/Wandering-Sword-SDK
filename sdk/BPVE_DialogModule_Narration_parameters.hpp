#pragma once



// Package: BPVE_DialogModule_Narration

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "JH_structs.hpp"
#include "UMG_structs.hpp"


SDK_NAMESPACE_START
SDK_PARAM_NAMESPACE_START

// Function BPVE_DialogModule_Narration.BPVE_DialogModule_Narration_C.ExecuteUbergraph_BPVE_DialogModule_Narration
// 0x0080 (0x0080 - 0x0000)
struct BPVE_DialogModule_Narration_C_ExecuteUbergraph_BPVE_DialogModule_Narration final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_Event_MessageHeader;                        // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnyTypeUniversalPointerBase*           K2Node_Event_MessageBody;                          // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;          // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue_1;        // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetValueSafe_Bool_ReturnValue;            // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_23[0x5];                                       // 0x0023(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDialogCommonData                      K2Node_Event_DialogData;                           // 0x0028(0x0050)(ConstParm)
	bool                                          CallFunc_BP_IsGamepadMode_ReturnValue;             // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BP_IsGamepadMode_ReturnValue_1;           // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x007A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
DUMPER7_ASSERTS_BPVE_DialogModule_Narration_C_ExecuteUbergraph_BPVE_DialogModule_Narration;

// Function BPVE_DialogModule_Narration.BPVE_DialogModule_Narration_C.EVT_ShowMainData
// 0x0050 (0x0050 - 0x0000)
struct BPVE_DialogModule_Narration_C_EVT_ShowMainData final
{
public:
	struct FDialogCommonData                      DialogData;                                        // 0x0000(0x0050)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
DUMPER7_ASSERTS_BPVE_DialogModule_Narration_C_EVT_ShowMainData;

// Function BPVE_DialogModule_Narration.BPVE_DialogModule_Narration_C.ReceiveModuleMessage
// 0x0010 (0x0010 - 0x0000)
struct BPVE_DialogModule_Narration_C_ReceiveModuleMessage final
{
public:
	class FName                                   MessageHeader;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnyTypeUniversalPointerBase*           MessageBody;                                       // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BPVE_DialogModule_Narration_C_ReceiveModuleMessage;

// Function BPVE_DialogModule_Narration.BPVE_DialogModule_Narration_C.On_IMG_Bg_MouseButtonDown_0
// 0x0230 (0x0230 - 0x0000)
struct BPVE_DialogModule_Narration_C_On_IMG_Bg_MouseButtonDown_0 final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0038(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                            ReturnValue;                                       // 0x00A8(0x00B8)(Parm, OutParm, ReturnParm)
	class UNeoUIBlueprintableVMBase*              CallFunc_GetOwnerVM_Unsafe_ReturnValue;            // 0x0160(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FEventReply                            K2Node_MakeStruct_EventReply;                      // 0x0168(0x00B8)()
	class UDialogModuleVM*                        K2Node_DynamicCast_AsDialog_Module_VM;             // 0x0220(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0228(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
DUMPER7_ASSERTS_BPVE_DialogModule_Narration_C_On_IMG_Bg_MouseButtonDown_0;

SDK_PARAM_NAMESPACE_END
SDK_NAMESPACE_END
