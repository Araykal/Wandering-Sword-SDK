#pragma once



// Package: VE_FusionListGenreItem_Weapon

#include "Basic.hpp"


SDK_NAMESPACE_START
SDK_PARAM_NAMESPACE_START

// Function VE_FusionListGenreItem_Weapon.VE_FusionListGenreItem_Weapon_C.ExecuteUbergraph_VE_FusionListGenreItem_Weapon
// 0x0020 (0x0020 - 0x0000)
struct VE_FusionListGenreItem_Weapon_C_ExecuteUbergraph_VE_FusionListGenreItem_Weapon final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetValueSafe_Bool_ReturnValue;            // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6[0x2];                                        // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetValueSafe_Text_ReturnValue;            // 0x0008(0x0018)()
};
DUMPER7_ASSERTS_VE_FusionListGenreItem_Weapon_C_ExecuteUbergraph_VE_FusionListGenreItem_Weapon;

// Function VE_FusionListGenreItem_Weapon.VE_FusionListGenreItem_Weapon_C.SetIconImg
// 0x0008 (0x0008 - 0x0000)
struct VE_FusionListGenreItem_Weapon_C_SetIconImg final
{
public:
	class UTexture2D*                             Icon;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_VE_FusionListGenreItem_Weapon_C_SetIconImg;

SDK_PARAM_NAMESPACE_END
SDK_NAMESPACE_END
