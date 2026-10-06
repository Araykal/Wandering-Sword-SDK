#pragma once



// Package: BPVE_MeridianNode

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


SDK_NAMESPACE_START
SDK_PARAM_NAMESPACE_START

// Function BPVE_MeridianNode.BPVE_MeridianNode_C.ExecuteUbergraph_BPVE_MeridianNode
// 0x0090 (0x0090 - 0x0000)
struct BPVE_MeridianNode_C_ExecuteUbergraph_BPVE_MeridianNode final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnyTypeStaticPointer*                  CallFunc_GetData_ReturnValue;                      // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNeoUICommonButton*                     K2Node_ComponentBoundEvent_SrcWidget;              // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNeoUIBlueprintableVMBase*              CallFunc_GetOwnerVM_Unsafe_ReturnValue;            // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnyTypeStaticPointer*                  CallFunc_GetData_ReturnValue_1;                    // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJHMeridianMain_ZimaiVM*                K2Node_DynamicCast_AsJHMeridian_Main_Zimai_VM;     // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UJHNeoUIGamepadConfirmButton*           K2Node_ComponentBoundEvent_Btn;                    // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_intFlag;                              // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44[0x4];                                       // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_Event_strFlag;                              // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UJHNeoUISubsystem*                      CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetValueSafe_Int32_ReturnValue;           // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_64[0x4];                                       // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UJHNeoUITipsModuleVM_Gamepad*           CallFunc_Tips_Gamepad_ReturnValue;                 // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNeoUIBlueprintableVMBase*              CallFunc_GetOwnerVM_Unsafe_ReturnValue_1;          // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJHMeridianNodeTip*                     CallFunc_ShowMeridian_ReturnValue;                 // 0x0078(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJHMeridianMain_ZimaiVM*                K2Node_DynamicCast_AsJHMeridian_Main_Zimai_VM_1;   // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
DUMPER7_ASSERTS_BPVE_MeridianNode_C_ExecuteUbergraph_BPVE_MeridianNode;

