#pragma once



// Package: BPVE_RegionTitle

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


SDK_NAMESPACE_START
SDK_PARAM_NAMESPACE_START

// Function BPVE_RegionTitle.BPVE_RegionTitle_C.ExecuteUbergraph_BPVE_RegionTitle
// 0x0010 (0x0010 - 0x0000)
struct BPVE_RegionTitle_C_ExecuteUbergraph_BPVE_RegionTitle final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_isHidden;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6[0x2];                                        // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UJHNeoUIGamepadConfirmButton*           K2Node_ComponentBoundEvent_Btn;                    // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BPVE_RegionTitle_C_ExecuteUbergraph_BPVE_RegionTitle;

// Function BPVE_RegionTitle.BPVE_RegionTitle_C.EVT_UpdateRegionExpandingStatus
// 0x0001 (0x0001 - 0x0000)
struct BPVE_RegionTitle_C_EVT_UpdateRegionExpandingStatus final
{
public:
	bool                                          isHidden;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
DUMPER7_ASSERTS_BPVE_RegionTitle_C_EVT_UpdateRegionExpandingStatus;

// Function BPVE_RegionTitle.BPVE_RegionTitle_C.BndEvt__BPVE_RegionTitle_BTN_GHC_Region_NPC_K2Node_ComponentBoundEvent_1_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct BPVE_RegionTitle_C_BndEvt__BPVE_RegionTitle_BTN_GHC_Region_NPC_K2Node_ComponentBoundEvent_1_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature final
{
public:
	class UJHNeoUIGamepadConfirmButton*           Btn;                                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BPVE_RegionTitle_C_BndEvt__BPVE_RegionTitle_BTN_GHC_Region_NPC_K2Node_ComponentBoundEvent_1_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature;

// Function BPVE_RegionTitle.BPVE_RegionTitle_C.DoCustomNavigation_0
// 0x0018 (0x0018 - 0x0000)
struct BPVE_RegionTitle_C_DoCustomNavigation_0 final
{
public:
	EUINavigation                                 Navigation_0;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_FindTitleDownWidget_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BPVE_RegionTitle_C_DoCustomNavigation_0;

SDK_PARAM_NAMESPACE_END
SDK_NAMESPACE_END
