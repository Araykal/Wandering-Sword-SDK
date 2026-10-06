#pragma once



// Package: UWBP_Tip

#include "Basic.hpp"


SDK_NAMESPACE_START
SDK_PARAM_NAMESPACE_START

// Function UWBP_Tip.UWBP_Tip_C.ExecuteUbergraph_UWBP_Tip
// 0x0028 (0x0028 - 0x0000)
struct UWBP_Tip_C_ExecuteUbergraph_UWBP_Tip final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UJHNeoUISubsystem*                      CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetGatherKeyDisplay_ReturnValue;          // 0x0010(0x0018)()
};
DUMPER7_ASSERTS_UWBP_Tip_C_ExecuteUbergraph_UWBP_Tip;

// Function UWBP_Tip.UWBP_Tip_C.SetText
// 0x0018 (0x0018 - 0x0000)
struct UWBP_Tip_C_SetText final
{
public:
	class FText                                   InText_0;                                          // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
DUMPER7_ASSERTS_UWBP_Tip_C_SetText;

// Function UWBP_Tip.UWBP_Tip_C.CheckGamepad
// 0x0010 (0x0010 - 0x0000)
struct UWBP_Tip_C_CheckGamepad final
{
public:
	class UJHNeoUISubsystem*                      CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsGamepadMode_ReturnValue;                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
DUMPER7_ASSERTS_UWBP_Tip_C_CheckGamepad;

// Function UWBP_Tip.UWBP_Tip_C.GetText_0
// 0x0018 (0x0018 - 0x0000)
struct UWBP_Tip_C_GetText_0 final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm)
};
DUMPER7_ASSERTS_UWBP_Tip_C_GetText_0;

SDK_PARAM_NAMESPACE_END
SDK_NAMESPACE_END
