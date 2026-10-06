#pragma once



// Package: NeoUI

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"


SDK_NAMESPACE_START

// Enum NeoUI.ENeoUIGamepadButtonType
// NumValues: 0x0014
enum class ENeoUIGamepadButtonType : uint8
{
	None                                     = 0,
	DPad_Left                                = 1,
	DPad_Top                                 = 2,
	DPad_Right                               = 3,
	DPad_Bottom                              = 4,
	Face_X                                   = 5,
	Face_Y                                   = 6,
	Face_B                                   = 7,
	Face_A                                   = 8,
	LeftShoulder                             = 9,
	RightShoulder                            = 10,
	LeftTrigger                              = 11,
	RightTrigger                             = 12,
	LeftThumbstickClick                      = 13,
	RightThumbstickClick                     = 14,
	Option                                   = 15,
	Share                                    = 16,
	LeftThumbstickMove                       = 17,
	RightThumbstickMove                      = 18,
	ENeoUIGamepadButtonType_MAX              = 19,
};

// Enum NeoUI.EAnyTypePointerGenre
// NumValues: 0x0005
enum class EAnyTypePointerGenre : uint8
{
	ATP_Undefined                            = 0,
	ATP_Object                               = 1,
	ATP_Array                                = 2,
	ATP_ArrayElement                         = 3,
	ATP_MAX                                  = 4,
};

// Enum NeoUI.EGamepadKeyTriggerType
// NumValues: 0x0005
enum class EGamepadKeyTriggerType : uint8
{
	None                                     = 0,
	Press                                    = 1,
	Release                                  = 2,
	LongPress                                = 3,
	EGamepadKeyTriggerType_MAX               = 4,
};

// Enum NeoUI.EGamepadKeyBindingType
// NumValues: 0x0005
enum class EGamepadKeyBindingType : uint8
{
	None                                     = 0,
	Single                                   = 1,
	Combination                              = 2,
	Single_Exclusive                         = 3,
	EGamepadKeyBindingType_MAX               = 4,
};

// Enum NeoUI.ENeoUIGamepadThumbstickUITriggerType
// NumValues: 0x000A
enum class ENeoUIGamepadThumbstickUITriggerType : uint8
{
	Zero                                     = 0,
	Left_12                                  = 1,
	Left_3                                   = 2,
	Left_6                                   = 3,
	Left_9                                   = 4,
	Right_12                                 = 5,
	Right_3                                  = 6,
	Right_6                                  = 7,
	Right_9                                  = 8,
	ENeoUIGamepadThumbstickUITriggerType_MAX = 9,
};

// Enum NeoUI.ENeoUIGamepadThumbstickAxisPosition
// NumValues: 0x0004
enum class ENeoUIGamepadThumbstickAxisPosition : uint8
{
	Zero                                     = 0,
	Negative                                 = 1,
	Positive                                 = 2,
	ENeoUIGamepadThumbstickAxisPosition_MAX  = 3,
};

// Enum NeoUI.ENeoUIGamepadThumbstickAxisType
// NumValues: 0x0005
enum class ENeoUIGamepadThumbstickAxisType : uint8
{
	Left_Horizontal                          = 0,
	Left_Vertical                            = 1,
	Right_Horizontal                         = 2,
	Right_Vertical                           = 3,
	ENeoUIGamepadThumbstickAxisType_MAX      = 4,
};

// Enum NeoUI.ENeoUIGamepadCommonAxisType
// NumValues: 0x0006
enum class ENeoUIGamepadCommonAxisType : uint8
{
	Left_Horizontal                          = 0,
	Left_Vertical                            = 1,
	Right_Horizontal                         = 2,
	Right_Vertical                           = 3,
	PSDPad                                   = 4,
	ENeoUIGamepadCommonAxisType_MAX          = 5,
};

// Enum NeoUI.ENeoUIGamepadTipsScenario
// NumValues: 0x0006
enum class ENeoUIGamepadTipsScenario : uint8
{
	None                                     = 0,
	OnFocusReceived                          = 1,
	OnFocusLost                              = 2,
	OnTipsActivated                          = 3,
	OnTipsDeactivated                        = 4,
	ENeoUIGamepadTipsScenario_MAX            = 5,
};

// Enum NeoUI.ENeoUIGamepad_Model
// NumValues: 0x0009
enum class ENeoUIGamepad_Model : uint8
{
	None                                     = 0,
	XBox_USB                                 = 1,
	XBox_BT                                  = 2,
	PS5_USB                                  = 3,
	PS5_BT                                   = 4,
	PS4_2_USB                                = 5,
	PS4_2_BT                                 = 6,
	PS4_1_USB                                = 7,
	ENeoUIGamepad_MAX                        = 8,
};

