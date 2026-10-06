#pragma once



// Package: WBP_SceneNPCFuncMenuList

#include "Basic.hpp"


SDK_NAMESPACE_START
SDK_PARAM_NAMESPACE_START

// Function WBP_SceneNPCFuncMenuList.WBP_SceneNPCFuncMenuList_C.ExecuteUbergraph_WBP_SceneNPCFuncMenuList
// 0x0040 (0x0040 - 0x0000)
struct WBP_SceneNPCFuncMenuList_C_ExecuteUbergraph_WBP_SceneNPCFuncMenuList final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCacheListSubWidget*                    K2Node_Event_Row;                                  // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_SceneNPCFuncMenu_C*                K2Node_DynamicCast_AsWBP_Scene_NPCFunc_Menu;       // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsSecondMenu_ReturnValue;                 // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1A[0x6];                                       // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNPCFunctionMenuItemWidget*             K2Node_DynamicCast_AsNPCFunction_Menu_Item_Widget; // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
DUMPER7_ASSERTS_WBP_SceneNPCFuncMenuList_C_ExecuteUbergraph_WBP_SceneNPCFuncMenuList;

// Function WBP_SceneNPCFuncMenuList.WBP_SceneNPCFuncMenuList_C.HandleAddSubWidget
// 0x0008 (0x0008 - 0x0000)
struct WBP_SceneNPCFuncMenuList_C_HandleAddSubWidget final
{
public:
	class UCacheListSubWidget*                    Row;                                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_WBP_SceneNPCFuncMenuList_C_HandleAddSubWidget;

// Function WBP_SceneNPCFuncMenuList.WBP_SceneNPCFuncMenuList_C.HandleGenerateSubWidget
// 0x0010 (0x0010 - 0x0000)
struct WBP_SceneNPCFuncMenuList_C_HandleGenerateSubWidget final
{
public:
	class UCacheListSubWidget*                    ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_SceneNPCFuncMenu_C*                CallFunc_Create_ReturnValue;                       // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_WBP_SceneNPCFuncMenuList_C_HandleGenerateSubWidget;

SDK_PARAM_NAMESPACE_END
SDK_NAMESPACE_END
