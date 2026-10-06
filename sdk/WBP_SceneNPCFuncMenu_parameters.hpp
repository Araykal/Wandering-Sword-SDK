#pragma once



// Package: WBP_SceneNPCFuncMenu

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"


SDK_NAMESPACE_START
SDK_PARAM_NAMESPACE_START

// Function WBP_SceneNPCFuncMenu.WBP_SceneNPCFuncMenu_C.ExecuteUbergraph_WBP_SceneNPCFuncMenu
// 0x0050 (0x0050 - 0x0000)
struct WBP_SceneNPCFuncMenu_C_ExecuteUbergraph_WBP_SceneNPCFuncMenu final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UNPCManager*                            CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   K2Node_Event_ViewText;                             // 0x0010(0x0018)(ConstParm)
	class UHomelandManager*                       CallFunc_GetGameInstanceSubsystem_ReturnValue_1;   // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetNPCId_ReturnValue;                     // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UItemInfoSpec*>                  CallFunc_HarvestAll_ReturnValue;                   // 0x0038(0x0010)(ReferenceParm)
	bool                                          K2Node_Event_isActive;                             // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
DUMPER7_ASSERTS_WBP_SceneNPCFuncMenu_C_ExecuteUbergraph_WBP_SceneNPCFuncMenu;

// Function WBP_SceneNPCFuncMenu.WBP_SceneNPCFuncMenu_C.EVT_UpdateActiveStatus
// 0x0001 (0x0001 - 0x0000)
struct WBP_SceneNPCFuncMenu_C_EVT_UpdateActiveStatus final
{
public:
	bool                                          IsActive;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
DUMPER7_ASSERTS_WBP_SceneNPCFuncMenu_C_EVT_UpdateActiveStatus;

// Function WBP_SceneNPCFuncMenu.WBP_SceneNPCFuncMenu_C.HandleUpdateInfo
// 0x0018 (0x0018 - 0x0000)
struct WBP_SceneNPCFuncMenu_C_HandleUpdateInfo final
{
public:
	class FText                                   ViewText;                                          // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
DUMPER7_ASSERTS_WBP_SceneNPCFuncMenu_C_HandleUpdateInfo;

// Function WBP_SceneNPCFuncMenu.WBP_SceneNPCFuncMenu_C.OnMouseButtonDown
// 0x0218 (0x0218 - 0x0000)
struct WBP_SceneNPCFuncMenu_C_OnMouseButtonDown final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0038(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                            ReturnValue;                                       // 0x00A8(0x00B8)(Parm, OutParm, ReturnParm)
	struct FEventReply                            CallFunc_Unhandled_ReturnValue;                    // 0x0160(0x00B8)()
};
DUMPER7_ASSERTS_WBP_SceneNPCFuncMenu_C_OnMouseButtonDown;

// Function WBP_SceneNPCFuncMenu.WBP_SceneNPCFuncMenu_C.OnFocusReceived
// 0x01B0 (0x01B0 - 0x0000)
struct WBP_SceneNPCFuncMenu_C_OnFocusReceived final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FFocusEvent                            InFocusEvent;                                      // 0x0038(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FEventReply                            ReturnValue;                                       // 0x0040(0x00B8)(Parm, OutParm, ReturnParm)
	struct FEventReply                            CallFunc_Handled_ReturnValue;                      // 0x00F8(0x00B8)()
};
DUMPER7_ASSERTS_WBP_SceneNPCFuncMenu_C_OnFocusReceived;

SDK_PARAM_NAMESPACE_END
SDK_NAMESPACE_END