// Enum NeoUI.ENeoUIGamepadType
// NumValues: 0x0006
enum class ENeoUIGamepadType : uint8
{
	None                                     = 0,
	XBox                                     = 1,
	Playstation                              = 2,
	Switch                                   = 3,
	Other                                    = 4,
	ENeoUIGamepadType_MAX                    = 5,
};

// Enum NeoUI.ENeoUIFocusWidgetScenario
// NumValues: 0x0006
enum class ENeoUIFocusWidgetScenario : uint8
{
	Default                                  = 0,
	FromLeft                                 = 1,
	FromTop                                  = 2,
	FromRight                                = 3,
	FromBottom                               = 4,
	ENeoUIFocusWidgetScenario_MAX            = 5,
};

// Enum NeoUI.ENeoUIInternalFontTypes
// NumValues: 0x0004
enum class ENeoUIInternalFontTypes : uint8
{
	None                                     = 0,
	Default                                  = 1,
	Title                                    = 2,
	ENeoUIInternalFontTypes_MAX              = 3,
};

// Enum NeoUI.ENeoL10NCode
// NumValues: 0x0004
enum class ENeoL10NCode : uint8
{
	ZH_Hans                                  = 0,
	ZH_Hant                                  = 1,
	EN                                       = 2,
	ENeoL10NCode_MAX                         = 3,
};

// Enum NeoUI.ENeoUIPlatformFlavor
// NumValues: 0x0004
enum class ENeoUIPlatformFlavor : uint8
{
	PC                                       = 0,
	Mobile                                   = 1,
	Console                                  = 2,
	ENeoUIPlatformFlavor_MAX                 = 3,
};

// Enum NeoUI.ENeoUI_ModuleShowReason
// NumValues: 0x0005
enum class ENeoUI_ModuleShowReason : uint8
{
	ModuleShow_Explicit                      = 0,
	ModuleShow_Explicit_Switch               = 1,
	ModuleShow_Born                          = 2,
	ModuleShow_Explicit_Cluster              = 3,
	ModuleShow_MAX                           = 4,
};

// Enum NeoUI.ENeoUI_ModuleExitReason
// NumValues: 0x0007
enum class ENeoUI_ModuleExitReason : uint8
{
	ModuleExit_Explicit                      = 0,
	ModuleExit_Explicit_Switch               = 1,
	ModuleExit_ITN_Lost_Focus                = 2,
	ModuleExit_All                           = 3,
	ModuleExit_Explicit_Cluster              = 4,
	ModuleExit_Mutex                         = 5,
	ModuleExit_MAX                           = 6,
};

// Enum NeoUI.ENeoUI_ModulePersistencePolicy
// NumValues: 0x0004
enum class ENeoUI_ModulePersistencePolicy : uint8
{
	NeoUI_MPP_Null                           = 0,
	NeoUI_MPP_Permanent                      = 1,
	NeoUI_MPP_Temporary                      = 2,
	NeoUI_MPP_MAX                            = 3,
};

// Enum NeoUI.ENeoUI_VMImplType
// NumValues: 0x0004
enum class ENeoUI_VMImplType : uint8
{
	NeoUI_VM_Impl_Null                       = 0,
	NeoUI_VM_Impl_CPP                        = 1,
	NeoUI_VM_Impl_BP                         = 2,
	NeoUI_VM_Impl_MAX                        = 3,
};

// Enum NeoUI.ENeoUI_ViewImplType
// NumValues: 0x0004
enum class ENeoUI_ViewImplType : uint8
{
	NeoUI_V_Impl_Null                        = 0,
	NeoUI_V_Impl_CPP                         = 1,
	NeoUI_V_Impl_BP                          = 2,
	NeoUI_V_Impl_MAX                         = 3,
};

// Enum NeoUI.ENeoUI_ViewAttachmentStatus
// NumValues: 0x0004
enum class ENeoUI_ViewAttachmentStatus : uint8
{
	NeoUI_ViewAS_Idle                        = 0,
	NeoUI_ViewAS_Attached                    = 1,
	NeoUI_ViewAS_Detached                    = 2,
	NeoUI_ViewAS_MAX                         = 3,
};

// Enum NeoUI.ENeoUI_LayerInternalLevel
// NumValues: 0x0004
enum class ENeoUI_LayerInternalLevel : uint8
{
	ENeoUI_LayerLow                          = 0,
	ENeoUI_LayerMain                         = 1,
	ENeoUI_LayerHigh                         = 2,
	ENeoUI_MAX                               = 3,
};

