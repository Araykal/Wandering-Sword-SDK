#pragma once



// Package: BPMV_SimpleItemList

#include "Basic.hpp"

#include "NeoUI_structs.hpp"


SDK_NAMESPACE_START
SDK_PARAM_NAMESPACE_START

// Function BPMV_SimpleItemList.BPMV_SimpleItemList_C.ExecuteUbergraph_BPMV_SimpleItemList
// 0x0028 (0x0028 - 0x0000)
struct BPMV_SimpleItemList_C_ExecuteUbergraph_BPMV_SimpleItemList final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_ResetAndFocus_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ENeoUIFocusWidgetScenario                     K2Node_Event_Scenario;                             // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FNeoUIFocusWidgetParam                 K2Node_Event_Param;                                // 0x0018(0x0010)()
};
DUMPER7_ASSERTS_BPMV_SimpleItemList_C_ExecuteUbergraph_BPMV_SimpleItemList;

// Function BPMV_SimpleItemList.BPMV_SimpleItemList_C.EVT_FocusWidgetForScenario
// 0x0018 (0x0018 - 0x0000)
struct BPMV_SimpleItemList_C_EVT_FocusWidgetForScenario final
{
public:
	ENeoUIFocusWidgetScenario                     scenario;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FNeoUIFocusWidgetParam                 Param;                                             // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm)
};
DUMPER7_ASSERTS_BPMV_SimpleItemList_C_EVT_FocusWidgetForScenario;

// Function BPMV_SimpleItemList.BPMV_SimpleItemList_C.FocusWidgetForScenario_Direct
// 0x0028 (0x0028 - 0x0000)
struct BPMV_SimpleItemList_C_FocusWidgetForScenario_Direct final
{
public:
	ENeoUIFocusWidgetScenario                     scenario;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FNeoUIFocusWidgetParam                 Param;                                             // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UWidget*                                ReturnValue;                                       // 0x0018(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_ResetAndFocus_ReturnValue;                // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BPMV_SimpleItemList_C_FocusWidgetForScenario_Direct;

SDK_PARAM_NAMESPACE_END
SDK_NAMESPACE_END
