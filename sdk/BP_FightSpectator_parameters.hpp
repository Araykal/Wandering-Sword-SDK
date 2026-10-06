#pragma once



// Package: BP_FightSpectator

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


SDK_NAMESPACE_START
SDK_PARAM_NAMESPACE_START

// Function BP_FightSpectator.BP_FightSpectator_C.ExecuteUbergraph_BP_FightSpectator
// 0x01B0 (0x01B0 - 0x0000)
struct BP_FightSpectator_C_ExecuteUbergraph_BP_FightSpectator final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_K2_GetComponentRotation_ReturnValue;      // 0x0004(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_RotatorRotator_ReturnValue;    // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_K2_GetComponentRotation_ReturnValue_1;    // 0x0014(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0020(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_VectorVector_ReturnValue;      // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NearlyEqual_FloatFloat_ReturnValue;       // 0x002D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_VectorVector_ReturnValue_1;    // 0x002E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2F[0x1];                                       // 0x002F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               K2Node_Event_Rotator;                              // 0x0030(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                               CallFunc_K2_GetComponentRotation_ReturnValue_2;    // 0x003C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C[0x4];                                       // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetPlatformName_ReturnValue;              // 0x0050(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_VInterpTo_ReturnValue;                    // 0x0060(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x006C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6D[0x3];                                       // 0x006D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_FInterpTo_ReturnValue;                    // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_VInterpTo_ReturnValue_1;                  // 0x0074(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetActorLocation_SweepHitResult;       // 0x0080(0x008C)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_SetActorLocation_ReturnValue;          // 0x010C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_VectorVector_ReturnValue_2;    // 0x010D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_10E[0x2];                                      // 0x010E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_RInterpTo_ReturnValue;                    // 0x0110(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                             CallFunc_K2_SetWorldRotation_SweepHitResult;       // 0x011C(0x008C)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x01A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BP_FightSpectator_C_ExecuteUbergraph_BP_FightSpectator;

// Function BP_FightSpectator.BP_FightSpectator_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_FightSpectator_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BP_FightSpectator_C_ReceiveTick;

// Function BP_FightSpectator.BP_FightSpectator_C.HandleRotatorChanged
// 0x000C (0x000C - 0x0000)
struct BP_FightSpectator_C_HandleRotatorChanged final
{
public:
	struct FRotator                               Rotator;                                           // 0x0000(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
DUMPER7_ASSERTS_BP_FightSpectator_C_HandleRotatorChanged;

// Function BP_FightSpectator.BP_FightSpectator_C.ChangeArmArgs
// 0x00B0 (0x00B0 - 0x0000)
struct BP_FightSpectator_C_ChangeArmArgs final
{
public:
	struct FRotator                               Rotator;                                           // 0x0000(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         ArmLength;                                         // 0x000C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                TargetOffset_0;                                    // 0x0010(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Speed;                                             // 0x001C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bUseLag;                                           // 0x0020(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x3];                                       // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_K2_SetRelativeRotation_SweepHitResult;    // 0x0024(0x008C)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
DUMPER7_ASSERTS_BP_FightSpectator_C_ChangeArmArgs;

// Function BP_FightSpectator.BP_FightSpectator_C.ResetArmArgs
// 0x0090 (0x0090 - 0x0000)
struct BP_FightSpectator_C_ResetArmArgs final
{
public:
	bool                                          UseLag;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_K2_SetRelativeRotation_SweepHitResult;    // 0x0004(0x008C)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
DUMPER7_ASSERTS_BP_FightSpectator_C_ResetArmArgs;

// Function BP_FightSpectator.BP_FightSpectator_C.ChangeArmRotator
// 0x000C (0x000C - 0x0000)
struct BP_FightSpectator_C_ChangeArmRotator final
{
public:
	struct FRotator                               NewRotator;                                        // 0x0000(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
DUMPER7_ASSERTS_BP_FightSpectator_C_ChangeArmRotator;

// Function BP_FightSpectator.BP_FightSpectator_C.ChangeActorLocation
// 0x000C (0x000C - 0x0000)
struct BP_FightSpectator_C_ChangeActorLocation final
{
public:
	struct FVector                                Location;                                          // 0x0000(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BP_FightSpectator_C_ChangeActorLocation;

// Function BP_FightSpectator.BP_FightSpectator_C.ChangeArmTargetLength
// 0x0004 (0x0004 - 0x0000)
struct BP_FightSpectator_C_ChangeArmTargetLength final
{
public:
	float                                         NewArmTargetLength;                                // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BP_FightSpectator_C_ChangeArmTargetLength;

// Function BP_FightSpectator.BP_FightSpectator_C.SetCameraLag
// 0x0001 (0x0001 - 0x0000)
struct BP_FightSpectator_C_SetCameraLag final
{
public:
	bool                                          UseCameraLag;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
DUMPER7_ASSERTS_BP_FightSpectator_C_SetCameraLag;

SDK_PARAM_NAMESPACE_END
SDK_NAMESPACE_END