// Function BPVE_MeridianNode.BPVE_MeridianNode_C.EVT_GamepadShowTips
// 0x0018 (0x0018 - 0x0000)
struct BPVE_MeridianNode_C_EVT_GamepadShowTips final
{
public:
	int32                                         intflag;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 strFlag;                                           // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BPVE_MeridianNode_C_EVT_GamepadShowTips;

// Function BPVE_MeridianNode.BPVE_MeridianNode_C.BndEvt__BPVE_MeridianNode_BTN_MeridianNode_K2Node_ComponentBoundEvent_1_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct BPVE_MeridianNode_C_BndEvt__BPVE_MeridianNode_BTN_MeridianNode_K2Node_ComponentBoundEvent_1_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature final
{
public:
	class UJHNeoUIGamepadConfirmButton*           Btn;                                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BPVE_MeridianNode_C_BndEvt__BPVE_MeridianNode_BTN_MeridianNode_K2Node_ComponentBoundEvent_1_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature;

// Function BPVE_MeridianNode.BPVE_MeridianNode_C.BndEvt__BPVE_MeridianNode_BPCMP_NeoUISimpleBtn_K2Node_ComponentBoundEvent_0_NeoUICommonButtonSingleClick__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct BPVE_MeridianNode_C_BndEvt__BPVE_MeridianNode_BPCMP_NeoUISimpleBtn_K2Node_ComponentBoundEvent_0_NeoUICommonButtonSingleClick__DelegateSignature final
{
public:
	class UNeoUICommonButton*                     SrcWidget;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BPVE_MeridianNode_C_BndEvt__BPVE_MeridianNode_BPCMP_NeoUISimpleBtn_K2Node_ComponentBoundEvent_0_NeoUICommonButtonSingleClick__DelegateSignature;

// Function BPVE_MeridianNode.BPVE_MeridianNode_C.Get_RootCanvas_ToolTipWidget_0
// 0x0060 (0x0060 - 0x0000)
struct BPVE_MeridianNode_C_Get_RootCanvas_ToolTipWidget_0 final
{
public:
	class UWidget*                                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_MakeLiteralText_ReturnValue;              // 0x0008(0x0018)()
	class UJHNeoUISubsystem*                      CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsHyperLink_ReturnValue;                  // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UJHNeoUITipsModuleVM*                   CallFunc_Tips_ReturnValue;                         // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_ShouldShowMeridianTip_ReturnValue;        // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3A[0x2];                                       // 0x003A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetValueSafe_Int32_ReturnValue;           // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJHNeoUISubsystem*                      CallFunc_GetGameInstanceSubsystem_ReturnValue_1;   // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJHMeridianNodeTip*                     CallFunc_ShowMeridian_ReturnValue;                 // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJHNeoUITipsModuleVM*                   CallFunc_Tips_ReturnValue_1;                       // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJHSimpleTip*                           CallFunc_ShowSimple_ReturnValue;                   // 0x0058(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BPVE_MeridianNode_C_Get_RootCanvas_ToolTipWidget_0;

// Function BPVE_MeridianNode.BPVE_MeridianNode_C.Reconcile Line Scale
// 0x0004 (0x0004 - 0x0000)
struct BPVE_MeridianNode_C_Reconcile_Line_Scale final
{
public:
	float                                         Value;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BPVE_MeridianNode_C_Reconcile_Line_Scale;

// Function BPVE_MeridianNode.BPVE_MeridianNode_C.Navi_GotoNextNode
// 0x0038 (0x0038 - 0x0000)
struct BPVE_MeridianNode_C_Navi_GotoNextNode final
{
public:
	EUINavigation                                 Navigation_0;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnyTypeStaticPointer*                  CallFunc_GetData_ReturnValue;                      // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNeoUIBlueprintableVMBase*              CallFunc_GetOwnerVM_Unsafe_ReturnValue;            // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJHMeridianMain_ZimaiVM*                K2Node_DynamicCast_AsJHMeridian_Main_Zimai_VM;     // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_NodeTree_NextWidget_ReturnValue;          // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BPVE_MeridianNode_C_Navi_GotoNextNode;

// Function BPVE_MeridianNode.BPVE_MeridianNode_C.Navi_GotoPreNode
// 0x0038 (0x0038 - 0x0000)
struct BPVE_MeridianNode_C_Navi_GotoPreNode final
{
public:
	EUINavigation                                 Navigation_0;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnyTypeStaticPointer*                  CallFunc_GetData_ReturnValue;                      // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNeoUIBlueprintableVMBase*              CallFunc_GetOwnerVM_Unsafe_ReturnValue;            // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJHMeridianMain_ZimaiVM*                K2Node_DynamicCast_AsJHMeridian_Main_Zimai_VM;     // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_NodeTree_PreWidget_ReturnValue;           // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BPVE_MeridianNode_C_Navi_GotoPreNode;

// Function BPVE_MeridianNode.BPVE_MeridianNode_C.Navi_GotoSideBar
// 0x0028 (0x0028 - 0x0000)
struct BPVE_MeridianNode_C_Navi_GotoSideBar final
{
public:
	EUINavigation                                 Navigation_0;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNeoUIUniversalModuleVMBase*            CallFunc_GetNeoUIVM_ReturnValue;                   // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNeoUIUniversalModuleVMBase*            CallFunc_GetRootModule_ReturnValue;                // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_FindNavigationFocusByTag_ReturnValue;     // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BPVE_MeridianNode_C_Navi_GotoSideBar;

// Function BPVE_MeridianNode.BPVE_MeridianNode_C.Navi_GotoDetail
// 0x0028 (0x0028 - 0x0000)
struct BPVE_MeridianNode_C_Navi_GotoDetail final
{
public:
	EUINavigation                                 Navigation_0;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNeoUIUniversalModuleVMBase*            CallFunc_GetNeoUIVM_ReturnValue;                   // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNeoUIUniversalModuleVMBase*            CallFunc_GetRootModule_ReturnValue;                // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_FindNavigationFocusByTag_ReturnValue;     // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BPVE_MeridianNode_C_Navi_GotoDetail;

SDK_PARAM_NAMESPACE_END
SDK_NAMESPACE_END
