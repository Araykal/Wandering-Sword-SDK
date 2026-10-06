#pragma once



// Package: BPVE_MicroPopupMsg

#include "Basic.hpp"

#include "JH_structs.hpp"
#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"


SDK_NAMESPACE_START
SDK_PARAM_NAMESPACE_START

// Function BPVE_MicroPopupMsg.BPVE_MicroPopupMsg_C.ExecuteUbergraph_BPVE_MicroPopupMsg
// 0x0118 (0x0118 - 0x0000)
struct BPVE_MicroPopupMsg_C_ExecuteUbergraph_BPVE_MicroPopupMsg final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FJHNeoUIMicroPopupMsgItem              K2Node_Event_Msg;                                  // 0x0008(0x0058)(ConstParm)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0060(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x00A0(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x00B0(0x0018)()
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x00C8(0x0018)()
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x00E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00E2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_E3[0x5];                                       // 0x00E3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_Event_Clr;                                  // 0x00E8(0x0028)(ConstParm)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BPVE_MicroPopupMsg_C_ExecuteUbergraph_BPVE_MicroPopupMsg;

// Function BPVE_MicroPopupMsg.BPVE_MicroPopupMsg_C.EVT_UpdateTextColor
// 0x0028 (0x0028 - 0x0000)
struct BPVE_MicroPopupMsg_C_EVT_UpdateTextColor final
{
public:
	struct FSlateColor                            Clr;                                               // 0x0000(0x0028)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
};
DUMPER7_ASSERTS_BPVE_MicroPopupMsg_C_EVT_UpdateTextColor;

// Function BPVE_MicroPopupMsg.BPVE_MicroPopupMsg_C.EVT_StartShow
// 0x0058 (0x0058 - 0x0000)
struct BPVE_MicroPopupMsg_C_EVT_StartShow final
{
public:
	struct FJHNeoUIMicroPopupMsgItem              Msg;                                               // 0x0000(0x0058)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
};
DUMPER7_ASSERTS_BPVE_MicroPopupMsg_C_EVT_StartShow;

SDK_PARAM_NAMESPACE_END
SDK_NAMESPACE_END
