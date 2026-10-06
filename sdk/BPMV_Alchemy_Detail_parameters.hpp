#pragma once



// Package: BPMV_Alchemy_Detail

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "NeoUI_structs.hpp"


SDK_NAMESPACE_START
SDK_PARAM_NAMESPACE_START

// Function BPMV_Alchemy_Detail.BPMV_Alchemy_Detail_C.ExecuteUbergraph_BPMV_Alchemy_Detail
// 0x0048 (0x0048 - 0x0000)
struct BPMV_Alchemy_Detail_C_ExecuteUbergraph_BPMV_Alchemy_Detail final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UNeoUIContainerVisualBase*>      K2Node_MakeArray_Array;                            // 0x0008(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UNeoUIBlueprintableVMBase*              CallFunc_GetOwnerVM_Unsafe_ReturnValue;            // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJHNeoUIAlchemyDetailVM*                K2Node_DynamicCast_AsJHNeo_UIAlchemy_Detail_VM;    // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UGamepadActiveAreaDisplay*>      K2Node_MakeArray_Array_1;                          // 0x0030(0x0010)(ReferenceParm, ContainsInstancedReference)
	bool                                          K2Node_Event_isVisible;                            // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
DUMPER7_ASSERTS_BPMV_Alchemy_Detail_C_ExecuteUbergraph_BPMV_Alchemy_Detail;

// Function BPMV_Alchemy_Detail.BPMV_Alchemy_Detail_C.EVT_UpdateMainBtnVisibility
// 0x0001 (0x0001 - 0x0000)
struct BPMV_Alchemy_Detail_C_EVT_UpdateMainBtnVisibility final
{
public:
	bool                                          IsVisible_0;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
DUMPER7_ASSERTS_BPMV_Alchemy_Detail_C_EVT_UpdateMainBtnVisibility;

// Function BPMV_Alchemy_Detail.BPMV_Alchemy_Detail_C.FocusWidgetForScenario_Direct
// 0x0020 (0x0020 - 0x0000)
struct BPMV_Alchemy_Detail_C_FocusWidgetForScenario_Direct final
{
public:
	ENeoUIFocusWidgetScenario                     scenario;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FNeoUIFocusWidgetParam                 Param;                                             // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UWidget*                                ReturnValue;                                       // 0x0018(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BPMV_Alchemy_Detail_C_FocusWidgetForScenario_Direct;

// Function BPMV_Alchemy_Detail.BPMV_Alchemy_Detail_C.Navi_GotoLeft
// 0x0020 (0x0020 - 0x0000)
struct BPMV_Alchemy_Detail_C_Navi_GotoLeft final
{
public:
	EUINavigation                                 Navigation_0;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNeoUIUniversalModuleVMBase*            CallFunc_GetNeoUIVM_ReturnValue;                   // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_ChangeNaviFocus_ReturnValue;              // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BPMV_Alchemy_Detail_C_Navi_GotoLeft;

// Function BPMV_Alchemy_Detail.BPMV_Alchemy_Detail_C.Navi_GotoConfirm
// 0x0010 (0x0010 - 0x0000)
struct BPMV_Alchemy_Detail_C_Navi_GotoConfirm final
{
public:
	EUINavigation                                 Navigation_0;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BPMV_Alchemy_Detail_C_Navi_GotoConfirm;

// Function BPMV_Alchemy_Detail.BPMV_Alchemy_Detail_C.Navi_GotoMaterial
// 0x0010 (0x0010 - 0x0000)
struct BPMV_Alchemy_Detail_C_Navi_GotoMaterial final
{
public:
	EUINavigation                                 Navigation_0;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BPMV_Alchemy_Detail_C_Navi_GotoMaterial;

SDK_PARAM_NAMESPACE_END
SDK_NAMESPACE_END
