#pragma once



// Package: BPMV_MeridianMain

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "NeoUI_structs.hpp"


SDK_NAMESPACE_START
SDK_PARAM_NAMESPACE_START

// Function BPMV_MeridianMain.BPMV_MeridianMain_C.ExecuteUbergraph_BPMV_MeridianMain
// 0x00C0 (0x00C0 - 0x0000)
struct BPMV_MeridianMain_C_ExecuteUbergraph_BPMV_MeridianMain final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNeoUISubsystem*                        CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNeoUIBlueprintableVMBase*              CallFunc_GetOwnerVM_Unsafe_ReturnValue;            // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNeoUIGlobalInputManager*               CallFunc_GetInputManager_ReturnValue;              // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsGamepadMode_ReturnValue;                // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x3];                                       // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetValueSafe_Int32_ReturnValue;           // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UNeoUIContainerVisualBase*>      K2Node_MakeArray_Array;                            // 0x0030(0x0010)(ReferenceParm, ContainsInstancedReference)
	TMap<class FName, class UNeoUINamedSlot*>     K2Node_MakeMap_Map;                                // 0x0040(0x0050)(ContainsInstancedReference)
	class UJHNeoUIGamepadConfirmButton*           K2Node_ComponentBoundEvent_Btn;                    // 0x0090(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UGamepadActiveAreaDisplay*>      K2Node_MakeArray_Array_1;                          // 0x00A0(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UNeoUISubsystem*                        CallFunc_GetGameInstanceSubsystem_ReturnValue_1;   // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNeoUIModuleVMBase*                     CallFunc_ShowModuleSingular_ReturnValue;           // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BPMV_MeridianMain_C_ExecuteUbergraph_BPMV_MeridianMain;

// Function BPMV_MeridianMain.BPMV_MeridianMain_C.BndEvt__BPMV_MeridianMain_BTN_MeridianMainReturn_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct BPMV_MeridianMain_C_BndEvt__BPMV_MeridianMain_BTN_MeridianMainReturn_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature final
{
public:
	class UJHNeoUIGamepadConfirmButton*           Btn;                                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BPMV_MeridianMain_C_BndEvt__BPMV_MeridianMain_BTN_MeridianMainReturn_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature;

// Function BPMV_MeridianMain.BPMV_MeridianMain_C.FocusWidgetForScenario_Direct
// 0x0020 (0x0020 - 0x0000)
struct BPMV_MeridianMain_C_FocusWidgetForScenario_Direct final
{
public:
	ENeoUIFocusWidgetScenario                     scenario;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FNeoUIFocusWidgetParam                 Param;                                             // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UWidget*                                ReturnValue;                                       // 0x0018(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BPMV_MeridianMain_C_FocusWidgetForScenario_Direct;

// Function BPMV_MeridianMain.BPMV_MeridianMain_C.GotoMain
// 0x0030 (0x0030 - 0x0000)
struct BPMV_MeridianMain_C_GotoMain final
{
public:
	EUINavigation                                 Navigation_0;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNeoUIBlueprintableVMBase*              CallFunc_GetOwnerVM_Unsafe_ReturnValue;            // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJHMeridianMainVM*                      K2Node_DynamicCast_AsJHMeridian_Main_VM;           // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_FindNavigationFocusByTag_ReturnValue;     // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BPMV_MeridianMain_C_GotoMain;

// Function BPMV_MeridianMain.BPMV_MeridianMain_C.FindFocusWidgetByTag
// 0x0020 (0x0020 - 0x0000)
struct BPMV_MeridianMain_C_FindFocusWidgetByTag final
{
public:
	class FString                                 StrParam;                                          // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UWidget*                                ReturnValue;                                       // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchString_CmpSuccess;                    // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
DUMPER7_ASSERTS_BPMV_MeridianMain_C_FindFocusWidgetByTag;

SDK_PARAM_NAMESPACE_END
SDK_NAMESPACE_END
