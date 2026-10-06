#pragma once



// Package: BP_AbilitySpotLight

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


SDK_NAMESPACE_START
SDK_PARAM_NAMESPACE_START

// Function BP_AbilitySpotLight.BP_AbilitySpotLight_C.ExecuteUbergraph_BP_AbilitySpotLight
// 0x0018 (0x0018 - 0x0000)
struct BP_AbilitySpotLight_C_ExecuteUbergraph_BP_AbilitySpotLight final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FInterpTo_ReturnValue;                    // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NearlyEqual_FloatFloat_ReturnValue;       // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NearlyEqual_FloatFloat_ReturnValue_1;     // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
DUMPER7_ASSERTS_BP_AbilitySpotLight_C_ExecuteUbergraph_BP_AbilitySpotLight;

// Function BP_AbilitySpotLight.BP_AbilitySpotLight_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_AbilitySpotLight_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BP_AbilitySpotLight_C_ReceiveTick;

// Function BP_AbilitySpotLight.BP_AbilitySpotLight_C.FInterpToIntensity
// 0x0010 (0x0010 - 0x0000)
struct BP_AbilitySpotLight_C_FInterpToIntensity final
{
public:
	float                                         Intensity;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TransitionTime_0;                                  // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DelayTime;                                         // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          AutoReset;                                         // 0x000C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
DUMPER7_ASSERTS_BP_AbilitySpotLight_C_FInterpToIntensity;

// Function BP_AbilitySpotLight.BP_AbilitySpotLight_C.SetLightColor
// 0x0010 (0x0010 - 0x0000)
struct BP_AbilitySpotLight_C_SetLightColor final
{
public:
	struct FLinearColor                           LightColor;                                        // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BP_AbilitySpotLight_C_SetLightColor;

SDK_PARAM_NAMESPACE_END
SDK_NAMESPACE_END
