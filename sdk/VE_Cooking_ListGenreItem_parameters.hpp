#pragma once



// Package: VE_Cooking_ListGenreItem

#include "Basic.hpp"


SDK_NAMESPACE_START
SDK_PARAM_NAMESPACE_START

// Function VE_Cooking_ListGenreItem.VE_Cooking_ListGenreItem_C.ExecuteUbergraph_VE_Cooking_ListGenreItem
// 0x0028 (0x0028 - 0x0000)
struct VE_Cooking_ListGenreItem_C_ExecuteUbergraph_VE_Cooking_ListGenreItem final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetValueSafe_Text_ReturnValue;            // 0x0008(0x0018)()
	bool                                          CallFunc_GetValueSafe_Bool_ReturnValue;            // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
DUMPER7_ASSERTS_VE_Cooking_ListGenreItem_C_ExecuteUbergraph_VE_Cooking_ListGenreItem;

SDK_PARAM_NAMESPACE_END
SDK_NAMESPACE_END
