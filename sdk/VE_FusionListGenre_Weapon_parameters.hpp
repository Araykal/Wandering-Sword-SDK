#pragma once



// Package: VE_FusionListGenre_Weapon

#include "Basic.hpp"


SDK_NAMESPACE_START
SDK_PARAM_NAMESPACE_START

// Function VE_FusionListGenre_Weapon.VE_FusionListGenre_Weapon_C.ExecuteUbergraph_VE_FusionListGenre_Weapon
// 0x0018 (0x0018 - 0x0000)
struct VE_FusionListGenre_Weapon_C_ExecuteUbergraph_VE_FusionListGenre_Weapon final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UNeoUIContainerVisualBase*>      K2Node_MakeArray_Array;                            // 0x0008(0x0010)(ReferenceParm, ContainsInstancedReference)
};
DUMPER7_ASSERTS_VE_FusionListGenre_Weapon_C_ExecuteUbergraph_VE_FusionListGenre_Weapon;

SDK_PARAM_NAMESPACE_END
SDK_NAMESPACE_END
