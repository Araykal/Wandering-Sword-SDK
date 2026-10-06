#pragma once



// Package: BPVE_SkillStyle

#include "Basic.hpp"


SDK_NAMESPACE_START
SDK_PARAM_NAMESPACE_START

// Function BPVE_SkillStyle.BPVE_SkillStyle_C.ExecuteUbergraph_BPVE_SkillStyle
// 0x0018 (0x0018 - 0x0000)
struct BPVE_SkillStyle_C_ExecuteUbergraph_BPVE_SkillStyle final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UNeoUIContainerVisualBase*>      K2Node_MakeArray_Array;                            // 0x0008(0x0010)(ReferenceParm, ContainsInstancedReference)
};
DUMPER7_ASSERTS_BPVE_SkillStyle_C_ExecuteUbergraph_BPVE_SkillStyle;

// Function BPVE_SkillStyle.BPVE_SkillStyle_C.FirstFocusElement
// 0x0010 (0x0010 - 0x0000)
struct BPVE_SkillStyle_C_FirstFocusElement final
{
public:
	class UWidget*                                Ele;                                               // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsVisible_ReturnValue;                    // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsVisible_ReturnValue_1;                  // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsVisible_ReturnValue_2;                  // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsVisible_ReturnValue_3;                  // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsVisible_ReturnValue_4;                  // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
DUMPER7_ASSERTS_BPVE_SkillStyle_C_FirstFocusElement;

SDK_PARAM_NAMESPACE_END
SDK_NAMESPACE_END
