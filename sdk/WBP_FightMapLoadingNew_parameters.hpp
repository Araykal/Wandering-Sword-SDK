#pragma once



// Package: WBP_FightMapLoadingNew

#include "Basic.hpp"


SDK_NAMESPACE_START
SDK_PARAM_NAMESPACE_START

// Function WBP_FightMapLoadingNew.WBP_FightMapLoadingNew_C.ExecuteUbergraph_WBP_FightMapLoadingNew
// 0x0028 (0x0028 - 0x0000)
struct WBP_FightMapLoadingNew_C_ExecuteUbergraph_WBP_FightMapLoadingNew final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bBlack;                               // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_2;              // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_3;              // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_WBP_FightMapLoadingNew_C_ExecuteUbergraph_WBP_FightMapLoadingNew;

// Function WBP_FightMapLoadingNew.WBP_FightMapLoadingNew_C.ShowBlack
// 0x0001 (0x0001 - 0x0000)
struct WBP_FightMapLoadingNew_C_ShowBlack final
{
public:
	bool                                          bBlack;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
DUMPER7_ASSERTS_WBP_FightMapLoadingNew_C_ShowBlack;

SDK_PARAM_NAMESPACE_END
SDK_NAMESPACE_END
