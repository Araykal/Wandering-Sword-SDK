#pragma once



// Package: BPMV_FullscreenScroll

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"


SDK_NAMESPACE_START
SDK_PARAM_NAMESPACE_START

// Function BPMV_FullscreenScroll.BPMV_FullscreenScroll_C.ExecuteUbergraph_BPMV_FullscreenScroll
// 0x0020 (0x0020 - 0x0000)
struct BPMV_FullscreenScroll_C_ExecuteUbergraph_BPMV_FullscreenScroll final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UNeoUIBlueprintableVMBase*              CallFunc_GetOwnerVM_Unsafe_ReturnValue;            // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BPMV_FullscreenScroll_C_ExecuteUbergraph_BPMV_FullscreenScroll;

// Function BPMV_FullscreenScroll.BPMV_FullscreenScroll_C.On_ClickArea_MouseButtonDown_0
// 0x0220 (0x0220 - 0x0000)
struct BPMV_FullscreenScroll_C_On_ClickArea_MouseButtonDown_0 final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0038(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                            ReturnValue;                                       // 0x00A8(0x00B8)(Parm, OutParm, ReturnParm)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0160(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FEventReply                            K2Node_MakeStruct_EventReply;                      // 0x0168(0x00B8)(UObjectWrapper)
};
DUMPER7_ASSERTS_BPMV_FullscreenScroll_C_On_ClickArea_MouseButtonDown_0;

// Function BPMV_FullscreenScroll.BPMV_FullscreenScroll_C.PlayStartAnimation
// 0x0028 (0x0028 - 0x0000)
struct BPMV_FullscreenScroll_C_PlayStartAnimation final
{
public:
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x0000(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       K2Node_DynamicCast_As_____;                        // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
DUMPER7_ASSERTS_BPMV_FullscreenScroll_C_PlayStartAnimation;

SDK_PARAM_NAMESPACE_END
SDK_NAMESPACE_END
