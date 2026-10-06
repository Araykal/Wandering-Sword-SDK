#pragma once



// Package: BP_JHPostProcess

#include "Basic.hpp"


SDK_NAMESPACE_START
SDK_PARAM_NAMESPACE_START

// Function BP_JHPostProcess.BP_JHPostProcess_C.ExecuteUbergraph_BP_JHPostProcess
// 0x0018 (0x0018 - 0x0000)
struct BP_JHPostProcess_C_ExecuteUbergraph_BP_JHPostProcess final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NearlyEqual_FloatFloat_ReturnValue;       // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FInterpTo_ReturnValue;                    // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NearlyEqual_FloatFloat_ReturnValue_1;     // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
DUMPER7_ASSERTS_BP_JHPostProcess_C_ExecuteUbergraph_BP_JHPostProcess;

// Function BP_JHPostProcess.BP_JHPostProcess_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_JHPostProcess_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BP_JHPostProcess_C_ReceiveTick;

// Function BP_JHPostProcess.BP_JHPostProcess_C.FInterpToCAIntensity
// 0x000C (0x000C - 0x0000)
struct BP_JHPostProcess_C_FInterpToCAIntensity final
{
public:
	float                                         Intensity;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Speed;                                             // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ResetDelay;                                        // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BP_JHPostProcess_C_FInterpToCAIntensity;

// Function BP_JHPostProcess.BP_JHPostProcess_C.SetBokenFocalDistance
// 0x0004 (0x0004 - 0x0000)
struct BP_JHPostProcess_C_SetBokenFocalDistance final
{
public:
	float                                         FocalDistance;                                     // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BP_JHPostProcess_C_SetBokenFocalDistance;

SDK_PARAM_NAMESPACE_END
SDK_NAMESPACE_END
