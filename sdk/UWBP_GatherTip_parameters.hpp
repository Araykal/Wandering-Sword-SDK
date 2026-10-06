#pragma once



// Package: UWBP_GatherTip

#include "Basic.hpp"


SDK_NAMESPACE_START
SDK_PARAM_NAMESPACE_START

// Function UWBP_GatherTip.UWBP_GatherTip_C.ExecuteUbergraph_UWBP_GatherTip
// 0x0040 (0x0040 - 0x0000)
struct UWBP_GatherTip_C_ExecuteUbergraph_UWBP_GatherTip final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AJHPlayerController*                    K2Node_DynamicCast_AsJHPlayer_Controller;          // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UJHNeoUISubsystem*                      CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetGatherKeyDisplay_ReturnValue;          // 0x0028(0x0018)()
};
DUMPER7_ASSERTS_UWBP_GatherTip_C_ExecuteUbergraph_UWBP_GatherTip;

// Function UWBP_GatherTip.UWBP_GatherTip_C.SetText
// 0x0018 (0x0018 - 0x0000)
struct UWBP_GatherTip_C_SetText final
{
public:
	class FText                                   InText;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
DUMPER7_ASSERTS_UWBP_GatherTip_C_SetText;

// Function UWBP_GatherTip.UWBP_GatherTip_C.CheckGamepad
// 0x0010 (0x0010 - 0x0000)
struct UWBP_GatherTip_C_CheckGamepad final
{
public:
	class UJHNeoUISubsystem*                      CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsGamepadMode_ReturnValue;                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
DUMPER7_ASSERTS_UWBP_GatherTip_C_CheckGamepad;

SDK_PARAM_NAMESPACE_END
SDK_NAMESPACE_END
