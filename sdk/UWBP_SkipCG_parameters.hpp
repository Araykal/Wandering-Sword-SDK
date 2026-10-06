#pragma once



// Package: UWBP_SkipCG

#include "Basic.hpp"


SDK_NAMESPACE_START
SDK_PARAM_NAMESPACE_START

// Function UWBP_SkipCG.UWBP_SkipCG_C.ExecuteUbergraph_UWBP_SkipCG
// 0x0068 (0x0068 - 0x0000)
struct UWBP_SkipCG_C_ExecuteUbergraph_UWBP_SkipCG final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJHNeoUISubsystem*                      CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AJHPlayerController*                    K2Node_DynamicCast_AsJHPlayer_Controller;          // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HandleSkipCG_ReturnValue;                 // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_22[0x6];                                       // 0x0022(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UJHNeoUISubsystem*                      CallFunc_GetGameInstanceSubsystem_ReturnValue_1;   // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 Param)>                  K2Node_CreateDelegate_OutputDelegate;              // 0x0030(0x0010)(ZeroConstructor, NoDestructor)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_1;        // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AJHPlayerController*                    K2Node_DynamicCast_AsJHPlayer_Controller_1;        // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HandleSkipCG_ReturnValue_1;               // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_isGamepadMode;                  // 0x0052(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_53[0x1];                                       // 0x0053(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool IsGamepadMode)>           K2Node_CreateDelegate_OutputDelegate_1;            // 0x0054(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         K2Node_CustomEvent_param;                          // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_UWBP_SkipCG_C_ExecuteUbergraph_UWBP_SkipCG;

// Function UWBP_SkipCG.UWBP_SkipCG_C.OnProgressEnd_Event_0
// 0x0004 (0x0004 - 0x0000)
struct UWBP_SkipCG_C_OnProgressEnd_Event_0 final
{
public:
	int32                                         Param;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_UWBP_SkipCG_C_OnProgressEnd_Event_0;

// Function UWBP_SkipCG.UWBP_SkipCG_C.CustomEvent_0
// 0x0001 (0x0001 - 0x0000)
struct UWBP_SkipCG_C_CustomEvent_0 final
{
public:
	bool                                          IsGamepadMode;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
DUMPER7_ASSERTS_UWBP_SkipCG_C_CustomEvent_0;

// Function UWBP_SkipCG.UWBP_SkipCG_C.CheckGamepad
// 0x0010 (0x0010 - 0x0000)
struct UWBP_SkipCG_C_CheckGamepad final
{
public:
	class UJHNeoUISubsystem*                      CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsGamepadMode_ReturnValue;                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
DUMPER7_ASSERTS_UWBP_SkipCG_C_CheckGamepad;

SDK_PARAM_NAMESPACE_END
SDK_NAMESPACE_END
