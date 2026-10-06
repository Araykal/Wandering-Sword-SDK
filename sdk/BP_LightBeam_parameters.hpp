#pragma once



// Package: BP_LightBeam

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


SDK_NAMESPACE_START
SDK_PARAM_NAMESPACE_START

// Function BP_LightBeam.BP_LightBeam_C.SetLenght
// 0x0004 (0x0004 - 0x0000)
struct BP_LightBeam_C_SetLenght final
{
public:
	float                                         Lenght;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BP_LightBeam_C_SetLenght;

// Function BP_LightBeam.BP_LightBeam_C.SetColor
// 0x0010 (0x0010 - 0x0000)
struct BP_LightBeam_C_SetColor final
{
public:
	struct FLinearColor                           NewColor;                                          // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BP_LightBeam_C_SetColor;

// Function BP_LightBeam.BP_LightBeam_C.SetBrightness
// 0x0004 (0x0004 - 0x0000)
struct BP_LightBeam_C_SetBrightness final
{
public:
	float                                         NewBrightness;                                     // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BP_LightBeam_C_SetBrightness;

// Function BP_LightBeam.BP_LightBeam_C.UserConstructionScript
// 0x00F0 (0x00F0 - 0x0000)
struct BP_LightBeam_C_UserConstructionScript final
{
public:
	struct FTransform                             ___struct_Variable;                                // 0x0000(0x0030)(ConstParm, IsPlainOldData, NoDestructor)
	class UStaticMeshComponent*                   CallFunc_AddComponent_ReturnValue;                 // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRangeFromStream_ReturnValue; // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_K2_GetActorRotation_ReturnValue;          // 0x003C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetRelativeRotation_SweepHitResult;    // 0x0050(0x008C)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	uint8                                         Pad_DC[0x4];                                       // 0x00DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue_1; // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BP_LightBeam_C_UserConstructionScript;

SDK_PARAM_NAMESPACE_END
SDK_NAMESPACE_END
