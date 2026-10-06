#pragma once



// Package: MMC_XiangYaoJiuXian_Cost

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"


SDK_NAMESPACE_START
SDK_PARAM_NAMESPACE_START

// Function MMC_XiangYaoJiuXian_Cost.MMC_XiangYaoJiuXian_Cost_C.CalculateBaseMagnitude
// 0x02B0 (0x02B0 - 0x0000)
struct MMC_XiangYaoJiuXian_Cost_C_CalculateBaseMagnitude final
{
public:
	struct FGameplayEffectSpec                    Spec;                                              // 0x0000(0x0298)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	float                                         ReturnValue;                                       // 0x0298(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_CalculateBaseMagnitude_ReturnValue;       // 0x029C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetGEStack_ReturnValue;                   // 0x02A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x02A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_1;        // 0x02A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x02AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_MMC_XiangYaoJiuXian_Cost_C_CalculateBaseMagnitude;

SDK_PARAM_NAMESPACE_END
SDK_NAMESPACE_END