// ScriptStruct NeoUI.NeoUIFocusWidgetParam
// 0x0010 (0x0010 - 0x0000)
struct FNeoUIFocusWidgetParam final
{
public:
	class FString                                 StrParam;                                          // 0x0000(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_FNeoUIFocusWidgetParam;

// ScriptStruct NeoUI.NeoUIGamepadAnalogTickSnapshot
// 0x0010 (0x0010 - 0x0000)
struct FNeoUIGamepadAnalogTickSnapshot final
{
public:
	int32                                         Left_Horizontal;                                   // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Left_Vertical;                                     // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Right_Horizontal;                                  // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Right_Vertical;                                    // 0x000C(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_FNeoUIGamepadAnalogTickSnapshot;

// ScriptStruct NeoUI.GamepadLayoutItem
// 0x0028 (0x0028 - 0x0000)
struct FGamepadLayoutItem final
{
public:
	class FName                                   FuncId;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EGamepadKeyBindingType                        BindingType;                                       // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ENeoUIGamepadButtonType                       MainKey;                                           // 0x0009(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ENeoUIGamepadButtonType                       CombinationKey;                                    // 0x000A(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_B[0x5];                                        // 0x000B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<ENeoUIGamepadButtonType>               ExclusiveKeys;                                     // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                         Param1;                                            // 0x0020(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
DUMPER7_ASSERTS_FGamepadLayoutItem;

// ScriptStruct NeoUI.GamepadLayoutMappingTableRow
// 0x0048 (0x0050 - 0x0008)
struct FGamepadLayoutMappingTableRow final : public FTableRowBase
{
public:
	int32                                         ID;                                                // 0x0008(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 DisplayName;                                       // 0x0010(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   FuncId;                                            // 0x0020(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EGamepadKeyBindingType                        BindingType;                                       // 0x0028(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ENeoUIGamepadButtonType                       MainKey;                                           // 0x0029(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ENeoUIGamepadButtonType                       CombinationKey;                                    // 0x002A(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2B[0x5];                                       // 0x002B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<ENeoUIGamepadButtonType>               ExclusiveKeys;                                     // 0x0030(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	EGamepadKeyTriggerType                        TriggerType;                                       // 0x0040(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_41[0x3];                                       // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ModuleID;                                          // 0x0044(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Param1;                                            // 0x0048(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4C[0x4];                                       // 0x004C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
DUMPER7_ASSERTS_FGamepadLayoutMappingTableRow;

// ScriptStruct NeoUI.NeoUIGamepadThumbstickUITriggerStatus
// 0x0008 (0x0008 - 0x0000)
struct alignas(0x04) FNeoUIGamepadThumbstickUITriggerStatus final
{
public:
	uint8                                         Pad_0[0x8];                                        // 0x0000(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
DUMPER7_ASSERTS_FNeoUIGamepadThumbstickUITriggerStatus;

// ScriptStruct NeoUI.NeoUIGamepadThumbstickUITriggerFrame
// 0x0050 (0x0050 - 0x0000)
struct FNeoUIGamepadThumbstickUITriggerFrame final
{
public:
	TMap<ENeoUIGamepadThumbstickUITriggerType, struct FNeoUIGamepadThumbstickUITriggerStatus> Triggers; // 0x0000(0x0050)(NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_FNeoUIGamepadThumbstickUITriggerFrame;

// ScriptStruct NeoUI.NeoUIGamepadThumbstickAxisStatus
// 0x000C (0x000C - 0x0000)
struct alignas(0x04) FNeoUIGamepadThumbstickAxisStatus final
{
public:
	uint8                                         Pad_0[0xC];                                        // 0x0000(0x000C)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
DUMPER7_ASSERTS_FNeoUIGamepadThumbstickAxisStatus;

// ScriptStruct NeoUI.NeoUIGamepadAnalogTickFrame
// 0x0050 (0x0050 - 0x0000)
struct FNeoUIGamepadAnalogTickFrame final
{
public:
	TMap<ENeoUIGamepadThumbstickAxisType, struct FNeoUIGamepadThumbstickAxisStatus> Status;          // 0x0000(0x0050)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_FNeoUIGamepadAnalogTickFrame;

// ScriptStruct NeoUI.NeoUIInputFocusableAreaData
// 0x0020 (0x0020 - 0x0000)
struct FNeoUIInputFocusableAreaData final
{
public:
	class FString                                 AreaTag;                                           // 0x0000(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 RegionID;                                          // 0x0010(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_FNeoUIInputFocusableAreaData;

// ScriptStruct NeoUI.NeoUIFontInfo
// 0x0098 (0x0098 - 0x0000)
struct FNeoUIFontInfo final
{
public:
	struct FSlateFontInfo                         FontInfo;                                          // 0x0000(0x0058)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateColor                            ColorAndOpacity;                                   // 0x0058(0x0028)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FLinearColor                           ShadowColorAndOpacity;                             // 0x0080(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                              ShadowOffset;                                      // 0x0090(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_FNeoUIFontInfo;

// ScriptStruct NeoUI.NeoL10NItem
// 0x0020 (0x0020 - 0x0000)
struct alignas(0x08) FNeoL10NItem final
{
public:
	uint8                                         Pad_0[0x20];                                       // 0x0000(0x0020)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
DUMPER7_ASSERTS_FNeoL10NItem;

// ScriptStruct NeoUI.NeoUIL10NFontInfoItem
// 0x0004 (0x0004 - 0x0000)
struct FNeoUIL10NFontInfoItem final
{
public:
	int32                                         Offset;                                            // 0x0000(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_FNeoUIL10NFontInfoItem;

// ScriptStruct NeoUI.NeoUIL10NFontInfo
// 0x0050 (0x0050 - 0x0000)
struct FNeoUIL10NFontInfo final
{
public:
	TMap<ENeoL10NCode, struct FNeoUIL10NFontInfoItem> Infos;                                         // 0x0000(0x0050)(Edit, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_FNeoUIL10NFontInfo;

// ScriptStruct NeoUI.NeoUILayerMetadata
// 0x0020 (0x0020 - 0x0000)
struct FNeoUILayerMetadata final
{
public:
	uint8                                         LayerID;                                           // 0x0000(0x0001)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 LayerDesc;                                         // 0x0008(0x0010)(Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ENeoUI_LayerInternalLevel                     InnerLevel;                                        // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
DUMPER7_ASSERTS_FNeoUILayerMetadata;

// ScriptStruct NeoUI.NeoUIModuleMetadata
// 0x0018 (0x0018 - 0x0000)
struct alignas(0x08) FNeoUIModuleMetadata
{
public:
	uint8                                         Pad_0[0x8];                                        // 0x0000(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   ModuleID;                                          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ENeoUI_ViewImplType                           V_ImplType;                                        // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ENeoUI_VMImplType                             VM_ImplType;                                       // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         InitLayer;                                         // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ENeoUI_ModulePersistencePolicy                PersistencePolicy;                                 // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
DUMPER7_ASSERTS_FNeoUIModuleMetadata;

// ScriptStruct NeoUI.NeoUIModuleMD_Vcpp_VMcpp
// 0x0010 (0x0028 - 0x0018)
struct FNeoUIModuleMD_Vcpp_VMcpp final : public FNeoUIModuleMetadata
{
public:
	TSubclassOf<class UNeoUIBlueprintableVisualBase> ViewClass;                                      // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UNeoUIBlueprintableVMBase>  VMClass;                                           // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_FNeoUIModuleMD_Vcpp_VMcpp;

// ScriptStruct NeoUI.NeoUIModuleMD_Vbp_VMcpp
// 0x0010 (0x0028 - 0x0018)
struct FNeoUIModuleMD_Vbp_VMcpp final : public FNeoUIModuleMetadata
{
public:
	TSubclassOf<class UNeoUIBlueprintableVisualBase> ViewClass;                                      // 0x0018(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UNeoUIBlueprintableVMBase>  VMClass;                                           // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_FNeoUIModuleMD_Vbp_VMcpp;

// ScriptStruct NeoUI.NeoUIModuleMD_Vcpp_VMbp
// 0x0010 (0x0028 - 0x0018)
struct FNeoUIModuleMD_Vcpp_VMbp final : public FNeoUIModuleMetadata
{
public:
	TSubclassOf<class UNeoUIBlueprintableVisualBase> ViewClass;                                      // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UNeoUIBlueprintableVMBase>  VMClass;                                           // 0x0020(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_FNeoUIModuleMD_Vcpp_VMbp;

// ScriptStruct NeoUI.NeoUIModuleMD_Vbp_VMbp
// 0x0010 (0x0028 - 0x0018)
struct FNeoUIModuleMD_Vbp_VMbp final : public FNeoUIModuleMetadata
{
public:
	TSubclassOf<class UNeoUIBlueprintableVisualBase> ViewClass;                                      // 0x0018(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UNeoUIBlueprintableVMBase>  VMClass;                                           // 0x0020(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_FNeoUIModuleMD_Vbp_VMbp;

// ScriptStruct NeoUI.NeoUIUniversalModuleMD
// 0x0028 (0x0028 - 0x0000)
struct FNeoUIUniversalModuleMD final
{
public:
	uint8                                         Pad_0[0x8];                                        // 0x0000(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   ModuleID;                                          // 0x0008(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   SlotID;                                            // 0x0010(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UNeoUIBlueprintableVisualBase> ViewClass;                                      // 0x0018(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UNeoUIBlueprintableVMBase>  VMClass;                                           // 0x0020(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_FNeoUIUniversalModuleMD;

// ScriptStruct NeoUI.NeoUIParam
// 0x0020 (0x0020 - 0x0000)
struct alignas(0x08) FNeoUIParam final
{
public:
	uint8                                         Pad_0[0x20];                                       // 0x0000(0x0020)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
DUMPER7_ASSERTS_FNeoUIParam;

SDK_NAMESPACE_END
