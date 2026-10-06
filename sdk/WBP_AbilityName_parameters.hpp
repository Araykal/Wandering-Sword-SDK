#pragma once



// Package: WBP_AbilityName

#include "Basic.hpp"


SDK_NAMESPACE_START
SDK_PARAM_NAMESPACE_START

// Function WBP_AbilityName.WBP_AbilityName_C.ExecuteUbergraph_WBP_AbilityName
// 0x0004 (0x0004 - 0x0000)
struct WBP_AbilityName_C_ExecuteUbergraph_WBP_AbilityName final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_WBP_AbilityName_C_ExecuteUbergraph_WBP_AbilityName;

// Function WBP_AbilityName.WBP_AbilityName_C.PlayShake
// 0x0010 (0x0010 - 0x0000)
struct WBP_AbilityName_C_PlayShake final
{
public:
	class APlayerCameraManager*                   CallFunc_GetPlayerCameraManager_ReturnValue;       // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMatineeCameraShake*                    CallFunc_StartMatineeCameraShake_ReturnValue;      // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_WBP_AbilityName_C_PlayShake;

// Function WBP_AbilityName.WBP_AbilityName_C.SetAbilityName
// 0x0018 (0x0018 - 0x0000)
struct WBP_AbilityName_C_SetAbilityName final
{
public:
	class FText                                   NewName;                                           // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
DUMPER7_ASSERTS_WBP_AbilityName_C_SetAbilityName;

// Function WBP_AbilityName.WBP_AbilityName_C.Play
// 0x0008 (0x0008 - 0x0000)
struct WBP_AbilityName_C_Play final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_WBP_AbilityName_C_Play;

SDK_PARAM_NAMESPACE_END
SDK_NAMESPACE_END
