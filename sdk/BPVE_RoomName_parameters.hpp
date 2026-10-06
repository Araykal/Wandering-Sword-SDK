#pragma once



// Package: BPVE_RoomName

#include "Basic.hpp"


SDK_NAMESPACE_START
SDK_PARAM_NAMESPACE_START

// Function BPVE_RoomName.BPVE_RoomName_C.ExecuteUbergraph_BPVE_RoomName
// 0x0020 (0x0020 - 0x0000)
struct BPVE_RoomName_C_ExecuteUbergraph_BPVE_RoomName final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNeoUICanvasPanelBase*                  K2Node_CustomEvent_CT_Root;                        // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BPVE_RoomName_C_ExecuteUbergraph_BPVE_RoomName;

// Function BPVE_RoomName.BPVE_RoomName_C.CT_Root_Event_0
// 0x0008 (0x0008 - 0x0000)
struct BPVE_RoomName_C_CT_Root_Event_0 final
{
public:
	class UNeoUICanvasPanelBase*                  CT_Root;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BPVE_RoomName_C_CT_Root_Event_0;

// Function BPVE_RoomName.BPVE_RoomName_C.SequenceEvent__ENTRYPOINTBPVE_RoomName_0
// 0x0008 (0x0008 - 0x0000)
struct BPVE_RoomName_C_SequenceEvent__ENTRYPOINTBPVE_RoomName_0 final
{
public:
	class UNeoUICanvasPanelBase*                  CT_Root;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BPVE_RoomName_C_SequenceEvent__ENTRYPOINTBPVE_RoomName_0;

SDK_PARAM_NAMESPACE_END
SDK_NAMESPACE_END
