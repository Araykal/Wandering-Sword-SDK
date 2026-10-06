#pragma once



// Package: WBP_Damage

#include "Basic.hpp"


SDK_NAMESPACE_START
SDK_PARAM_NAMESPACE_START

// Function WBP_Damage.WBP_Damage_C.ExecuteUbergraph_WBP_Damage
// 0x0030 (0x0030 - 0x0000)
struct WBP_Damage_C_ExecuteUbergraph_WBP_Damage final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UTexture2D*>                     K2Node_Event_InWords;                              // 0x0008(0x0010)(ConstParm, ReferenceParm)
	int32                                         K2Node_Event_TypeMaskBits;                         // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasDamageType_ReturnValue;                // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D[0x3];                                       // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_WBP_Damage_C_ExecuteUbergraph_WBP_Damage;

// Function WBP_Damage.WBP_Damage_C.UpdateRenderingWords
// 0x0018 (0x0018 - 0x0000)
struct WBP_Damage_C_UpdateRenderingWords final
{
public:
	TArray<class UTexture2D*>                     InWords;                                           // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                         TypeMaskBits;                                      // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_WBP_Damage_C_UpdateRenderingWords;

SDK_PARAM_NAMESPACE_END
SDK_NAMESPACE_END
