#pragma once



// Package: BPMV_Config_LanView2

#include "Basic.hpp"

#include "NeoUI_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"


SDK_NAMESPACE_START
SDK_PARAM_NAMESPACE_START

// Function BPMV_Config_LanView2.BPMV_Config_LanView2_C.ExecuteUbergraph_BPMV_Config_LanView2
// 0x0040 (0x0040 - 0x0000)
struct BPMV_Config_LanView2_C_ExecuteUbergraph_BPMV_Config_LanView2 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const class FString& SelectedItem, ESelectInfo SelectionType)> K2Node_CreateDelegate_OutputDelegate; // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UNeoUIContainerVisualBase*>      K2Node_MakeArray_Array;                            // 0x0018(0x0010)(ReferenceParm, ContainsInstancedReference)
	class FString                                 K2Node_CustomEvent_SelectedItem;                   // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	ESelectInfo                                   K2Node_CustomEvent_SelectionType;                  // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BPMV_Config_LanView2_C_ExecuteUbergraph_BPMV_Config_LanView2;

// Function BPMV_Config_LanView2.BPMV_Config_LanView2_C.CustomEvent_0
// 0x0018 (0x0018 - 0x0000)
struct BPMV_Config_LanView2_C_CustomEvent_0 final
{
public:
	class FString                                 SelectedItem;                                      // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	ESelectInfo                                   SelectionType;                                     // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BPMV_Config_LanView2_C_CustomEvent_0;

// Function BPMV_Config_LanView2.BPMV_Config_LanView2_C.OnMouseButtonDown_0
// 0x0220 (0x0220 - 0x0000)
struct BPMV_Config_LanView2_C_OnMouseButtonDown_0 final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0038(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                            ReturnValue;                                       // 0x00A8(0x00B8)(Parm, OutParm, ReturnParm)
	struct FEventReply                            CallFunc_Handled_ReturnValue;                      // 0x0160(0x00B8)()
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0218(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
DUMPER7_ASSERTS_BPMV_Config_LanView2_C_OnMouseButtonDown_0;

// Function BPMV_Config_LanView2.BPMV_Config_LanView2_C.FocusWidgetForScenario_Direct
// 0x0020 (0x0020 - 0x0000)
struct BPMV_Config_LanView2_C_FocusWidgetForScenario_Direct final
{
public:
	ENeoUIFocusWidgetScenario                     scenario;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FNeoUIFocusWidgetParam                 Param;                                             // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UWidget*                                ReturnValue;                                       // 0x0018(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BPMV_Config_LanView2_C_FocusWidgetForScenario_Direct;

SDK_PARAM_NAMESPACE_END
SDK_NAMESPACE_END
