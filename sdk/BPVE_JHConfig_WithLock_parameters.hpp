#pragma once



// Package: BPVE_JHConfig_WithLock

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"


SDK_NAMESPACE_START
SDK_PARAM_NAMESPACE_START

// Function BPVE_JHConfig_WithLock.BPVE_JHConfig_WithLock_C.ExecuteUbergraph_BPVE_JHConfig_WithLock
// 0x0020 (0x0020 - 0x0000)
struct BPVE_JHConfig_WithLock_C_ExecuteUbergraph_BPVE_JHConfig_WithLock final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_isLocked;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6[0x2];                                        // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_ComponentBoundEvent_SelectedItem;           // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	ESelectInfo                                   K2Node_ComponentBoundEvent_SelectionType;          // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BPVE_JHConfig_WithLock_C_ExecuteUbergraph_BPVE_JHConfig_WithLock;

// Function BPVE_JHConfig_WithLock.BPVE_JHConfig_WithLock_C.BndEvt__BPVE_JHConfig_WithLock_CB_Main_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct BPVE_JHConfig_WithLock_C_BndEvt__BPVE_JHConfig_WithLock_CB_Main_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature final
{
public:
	class FString                                 SelectedItem;                                      // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	ESelectInfo                                   SelectionType;                                     // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BPVE_JHConfig_WithLock_C_BndEvt__BPVE_JHConfig_WithLock_CB_Main_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature;

// Function BPVE_JHConfig_WithLock.BPVE_JHConfig_WithLock_C.EVT_UpdateLockStatus
// 0x0001 (0x0001 - 0x0000)
struct BPVE_JHConfig_WithLock_C_EVT_UpdateLockStatus final
{
public:
	bool                                          IsLocked;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
DUMPER7_ASSERTS_BPVE_JHConfig_WithLock_C_EVT_UpdateLockStatus;

// Function BPVE_JHConfig_WithLock.BPVE_JHConfig_WithLock_C.OnMouseButtonDown_0
// 0x0218 (0x0218 - 0x0000)
struct BPVE_JHConfig_WithLock_C_OnMouseButtonDown_0 final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0038(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                            ReturnValue;                                       // 0x00A8(0x00B8)(Parm, OutParm, ReturnParm)
	struct FEventReply                            CallFunc_Handled_ReturnValue;                      // 0x0160(0x00B8)()
};
DUMPER7_ASSERTS_BPVE_JHConfig_WithLock_C_OnMouseButtonDown_0;

SDK_PARAM_NAMESPACE_END
SDK_NAMESPACE_END
