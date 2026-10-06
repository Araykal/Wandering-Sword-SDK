#pragma once



// Package: NeoUI

#include "Basic.hpp"

#include "NeoUI_structs.hpp"
#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"


SDK_NAMESPACE_START
SDK_PARAM_NAMESPACE_START

// Function NeoUI.NeoUIVisualBase.GetIsInFocusPath
// 0x0001 (0x0001 - 0x0000)
struct NeoUIVisualBase_GetIsInFocusPath final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_NeoUIVisualBase_GetIsInFocusPath;

// Function NeoUI.NeoUIPassiveVisualBase.ContainsKey
// 0x0018 (0x0018 - 0x0000)
struct NeoUIPassiveVisualBase_ContainsKey final
{
public:
	class FString                                 Key;                                               // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
DUMPER7_ASSERTS_NeoUIPassiveVisualBase_ContainsKey;

// Function NeoUI.NeoUIPassiveVisualBase.GetValueSafe_Bool
// 0x0018 (0x0018 - 0x0000)
struct NeoUIPassiveVisualBase_GetValueSafe_Bool final
{
public:
	class FString                                 Key;                                               // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
DUMPER7_ASSERTS_NeoUIPassiveVisualBase_GetValueSafe_Bool;

// Function NeoUI.NeoUIPassiveVisualBase.GetValueSafe_Float
// 0x0018 (0x0018 - 0x0000)
struct NeoUIPassiveVisualBase_GetValueSafe_Float final
{
public:
	class FString                                 Key;                                               // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ReturnValue;                                       // 0x0010(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
DUMPER7_ASSERTS_NeoUIPassiveVisualBase_GetValueSafe_Float;

// Function NeoUI.NeoUIPassiveVisualBase.GetValueSafe_Int32
// 0x0018 (0x0018 - 0x0000)
struct NeoUIPassiveVisualBase_GetValueSafe_Int32 final
{
public:
	class FString                                 Key;                                               // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ReturnValue;                                       // 0x0010(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
DUMPER7_ASSERTS_NeoUIPassiveVisualBase_GetValueSafe_Int32;

// Function NeoUI.NeoUIPassiveVisualBase.GetValueSafe_String
// 0x0020 (0x0020 - 0x0000)
struct NeoUIPassiveVisualBase_GetValueSafe_String final
{
public:
	class FString                                 Key;                                               // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 ReturnValue;                                       // 0x0010(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_NeoUIPassiveVisualBase_GetValueSafe_String;

// Function NeoUI.NeoUIPassiveVisualBase.GetValueSafe_Text
// 0x0028 (0x0028 - 0x0000)
struct NeoUIPassiveVisualBase_GetValueSafe_Text final
{
public:
	class FString                                 Key;                                               // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                   ReturnValue;                                       // 0x0010(0x0018)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_NeoUIPassiveVisualBase_GetValueSafe_Text;

// Function NeoUI.NeoUIPassiveVisualBase.NewArrayByKey
// 0x0018 (0x0018 - 0x0000)
struct NeoUIPassiveVisualBase_NewArrayByKey final
{
public:
	class FString                                 Key;                                               // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnyTypeStaticPointer*                  ReturnValue;                                       // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_NeoUIPassiveVisualBase_NewArrayByKey;

// Function NeoUI.NeoUIPassiveVisualBase.NewArrayElementByIndex
// 0x0010 (0x0010 - 0x0000)
struct NeoUIPassiveVisualBase_NewArrayElementByIndex final
{
public:
	int32                                         ElementIndex;                                      // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnyTypeStaticPointer*                  ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_NeoUIPassiveVisualBase_NewArrayElementByIndex;

// Function NeoUI.NeoUIPassiveVisualBase.NewObjectByKey
// 0x0018 (0x0018 - 0x0000)
struct NeoUIPassiveVisualBase_NewObjectByKey final
{
public:
	class FString                                 Key;                                               // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnyTypeStaticPointer*                  ReturnValue;                                       // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_NeoUIPassiveVisualBase_NewObjectByKey;

// Function NeoUI.NeoUIPassiveVisualBase.ReceiveModuleMessage
// 0x0010 (0x0010 - 0x0000)
struct NeoUIPassiveVisualBase_ReceiveModuleMessage final
{
public:
	class FName                                   MessageHeader;                                     // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnyTypeUniversalPointerBase*           MessageBody;                                       // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_NeoUIPassiveVisualBase_ReceiveModuleMessage;

// Function NeoUI.NeoUIPassiveVisualBase.SetValueSafe_Bool
// 0x0018 (0x0018 - 0x0000)
struct NeoUIPassiveVisualBase_SetValueSafe_Bool final
{
public:
	class FString                                 Key;                                               // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          Value;                                             // 0x0010(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0011(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_12[0x6];                                       // 0x0012(0x0006)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
DUMPER7_ASSERTS_NeoUIPassiveVisualBase_SetValueSafe_Bool;

// Function NeoUI.NeoUIPassiveVisualBase.SetValueSafe_Float
// 0x0018 (0x0018 - 0x0000)
struct NeoUIPassiveVisualBase_SetValueSafe_Float final
{
public:
	class FString                                 Key;                                               // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Value;                                             // 0x0010(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0014(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_15[0x3];                                       // 0x0015(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
DUMPER7_ASSERTS_NeoUIPassiveVisualBase_SetValueSafe_Float;

// Function NeoUI.NeoUIPassiveVisualBase.SetValueSafe_Int32
// 0x0018 (0x0018 - 0x0000)
struct NeoUIPassiveVisualBase_SetValueSafe_Int32 final
{
public:
	class FString                                 Key;                                               // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Value;                                             // 0x0010(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0014(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_15[0x3];                                       // 0x0015(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
DUMPER7_ASSERTS_NeoUIPassiveVisualBase_SetValueSafe_Int32;

// Function NeoUI.NeoUIPassiveVisualBase.SetValueSafe_String
// 0x0028 (0x0028 - 0x0000)
struct NeoUIPassiveVisualBase_SetValueSafe_String final
{
public:
	class FString                                 Key;                                               // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Value;                                             // 0x0010(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0020(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
DUMPER7_ASSERTS_NeoUIPassiveVisualBase_SetValueSafe_String;

// Function NeoUI.NeoUIPassiveVisualBase.SetValueSafe_Text
// 0x0030 (0x0030 - 0x0000)
struct NeoUIPassiveVisualBase_SetValueSafe_Text final
{
public:
	class FString                                 Key;                                               // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                   Value;                                             // 0x0010(0x0018)(Parm, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0028(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
DUMPER7_ASSERTS_NeoUIPassiveVisualBase_SetValueSafe_Text;

// Function NeoUI.NeoUIPassiveVisualBase.GetData
// 0x0008 (0x0008 - 0x0000)
struct NeoUIPassiveVisualBase_GetData final
{
public:
	class UAnyTypeStaticPointer*                  ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_NeoUIPassiveVisualBase_GetData;

// Function NeoUI.NeoUIComponentBase.BP_IsGamepadMode
// 0x0001 (0x0001 - 0x0000)
struct NeoUIComponentBase_BP_IsGamepadMode final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_NeoUIComponentBase_BP_IsGamepadMode;

// Function NeoUI.NeoUIComponentBase.EVT_OnMouseEnter
// 0x00A8 (0x00A8 - 0x0000)
struct NeoUIComponentBase_EVT_OnMouseEnter final
{
public:
	struct FGeometry                              InGeometry;                                        // 0x0000(0x0038)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FPointerEvent                          InMouseEvent;                                      // 0x0038(0x0070)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_NeoUIComponentBase_EVT_OnMouseEnter;

// Function NeoUI.NeoUIComponentBase.EVT_OnMouseLeave
// 0x0070 (0x0070 - 0x0000)
struct NeoUIComponentBase_EVT_OnMouseLeave final
{
public:
	struct FPointerEvent                          InMouseEvent;                                      // 0x0000(0x0070)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_NeoUIComponentBase_EVT_OnMouseLeave;

// Function NeoUI.NeoUIComponentBase.EVT_OnMouseLeftDown
// 0x00A8 (0x00A8 - 0x0000)
struct NeoUIComponentBase_EVT_OnMouseLeftDown final
{
public:
	struct FGeometry                              InGeometry;                                        // 0x0000(0x0038)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FPointerEvent                          InMouseEvent;                                      // 0x0038(0x0070)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_NeoUIComponentBase_EVT_OnMouseLeftDown;

// Function NeoUI.NeoUIBorderBase.SetVisual_AsContainer
// 0x0001 (0x0001 - 0x0000)
struct NeoUIBorderBase_SetVisual_AsContainer final
{
public:
	bool                                          isVisual;                                          // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_NeoUIBorderBase_SetVisual_AsContainer;

// Function NeoUI.NeoUIBorderBase.SetVisual_PureDisplay
// 0x0001 (0x0001 - 0x0000)
struct NeoUIBorderBase_SetVisual_PureDisplay final
{
public:
	bool                                          isVisual;                                          // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_NeoUIBorderBase_SetVisual_PureDisplay;

// Function NeoUI.NeoUIBorderBase.SetVisual_UserInteraction
// 0x0001 (0x0001 - 0x0000)
struct NeoUIBorderBase_SetVisual_UserInteraction final
{
public:
	bool                                          isVisual;                                          // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_NeoUIBorderBase_SetVisual_UserInteraction;

// Function NeoUI.NeoUICommonLib.NeoUI_GetGameInstance
// 0x0008 (0x0008 - 0x0000)
struct NeoUICommonLib_NeoUI_GetGameInstance final
{
public:
	class UGameInstance*                          ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_NeoUICommonLib_NeoUI_GetGameInstance;

// Function NeoUI.NeoUICommonLib.NeoUI_GetGameInstanceStrict
// 0x0008 (0x0008 - 0x0000)
struct NeoUICommonLib_NeoUI_GetGameInstanceStrict final
{
public:
	class UGameInstance*                          ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_NeoUICommonLib_NeoUI_GetGameInstanceStrict;

// Function NeoUI.NeoUICommonLib.NeoUI_GetWorld
// 0x0008 (0x0008 - 0x0000)
struct NeoUICommonLib_NeoUI_GetWorld final
{
public:
	class UWorld*                                 ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_NeoUICommonLib_NeoUI_GetWorld;

// Function NeoUI.NeoUIContainerVisualBase.BP_IsGamepadMode
// 0x0001 (0x0001 - 0x0000)
struct NeoUIContainerVisualBase_BP_IsGamepadMode final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_NeoUIContainerVisualBase_BP_IsGamepadMode;

// Function NeoUI.NeoUIBlueprintableVMBase.GetModuleVisibility
// 0x0001 (0x0001 - 0x0000)
struct NeoUIBlueprintableVMBase_GetModuleVisibility final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_NeoUIBlueprintableVMBase_GetModuleVisibility;

// Function NeoUI.NeoUIBlueprintableVMBase.GetPairModel
// 0x0008 (0x0008 - 0x0000)
struct NeoUIBlueprintableVMBase_GetPairModel final
{
public:
	class UNeoUICommonDataModel*                  ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_NeoUIBlueprintableVMBase_GetPairModel;

// Function NeoUI.NeoUIBlueprintableVMBase.GetPairView
// 0x0008 (0x0008 - 0x0000)
struct NeoUIBlueprintableVMBase_GetPairView final
{
public:
	class UNeoUIBlueprintableVisualBase*          ReturnValue;                                       // 0x0000(0x0008)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_NeoUIBlueprintableVMBase_GetPairView;

// Function NeoUI.NeoUIBlueprintableVisualBase.ActionResponder
// 0x0008 (0x0008 - 0x0000)
struct NeoUIBlueprintableVisualBase_ActionResponder final
{
public:
	class UNeoUIUniversalModuleVMBase*            ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_NeoUIBlueprintableVisualBase_ActionResponder;

// Function NeoUI.NeoUIBlueprintableVisualBase.GetOwnerVM_Unsafe
// 0x0008 (0x0008 - 0x0000)
struct NeoUIBlueprintableVisualBase_GetOwnerVM_Unsafe final
{
public:
	class UNeoUIBlueprintableVMBase*              ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_NeoUIBlueprintableVisualBase_GetOwnerVM_Unsafe;

// Function NeoUI.NeoUIBlueprintableVisualBase.isOwnerVMValid
// 0x0001 (0x0001 - 0x0000)
struct NeoUIBlueprintableVisualBase_isOwnerVMValid final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_NeoUIBlueprintableVisualBase_isOwnerVMValid;

// Function NeoUI.NeoUIBlueprintableVisualBase.ProvideChildArea
// 0x0010 (0x0010 - 0x0000)
struct NeoUIBlueprintableVisualBase_ProvideChildArea final
{
public:
	TArray<class UNeoUIContainerVisualBase*>      Children;                                          // 0x0000(0x0010)(Parm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_NeoUIBlueprintableVisualBase_ProvideChildArea;

// Function NeoUI.NeoUIVisualElementBase.BP_IsGamepadModeAndFocused
// 0x0001 (0x0001 - 0x0000)
struct NeoUIVisualElementBase_BP_IsGamepadModeAndFocused final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_NeoUIVisualElementBase_BP_IsGamepadModeAndFocused;

// Function NeoUI.NeoUIVisualElementBase.EVT_ConsoleHideTips
// 0x0018 (0x0018 - 0x0000)
struct NeoUIVisualElementBase_EVT_ConsoleHideTips final
{
public:
	int32                                         intflag;                                           // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 strFlag;                                           // 0x0008(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_NeoUIVisualElementBase_EVT_ConsoleHideTips;

// Function NeoUI.NeoUIVisualElementBase.EVT_ConsoleShowTips
// 0x0018 (0x0018 - 0x0000)
struct NeoUIVisualElementBase_EVT_ConsoleShowTips final
{
public:
	int32                                         intflag;                                           // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 strFlag;                                           // 0x0008(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_NeoUIVisualElementBase_EVT_ConsoleShowTips;

// Function NeoUI.NeoUIVisualElementBase.EVT_GamepadHideTips
// 0x0018 (0x0018 - 0x0000)
struct NeoUIVisualElementBase_EVT_GamepadHideTips final
{
public:
	int32                                         intflag;                                           // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 strFlag;                                           // 0x0008(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_NeoUIVisualElementBase_EVT_GamepadHideTips;

// Function NeoUI.NeoUIVisualElementBase.EVT_GamepadShowTips
// 0x0018 (0x0018 - 0x0000)
struct NeoUIVisualElementBase_EVT_GamepadShowTips final
{
public:
	int32                                         intflag;                                           // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 strFlag;                                           // 0x0008(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_NeoUIVisualElementBase_EVT_GamepadShowTips;

// Function NeoUI.NeoUIVisualElementBase.GetNeoUIVM
// 0x0008 (0x0008 - 0x0000)
struct NeoUIVisualElementBase_GetNeoUIVM final
{
public:
	class UNeoUIUniversalModuleVMBase*            ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_NeoUIVisualElementBase_GetNeoUIVM;

// Function NeoUI.NeoUIVisualElementBase.RegisterActiveDisplayWidget
// 0x0008 (0x0008 - 0x0000)
struct NeoUIVisualElementBase_RegisterActiveDisplayWidget final
{
public:
	class UWidget*                                WidgetObj;                                         // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_NeoUIVisualElementBase_RegisterActiveDisplayWidget;

// Function NeoUI.NeoUIVisualElementBase.RegisterMainInteractiveWidget
// 0x0008 (0x0008 - 0x0000)
struct NeoUIVisualElementBase_RegisterMainInteractiveWidget final
{
public:
	class UWidget*                                WidgetObj;                                         // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_NeoUIVisualElementBase_RegisterMainInteractiveWidget;

// Function NeoUI.NeoUIUniversalModuleViewBase.AppendActiveAreaArr
// 0x0010 (0x0010 - 0x0000)
struct NeoUIUniversalModuleViewBase_AppendActiveAreaArr final
{
public:
	TArray<class UGamepadActiveAreaDisplay*>      Arr;                                               // 0x0000(0x0010)(Parm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_NeoUIUniversalModuleViewBase_AppendActiveAreaArr;

// Function NeoUI.NeoUIUniversalModuleViewBase.EVT_FocusWidgetForScenario
// 0x0018 (0x0018 - 0x0000)
struct NeoUIUniversalModuleViewBase_EVT_FocusWidgetForScenario final
{
public:
	ENeoUIFocusWidgetScenario                     scenario;                                          // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FNeoUIFocusWidgetParam                 Param;                                             // 0x0008(0x0010)(Parm, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_NeoUIUniversalModuleViewBase_EVT_FocusWidgetForScenario;

// Function NeoUI.NeoUIUniversalModuleViewBase.FindFocusWidgetByTag
// 0x0018 (0x0018 - 0x0000)
struct NeoUIUniversalModuleViewBase_FindFocusWidgetByTag final
{
public:
	class FString                                 StrParam;                                          // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                                ReturnValue;                                       // 0x0010(0x0008)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_NeoUIUniversalModuleViewBase_FindFocusWidgetByTag;

// Function NeoUI.NeoUIUniversalModuleViewBase.FocusWidgetForScenario_Direct
// 0x0020 (0x0020 - 0x0000)
struct NeoUIUniversalModuleViewBase_FocusWidgetForScenario_Direct final
{
public:
	ENeoUIFocusWidgetScenario                     scenario;                                          // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FNeoUIFocusWidgetParam                 Param;                                             // 0x0008(0x0010)(Parm, NativeAccessSpecifierPublic)
	class UWidget*                                ReturnValue;                                       // 0x0018(0x0008)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_NeoUIUniversalModuleViewBase_FocusWidgetForScenario_Direct;

// Function NeoUI.NeoUIUniversalModuleViewBase.GetContainerSlot
// 0x0008 (0x0008 - 0x0000)
struct NeoUIUniversalModuleViewBase_GetContainerSlot final
{
public:
	class UPanelSlot*                             ReturnValue;                                       // 0x0000(0x0008)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_NeoUIUniversalModuleViewBase_GetContainerSlot;

// Function NeoUI.NeoUIUniversalModuleViewBase.GetLocalDefaultFocusElement
// 0x0008 (0x0008 - 0x0000)
struct NeoUIUniversalModuleViewBase_GetLocalDefaultFocusElement final
{
public:
	class UWidget*                                ReturnValue;                                       // 0x0000(0x0008)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_NeoUIUniversalModuleViewBase_GetLocalDefaultFocusElement;

// Function NeoUI.NeoUIUniversalModuleViewBase.GetNeoUIVM
// 0x0008 (0x0008 - 0x0000)
struct NeoUIUniversalModuleViewBase_GetNeoUIVM final
{
public:
	class UNeoUIUniversalModuleVMBase*            ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_NeoUIUniversalModuleViewBase_GetNeoUIVM;

// Function NeoUI.NeoUIUniversalModuleViewBase.GetSlotInParent
// 0x0008 (0x0008 - 0x0000)
struct NeoUIUniversalModuleViewBase_GetSlotInParent final
{
public:
	class FName                                   ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_NeoUIUniversalModuleViewBase_GetSlotInParent;

// Function NeoUI.NeoUIUniversalModuleViewBase.GetSubModuleView
// 0x0010 (0x0010 - 0x0000)
struct NeoUIUniversalModuleViewBase_GetSubModuleView final
{
public:
	class FName                                   ModuleKey;                                         // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNeoUIUniversalModuleViewBase*          ReturnValue;                                       // 0x0008(0x0008)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_NeoUIUniversalModuleViewBase_GetSubModuleView;

// Function NeoUI.NeoUIUniversalModuleViewBase.GetSubModuleVM
// 0x0010 (0x0010 - 0x0000)
struct NeoUIUniversalModuleViewBase_GetSubModuleVM final
{
public:
	class FName                                   ModuleKey;                                         // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNeoUIUniversalModuleVMBase*            ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_NeoUIUniversalModuleViewBase_GetSubModuleVM;

// Function NeoUI.NeoUIUniversalModuleViewBase.ProvideSubModuleSlotConfig
// 0x0050 (0x0050 - 0x0000)
struct NeoUIUniversalModuleViewBase_ProvideSubModuleSlotConfig final
{
public:
	TMap<class FName, class UNeoUINamedSlot*>     SlotConfig;                                        // 0x0000(0x0050)(Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_NeoUIUniversalModuleViewBase_ProvideSubModuleSlotConfig;

// Function NeoUI.NeoUIUniversalModuleViewBase.Region_RegisterDisplay
// 0x0018 (0x0018 - 0x0000)
struct NeoUIUniversalModuleViewBase_Region_RegisterDisplay final
{
public:
	class FString                                 RID;                                               // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                                WObj;                                              // 0x0010(0x0008)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_NeoUIUniversalModuleViewBase_Region_RegisterDisplay;

// Function NeoUI.NeoUIUniversalModuleViewBase.Region_RegisterWidget
// 0x0018 (0x0018 - 0x0000)
struct NeoUIUniversalModuleViewBase_Region_RegisterWidget final
{
public:
	class FString                                 RID;                                               // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                                WObj;                                              // 0x0010(0x0008)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_NeoUIUniversalModuleViewBase_Region_RegisterWidget;

// Function NeoUI.NeoUIUniversalModuleViewBase.RegisterCurrentNativeFocusWidget
// 0x0008 (0x0008 - 0x0000)
struct NeoUIUniversalModuleViewBase_RegisterCurrentNativeFocusWidget final
{
public:
	class UWidget*                                WidgetObj;                                         // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_NeoUIUniversalModuleViewBase_RegisterCurrentNativeFocusWidget;

// Function NeoUI.NeoUIUniversalModuleViewBase.UnregisterCurrentNativeFocusWidget
// 0x0008 (0x0008 - 0x0000)
struct NeoUIUniversalModuleViewBase_UnregisterCurrentNativeFocusWidget final
{
public:
	class UWidget*                                WidgetObj;                                         // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_NeoUIUniversalModuleViewBase_UnregisterCurrentNativeFocusWidget;

// Function NeoUI.NeoUI1Img1TxtComp.UpdateTitle
// 0x0018 (0x0018 - 0x0000)
struct NeoUI1Img1TxtComp_UpdateTitle final
{
public:
	class FText                                   NewValue;                                          // 0x0000(0x0018)(Parm, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_NeoUI1Img1TxtComp_UpdateTitle;

// Function NeoUI.NeoUIUniversalModuleVMBase.ChangeNaviFocus
// 0x0028 (0x0028 - 0x0000)
struct NeoUIUniversalModuleVMBase_ChangeNaviFocus final
{
public:
	class FName                                   LocalModuleID;                                     // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ENeoUIFocusWidgetScenario                     scenario;                                          // 0x0008(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 StrParam;                                          // 0x0010(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                                ReturnValue;                                       // 0x0020(0x0008)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_NeoUIUniversalModuleVMBase_ChangeNaviFocus;

// Function NeoUI.NeoUIUniversalModuleVMBase.FindNavigationFocusByTag
// 0x0018 (0x0018 - 0x0000)
struct NeoUIUniversalModuleVMBase_FindNavigationFocusByTag final
{
public:
	class FString                                 StrParam;                                          // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                                ReturnValue;                                       // 0x0010(0x0008)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_NeoUIUniversalModuleVMBase_FindNavigationFocusByTag;

// Function NeoUI.NeoUIUniversalModuleVMBase.FindSubModuleRecursively
// 0x0010 (0x0010 - 0x0000)
struct NeoUIUniversalModuleVMBase_FindSubModuleRecursively final
{
public:
	class FName                                   ModuleKey;                                         // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNeoUIUniversalModuleVMBase*            ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_NeoUIUniversalModuleVMBase_FindSubModuleRecursively;

// Function NeoUI.NeoUIUniversalModuleVMBase.GetExclusiveModuleID
// 0x0008 (0x0008 - 0x0000)
struct NeoUIUniversalModuleVMBase_GetExclusiveModuleID final
{
public:
	class FName                                   ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_NeoUIUniversalModuleVMBase_GetExclusiveModuleID;

// Function NeoUI.NeoUIUniversalModuleVMBase.GetParentModule
// 0x0008 (0x0008 - 0x0000)
struct NeoUIUniversalModuleVMBase_GetParentModule final
{
public:
	class UNeoUIUniversalModuleVMBase*            ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_NeoUIUniversalModuleVMBase_GetParentModule;

// Function NeoUI.NeoUIUniversalModuleVMBase.GetRootModule
// 0x0008 (0x0008 - 0x0000)
struct NeoUIUniversalModuleVMBase_GetRootModule final
{
public:
	class UNeoUIUniversalModuleVMBase*            ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_NeoUIUniversalModuleVMBase_GetRootModule;

// Function NeoUI.NeoUIUniversalModuleVMBase.GetSubModuleByIndex
// 0x0010 (0x0010 - 0x0000)
struct NeoUIUniversalModuleVMBase_GetSubModuleByIndex final
{
public:
	int32                                         TargetIndex;                                       // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UNeoUIUniversalModuleVMBase*            ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_NeoUIUniversalModuleVMBase_GetSubModuleByIndex;

// Function NeoUI.NeoUIUniversalModuleVMBase.GetSubModuleByKey
// 0x0010 (0x0010 - 0x0000)
struct NeoUIUniversalModuleVMBase_GetSubModuleByKey final
{
public:
	class FName                                   ModuleKey;                                         // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNeoUIUniversalModuleVMBase*            ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_NeoUIUniversalModuleVMBase_GetSubModuleByKey;

// Function NeoUI.NeoUIUniversalModuleVMBase.GetUniversalModuleID
// 0x0008 (0x0008 - 0x0000)
struct NeoUIUniversalModuleVMBase_GetUniversalModuleID final
{
public:
	class FName                                   ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_NeoUIUniversalModuleVMBase_GetUniversalModuleID;

// Function NeoUI.NeoUIUniversalModuleVMBase.HandleUIAction
// 0x0018 (0x0018 - 0x0000)
struct NeoUIUniversalModuleVMBase_HandleUIAction final
{
public:
	class FString                                 ActionName;                                        // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnyTypeUniversalPointerBase*           Data;                                              // 0x0010(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_NeoUIUniversalModuleVMBase_HandleUIAction;

// Function NeoUI.NeoUIUniversalModuleVMBase.NotifyResetModule
// 0x0004 (0x0004 - 0x0000)
struct NeoUIUniversalModuleVMBase_NotifyResetModule final
{
public:
	int32                                         Reason;                                            // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_NeoUIUniversalModuleVMBase_NotifyResetModule;

// Function NeoUI.NeoUIUniversalModuleVMBase.NotifyUpdateModuleWithParam
// 0x0010 (0x0010 - 0x0000)
struct NeoUIUniversalModuleVMBase_NotifyUpdateModuleWithParam final
{
public:
	class FString                                 Param;                                             // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_NeoUIUniversalModuleVMBase_NotifyUpdateModuleWithParam;

// Function NeoUI.NeoUIUniversalModuleVMBase.ReceiveNavigationFocus
// 0x0020 (0x0020 - 0x0000)
struct NeoUIUniversalModuleVMBase_ReceiveNavigationFocus final
{
public:
	ENeoUIFocusWidgetScenario                     scenario;                                          // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 StrParam;                                          // 0x0008(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                                ReturnValue;                                       // 0x0018(0x0008)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_NeoUIUniversalModuleVMBase_ReceiveNavigationFocus;

// Function NeoUI.NeoUIUniversalModuleVMBase.SearchWidgetByTag_Internal
// 0x0018 (0x0018 - 0x0000)
struct NeoUIUniversalModuleVMBase_SearchWidgetByTag_Internal final
{
public:
	class FString                                 StrParam;                                          // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                                ReturnValue;                                       // 0x0010(0x0008)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_NeoUIUniversalModuleVMBase_SearchWidgetByTag_Internal;

// Function NeoUI.AnyTypeObjectPointerBase.DataToString
// 0x0010 (0x0010 - 0x0000)
struct AnyTypeObjectPointerBase_DataToString final
{
public:
	class FString                                 ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_AnyTypeObjectPointerBase_DataToString;

// Function NeoUI.AnyTypeObjectPointerBase.DataToStringPerfect
// 0x0010 (0x0010 - 0x0000)
struct AnyTypeObjectPointerBase_DataToStringPerfect final
{
public:
	class FString                                 ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_AnyTypeObjectPointerBase_DataToStringPerfect;

// Function NeoUI.AnyTypeUniversalPointerBase.AddValueSafe_String
// 0x0028 (0x0028 - 0x0000)
struct AnyTypeUniversalPointerBase_AddValueSafe_String final
{
public:
	class FString                                 ckey;                                              // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Str;                                               // 0x0010(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0020(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
DUMPER7_ASSERTS_AnyTypeUniversalPointerBase_AddValueSafe_String;

// Function NeoUI.AnyTypeUniversalPointerBase.AddValueSafe_Text
// 0x0030 (0x0030 - 0x0000)
struct AnyTypeUniversalPointerBase_AddValueSafe_Text final
{
public:
	class FString                                 ckey;                                              // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                   Str;                                               // 0x0010(0x0018)(Parm, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0028(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
DUMPER7_ASSERTS_AnyTypeUniversalPointerBase_AddValueSafe_Text;

// Function NeoUI.AnyTypeUniversalPointerBase.ContainsKey
// 0x0018 (0x0018 - 0x0000)
struct AnyTypeUniversalPointerBase_ContainsKey final
{
public:
	class FString                                 Key;                                               // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
DUMPER7_ASSERTS_AnyTypeUniversalPointerBase_ContainsKey;

// Function NeoUI.AnyTypeUniversalPointerBase.GetValueSafe_Bool
// 0x0018 (0x0018 - 0x0000)
struct AnyTypeUniversalPointerBase_GetValueSafe_Bool final
{
public:
	class FString                                 Key;                                               // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
DUMPER7_ASSERTS_AnyTypeUniversalPointerBase_GetValueSafe_Bool;

// Function NeoUI.AnyTypeUniversalPointerBase.GetValueSafe_Float
// 0x0018 (0x0018 - 0x0000)
struct AnyTypeUniversalPointerBase_GetValueSafe_Float final
{
public:
	class FString                                 Key;                                               // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ReturnValue;                                       // 0x0010(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
DUMPER7_ASSERTS_AnyTypeUniversalPointerBase_GetValueSafe_Float;

// Function NeoUI.AnyTypeUniversalPointerBase.GetValueSafe_Int32
// 0x0018 (0x0018 - 0x0000)
struct AnyTypeUniversalPointerBase_GetValueSafe_Int32 final
{
public:
	class FString                                 Key;                                               // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ReturnValue;                                       // 0x0010(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
DUMPER7_ASSERTS_AnyTypeUniversalPointerBase_GetValueSafe_Int32;

// Function NeoUI.AnyTypeUniversalPointerBase.GetValueSafe_Int64
// 0x0018 (0x0018 - 0x0000)
struct AnyTypeUniversalPointerBase_GetValueSafe_Int64 final
{
public:
	class FString                                 Key;                                               // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                         ReturnValue;                                       // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_AnyTypeUniversalPointerBase_GetValueSafe_Int64;

// Function NeoUI.AnyTypeUniversalPointerBase.GetValueSafe_String
// 0x0020 (0x0020 - 0x0000)
struct AnyTypeUniversalPointerBase_GetValueSafe_String final
{
public:
	class FString                                 Key;                                               // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 ReturnValue;                                       // 0x0010(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_AnyTypeUniversalPointerBase_GetValueSafe_String;

// Function NeoUI.AnyTypeUniversalPointerBase.GetValueSafe_Text
// 0x0028 (0x0028 - 0x0000)
struct AnyTypeUniversalPointerBase_GetValueSafe_Text final
{
public:
	class FString                                 Key;                                               // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                   ReturnValue;                                       // 0x0010(0x0018)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_AnyTypeUniversalPointerBase_GetValueSafe_Text;

// Function NeoUI.AnyTypeUniversalPointerBase.SetValueSafe_Bool
// 0x0018 (0x0018 - 0x0000)
struct AnyTypeUniversalPointerBase_SetValueSafe_Bool final
{
public:
	class FString                                 Key;                                               // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          Value;                                             // 0x0010(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0011(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_12[0x6];                                       // 0x0012(0x0006)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
DUMPER7_ASSERTS_AnyTypeUniversalPointerBase_SetValueSafe_Bool;

// Function NeoUI.AnyTypeUniversalPointerBase.SetValueSafe_Float
// 0x0018 (0x0018 - 0x0000)
struct AnyTypeUniversalPointerBase_SetValueSafe_Float final
{
public:
	class FString                                 ckey;                                              // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Value;                                             // 0x0010(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0014(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_15[0x3];                                       // 0x0015(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
DUMPER7_ASSERTS_AnyTypeUniversalPointerBase_SetValueSafe_Float;

// Function NeoUI.AnyTypeUniversalPointerBase.SetValueSafe_Int32
// 0x0018 (0x0018 - 0x0000)
struct AnyTypeUniversalPointerBase_SetValueSafe_Int32 final
{
public:
	class FString                                 ckey;                                              // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Value;                                             // 0x0010(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0014(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_15[0x3];                                       // 0x0015(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
DUMPER7_ASSERTS_AnyTypeUniversalPointerBase_SetValueSafe_Int32;

// Function NeoUI.AnyTypeUniversalPointerBase.SetValueSafe_Int64
// 0x0020 (0x0020 - 0x0000)
struct AnyTypeUniversalPointerBase_SetValueSafe_Int64 final
{
public:
	class FString                                 ckey;                                              // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                         Value;                                             // 0x0010(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0018(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
DUMPER7_ASSERTS_AnyTypeUniversalPointerBase_SetValueSafe_Int64;

// Function NeoUI.AnyTypeUniversalPointerBase.SetValueSafe_String
// 0x0028 (0x0028 - 0x0000)
struct AnyTypeUniversalPointerBase_SetValueSafe_String final
{
public:
	class FString                                 ckey;                                              // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Str;                                               // 0x0010(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0020(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
DUMPER7_ASSERTS_AnyTypeUniversalPointerBase_SetValueSafe_String;

// Function NeoUI.AnyTypeUniversalPointerBase.SetValueSafe_Text
// 0x0030 (0x0030 - 0x0000)
struct AnyTypeUniversalPointerBase_SetValueSafe_Text final
{
public:
	class FString                                 ckey;                                              // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                   Str;                                               // 0x0010(0x0018)(Parm, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0028(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
DUMPER7_ASSERTS_AnyTypeUniversalPointerBase_SetValueSafe_Text;

// Function NeoUI.AnyTypeStaticPointer.NewFromCursor
// 0x0010 (0x0010 - 0x0000)
struct AnyTypeStaticPointer_NewFromCursor final
{
public:
	class UAnyTypePointerCursor*                  FromCursor;                                        // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnyTypeStaticPointer*                  ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_AnyTypeStaticPointer_NewFromCursor;

// Function NeoUI.AnyTypeStaticPointer.At
// 0x0010 (0x0010 - 0x0000)
struct AnyTypeStaticPointer_At final
{
public:
	int32                                         AtIndex;                                           // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnyTypePointerCursor*                  ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_AnyTypeStaticPointer_At;

// Function NeoUI.AnyTypeStaticPointer.CopyPointer
// 0x0008 (0x0008 - 0x0000)
struct AnyTypeStaticPointer_CopyPointer final
{
public:
	class UAnyTypeStaticPointer*                  ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_AnyTypeStaticPointer_CopyPointer;

// Function NeoUI.AnyTypeStaticPointer.First
// 0x0008 (0x0008 - 0x0000)
struct AnyTypeStaticPointer_First final
{
public:
	class UAnyTypePointerCursor*                  ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_AnyTypeStaticPointer_First;

// Function NeoUI.AnyTypeStaticPointer.GeneratePointersArray
// 0x0010 (0x0010 - 0x0000)
struct AnyTypeStaticPointer_GeneratePointersArray final
{
public:
	TArray<class UAnyTypeStaticPointer*>          ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_AnyTypeStaticPointer_GeneratePointersArray;

// Function NeoUI.AnyTypeStaticPointer.Last
// 0x0008 (0x0008 - 0x0000)
struct AnyTypeStaticPointer_Last final
{
public:
	class UAnyTypePointerCursor*                  ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_AnyTypeStaticPointer_Last;

// Function NeoUI.AnyTypeStaticPointer.MoveToArrayByKey
// 0x0018 (0x0018 - 0x0000)
struct AnyTypeStaticPointer_MoveToArrayByKey final
{
public:
	class FString                                 Key;                                               // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnyTypePointerCursor*                  ReturnValue;                                       // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_AnyTypeStaticPointer_MoveToArrayByKey;

// Function NeoUI.AnyTypeStaticPointer.MoveToArrayByPath
// 0x0018 (0x0018 - 0x0000)
struct AnyTypeStaticPointer_MoveToArrayByPath final
{
public:
	class FString                                 target_path;                                       // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnyTypePointerCursor*                  ReturnValue;                                       // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_AnyTypeStaticPointer_MoveToArrayByPath;

// Function NeoUI.AnyTypeStaticPointer.MoveToArrayElementByIndex
// 0x0010 (0x0010 - 0x0000)
struct AnyTypeStaticPointer_MoveToArrayElementByIndex final
{
public:
	int32                                         ElementIndex;                                      // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnyTypePointerCursor*                  ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_AnyTypeStaticPointer_MoveToArrayElementByIndex;

// Function NeoUI.AnyTypeStaticPointer.MoveToArrayElementByPath
// 0x0020 (0x0020 - 0x0000)
struct AnyTypeStaticPointer_MoveToArrayElementByPath final
{
public:
	class FString                                 array_path;                                        // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ElementIndex;                                      // 0x0010(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnyTypePointerCursor*                  ReturnValue;                                       // 0x0018(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_AnyTypeStaticPointer_MoveToArrayElementByPath;

// Function NeoUI.AnyTypeStaticPointer.MoveToObjectByKey
// 0x0018 (0x0018 - 0x0000)
struct AnyTypeStaticPointer_MoveToObjectByKey final
{
public:
	class FString                                 Key;                                               // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnyTypePointerCursor*                  ReturnValue;                                       // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_AnyTypeStaticPointer_MoveToObjectByKey;

// Function NeoUI.AnyTypeStaticPointer.MoveToObjectByPath
// 0x0018 (0x0018 - 0x0000)
struct AnyTypeStaticPointer_MoveToObjectByPath final
{
public:
	class FString                                 target_path;                                       // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnyTypePointerCursor*                  ReturnValue;                                       // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_AnyTypeStaticPointer_MoveToObjectByPath;

// Function NeoUI.AnyTypeStaticPointer.NewArrayByKey
// 0x0018 (0x0018 - 0x0000)
struct AnyTypeStaticPointer_NewArrayByKey final
{
public:
	class FString                                 Key;                                               // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnyTypeStaticPointer*                  ReturnValue;                                       // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_AnyTypeStaticPointer_NewArrayByKey;

// Function NeoUI.AnyTypeStaticPointer.NewArrayElementByIndex
// 0x0010 (0x0010 - 0x0000)
struct AnyTypeStaticPointer_NewArrayElementByIndex final
{
public:
	int32                                         ElementIndex;                                      // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnyTypeStaticPointer*                  ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_AnyTypeStaticPointer_NewArrayElementByIndex;

// Function NeoUI.AnyTypeStaticPointer.NewElementPointer
// 0x0010 (0x0010 - 0x0000)
struct AnyTypeStaticPointer_NewElementPointer final
{
public:
	int32                                         AtIndex;                                           // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnyTypeStaticPointer*                  ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_AnyTypeStaticPointer_NewElementPointer;

// Function NeoUI.AnyTypeStaticPointer.NewObjectByKey
// 0x0018 (0x0018 - 0x0000)
struct AnyTypeStaticPointer_NewObjectByKey final
{
public:
	class FString                                 Key;                                               // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnyTypeStaticPointer*                  ReturnValue;                                       // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_AnyTypeStaticPointer_NewObjectByKey;

// Function NeoUI.AnyTypeStaticPointer.Num
// 0x0004 (0x0004 - 0x0000)
struct AnyTypeStaticPointer_Num final
{
public:
	int32                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_AnyTypeStaticPointer_Num;

// Function NeoUI.NeoUITileView.FindFirstElement
// 0x0008 (0x0008 - 0x0000)
struct NeoUITileView_FindFirstElement final
{
public:
	class UWidget*                                ReturnValue;                                       // 0x0000(0x0008)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_NeoUITileView_FindFirstElement;

// Function NeoUI.NeoUITileView.FocusByDataIndex
// 0x0008 (0x0008 - 0x0000)
struct NeoUITileView_FocusByDataIndex final
{
public:
	int32                                         Index_0;                                           // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
DUMPER7_ASSERTS_NeoUITileView_FocusByDataIndex;

// Function NeoUI.NeoUITileView.HandleEntryInitialized
// 0x0008 (0x0008 - 0x0000)
struct NeoUITileView_HandleEntryInitialized final
{
public:
	class UObject*                                ItemWidget;                                        // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_NeoUITileView_HandleEntryInitialized;

// Function NeoUI.NeoUITileView.ResetAndFocus
// 0x0008 (0x0008 - 0x0000)
struct NeoUITileView_ResetAndFocus final
{
public:
	class UWidget*                                ReturnValue;                                       // 0x0000(0x0008)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_NeoUITileView_ResetAndFocus;

// Function NeoUI.NeoUILayerViewBase.GetLayerSlot
// 0x0008 (0x0008 - 0x0000)
struct NeoUILayerViewBase_GetLayerSlot final
{
public:
	class UCanvasPanelSlot*                       ReturnValue;                                       // 0x0000(0x0008)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_NeoUILayerViewBase_GetLayerSlot;

// Function NeoUI.NeoUIModuleVMBase.IsModuleDestroyable
// 0x0001 (0x0001 - 0x0000)
struct NeoUIModuleVMBase_IsModuleDestroyable final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_NeoUIModuleVMBase_IsModuleDestroyable;

// Function NeoUI.NeoUIGestureResponder.EVT_Gesture_Drop
// 0x00B0 (0x00B0 - 0x0000)
struct NeoUIGestureResponder_EVT_Gesture_Drop final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FPointerEvent                          PointerEvent;                                      // 0x0038(0x0070)(Parm, NativeAccessSpecifierPublic)
	class UDragDropOperation*                     Operation;                                         // 0x00A8(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_NeoUIGestureResponder_EVT_Gesture_Drop;

// Function NeoUI.NeoUIGestureResponder.EVT_Gesture_LongPress
// 0x0070 (0x0070 - 0x0000)
struct NeoUIGestureResponder_EVT_Gesture_LongPress final
{
public:
	struct FPointerEvent                          InMouseEvent;                                      // 0x0000(0x0070)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_NeoUIGestureResponder_EVT_Gesture_LongPress;

// Function NeoUI.NeoUIGestureResponder.EVT_Gesture_SingleTap
// 0x0070 (0x0070 - 0x0000)
struct NeoUIGestureResponder_EVT_Gesture_SingleTap final
{
public:
	struct FPointerEvent                          InMouseEvent;                                      // 0x0000(0x0070)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_NeoUIGestureResponder_EVT_Gesture_SingleTap;

// Function NeoUI.NeoUIGestureResponder.GetCurPointerEvt
// 0x0070 (0x0070 - 0x0000)
struct NeoUIGestureResponder_GetCurPointerEvt final
{
public:
	struct FPointerEvent                          ReturnValue;                                       // 0x0000(0x0070)(ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_NeoUIGestureResponder_GetCurPointerEvt;

// Function NeoUI.NeoUI1Btn1TxtComp.UpdateTitle
// 0x0018 (0x0018 - 0x0000)
struct NeoUI1Btn1TxtComp_UpdateTitle final
{
public:
	class FText                                   TxtCont;                                           // 0x0000(0x0018)(Parm, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_NeoUI1Btn1TxtComp_UpdateTitle;

// Function NeoUI.NeoUIReusableVisualEntry.GetBindedDataObj
// 0x0008 (0x0008 - 0x0000)
struct NeoUIReusableVisualEntry_GetBindedDataObj final
{
public:
	class UObject*                                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_NeoUIReusableVisualEntry_GetBindedDataObj;

// Function NeoUI.NeoUIImageBase.SetVisual_AsContainer
// 0x0001 (0x0001 - 0x0000)
struct NeoUIImageBase_SetVisual_AsContainer final
{
public:
	bool                                          isVisual;                                          // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_NeoUIImageBase_SetVisual_AsContainer;

// Function NeoUI.NeoUIImageBase.SetVisual_PureDisplay
// 0x0001 (0x0001 - 0x0000)
struct NeoUIImageBase_SetVisual_PureDisplay final
{
public:
	bool                                          isVisual;                                          // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_NeoUIImageBase_SetVisual_PureDisplay;

// Function NeoUI.NeoUIImageBase.SetVisual_UserInteraction
// 0x0001 (0x0001 - 0x0000)
struct NeoUIImageBase_SetVisual_UserInteraction final
{
public:
	bool                                          isVisual;                                          // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_NeoUIImageBase_SetVisual_UserInteraction;

// Function NeoUI.NeoUI2TxtComp.UpdateTitle1
// 0x0018 (0x0018 - 0x0000)
struct NeoUI2TxtComp_UpdateTitle1 final
{
public:
	class FText                                   NewValue;                                          // 0x0000(0x0018)(Parm, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_NeoUI2TxtComp_UpdateTitle1;

// Function NeoUI.NeoUI2TxtComp.UpdateTitle2
// 0x0018 (0x0018 - 0x0000)
struct NeoUI2TxtComp_UpdateTitle2 final
{
public:
	class FText                                   NewValue;                                          // 0x0000(0x0018)(Parm, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_NeoUI2TxtComp_UpdateTitle2;

// Function NeoUI.NeoUIGamepadFocusManager.WidgetFocusLost
// 0x0008 (0x0008 - 0x0000)
struct NeoUIGamepadFocusManager_WidgetFocusLost final
{
public:
	class UWidget*                                WidgetObj;                                         // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_NeoUIGamepadFocusManager_WidgetFocusLost;

// Function NeoUI.NeoUIGamepadFocusManager.WidgetFocusReceived
// 0x0008 (0x0008 - 0x0000)
struct NeoUIGamepadFocusManager_WidgetFocusReceived final
{
public:
	class UWidget*                                WidgetObj;                                         // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_NeoUIGamepadFocusManager_WidgetFocusReceived;

// Function NeoUI.NeoUI1Img2TxtComp.UpdateImage
// 0x0008 (0x0008 - 0x0000)
struct NeoUI1Img2TxtComp_UpdateImage final
{
public:
	class UTexture2D*                             BrushTXT2D;                                        // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_NeoUI1Img2TxtComp_UpdateImage;

// Function NeoUI.NeoUIGamepadConfirmButtonWrapperBase.ModifyIFATag
// 0x0010 (0x0010 - 0x0000)
struct NeoUIGamepadConfirmButtonWrapperBase_ModifyIFATag final
{
public:
	class FString                                 TagStr;                                            // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_NeoUIGamepadConfirmButtonWrapperBase_ModifyIFATag;

// Function NeoUI.AnyTypePointerCursor.GeneratePointersArray
// 0x0010 (0x0010 - 0x0000)
struct AnyTypePointerCursor_GeneratePointersArray final
{
public:
	TArray<class UAnyTypeStaticPointer*>          ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_AnyTypePointerCursor_GeneratePointersArray;

// Function NeoUI.AnyTypePointerCursor.MoveToArrayByKey
// 0x0018 (0x0018 - 0x0000)
struct AnyTypePointerCursor_MoveToArrayByKey final
{
public:
	class UAnyTypeUniversalPointerBase*           Pointer;                                           // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Key;                                               // 0x0008(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_AnyTypePointerCursor_MoveToArrayByKey;

// Function NeoUI.AnyTypePointerCursor.MoveToArrayByPath
// 0x0018 (0x0018 - 0x0000)
struct AnyTypePointerCursor_MoveToArrayByPath final
{
public:
	class UAnyTypeUniversalPointerBase*           Pointer;                                           // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Path;                                              // 0x0008(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_AnyTypePointerCursor_MoveToArrayByPath;

// Function NeoUI.AnyTypePointerCursor.MoveToArrayElementByIndex
// 0x0010 (0x0010 - 0x0000)
struct AnyTypePointerCursor_MoveToArrayElementByIndex final
{
public:
	class UAnyTypeUniversalPointerBase*           Pointer;                                           // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ElementIndex;                                      // 0x0008(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
DUMPER7_ASSERTS_AnyTypePointerCursor_MoveToArrayElementByIndex;

// Function NeoUI.AnyTypePointerCursor.MoveToArrayElementByPath
// 0x0020 (0x0020 - 0x0000)
struct AnyTypePointerCursor_MoveToArrayElementByPath final
{
public:
	class UAnyTypeUniversalPointerBase*           Pointer;                                           // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 array_path;                                        // 0x0008(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ElementIndex;                                      // 0x0018(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
DUMPER7_ASSERTS_AnyTypePointerCursor_MoveToArrayElementByPath;

// Function NeoUI.AnyTypePointerCursor.MoveToObjectByKey
// 0x0018 (0x0018 - 0x0000)
struct AnyTypePointerCursor_MoveToObjectByKey final
{
public:
	class UAnyTypeUniversalPointerBase*           Pointer;                                           // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Key;                                               // 0x0008(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_AnyTypePointerCursor_MoveToObjectByKey;

// Function NeoUI.AnyTypePointerCursor.MoveToObjectByPath
// 0x0018 (0x0018 - 0x0000)
struct AnyTypePointerCursor_MoveToObjectByPath final
{
public:
	class UAnyTypeUniversalPointerBase*           Pointer;                                           // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Path;                                              // 0x0008(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_AnyTypePointerCursor_MoveToObjectByPath;

// Function NeoUI.AnyTypePointerCursor.NewElementPointer
// 0x0010 (0x0010 - 0x0000)
struct AnyTypePointerCursor_NewElementPointer final
{
public:
	int32                                         AtIndex;                                           // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnyTypeStaticPointer*                  ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_AnyTypePointerCursor_NewElementPointer;

// Function NeoUI.NeoUIButtonBase.SetVisual_AsContainer
// 0x0001 (0x0001 - 0x0000)
struct NeoUIButtonBase_SetVisual_AsContainer final
{
public:
	bool                                          isVisual;                                          // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_NeoUIButtonBase_SetVisual_AsContainer;

// Function NeoUI.NeoUIButtonBase.SetVisual_PureDisplay
// 0x0001 (0x0001 - 0x0000)
struct NeoUIButtonBase_SetVisual_PureDisplay final
{
public:
	bool                                          isVisual;                                          // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_NeoUIButtonBase_SetVisual_PureDisplay;

// Function NeoUI.NeoUIButtonBase.SetVisual_UserInteraction
// 0x0001 (0x0001 - 0x0000)
struct NeoUIButtonBase_SetVisual_UserInteraction final
{
public:
	bool                                          isVisual;                                          // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_NeoUIButtonBase_SetVisual_UserInteraction;

// Function NeoUI.NeoUICanvasPanelBase.SetVisual_AsContainer
// 0x0001 (0x0001 - 0x0000)
struct NeoUICanvasPanelBase_SetVisual_AsContainer final
{
public:
	bool                                          isVisual;                                          // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_NeoUICanvasPanelBase_SetVisual_AsContainer;

// Function NeoUI.NeoUICanvasPanelBase.SetVisual_PureDisplay
// 0x0001 (0x0001 - 0x0000)
struct NeoUICanvasPanelBase_SetVisual_PureDisplay final
{
public:
	bool                                          isVisual;                                          // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_NeoUICanvasPanelBase_SetVisual_PureDisplay;

// Function NeoUI.NeoUICanvasPanelBase.SetVisual_UserInteraction
// 0x0001 (0x0001 - 0x0000)
struct NeoUICanvasPanelBase_SetVisual_UserInteraction final
{
public:
	bool                                          isVisual;                                          // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_NeoUICanvasPanelBase_SetVisual_UserInteraction;

// Function NeoUI.NeoUIGamepadInputUtilLibrary.UIFocusDefaultDelay
// 0x0004 (0x0004 - 0x0000)
struct NeoUIGamepadInputUtilLibrary_UIFocusDefaultDelay final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_NeoUIGamepadInputUtilLibrary_UIFocusDefaultDelay;

// Function NeoUI.NeoUIGlobalInputManager.IsGamepadMode
// 0x0001 (0x0001 - 0x0000)
struct NeoUIGlobalInputManager_IsGamepadMode final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_NeoUIGlobalInputManager_IsGamepadMode;

// Function NeoUI.NeoUIL10NCenter.L10N_CurLan
// 0x0010 (0x0010 - 0x0000)
struct NeoUIL10NCenter_L10N_CurLan final
{
public:
	class FString                                 ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_NeoUIL10NCenter_L10N_CurLan;

// Function NeoUI.NeoUIL10NCenter.L10N_CurLanCode
// 0x0001 (0x0001 - 0x0000)
struct NeoUIL10NCenter_L10N_CurLanCode final
{
public:
	ENeoL10NCode                                  ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_NeoUIL10NCenter_L10N_CurLanCode;

// Function NeoUI.NeoUIListView.GetCurrentItem
// 0x0008 (0x0008 - 0x0000)
struct NeoUIListView_GetCurrentItem final
{
public:
	class UUserWidget*                            ReturnValue;                                       // 0x0000(0x0008)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_NeoUIListView_GetCurrentItem;

// Function NeoUI.NeoUIListView.GetEntryForDataIndex
// 0x0010 (0x0010 - 0x0000)
struct NeoUIListView_GetEntryForDataIndex final
{
public:
	int32                                         TargetIndex;                                       // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            ReturnValue;                                       // 0x0008(0x0008)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_NeoUIListView_GetEntryForDataIndex;

// Function NeoUI.NeoUIListView.GetFirstChild
// 0x0008 (0x0008 - 0x0000)
struct NeoUIListView_GetFirstChild final
{
public:
	class UUserWidget*                            ReturnValue;                                       // 0x0000(0x0008)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_NeoUIListView_GetFirstChild;

// Function NeoUI.NeoUIListView.GetFirstDataItem
// 0x0008 (0x0008 - 0x0000)
struct NeoUIListView_GetFirstDataItem final
{
public:
	class UObject*                                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_NeoUIListView_GetFirstDataItem;

// Function NeoUI.NeoUIListView.GetLastChild
// 0x0008 (0x0008 - 0x0000)
struct NeoUIListView_GetLastChild final
{
public:
	class UUserWidget*                            ReturnValue;                                       // 0x0000(0x0008)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_NeoUIListView_GetLastChild;

// Function NeoUI.NeoUIListView.HandleEntryInitialized
// 0x0008 (0x0008 - 0x0000)
struct NeoUIListView_HandleEntryInitialized final
{
public:
	class UObject*                                ItemWidget;                                        // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_NeoUIListView_HandleEntryInitialized;

// Function NeoUI.NeoUIListView.ResetAndFocus
// 0x0008 (0x0008 - 0x0000)
struct NeoUIListView_ResetAndFocus final
{
public:
	class UWidget*                                ReturnValue;                                       // 0x0000(0x0008)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_NeoUIListView_ResetAndFocus;

// Function NeoUI.NeoUINamedSlot.SetVisual_AsContainer
// 0x0001 (0x0001 - 0x0000)
struct NeoUINamedSlot_SetVisual_AsContainer final
{
public:
	bool                                          isVisual;                                          // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_NeoUINamedSlot_SetVisual_AsContainer;

// Function NeoUI.NeoUINamedSlot.SetVisual_PureDisplay
// 0x0001 (0x0001 - 0x0000)
struct NeoUINamedSlot_SetVisual_PureDisplay final
{
public:
	bool                                          isVisual;                                          // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_NeoUINamedSlot_SetVisual_PureDisplay;

// Function NeoUI.NeoUINamedSlot.SetVisual_UserInteraction
// 0x0001 (0x0001 - 0x0000)
struct NeoUINamedSlot_SetVisual_UserInteraction final
{
public:
	bool                                          isVisual;                                          // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_NeoUINamedSlot_SetVisual_UserInteraction;

// Function NeoUI.NeoUIProjectSettingUtil.ConsoleType
// 0x0004 (0x0004 - 0x0000)
struct NeoUIProjectSettingUtil_ConsoleType final
{
public:
	int32                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_NeoUIProjectSettingUtil_ConsoleType;

// Function NeoUI.NeoUIProjectSettingUtil.PlatformType
// 0x0004 (0x0004 - 0x0000)
struct NeoUIProjectSettingUtil_PlatformType final
{
public:
	int32                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_NeoUIProjectSettingUtil_PlatformType;

// Function NeoUI.NeoUIRichTextBlockBase.UpdateWrapTextAt
// 0x0004 (0x0004 - 0x0000)
struct NeoUIRichTextBlockBase_UpdateWrapTextAt final
{
public:
	float                                         vv;                                                // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_NeoUIRichTextBlockBase_UpdateWrapTextAt;

// Function NeoUI.NeoUISubsystem.GetInputManager
// 0x0008 (0x0008 - 0x0000)
struct NeoUISubsystem_GetInputManager final
{
public:
	class UNeoUIGlobalInputManager*               ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_NeoUISubsystem_GetInputManager;

// Function NeoUI.NeoUISubsystem.HideAllModulesExcept
// 0x0008 (0x0008 - 0x0000)
struct NeoUISubsystem_HideAllModulesExcept final
{
public:
	class FName                                   ModuleID;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_NeoUISubsystem_HideAllModulesExcept;

// Function NeoUI.NeoUISubsystem.HideAllModulesExceptModuleArr
// 0x0010 (0x0010 - 0x0000)
struct NeoUISubsystem_HideAllModulesExceptModuleArr final
{
public:
	TArray<class FName>                           ModuleArr;                                         // 0x0000(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_NeoUISubsystem_HideAllModulesExceptModuleArr;

// Function NeoUI.NeoUISubsystem.HideModuleSingular
// 0x0008 (0x0008 - 0x0000)
struct NeoUISubsystem_HideModuleSingular final
{
public:
	class FName                                   ModuleID;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_NeoUISubsystem_HideModuleSingular;

// Function NeoUI.NeoUISubsystem.PropagateMessagesToAllModules
// 0x0020 (0x0020 - 0x0000)
struct NeoUISubsystem_PropagateMessagesToAllModules final
{
public:
	class UNeoUIUniversalModuleVMBase*            SRC;                                               // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   MessageHeader;                                     // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 MessageBody;                                       // 0x0010(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_NeoUISubsystem_PropagateMessagesToAllModules;

// Function NeoUI.NeoUISubsystem.ShowModules
// 0x0010 (0x0010 - 0x0000)
struct NeoUISubsystem_ShowModules final
{
public:
	TArray<class FName>                           ModuleIDs;                                         // 0x0000(0x0010)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_NeoUISubsystem_ShowModules;

// Function NeoUI.NeoUISubsystem.ShowModuleSingular
// 0x0010 (0x0010 - 0x0000)
struct NeoUISubsystem_ShowModuleSingular final
{
public:
	class FName                                   ModuleID;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNeoUIModuleVMBase*                     ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_NeoUISubsystem_ShowModuleSingular;

// Function NeoUI.NeoUISubsystem.ShowModuleSingularIgnoreFlag
// 0x0010 (0x0010 - 0x0000)
struct NeoUISubsystem_ShowModuleSingularIgnoreFlag final
{
public:
	class FName                                   ModuleID;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNeoUIModuleVMBase*                     ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_NeoUISubsystem_ShowModuleSingularIgnoreFlag;

// Function NeoUI.NeoUISubsystem.SwitchModuleSingular
// 0x0008 (0x0008 - 0x0000)
struct NeoUISubsystem_SwitchModuleSingular final
{
public:
	class FName                                   ModuleID;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_NeoUISubsystem_SwitchModuleSingular;

// Function NeoUI.NeoUISubsystem.GetModuleInstance
// 0x0010 (0x0010 - 0x0000)
struct NeoUISubsystem_GetModuleInstance final
{
public:
	class FName                                   ModuleID;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNeoUIModuleVMBase*                     ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_NeoUISubsystem_GetModuleInstance;

// Function NeoUI.NeoUITextBlockBase.SetVisual_AsContainer
// 0x0001 (0x0001 - 0x0000)
struct NeoUITextBlockBase_SetVisual_AsContainer final
{
public:
	bool                                          isVisual;                                          // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_NeoUITextBlockBase_SetVisual_AsContainer;

// Function NeoUI.NeoUITextBlockBase.SetVisual_PureDisplay
// 0x0001 (0x0001 - 0x0000)
struct NeoUITextBlockBase_SetVisual_PureDisplay final
{
public:
	bool                                          isVisual;                                          // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_NeoUITextBlockBase_SetVisual_PureDisplay;

// Function NeoUI.NeoUITextBlockBase.SetVisual_UserInteraction
// 0x0001 (0x0001 - 0x0000)
struct NeoUITextBlockBase_SetVisual_UserInteraction final
{
public:
	bool                                          isVisual;                                          // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_NeoUITextBlockBase_SetVisual_UserInteraction;

// Function NeoUI.NeoUITextBlockBase.UpdateWrapTextAt
// 0x0004 (0x0004 - 0x0000)
struct NeoUITextBlockBase_UpdateWrapTextAt final
{
public:
	float                                         vv;                                                // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_NeoUITextBlockBase_UpdateWrapTextAt;

// Function NeoUI.NeoUIUtil.GetWidgetHoldoutRegion
// 0x0020 (0x0020 - 0x0000)
struct NeoUIUtil_GetWidgetHoldoutRegion final
{
public:
	class UObject*                                WorldContextObject;                                // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                                VisualObj;                                         // 0x0008(0x0008)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           ReturnValue;                                       // 0x0010(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_NeoUIUtil_GetWidgetHoldoutRegion;

// Function NeoUI.NeoUIUtil.NeoUI_LoadDynamicTexture
// 0x0018 (0x0018 - 0x0000)
struct NeoUIUtil_NeoUI_LoadDynamicTexture final
{
public:
	class FString                                 TexturePath;                                       // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                             ReturnValue;                                       // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_NeoUIUtil_NeoUI_LoadDynamicTexture;

// Function NeoUI.NeoUIUtil.NeoUI_SetDynamicTextureForImg
// 0x0020 (0x0020 - 0x0000)
struct NeoUIUtil_NeoUI_SetDynamicTextureForImg final
{
public:
	class UNeoUIImageBase*                        IMG;                                               // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 TexturePath;                                       // 0x0008(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0018(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
DUMPER7_ASSERTS_NeoUIUtil_NeoUI_SetDynamicTextureForImg;

SDK_PARAM_NAMESPACE_END
SDK_NAMESPACE_END
