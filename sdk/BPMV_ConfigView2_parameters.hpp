#pragma once



// Package: BPMV_ConfigView2

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "NeoUI_structs.hpp"


SDK_NAMESPACE_START
SDK_PARAM_NAMESPACE_START

// Function BPMV_ConfigView2.BPMV_ConfigView2_C.ExecuteUbergraph_BPMV_ConfigView2
// 0x0090 (0x0090 - 0x0000)
struct BPMV_ConfigView2_C_ExecuteUbergraph_BPMV_ConfigView2 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ENeoUIFocusWidgetScenario                     K2Node_Event_Scenario;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FNeoUIFocusWidgetParam                 K2Node_Event_Param;                                // 0x0008(0x0010)()
	TArray<class UJHNeoUIConfigV2TabBtn*>         K2Node_MakeArray_Array;                            // 0x0018(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         K2Node_Event_TabIndex;                             // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ShouldShowRevertBtn_ReturnValue;          // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x002D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2E[0x2];                                       // 0x002E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UNeoUIBlueprintableVMBase*              CallFunc_GetOwnerVM_Unsafe_ReturnValue;            // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_IsGamepadMode_ReturnValue;             // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<class FName, class UNeoUINamedSlot*>     K2Node_MakeMap_Map;                                // 0x0040(0x0050)(ContainsInstancedReference)
};
DUMPER7_ASSERTS_BPMV_ConfigView2_C_ExecuteUbergraph_BPMV_ConfigView2;

// Function BPMV_ConfigView2.BPMV_ConfigView2_C.EVT_SyncTabIndex
// 0x0004 (0x0004 - 0x0000)
struct BPMV_ConfigView2_C_EVT_SyncTabIndex final
{
public:
	int32                                         TabIndex;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BPMV_ConfigView2_C_EVT_SyncTabIndex;

// Function BPMV_ConfigView2.BPMV_ConfigView2_C.EVT_FocusWidgetForScenario
// 0x0018 (0x0018 - 0x0000)
struct BPMV_ConfigView2_C_EVT_FocusWidgetForScenario final
{
public:
	ENeoUIFocusWidgetScenario                     scenario;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FNeoUIFocusWidgetParam                 Param;                                             // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm)
};
DUMPER7_ASSERTS_BPMV_ConfigView2_C_EVT_FocusWidgetForScenario;

// Function BPMV_ConfigView2.BPMV_ConfigView2_C.FocusWidgetForScenario_Direct
// 0x0020 (0x0020 - 0x0000)
struct BPMV_ConfigView2_C_FocusWidgetForScenario_Direct final
{
public:
	ENeoUIFocusWidgetScenario                     scenario;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FNeoUIFocusWidgetParam                 Param;                                             // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UWidget*                                ReturnValue;                                       // 0x0018(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BPMV_ConfigView2_C_FocusWidgetForScenario_Direct;

// Function BPMV_ConfigView2.BPMV_ConfigView2_C.DoCustomNavigation_0
// 0x0030 (0x0030 - 0x0000)
struct BPMV_ConfigView2_C_DoCustomNavigation_0 final
{
public:
	EUINavigation                                 Navigation_0;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNeoUIBlueprintableVMBase*              CallFunc_GetOwnerVM_Unsafe_ReturnValue;            // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJHNeoUIConfigModuleVM2*                K2Node_DynamicCast_AsJHNeo_UIConfig_Module_VM2;    // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_Navi_GotoContent_ReturnValue;             // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BPMV_ConfigView2_C_DoCustomNavigation_0;

SDK_PARAM_NAMESPACE_END
SDK_NAMESPACE_END
