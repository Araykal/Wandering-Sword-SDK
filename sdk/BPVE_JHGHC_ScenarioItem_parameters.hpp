#pragma once



// Package: BPVE_JHGHC_ScenarioItem

#include "Basic.hpp"


SDK_NAMESPACE_START
SDK_PARAM_NAMESPACE_START

// Function BPVE_JHGHC_ScenarioItem.BPVE_JHGHC_ScenarioItem_C.ExecuteUbergraph_BPVE_JHGHC_ScenarioItem
// 0x0030 (0x0030 - 0x0000)
struct BPVE_JHGHC_ScenarioItem_C_ExecuteUbergraph_BPVE_JHGHC_ScenarioItem final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnyTypeStaticPointer*                  CallFunc_GetData_ReturnValue;                      // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJHNeoUIGamepadConfirmButton*           K2Node_ComponentBoundEvent_Btn;                    // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNeoUIUniversalModuleVMBase*            CallFunc_ActionResponder_ReturnValue;              // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJHNeoUIGHCVM_Scenario*                 K2Node_DynamicCast_AsJHNeo_UIGHCVM_Scenario;       // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
DUMPER7_ASSERTS_BPVE_JHGHC_ScenarioItem_C_ExecuteUbergraph_BPVE_JHGHC_ScenarioItem;

// Function BPVE_JHGHC_ScenarioItem.BPVE_JHGHC_ScenarioItem_C.BndEvt__BPVE_JHGHC_ScenarioItem_BTN_GHC_Scenario_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct BPVE_JHGHC_ScenarioItem_C_BndEvt__BPVE_JHGHC_ScenarioItem_BTN_GHC_Scenario_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature final
{
public:
	class UJHNeoUIGamepadConfirmButton*           Btn;                                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BPVE_JHGHC_ScenarioItem_C_BndEvt__BPVE_JHGHC_ScenarioItem_BTN_GHC_Scenario_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature;

SDK_PARAM_NAMESPACE_END
SDK_NAMESPACE_END
