#pragma once



// Package: BPVE_DialogModuleMain

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "JH_structs.hpp"
#include "UMG_structs.hpp"


SDK_NAMESPACE_START
SDK_PARAM_NAMESPACE_START

// Function BPVE_DialogModuleMain.BPVE_DialogModuleMain_C.ExecuteUbergraph_BPVE_DialogModuleMain
// 0x00A0 (0x00A0 - 0x0000)
struct BPVE_DialogModuleMain_C_ExecuteUbergraph_BPVE_DialogModuleMain final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_IsGamepadMode_ReturnValue;             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_Event_MessageHeader;                        // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnyTypeUniversalPointerBase*           K2Node_Event_MessageBody;                          // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;          // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue_1;        // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetValueSafe_Bool_ReturnValue;            // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetValueSafe_Bool_ReturnValue_1;          // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDialogCommonData                      K2Node_Event_DialogData;                           // 0x0020(0x0050)(ConstParm)
	bool                                          CallFunc_BP_IsGamepadMode_ReturnValue_1;           // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BP_IsGamepadMode_ReturnValue_2;           // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0072(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_73[0x5];                                       // 0x0073(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetValueSafe_Bool_ReturnValue_2;          // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_81[0x7];                                       // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UNeoUISubsystem*                        CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNeoUIModuleVMBase*                     CallFunc_ShowModuleSingular_ReturnValue;           // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_IsGamepadMode_ReturnValue_3;           // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
DUMPER7_ASSERTS_BPVE_DialogModuleMain_C_ExecuteUbergraph_BPVE_DialogModuleMain;

// Function BPVE_DialogModuleMain.BPVE_DialogModuleMain_C.EVT_ShowMainData
// 0x0050 (0x0050 - 0x0000)
struct BPVE_DialogModuleMain_C_EVT_ShowMainData final
{
public:
	struct FDialogCommonData                      DialogData;                                        // 0x0000(0x0050)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
DUMPER7_ASSERTS_BPVE_DialogModuleMain_C_EVT_ShowMainData;

// Function BPVE_DialogModuleMain.BPVE_DialogModuleMain_C.ReceiveModuleMessage
// 0x0010 (0x0010 - 0x0000)
struct BPVE_DialogModuleMain_C_ReceiveModuleMessage final
{
public:
	class FName                                   MessageHeader;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnyTypeUniversalPointerBase*           MessageBody;                                       // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BPVE_DialogModuleMain_C_ReceiveModuleMessage;

// Function BPVE_DialogModuleMain.BPVE_DialogModuleMain_C.On_IMG_Bg_MouseButtonDown_0
// 0x0230 (0x0230 - 0x0000)
struct BPVE_DialogModuleMain_C_On_IMG_Bg_MouseButtonDown_0 final
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
DUMPER7_ASSERTS_BPVE_DialogModuleMain_C_On_IMG_Bg_MouseButtonDown_0;

SDK_PARAM_NAMESPACE_END
SDK_NAMESPACE_END
