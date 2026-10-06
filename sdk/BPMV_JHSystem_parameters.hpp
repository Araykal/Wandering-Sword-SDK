#pragma once



// Package: BPMV_JHSystem

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "NeoUI_structs.hpp"


SDK_NAMESPACE_START
SDK_PARAM_NAMESPACE_START

// Function BPMV_JHSystem.BPMV_JHSystem_C.ExecuteUbergraph_BPMV_JHSystem
// 0x0108 (0x0108 - 0x0000)
struct BPMV_JHSystem_C_ExecuteUbergraph_BPMV_JHSystem final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0004(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJHNeoUISubsystem*                      CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNeoUISubsystem*                        CallFunc_GetGameInstanceSubsystem_ReturnValue_1;   // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNeoUIModuleVMBase*                     CallFunc_ShowModuleSingular_ReturnValue;           // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNeoUIBlueprintableVMBase*              CallFunc_GetOwnerVM_Unsafe_ReturnValue;            // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNeoUIBlueprintableVMBase*              CallFunc_GetOwnerVM_Unsafe_ReturnValue_1;          // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNeoUISubsystem*                        CallFunc_GetGameInstanceSubsystem_ReturnValue_2;   // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJHNeoUIGamepadConfirmButton*           K2Node_ComponentBoundEvent_Btn_6;                  // 0x0070(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNeoUIModuleVMBase*                     CallFunc_ShowModuleSingular_ReturnValue_1;         // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJHNeoUIGamepadConfirmButton*           K2Node_ComponentBoundEvent_Btn_5;                  // 0x0080(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJHNeoUIConfigModuleVM2*                K2Node_DynamicCast_AsJHNeo_UIConfig_Module_VM2;    // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_91[0x7];                                       // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UJHNeoUIGamepadConfirmButton*           K2Node_ComponentBoundEvent_Btn_4;                  // 0x0098(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJHNeoUIGamepadConfirmButton*           K2Node_ComponentBoundEvent_Btn_3;                  // 0x00A0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJHNeoUIGamepadConfirmButton*           K2Node_ComponentBoundEvent_Btn_2;                  // 0x00A8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJHNeoUIGamepadConfirmButton*           K2Node_ComponentBoundEvent_Btn_1;                  // 0x00B0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJHNeoUIGamepadConfirmButton*           K2Node_ComponentBoundEvent_Btn;                    // 0x00B8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ENeoUIFocusWidgetScenario                     K2Node_Event_Scenario;                             // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C1[0x7];                                       // 0x00C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FNeoUIFocusWidgetParam                 K2Node_Event_Param;                                // 0x00C8(0x0010)()
	TArray<class UGamepadActiveAreaDisplay*>      K2Node_MakeArray_Array;                            // 0x00D8(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UNeoUISubsystem*                        CallFunc_GetGameInstanceSubsystem_ReturnValue_3;   // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNeoUIModuleVMBase*                     CallFunc_ShowModuleSingular_ReturnValue_2;         // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNeoUIModuleVMBase*                     CallFunc_ShowModuleSingular_ReturnValue_3;         // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_IsGamepadMode_ReturnValue;             // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
DUMPER7_ASSERTS_BPMV_JHSystem_C_ExecuteUbergraph_BPMV_JHSystem;

// Function BPMV_JHSystem.BPMV_JHSystem_C.EVT_FocusWidgetForScenario
// 0x0018 (0x0018 - 0x0000)
struct BPMV_JHSystem_C_EVT_FocusWidgetForScenario final
{
public:
	ENeoUIFocusWidgetScenario                     scenario;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FNeoUIFocusWidgetParam                 Param;                                             // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm)
};
DUMPER7_ASSERTS_BPMV_JHSystem_C_EVT_FocusWidgetForScenario;

// Function BPMV_JHSystem.BPMV_JHSystem_C.BndEvt__BPMV_JHSystem_BTN_LineExit_K2Node_ComponentBoundEvent_14_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct BPMV_JHSystem_C_BndEvt__BPMV_JHSystem_BTN_LineExit_K2Node_ComponentBoundEvent_14_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature final
{
public:
	class UJHNeoUIGamepadConfirmButton*           Btn;                                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BPMV_JHSystem_C_BndEvt__BPMV_JHSystem_BTN_LineExit_K2Node_ComponentBoundEvent_14_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature;

// Function BPMV_JHSystem.BPMV_JHSystem_C.BndEvt__BPMV_JHSystem_BTN_Return_K2Node_ComponentBoundEvent_13_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct BPMV_JHSystem_C_BndEvt__BPMV_JHSystem_BTN_Return_K2Node_ComponentBoundEvent_13_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature final
{
public:
	class UJHNeoUIGamepadConfirmButton*           Btn;                                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BPMV_JHSystem_C_BndEvt__BPMV_JHSystem_BTN_Return_K2Node_ComponentBoundEvent_13_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature;

// Function BPMV_JHSystem.BPMV_JHSystem_C.BndEvt__BPMV_JHSystem_BTN_Tutorial_K2Node_ComponentBoundEvent_12_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct BPMV_JHSystem_C_BndEvt__BPMV_JHSystem_BTN_Tutorial_K2Node_ComponentBoundEvent_12_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature final
{
public:
	class UJHNeoUIGamepadConfirmButton*           Btn;                                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BPMV_JHSystem_C_BndEvt__BPMV_JHSystem_BTN_Tutorial_K2Node_ComponentBoundEvent_12_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature;

// Function BPMV_JHSystem.BPMV_JHSystem_C.BndEvt__BPMV_JHSystem_BTN_Setting_K2Node_ComponentBoundEvent_11_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct BPMV_JHSystem_C_BndEvt__BPMV_JHSystem_BTN_Setting_K2Node_ComponentBoundEvent_11_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature final
{
public:
	class UJHNeoUIGamepadConfirmButton*           Btn;                                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BPMV_JHSystem_C_BndEvt__BPMV_JHSystem_BTN_Setting_K2Node_ComponentBoundEvent_11_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature;

// Function BPMV_JHSystem.BPMV_JHSystem_C.BndEvt__BPMV_JHSystem_BTN_Load_K2Node_ComponentBoundEvent_10_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct BPMV_JHSystem_C_BndEvt__BPMV_JHSystem_BTN_Load_K2Node_ComponentBoundEvent_10_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature final
{
public:
	class UJHNeoUIGamepadConfirmButton*           Btn;                                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BPMV_JHSystem_C_BndEvt__BPMV_JHSystem_BTN_Load_K2Node_ComponentBoundEvent_10_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature;

// Function BPMV_JHSystem.BPMV_JHSystem_C.BndEvt__BPMV_JHSystem_BTN_Save_K2Node_ComponentBoundEvent_9_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct BPMV_JHSystem_C_BndEvt__BPMV_JHSystem_BTN_Save_K2Node_ComponentBoundEvent_9_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature final
{
public:
	class UJHNeoUIGamepadConfirmButton*           Btn;                                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BPMV_JHSystem_C_BndEvt__BPMV_JHSystem_BTN_Save_K2Node_ComponentBoundEvent_9_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature;

// Function BPMV_JHSystem.BPMV_JHSystem_C.BndEvt__BPMV_JHSystem_BTN_Continue_K2Node_ComponentBoundEvent_8_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct BPMV_JHSystem_C_BndEvt__BPMV_JHSystem_BTN_Continue_K2Node_ComponentBoundEvent_8_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature final
{
public:
	class UJHNeoUIGamepadConfirmButton*           Btn;                                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BPMV_JHSystem_C_BndEvt__BPMV_JHSystem_BTN_Continue_K2Node_ComponentBoundEvent_8_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature;

// Function BPMV_JHSystem.BPMV_JHSystem_C.Tick
// 0x003C (0x003C - 0x0000)
struct BPMV_JHSystem_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BPMV_JHSystem_C_Tick;

SDK_PARAM_NAMESPACE_END
SDK_NAMESPACE_END
