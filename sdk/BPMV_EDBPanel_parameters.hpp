#pragma once



// Package: BPMV_EDBPanel

#include "Basic.hpp"

#include "NeoUI_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"


SDK_NAMESPACE_START
SDK_PARAM_NAMESPACE_START

// Function BPMV_EDBPanel.BPMV_EDBPanel_C.ExecuteUbergraph_BPMV_EDBPanel
// 0x0018 (0x0018 - 0x0000)
struct BPMV_EDBPanel_C_ExecuteUbergraph_BPMV_EDBPanel final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_1;           // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BPMV_EDBPanel_C_ExecuteUbergraph_BPMV_EDBPanel;

// Function BPMV_EDBPanel.BPMV_EDBPanel_C.OnMouseButtonDown_0
// 0x0218 (0x0218 - 0x0000)
struct BPMV_EDBPanel_C_OnMouseButtonDown_0 final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0038(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                            ReturnValue;                                       // 0x00A8(0x00B8)(Parm, OutParm, ReturnParm)
	struct FEventReply                            CallFunc_Handled_ReturnValue;                      // 0x0160(0x00B8)()
};
DUMPER7_ASSERTS_BPMV_EDBPanel_C_OnMouseButtonDown_0;

// Function BPMV_EDBPanel.BPMV_EDBPanel_C.FocusWidgetForScenario_Direct
// 0x0030 (0x0030 - 0x0000)
struct BPMV_EDBPanel_C_FocusWidgetForScenario_Direct final
{
public:
	ENeoUIFocusWidgetScenario                     scenario;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FNeoUIFocusWidgetParam                 Param;                                             // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UWidget*                                ReturnValue;                                       // 0x0018(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsVisible_ReturnValue;                    // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
DUMPER7_ASSERTS_BPMV_EDBPanel_C_FocusWidgetForScenario_Direct;

SDK_PARAM_NAMESPACE_END
SDK_NAMESPACE_END
