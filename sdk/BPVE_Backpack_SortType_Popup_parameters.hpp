#pragma once



// Package: BPVE_Backpack_SortType_Popup

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"


SDK_NAMESPACE_START
SDK_PARAM_NAMESPACE_START

// Function BPVE_Backpack_SortType_Popup.BPVE_Backpack_SortType_Popup_C.ExecuteUbergraph_BPVE_Backpack_SortType_Popup
// 0x0018 (0x0018 - 0x0000)
struct BPVE_Backpack_SortType_Popup_C_ExecuteUbergraph_BPVE_Backpack_SortType_Popup final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UNeoUIContainerVisualBase*>      K2Node_MakeArray_Array;                            // 0x0008(0x0010)(ReferenceParm, ContainsInstancedReference)
};
DUMPER7_ASSERTS_BPVE_Backpack_SortType_Popup_C_ExecuteUbergraph_BPVE_Backpack_SortType_Popup;

// Function BPVE_Backpack_SortType_Popup.BPVE_Backpack_SortType_Popup_C.OnFocusReceived
// 0x01B0 (0x01B0 - 0x0000)
struct BPVE_Backpack_SortType_Popup_C_OnFocusReceived final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FFocusEvent                            InFocusEvent;                                      // 0x0038(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FEventReply                            ReturnValue;                                       // 0x0040(0x00B8)(Parm, OutParm, ReturnParm)
	struct FEventReply                            CallFunc_Handled_ReturnValue;                      // 0x00F8(0x00B8)()
};
DUMPER7_ASSERTS_BPVE_Backpack_SortType_Popup_C_OnFocusReceived;

// Function BPVE_Backpack_SortType_Popup.BPVE_Backpack_SortType_Popup_C.DoCustomNavigation_0
// 0x0010 (0x0010 - 0x0000)
struct BPVE_Backpack_SortType_Popup_C_DoCustomNavigation_0 final
{
public:
	EUINavigation                                 Navigation_0;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BPVE_Backpack_SortType_Popup_C_DoCustomNavigation_0;

// Function BPVE_Backpack_SortType_Popup.BPVE_Backpack_SortType_Popup_C.OnMouseButtonDown_0
// 0x0218 (0x0218 - 0x0000)
struct BPVE_Backpack_SortType_Popup_C_OnMouseButtonDown_0 final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0038(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                            ReturnValue;                                       // 0x00A8(0x00B8)(Parm, OutParm, ReturnParm)
	struct FEventReply                            CallFunc_Handled_ReturnValue;                      // 0x0160(0x00B8)()
};
DUMPER7_ASSERTS_BPVE_Backpack_SortType_Popup_C_OnMouseButtonDown_0;

SDK_PARAM_NAMESPACE_END
SDK_NAMESPACE_END
