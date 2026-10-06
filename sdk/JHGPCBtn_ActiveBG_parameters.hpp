#pragma once



// Package: JHGPCBtn_ActiveBG

#include "Basic.hpp"

#include "UMG_structs.hpp"


SDK_NAMESPACE_START
SDK_PARAM_NAMESPACE_START

// Function JHGPCBtn_ActiveBG.JHGPCBtn_ActiveBG_C.ExecuteUbergraph_JHGPCBtn_ActiveBG
// 0x0020 (0x0020 - 0x0000)
struct JHGPCBtn_ActiveBG_C_ExecuteUbergraph_JHGPCBtn_ActiveBG final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(ESlateVisibility InVisibility)> K2Node_CreateDelegate_OutputDelegate;             // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	ESlateVisibility                              K2Node_CustomEvent_InVisibility;                   // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsVisible_ReturnValue;                    // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_16[0x2];                                       // 0x0016(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_JHGPCBtn_ActiveBG_C_ExecuteUbergraph_JHGPCBtn_ActiveBG;

// Function JHGPCBtn_ActiveBG.JHGPCBtn_ActiveBG_C.HandleVisibilityChanged
// 0x0001 (0x0001 - 0x0000)
struct JHGPCBtn_ActiveBG_C_HandleVisibilityChanged final
{
public:
	ESlateVisibility                              InVisibility;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_JHGPCBtn_ActiveBG_C_HandleVisibilityChanged;

SDK_PARAM_NAMESPACE_END
SDK_NAMESPACE_END
