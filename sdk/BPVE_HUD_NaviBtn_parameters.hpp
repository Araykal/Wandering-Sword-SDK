#pragma once



// Package: BPVE_HUD_NaviBtn

#include "Basic.hpp"


SDK_NAMESPACE_START
SDK_PARAM_NAMESPACE_START

// Function BPVE_HUD_NaviBtn.BPVE_HUD_NaviBtn_C.ExecuteUbergraph_BPVE_HUD_NaviBtn
// 0x0018 (0x0018 - 0x0000)
struct BPVE_HUD_NaviBtn_C_ExecuteUbergraph_BPVE_HUD_NaviBtn final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetValueSafe_Bool_ReturnValue;            // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetValueSafe_Bool_ReturnValue_1;          // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6[0x2];                                        // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UNeoUICommonButton*                     K2Node_ComponentBoundEvent_SrcWidget;              // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetValueSafe_Bool_ReturnValue_2;          // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
DUMPER7_ASSERTS_BPVE_HUD_NaviBtn_C_ExecuteUbergraph_BPVE_HUD_NaviBtn;

// Function BPVE_HUD_NaviBtn.BPVE_HUD_NaviBtn_C.BndEvt__BPVE_HUD_NaviBtn_BPCMP_NeoUISimpleBtn_K2Node_ComponentBoundEvent_1_NeoUICommonButtonSingleClick__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct BPVE_HUD_NaviBtn_C_BndEvt__BPVE_HUD_NaviBtn_BPCMP_NeoUISimpleBtn_K2Node_ComponentBoundEvent_1_NeoUICommonButtonSingleClick__DelegateSignature final
{
public:
	class UNeoUICommonButton*                     SrcWidget;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BPVE_HUD_NaviBtn_C_BndEvt__BPVE_HUD_NaviBtn_BPCMP_NeoUISimpleBtn_K2Node_ComponentBoundEvent_1_NeoUICommonButtonSingleClick__DelegateSignature;

// Function BPVE_HUD_NaviBtn.BPVE_HUD_NaviBtn_C.SetHotKeyVisible
// 0x0001 (0x0001 - 0x0000)
struct BPVE_HUD_NaviBtn_C_SetHotKeyVisible final
{
public:
	bool                                          IsVisible_0;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
DUMPER7_ASSERTS_BPVE_HUD_NaviBtn_C_SetHotKeyVisible;

SDK_PARAM_NAMESPACE_END
SDK_NAMESPACE_END
