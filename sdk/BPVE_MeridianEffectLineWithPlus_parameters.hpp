#pragma once



// Package: BPVE_MeridianEffectLineWithPlus

#include "Basic.hpp"


SDK_NAMESPACE_START
SDK_PARAM_NAMESPACE_START

// Function BPVE_MeridianEffectLineWithPlus.BPVE_MeridianEffectLineWithPlus_C.ExecuteUbergraph_BPVE_MeridianEffectLineWithPlus
// 0x0088 (0x0088 - 0x0000)
struct BPVE_MeridianEffectLineWithPlus_C_ExecuteUbergraph_BPVE_MeridianEffectLineWithPlus final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_intFlag;                              // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 K2Node_Event_strFlag;                              // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UJHNeoUISubsystem*                      CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJHNeoUITipsModuleVM_Gamepad*           CallFunc_Tips_Gamepad_ReturnValue;                 // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             CallFunc_GetBrushResourceAsTexture2D_ReturnValue;  // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_FormatedPropertyTip_ReturnValue;          // 0x0030(0x0018)()
	class FString                                 CallFunc_GetPathName_ReturnValue;                  // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UCommonTipVE*                           CallFunc_ShowCommonTip_ReturnValue;                // 0x0058(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNeoUIBlueprintableVMBase*              CallFunc_GetOwnerVM_Unsafe_ReturnValue;            // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJHNeoUIMeridianVM*                     K2Node_DynamicCast_AsJHNeo_UIMeridian_VM;          // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_71[0x7];                                       // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UJHNeoUIGamepadConfirmButton*           K2Node_ComponentBoundEvent_Btn;                    // 0x0078(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_vflag;                                // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
DUMPER7_ASSERTS_BPVE_MeridianEffectLineWithPlus_C_ExecuteUbergraph_BPVE_MeridianEffectLineWithPlus;

// Function BPVE_MeridianEffectLineWithPlus.BPVE_MeridianEffectLineWithPlus_C.EVT_UpdatePlusButtonVisibility
// 0x0001 (0x0001 - 0x0000)
struct BPVE_MeridianEffectLineWithPlus_C_EVT_UpdatePlusButtonVisibility final
{
public:
	bool                                          vflag;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
DUMPER7_ASSERTS_BPVE_MeridianEffectLineWithPlus_C_EVT_UpdatePlusButtonVisibility;

// Function BPVE_MeridianEffectLineWithPlus.BPVE_MeridianEffectLineWithPlus_C.BndEvt__BPVE_MeridianEffectLineWithPlus_BTN_PrimeMeridianDetailLine_K2Node_ComponentBoundEvent_1_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct BPVE_MeridianEffectLineWithPlus_C_BndEvt__BPVE_MeridianEffectLineWithPlus_BTN_PrimeMeridianDetailLine_K2Node_ComponentBoundEvent_1_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature final
{
public:
	class UJHNeoUIGamepadConfirmButton*           Btn;                                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BPVE_MeridianEffectLineWithPlus_C_BndEvt__BPVE_MeridianEffectLineWithPlus_BTN_PrimeMeridianDetailLine_K2Node_ComponentBoundEvent_1_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature;

// Function BPVE_MeridianEffectLineWithPlus.BPVE_MeridianEffectLineWithPlus_C.EVT_GamepadShowTips
// 0x0018 (0x0018 - 0x0000)
struct BPVE_MeridianEffectLineWithPlus_C_EVT_GamepadShowTips final
{
public:
	int32                                         intflag;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 strFlag;                                           // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BPVE_MeridianEffectLineWithPlus_C_EVT_GamepadShowTips;

// Function BPVE_MeridianEffectLineWithPlus.BPVE_MeridianEffectLineWithPlus_C.GetToolTipWidget_0
// 0x0050 (0x0050 - 0x0000)
struct BPVE_MeridianEffectLineWithPlus_C_GetToolTipWidget_0 final
{
public:
	class UWidget*                                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_FormatedPropertyTip_ReturnValue;          // 0x0008(0x0018)()
	class UTexture2D*                             CallFunc_GetBrushResourceAsTexture2D_ReturnValue;  // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJHNeoUISubsystem*                      CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetPathName_ReturnValue;                  // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UJHNeoUITipsModuleVM*                   CallFunc_Tips_ReturnValue;                         // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonTipVE*                           CallFunc_ShowCommonTip_ReturnValue;                // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BPVE_MeridianEffectLineWithPlus_C_GetToolTipWidget_0;

SDK_PARAM_NAMESPACE_END
SDK_NAMESPACE_END
