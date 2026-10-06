#pragma once



// Package: WBP_GatherProgressBar

#include "Basic.hpp"


SDK_NAMESPACE_START
SDK_PARAM_NAMESPACE_START

// Function WBP_GatherProgressBar.WBP_GatherProgressBar_C.ExecuteUbergraph_WBP_GatherProgressBar
// 0x0008 (0x0008 - 0x0000)
struct WBP_GatherProgressBar_C_ExecuteUbergraph_WBP_GatherProgressBar final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_PercentValue;                         // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_WBP_GatherProgressBar_C_ExecuteUbergraph_WBP_GatherProgressBar;

// Function WBP_GatherProgressBar.WBP_GatherProgressBar_C.HandlePercentChange
// 0x0004 (0x0004 - 0x0000)
struct WBP_GatherProgressBar_C_HandlePercentChange final
{
public:
	float                                         PercentValue;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_WBP_GatherProgressBar_C_HandlePercentChange;

SDK_PARAM_NAMESPACE_END
SDK_NAMESPACE_END
