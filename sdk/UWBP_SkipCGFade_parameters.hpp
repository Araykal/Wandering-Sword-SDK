#pragma once



// Package: UWBP_SkipCGFade

#include "Basic.hpp"


SDK_NAMESPACE_START
SDK_PARAM_NAMESPACE_START

// Function UWBP_SkipCGFade.UWBP_SkipCGFade_C.ExecuteUbergraph_UWBP_SkipCGFade
// 0x0010 (0x0010 - 0x0000)
struct UWBP_SkipCGFade_C_ExecuteUbergraph_UWBP_SkipCGFade final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_PlayRate;                             // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_UWBP_SkipCGFade_C_ExecuteUbergraph_UWBP_SkipCGFade;

// Function UWBP_SkipCGFade.UWBP_SkipCGFade_C.PlayFadeAnimal
// 0x0004 (0x0004 - 0x0000)
struct UWBP_SkipCGFade_C_PlayFadeAnimal final
{
public:
	float                                         PlayRate;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_UWBP_SkipCGFade_C_PlayFadeAnimal;

SDK_PARAM_NAMESPACE_END
SDK_NAMESPACE_END
