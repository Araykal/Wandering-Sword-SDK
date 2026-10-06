#pragma once



// Package: VE_Cooking_ListGenreGroup

#include "Basic.hpp"


SDK_NAMESPACE_START
SDK_PARAM_NAMESPACE_START

// Function VE_Cooking_ListGenreGroup.VE_Cooking_ListGenreGroup_C.ExecuteUbergraph_VE_Cooking_ListGenreGroup
// 0x0018 (0x0018 - 0x0000)
struct VE_Cooking_ListGenreGroup_C_ExecuteUbergraph_VE_Cooking_ListGenreGroup final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UNeoUIContainerVisualBase*>      K2Node_MakeArray_Array;                            // 0x0008(0x0010)(ReferenceParm, ContainsInstancedReference)
};
DUMPER7_ASSERTS_VE_Cooking_ListGenreGroup_C_ExecuteUbergraph_VE_Cooking_ListGenreGroup;

SDK_PARAM_NAMESPACE_END
SDK_NAMESPACE_END
