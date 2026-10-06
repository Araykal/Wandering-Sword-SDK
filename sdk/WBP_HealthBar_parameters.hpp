#pragma once



// Package: WBP_HealthBar

#include "Basic.hpp"


SDK_NAMESPACE_START
SDK_PARAM_NAMESPACE_START

// Function WBP_HealthBar.WBP_HealthBar_C.ExecuteUbergraph_WBP_HealthBar
// 0x0018 (0x0018 - 0x0000)
struct WBP_HealthBar_C_ExecuteUbergraph_WBP_HealthBar final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_InPercent_1;                          // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_InPercent;                            // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_WBP_HealthBar_C_ExecuteUbergraph_WBP_HealthBar;

// Function WBP_HealthBar.WBP_HealthBar_C.HandleHealthChange
// 0x0004 (0x0004 - 0x0000)
struct WBP_HealthBar_C_HandleHealthChange final
{
public:
	float                                         InPercent;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_WBP_HealthBar_C_HandleHealthChange;

// Function WBP_HealthBar.WBP_HealthBar_C.HandleTurnChange
// 0x0004 (0x0004 - 0x0000)
struct WBP_HealthBar_C_HandleTurnChange final
{
public:
	float                                         InPercent;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_WBP_HealthBar_C_HandleTurnChange;

SDK_PARAM_NAMESPACE_END
SDK_NAMESPACE_END
