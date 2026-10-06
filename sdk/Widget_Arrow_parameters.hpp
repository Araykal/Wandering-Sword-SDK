#pragma once



// Package: Widget_Arrow

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"
#include "InputCore_structs.hpp"
#include "Engine_structs.hpp"


SDK_NAMESPACE_START
SDK_PARAM_NAMESPACE_START

// Function Widget_Arrow.Widget_Arrow_C.ExecuteUbergraph_Widget_Arrow
// 0x000C (0x000C - 0x0000)
struct Widget_Arrow_C_ExecuteUbergraph_Widget_Arrow final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_ParamFlag;                      // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
DUMPER7_ASSERTS_Widget_Arrow_C_ExecuteUbergraph_Widget_Arrow;

// Function Widget_Arrow.Widget_Arrow_C.InitWidget
// 0x0004 (0x0004 - 0x0000)
struct Widget_Arrow_C_InitWidget final
{
public:
	int32                                         ParamFlag;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_Widget_Arrow_C_InitWidget;

// Function Widget_Arrow.Widget_Arrow_C.OnKeyDown
// 0x02D0 (0x02D0 - 0x0000)
struct Widget_Arrow_C_OnKeyDown final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                              InKeyEvent;                                        // 0x0038(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                            ReturnValue;                                       // 0x0070(0x00B8)(Parm, OutParm, ReturnParm)
	struct FKey                                   CallFunc_GetKey_ReturnValue;                       // 0x0128(0x0018)(HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0140(0x0018)()
	class FText                                   CallFunc_Key_GetDisplayName_ReturnValue;           // 0x0158(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0170(0x0040)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x01B0(0x0040)(HasGetValueTypeHash)
	struct FEventReply                            CallFunc_Handled_ReturnValue;                      // 0x01F0(0x00B8)()
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x02A8(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x02B8(0x0018)()
};
DUMPER7_ASSERTS_Widget_Arrow_C_OnKeyDown;

// Function Widget_Arrow.Widget_Arrow_C.SetButtonStyle
// 0x0008 (0x0008 - 0x0000)
struct Widget_Arrow_C_SetButtonStyle final
{
public:
	int32                                         Style;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
DUMPER7_ASSERTS_Widget_Arrow_C_SetButtonStyle;

SDK_PARAM_NAMESPACE_END
SDK_NAMESPACE_END
