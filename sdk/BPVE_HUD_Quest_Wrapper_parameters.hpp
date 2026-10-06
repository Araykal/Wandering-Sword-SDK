#pragma once



// Package: BPVE_HUD_Quest_Wrapper

#include "Basic.hpp"


SDK_NAMESPACE_START
SDK_PARAM_NAMESPACE_START

// Function BPVE_HUD_Quest_Wrapper.BPVE_HUD_Quest_Wrapper_C.ExecuteUbergraph_BPVE_HUD_Quest_Wrapper
// 0x0018 (0x0018 - 0x0000)
struct BPVE_HUD_Quest_Wrapper_C_ExecuteUbergraph_BPVE_HUD_Quest_Wrapper final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UNeoUIContainerVisualBase*>      K2Node_MakeArray_Array;                            // 0x0008(0x0010)(ReferenceParm, ContainsInstancedReference)
};
DUMPER7_ASSERTS_BPVE_HUD_Quest_Wrapper_C_ExecuteUbergraph_BPVE_HUD_Quest_Wrapper;

// Function BPVE_HUD_Quest_Wrapper.BPVE_HUD_Quest_Wrapper_C.ShowStatus_Update
// 0x0020 (0x0020 - 0x0000)
struct BPVE_HUD_Quest_Wrapper_C_ShowStatus_Update final
{
public:
	class FText                                   txt;                                               // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BPVE_HUD_Quest_Wrapper_C_ShowStatus_Update;

// Function BPVE_HUD_Quest_Wrapper.BPVE_HUD_Quest_Wrapper_C.ShowStatus_Finish
// 0x0020 (0x0020 - 0x0000)
struct BPVE_HUD_Quest_Wrapper_C_ShowStatus_Finish final
{
public:
	class FText                                   txt;                                               // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BPVE_HUD_Quest_Wrapper_C_ShowStatus_Finish;

// Function BPVE_HUD_Quest_Wrapper.BPVE_HUD_Quest_Wrapper_C.ShowStatus_Failed
// 0x0020 (0x0020 - 0x0000)
struct BPVE_HUD_Quest_Wrapper_C_ShowStatus_Failed final
{
public:
	class FText                                   txt;                                               // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BPVE_HUD_Quest_Wrapper_C_ShowStatus_Failed;

SDK_PARAM_NAMESPACE_END
SDK_NAMESPACE_END
