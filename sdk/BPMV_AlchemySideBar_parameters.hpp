#pragma once



// Package: BPMV_AlchemySideBar

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"
#include "NeoUI_structs.hpp"


SDK_NAMESPACE_START
SDK_PARAM_NAMESPACE_START

// Function BPMV_AlchemySideBar.BPMV_AlchemySideBar_C.ExecuteUbergraph_BPMV_AlchemySideBar
// 0x0068 (0x0068 - 0x0000)
struct BPMV_AlchemySideBar_C_ExecuteUbergraph_BPMV_AlchemySideBar final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UNeoUIBlueprintableVMBase*              CallFunc_GetOwnerVM_Unsafe_ReturnValue;            // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTeamSideBarVM2*                        K2Node_DynamicCast_AsTeam_Side_Bar_VM2;            // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ENeoUIFocusWidgetScenario                     K2Node_Event_Scenario;                             // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1A[0x6];                                       // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FNeoUIFocusWidgetParam                 K2Node_Event_Param;                                // 0x0020(0x0010)()
	class UWidget*                                CallFunc_GetLocalDefaultFocusElement_ReturnValue;  // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UGamepadActiveAreaDisplay*>      K2Node_MakeArray_Array;                            // 0x0038(0x0010)(ReferenceParm, ContainsInstancedReference)
	bool                                          CallFunc_BP_IsGamepadMode_ReturnValue;             // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UNeoUIBlueprintableVMBase*              CallFunc_GetOwnerVM_Unsafe_ReturnValue_1;          // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTeamSideBarVM2*                        K2Node_DynamicCast_AsTeam_Side_Bar_VM2_1;          // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
DUMPER7_ASSERTS_BPMV_AlchemySideBar_C_ExecuteUbergraph_BPMV_AlchemySideBar;

// Function BPMV_AlchemySideBar.BPMV_AlchemySideBar_C.EVT_FocusWidgetForScenario
// 0x0018 (0x0018 - 0x0000)
struct BPMV_AlchemySideBar_C_EVT_FocusWidgetForScenario final
{
public:
	ENeoUIFocusWidgetScenario                     scenario;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FNeoUIFocusWidgetParam                 Param;                                             // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm)
};
DUMPER7_ASSERTS_BPMV_AlchemySideBar_C_EVT_FocusWidgetForScenario;

// Function BPMV_AlchemySideBar.BPMV_AlchemySideBar_C.DoCustomNavigation_0
// 0x0030 (0x0030 - 0x0000)
struct BPMV_AlchemySideBar_C_DoCustomNavigation_0 final
{
public:
	EUINavigation                                 Navigation_0;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNeoUIUniversalModuleVMBase*            CallFunc_GetNeoUIVM_ReturnValue;                   // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTeamSideBarVM2*                        K2Node_DynamicCast_AsTeam_Side_Bar_VM2;            // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_FindSiblingModuleWidget_ReturnValue;      // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BPMV_AlchemySideBar_C_DoCustomNavigation_0;

// Function BPMV_AlchemySideBar.BPMV_AlchemySideBar_C.FocusWidgetForScenario_Direct
// 0x0028 (0x0028 - 0x0000)
struct BPMV_AlchemySideBar_C_FocusWidgetForScenario_Direct final
{
public:
	ENeoUIFocusWidgetScenario                     scenario;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FNeoUIFocusWidgetParam                 Param;                                             // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UWidget*                                ReturnValue;                                       // 0x0018(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetLocalDefaultFocusElement_ReturnValue;  // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BPMV_AlchemySideBar_C_FocusWidgetForScenario_Direct;

// Function BPMV_AlchemySideBar.BPMV_AlchemySideBar_C.On_IMG_Sort_UP_MouseButtonDown_0
// 0x0230 (0x0230 - 0x0000)
struct BPMV_AlchemySideBar_C_On_IMG_Sort_UP_MouseButtonDown_0 final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0038(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                            ReturnValue;                                       // 0x00A8(0x00B8)(Parm, OutParm, ReturnParm)
	struct FEventReply                            CallFunc_Handled_ReturnValue;                      // 0x0160(0x00B8)()
	class UNeoUIBlueprintableVMBase*              CallFunc_GetOwnerVM_Unsafe_ReturnValue;            // 0x0218(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTeamSideBarVM2*                        K2Node_DynamicCast_AsTeam_Side_Bar_VM2;            // 0x0220(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0228(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
DUMPER7_ASSERTS_BPMV_AlchemySideBar_C_On_IMG_Sort_UP_MouseButtonDown_0;

// Function BPMV_AlchemySideBar.BPMV_AlchemySideBar_C.On_IMG_Sort_Down_MouseButtonDown_0
// 0x0230 (0x0230 - 0x0000)
struct BPMV_AlchemySideBar_C_On_IMG_Sort_Down_MouseButtonDown_0 final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0038(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                            ReturnValue;                                       // 0x00A8(0x00B8)(Parm, OutParm, ReturnParm)
	struct FEventReply                            CallFunc_Handled_ReturnValue;                      // 0x0160(0x00B8)()
	class UNeoUIBlueprintableVMBase*              CallFunc_GetOwnerVM_Unsafe_ReturnValue;            // 0x0218(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTeamSideBarVM2*                        K2Node_DynamicCast_AsTeam_Side_Bar_VM2;            // 0x0220(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0228(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
DUMPER7_ASSERTS_BPMV_AlchemySideBar_C_On_IMG_Sort_Down_MouseButtonDown_0;

SDK_PARAM_NAMESPACE_END
SDK_NAMESPACE_END
