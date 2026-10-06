#pragma once



// Package: BPMV_Zimai_Yin

#include "Basic.hpp"

#include "NeoUI_structs.hpp"
#include "SlateCore_structs.hpp"


SDK_NAMESPACE_START
SDK_PARAM_NAMESPACE_START

// Function BPMV_Zimai_Yin.BPMV_Zimai_Yin_C.ExecuteUbergraph_BPMV_Zimai_Yin
// 0x00A0 (0x00A0 - 0x0000)
struct BPMV_Zimai_Yin_C_ExecuteUbergraph_BPMV_Zimai_Yin final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UNeoUIContainerVisualBase*>      K2Node_MakeArray_Array;                            // 0x0008(0x0010)(ReferenceParm, ContainsInstancedReference)
	struct FSlateBrush                            CallFunc_MakeBrushFromTexture_ReturnValue;         // 0x0018(0x0088)()
};
DUMPER7_ASSERTS_BPMV_Zimai_Yin_C_ExecuteUbergraph_BPMV_Zimai_Yin;

// Function BPMV_Zimai_Yin.BPMV_Zimai_Yin_C.FocusWidgetForScenario_Direct
// 0x0020 (0x0020 - 0x0000)
struct BPMV_Zimai_Yin_C_FocusWidgetForScenario_Direct final
{
public:
	ENeoUIFocusWidgetScenario                     scenario;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FNeoUIFocusWidgetParam                 Param;                                             // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UWidget*                                ReturnValue;                                       // 0x0018(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BPMV_Zimai_Yin_C_FocusWidgetForScenario_Direct;

SDK_PARAM_NAMESPACE_END
SDK_NAMESPACE_END
